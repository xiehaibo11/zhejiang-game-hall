
/* v8::internal::Isolate::InvokeApiInterruptCallbacks() */

void __thiscall v8::internal::Isolate::InvokeApiInterruptCallbacks(Isolate *this)

{
  undefined8 *puVar1;
  RecursiveMutex *this_00;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x96);
  }
  this_00 = (RecursiveMutex *)(this + 0x9530);
  base::RecursiveMutex::Lock(this_00);
  lVar6 = *(long *)(this + 0xb730);
  while (lVar6 != 0) {
    uVar7 = *(ulong *)(this + 0xb728);
    puVar1 = (undefined8 *)
             (*(long *)((long)*(undefined8 **)(this + 0xb710) + (uVar7 >> 5 & 0x7fffffffffffff8)) +
             (uVar7 & 0xff) * 0x10);
    pcVar2 = (code *)*puVar1;
    uVar4 = puVar1[1];
    *(long *)(this + 0xb730) = lVar6 + -1;
    *(ulong *)(this + 0xb728) = uVar7 + 1;
    if (0x1ff < uVar7 + 1) {
      operator_delete((void *)**(undefined8 **)(this + 0xb710));
      *(long *)(this + 0xb710) = *(long *)(this + 0xb710) + 8;
      *(long *)(this + 0xb728) = *(long *)(this + 0xb728) + -0x100;
    }
    base::RecursiveMutex::Unlock(this_00);
    uVar5 = *(undefined4 *)(this + 0x2c60);
    *(undefined4 *)(this + 0x2c60) = 6;
    uVar3 = *(undefined8 *)(this + 0x95a0);
    lVar6 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    (*pcVar2)(this,uVar4);
    *(undefined8 *)(this + 0x95a0) = uVar3;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar6) {
      *(long *)(this + 0x95a8) = lVar6;
      HandleScope::DeleteExtensions(this);
    }
    *(undefined4 *)(this + 0x2c60) = uVar5;
    base::RecursiveMutex::Lock(this_00);
    lVar6 = *(long *)(this + 0xb730);
  }
  base::RecursiveMutex::Unlock(this_00);
  if (local_90 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return;
}

