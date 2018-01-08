#pragma once

namespace base {

struct KeyValue {
  int k;
  float v;
};
struct Instance {
  float label;
  int kv_num;
  KeyValue kv[0];
};

}
