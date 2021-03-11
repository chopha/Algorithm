#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int a = 0;
    stack <int> s;
    for(int i = 0; i <moves.size();i++)
    {
        if(board[board.size()-1][moves[i]-1] == 0)
            continue;
        
            for(int k = 0; k < board.size() ; k++)
            {
                if(board[k][moves[i]-1] > 0)
                {                
                    s.push(board[k][moves[i]-1]);
                    board[k][moves[i]-1] = 0;
                    break;
                }
            }
       
        if(s.top() == a)
        {
            answer+=2;
            s.pop();
            s.pop();
            if(s.size() == 0)
                a = 0;
            else
                a = s.top();
        }
        else
            a = s.top();
    }
    return answer;
}
