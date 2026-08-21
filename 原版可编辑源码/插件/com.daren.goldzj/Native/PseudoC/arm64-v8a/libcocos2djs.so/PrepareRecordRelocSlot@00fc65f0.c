
/* v8::internal::MarkCompactCollector::PrepareRecordRelocSlot(v8::internal::Code,
   v8::internal::RelocInfo*, v8::internal::HeapObject) */

void __thiscall
v8::internal::MarkCompactCollector::PrepareRecordRelocSlot
          (ulong *param_1,MarkCompactCollector *this,RelocInfo *param_3,ulong param_4)

{
  RelocInfo RVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  if (((*(byte *)((param_4 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0) &&
     (((uVar5 = (ulong)this & 0xfffffffffffc0000, *(int *)(param_3 + 0x18) == 0 ||
       (((uint)*(ulong *)(uVar5 + 8) >> 0xf & 1) != 0)) || ((*(ulong *)(uVar5 + 8) & 0x58) == 0))))
  {
    RVar1 = param_3[8];
    iVar2 = (int)*(undefined8 *)param_3;
    if ((char)RVar1 < '\x02') {
      uVar4 = 3;
    }
    else if (RVar1 == (RelocInfo)0x2) {
      uVar4 = 1;
    }
    else {
      if (RVar1 != (RelocInfo)0x3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar4 = 0;
    }
    uVar3 = RelocInfo::IsInConstantPool(param_3);
    if ((uVar3 & 1) != 0) {
      iVar2 = Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
      uVar4 = 4;
      if ('\x01' < (char)RVar1) {
        uVar4 = 2;
      }
    }
    *param_1 = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    *(int *)(param_1 + 2) = iVar2 - (int)uVar5;
  }
  return;
}

