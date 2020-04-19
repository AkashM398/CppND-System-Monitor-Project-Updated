#include <string>
#include "format.h"

using namespace std;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long secs) {
  long mins = secs / 60;
  long hrs = mins / 60;
  long lsecs = int(secs%60);
  mins = int(mins%60);
  string res = std::to_string(hrs) + ":" + std::to_string(mins) + ":" + to_string(lsecs);
  return res;
}