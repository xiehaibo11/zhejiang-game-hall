
/* v8::internal::Heap::AllocateRawWithLightRetrySlowPath(int, v8::internal::AllocationType,
   v8::internal::AllocationOrigin, v8::internal::AllocationAlignment) */

ulong __thiscall
v8::internal::Heap::AllocateRawWithLightRetrySlowPath
          (Heap *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ulong uVar1;
  
  uVar1 = AllocateRaw();
  if ((uVar1 & 1) == 0) {
    CollectGarbage(this,(int)uVar1 >> 1,1,0);
    uVar1 = AllocateRaw(this,param_1,param_3,param_4,param_5);
    if ((uVar1 & 1) == 0) {
      CollectGarbage(this,(int)uVar1 >> 1,1,0);
      uVar1 = AllocateRaw(this,param_1,param_3,param_4,param_5);
      uVar1 = -(uVar1 & 1) & uVar1;
    }
  }
  return uVar1;
}

