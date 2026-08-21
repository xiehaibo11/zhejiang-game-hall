
/* v8::internal::compiler::ConstraintBuilder::AllocateFixed(v8::internal::compiler::UnallocatedOperand*,
   int, bool, bool) */

UnallocatedOperand * __thiscall
v8::internal::compiler::ConstraintBuilder::AllocateFixed
          (ConstraintBuilder *this,UnallocatedOperand *param_1,int param_2,bool param_3,bool param_4
          )

{
  byte bVar1;
  ReferenceMap *this_00;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Allocating fixed reg for op %d\n",*(ulong *)param_1 >> 3);
  }
  uVar4 = *(ulong *)param_1;
  iVar2 = (int)(uVar4 >> 3);
  if (iVar2 == -1) {
    bVar1 = 5;
  }
  else {
    bVar1 = InstructionSequence::GetRepresentation
                      (*(InstructionSequence **)(*(long *)this + 0x10),iVar2);
    uVar4 = *(ulong *)param_1;
  }
  if ((uVar4 >> 0x23 & 1) == 0) {
    uVar3 = ((long)uVar4 >> 0x24) << 0x23 | (ulong)bVar1 << 5 | 8;
  }
  else {
    if (((uVar4 & 0x7800000000) != 0x4800000000) && ((uVar4 & 0x7800000000) != 0x3800000000)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = uVar4 >> 6 & 0x1f800000000 | (ulong)bVar1 << 5;
  }
  if (((uVar3 & 0x1c | 4) == 4) && (param_4)) {
    if ((bVar1 == 0xd) || ((bVar1 == 0xc || (bVar1 == 0xb)))) {
      lVar5 = *(long *)(*(long *)this + 0x180);
    }
    else {
      lVar5 = *(long *)(*(long *)this + 0x178);
    }
    if (*(int *)(lVar5 + 4) == 1) {
      puVar6 = (ulong *)(lVar5 + 8);
    }
    else {
      puVar6 = *(ulong **)(lVar5 + 8);
    }
    *puVar6 = *puVar6 | 1L << (uVar4 >> 0x29 & 0x3f);
  }
  *(ulong *)param_1 = uVar3 | 4;
  if (param_3) {
    lVar5 = *(long *)this;
    if ((*(byte *)(lVar5 + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Fixed reg is tagged at %d\n",(ulong)(uint)param_2);
      lVar5 = *(long *)this;
    }
    uVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0xb0) + (long)param_2;
    this_00 = *(ReferenceMap **)
               (*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x88) +
                                   (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) + 0x18);
    if (this_00 != (ReferenceMap *)0x0) {
      ReferenceMap::RecordReference(this_00,(AllocatedOperand *)param_1);
    }
  }
  return param_1;
}

