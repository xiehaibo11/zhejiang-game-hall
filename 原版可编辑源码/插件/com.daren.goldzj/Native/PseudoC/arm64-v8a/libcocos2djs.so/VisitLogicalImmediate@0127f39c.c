
/* v8::internal::DisassemblingDecoder::VisitLogicalImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLogicalImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = *(uint *)param_1;
  lVar4 = Instruction::ImmLogical(param_1);
  if (lVar4 == 0) {
    pcVar6 = "unallocated";
    pcVar7 = "(LogicalImmediate)";
    goto switchD_0127f404_caseD_0;
  }
  iVar3 = *(int *)param_1;
  uVar1 = iVar3 + 0x6e000000;
  pcVar6 = "and";
  pcVar7 = "\'Rds, \'Rn, \'ITri";
  switch(uVar1 >> 0x1d | uVar1 * 8 & 0xfc000007) {
  case 0:
  case 4:
    goto switchD_0127f404_caseD_0;
  case 1:
  case 5:
    if (((((uVar2 & 0x3e0) == 0x3e0) && (uVar5 = Instruction::ImmLogical(param_1), 0xffff < uVar5))
        && ((uVar5 & 0xffffffff0000ffff) != 0)) &&
       (((uVar5 & 0xffff0000ffffffff) != 0 && ((uVar5 & 0xffffffffffff) != 0)))) {
      if (iVar3 < 0) {
        if ((((uVar5 & 0xffffffffffff) != 0xffffffffffff) &&
            ((uVar5 & 0xffff0000ffffffff) != 0xffff0000ffffffff)) &&
           ((uVar5 < 0xffffffffffff0000 && ((uVar5 & 0xffffffff0000ffff) != 0xffffffff0000ffff))))
        goto LAB_0127f4dc;
      }
      else if (((~(uint)uVar5 & 0xffff0000) != 0) && ((uVar5 & 0xffff) != 0xffff)) {
LAB_0127f4dc:
        pcVar6 = "mov";
        pcVar7 = "\'Rds, \'ITri";
        goto switchD_0127f404_caseD_0;
      }
    }
    pcVar6 = "orr";
    break;
  case 2:
  case 6:
    pcVar6 = "eor";
    break;
  case 3:
  case 7:
    if ((uVar2 & 0x1f) == 0x1f) {
      pcVar6 = "tst";
      pcVar7 = "\'Rn, \'ITri";
      goto switchD_0127f404_caseD_0;
    }
    pcVar6 = "ands";
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar7 = "\'Rds, \'Rn, \'ITri";
switchD_0127f404_caseD_0:
  Format(this,param_1,pcVar6,pcVar7);
  return;
}

