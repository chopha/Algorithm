#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    int n =0; 
    int s = answer.size();
    
    for(int i = 0; i < numbers.size()-1; i++)
    {
        for(int k = i+1 ; k < numbers.size(); k++ )
        {
            int count = 0;
             int c = 0;   
            n = numbers[i] + numbers[k];
            if(s == 0)
            {
                answer.push_back(n);
                s = 1;
                continue;
            }
            for(int j = 0; j < s; j++)
            {
               
                if(n == answer[j])
                  count = 1;
            }
            if(count == 0)
            {
                for(int b = 0; b < s; b++)
                {
                    if(n < answer[b])
                    {
                        answer.insert(answer.begin()+(b),n);
                        s = answer.size();
                        c = 1;
                        break;
                    }
                }
                if(c == 0)
                {
                    answer.push_back(n);
                    s = answer.size();
                }
            }
        }
    }
  
    return answer;
}
