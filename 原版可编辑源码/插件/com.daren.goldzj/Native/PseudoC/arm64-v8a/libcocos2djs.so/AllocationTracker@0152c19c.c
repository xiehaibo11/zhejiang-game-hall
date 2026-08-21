
/* v8::internal::AllocationTracker::AllocationTracker(v8::internal::HeapObjectsMap*,
   v8::internal::StringsStorage*) */

void __thiscall
v8::internal::AllocationTracker::AllocationTracker
          (AllocationTracker *this,HeapObjectsMap *param_1,StringsStorage *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  FunctionInfo *local_8;
  
  *(HeapObjectsMap **)this = param_1;
  *(StringsStorage **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 2;
  *(AllocationTracker **)(this + 0x18) = this + 0x10;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x28) = 0x100000000;
  *(undefined8 *)(this + 0x148) = 0;
  puVar1 = malloc(0xc0);
  *(undefined8 **)(this + 0x160) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(this + 0x168) = 8;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  uVar2 = 4;
  lVar3 = 0x60;
  do {
    uVar2 = uVar2 + 1;
    *(undefined8 *)(*(long *)(this + 0x160) + lVar3) = 0;
    lVar3 = lVar3 + 0x18;
  } while (uVar2 < *(uint *)(this + 0x168));
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(AllocationTracker **)(this + 0x198) = this + 0x1a0;
  *(undefined4 *)(this + 400) = 0;
  local_8 = operator_new(0x28);
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined1 **)(local_8 + 0x10) = &DAT_0189703a;
  *(undefined8 *)(local_8 + 0x18) = 0xffffffff00000000;
  *(undefined4 *)(local_8 + 0x20) = 0xffffffff;
  *(char **)local_8 = "(root)";
  if (*(undefined8 **)(this + 0x150) == *(undefined8 **)(this + 0x158)) {
    std::__ndk1::
    vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
    ::__push_back_slow_path<v8::internal::AllocationTracker::FunctionInfo*const&>
              ((vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
                *)(this + 0x148),&local_8);
  }
  else {
    **(undefined8 **)(this + 0x150) = local_8;
    *(long *)(this + 0x150) = *(long *)(this + 0x150) + 8;
  }
  return;
}

