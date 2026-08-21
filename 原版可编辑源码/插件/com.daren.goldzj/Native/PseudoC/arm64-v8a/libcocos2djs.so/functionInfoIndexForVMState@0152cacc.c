
/* v8::internal::AllocationTracker::functionInfoIndexForVMState(v8::StateTag) */

int __thiscall
v8::internal::AllocationTracker::functionInfoIndexForVMState(AllocationTracker *this,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FunctionInfo *local_8;
  
  if (param_2 == 5) {
    iVar2 = *(int *)(this + 400);
    if (iVar2 == 0) {
      local_8 = operator_new(0x28);
      *(undefined4 *)(local_8 + 8) = 0;
      *(undefined1 **)(local_8 + 0x10) = &DAT_0189703a;
      *(undefined8 *)(local_8 + 0x18) = 0xffffffff00000000;
      *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
      *(char **)local_8 = "(V8 API)";
      puVar1 = *(undefined8 **)(this + 0x150);
      *(int *)(this + 400) = (int)((ulong)((long)puVar1 - *(long *)(this + 0x148)) >> 3);
      if (*(undefined8 **)(this + 0x158) == puVar1) {
        std::__ndk1::
        vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
        ::__push_back_slow_path<v8::internal::AllocationTracker::FunctionInfo*const&>
                  ((vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
                    *)(this + 0x148),&local_8);
      }
      else {
        *puVar1 = local_8;
        *(long *)(this + 0x150) = *(long *)(this + 0x150) + 8;
      }
      iVar2 = *(int *)(this + 400);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

