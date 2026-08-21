
/* ClipperLib::GetOverlap(long long, long long, long long, long long, long long&, long long&) */

bool ClipperLib::GetOverlap
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong *param_5,longlong *param_6)

{
  if (param_1 < param_2) {
    if (param_3 < param_4) {
      if (param_3 <= param_1) {
        param_3 = param_1;
      }
      *param_5 = param_3;
      param_3 = param_4;
      if (param_2 <= param_4) {
        param_3 = param_2;
      }
    }
    else {
      if (param_4 <= param_1) {
        param_4 = param_1;
      }
      *param_5 = param_4;
      if (param_2 <= param_3) {
        param_3 = param_2;
      }
    }
  }
  else if (param_3 < param_4) {
    if (param_3 <= param_2) {
      param_3 = param_2;
    }
    *param_5 = param_3;
    param_3 = param_4;
    if (param_1 <= param_4) {
      param_3 = param_1;
    }
  }
  else {
    if (param_4 <= param_2) {
      param_4 = param_2;
    }
    *param_5 = param_4;
    if (param_1 <= param_3) {
      param_3 = param_1;
    }
  }
  *param_6 = param_3;
  return *param_5 < param_3;
}

