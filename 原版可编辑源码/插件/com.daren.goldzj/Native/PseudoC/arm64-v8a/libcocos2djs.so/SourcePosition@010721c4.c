
/* v8::internal::AbstractCode::SourcePosition(int) */

void __thiscall v8::internal::AbstractCode::SourcePosition(AbstractCode *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  SourcePositionTableIterator aSStack_78 [24];
  int local_60;
  int local_58;
  undefined8 local_50;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar8 = *(ulong *)this;
  uVar10 = uVar8 & 0xffffffff00000000;
  uVar9 = uVar10 | 7;
  if (*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0x9a) {
    uVar7 = uVar10 | *(uint *)(uVar8 + 0xb);
    if (((*(uint *)(uVar8 + 0xb) & 1) != 0) && (*(short *)(uVar9 + *(uint *)(uVar7 - 1)) == 0x85))
    goto LAB_01072250;
LAB_01072258:
    puVar1 = (uint *)(uVar7 + 3);
    uVar7 = uVar10 | *puVar1;
    if ((*puVar1 & 1) != 0) goto LAB_01072264;
  }
  else {
    uVar2 = *(uint *)(uVar8 + 0xf);
    uVar7 = uVar10 | uVar2;
    if (((uVar2 & 1) == 0) || (*(short *)(uVar9 + *(uint *)(uVar7 - 1)) != 0x85)) {
      if (uVar2 != *(uint *)(uVar10 + 0x180)) goto LAB_01072258;
      uVar7 = *(ulong *)(uVar10 + 0x3c0);
    }
LAB_01072250:
    if ((uVar7 & 1) != 0) {
LAB_01072264:
      if ((int)uVar7 == *(int *)((uVar7 & 0xffffffff00000000) + 0x180)) {
        iVar6 = -1;
        goto LAB_010722e8;
      }
    }
  }
  sVar3 = *(short *)(uVar9 + *(uint *)(uVar8 - 1));
  SourcePositionTableIterator::SourcePositionTableIterator(aSStack_78,uVar7,0);
  if ((local_60 == -1) || (iVar6 = param_1 - (uint)(sVar3 == 0x9a), iVar6 < local_58)) {
    iVar6 = 0;
  }
  else {
    do {
      uVar5 = local_50;
      SourcePositionTableIterator::Advance(aSStack_78);
      if (local_60 == -1) break;
    } while (local_58 <= iVar6);
    iVar6 = ((uint)uVar5 >> 1 & 0x3fffffff) - 1;
  }
LAB_010722e8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}

