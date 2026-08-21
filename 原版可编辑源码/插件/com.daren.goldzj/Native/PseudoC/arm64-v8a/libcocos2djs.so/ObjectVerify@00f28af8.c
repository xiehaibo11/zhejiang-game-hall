
/* v8::internal::Object::ObjectVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Object::ObjectVerify(Object *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  RuntimeCallStats *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  uStack_48 = 0;
  local_50 = (RuntimeCallStats *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (TracingFlags::runtime_stats == 0) {
    uVar2 = *(ulong *)this;
    uVar1 = local_58;
  }
  else {
    local_50 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_50,(ulong)&local_50 | 8,0xa4);
    uVar2 = *(ulong *)this;
    uVar1 = local_58;
  }
  local_58 = uVar2;
  if ((local_58 & 1) != 0) {
    HeapObject::HeapObjectVerify((HeapObject *)&local_58,param_1);
    uVar2 = *(ulong *)this;
    uVar1 = local_58;
    if ((((uVar2 & 1) != 0) &&
        (uVar3 = uVar2 & 0xffffffff00000000 | 9,
        (*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) >> 6 & 1) != 0)) &&
       ((*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",&DAT_019a9e5f);
    }
  }
  local_58 = uVar1;
  if (local_50 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_50,(RuntimeCallTimer *)((ulong)&local_50 | 8));
  }
  return;
}

