
/* v8::internal::AbstractCode::SourceStatementPosition(int) */

int __thiscall v8::internal::AbstractCode::SourceStatementPosition(AbstractCode *this,int param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  SourcePositionTableIterator aSStack_78 [24];
  int local_60;
  uint local_50;
  char local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar4 = SourcePosition(this,param_1);
  uVar8 = *(ulong *)this;
  uVar6 = uVar8 & 0xffffffff00000000;
  uVar7 = uVar6 | 7;
  if (*(short *)(uVar7 + *(uint *)(uVar8 - 1)) == 0x9a) {
    uVar5 = uVar6 | *(uint *)(uVar8 + 0xb);
    if (((*(uint *)(uVar8 + 0xb) & 1) != 0) && (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0x85))
    goto LAB_010723b0;
  }
  else {
    uVar1 = *(uint *)(uVar8 + 0xf);
    uVar5 = uVar6 | uVar1;
    if (((uVar1 & 1) != 0) && (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) == 0x85)) goto LAB_010723b0;
    if (uVar1 == *(uint *)(uVar6 + 0x180)) {
      uVar5 = *(ulong *)(uVar6 + 0x3c0);
      goto LAB_010723b0;
    }
  }
  uVar5 = uVar6 | *(uint *)(uVar5 + 3);
LAB_010723b0:
  SourcePositionTableIterator::SourcePositionTableIterator(aSStack_78,uVar5,0);
  if (local_60 == -1) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    do {
      if ((local_48 != '\0') &&
         (iVar2 = (local_50 >> 1 & 0x3fffffff) - 1, iVar2 <= iVar4 && iVar9 < iVar2)) {
        iVar9 = iVar2;
      }
      SourcePositionTableIterator::Advance(aSStack_78);
    } while (local_60 != -1);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}

