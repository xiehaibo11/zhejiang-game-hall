
/* btOptimizedBvh::serializeInPlace(void*, unsigned int, bool) const */

void __thiscall
btOptimizedBvh::serializeInPlace(btOptimizedBvh *this,void *param_1,uint param_2,bool param_3)

{
  btQuantizedBvh::serialize((btQuantizedBvh *)this,param_1,param_2,param_3);
  return;
}

