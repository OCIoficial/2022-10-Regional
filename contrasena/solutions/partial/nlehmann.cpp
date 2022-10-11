#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;

#define CARACTERES 128

int main() {
  int m, n;
  cin >> m >> n;
  vector<pair<char, char>> rules(m);
  for (int i = 0; i < m; ++i) {
    char c1, c2;
    cin >> rules[i].first >> rules[i].second;
  }
  reverse(rules.begin(), rules.end());

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    cerr << s << endl;
    for (auto rule : rules) {
      cerr << rule.first << " " << rule.second;
      for (int i = 0; i < s.size(); ++i) {
        if (s[i] == rule.first) {
          s[i] = rule.second;
        } else if (s[i] == rule.second) {
          s[i] = rule.first;
        }
      }
    }
    cout << s << endl;
  }
}
