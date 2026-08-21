
/* v8::internal::IsolateAllocator::IsolateAllocator(v8::internal::IsolateAllocationMode) */

void __thiscall v8::internal::IsolateAllocator::IsolateAllocator(IsolateAllocator *this,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if (param_2 == 1) {
    uVar1 = InitReservation(this);
    CommitPagesForIsolate(this,uVar1);
    return;
  }
  if (param_2 == 0) {
    uVar2 = GetPlatformPageAllocator();
    *(undefined8 *)(this + 8) = uVar2;
    pvVar3 = operator_new(0xc7f8);
    *(void **)this = pvVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","mode == IsolateAllocationMode::kInCppHeap");
}

