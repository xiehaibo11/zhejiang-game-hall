
/* btConvexHullInternal::toBtVector(btConvexHullInternal::Point32 const&) */

float __thiscall btConvexHullInternal::toBtVector(btConvexHullInternal *this,Point32 *param_1)

{
  float local_10 [4];
  
  local_10[*(int *)(this + 0xa8)] = (float)*(int *)param_1;
  local_10[*(int *)(this + 0xac)] = (float)*(int *)(param_1 + 4);
  local_10[*(int *)(this + 0xa4)] = (float)*(int *)(param_1 + 8);
  return local_10[0] * *(float *)this;
}

