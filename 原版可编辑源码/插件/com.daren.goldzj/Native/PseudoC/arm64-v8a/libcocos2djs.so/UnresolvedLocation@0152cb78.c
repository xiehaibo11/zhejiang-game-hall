
/* v8::internal::AllocationTracker::UnresolvedLocation::UnresolvedLocation(v8::internal::Script,
   int, v8::internal::AllocationTracker::FunctionInfo*) */

void __thiscall
v8::internal::AllocationTracker::UnresolvedLocation::UnresolvedLocation
          (UnresolvedLocation *this,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = param_4;
  uVar1 = GlobalHandles::Create(*(GlobalHandles **)(param_2 & 0xffffffff00000000 | 0x95e0));
  *(undefined8 *)this = uVar1;
  GlobalHandles::MakeWeak(uVar1,this,HandleWeakScript,0);
  return;
}

