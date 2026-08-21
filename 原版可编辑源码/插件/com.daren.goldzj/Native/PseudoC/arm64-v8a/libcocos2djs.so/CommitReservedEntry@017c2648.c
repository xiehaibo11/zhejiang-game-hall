
/* v8::internal::interpreter::ConstantArrayBuilder::CommitReservedEntry(v8::internal::interpreter::OperandSize,
   v8::internal::Smi) */

ulong __thiscall
v8::internal::interpreter::ConstantArrayBuilder::CommitReservedEntry
          (ConstantArrayBuilder *this,undefined1 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ConstantArrayBuilder *pCVar4;
  ConstantArrayBuilder *pCVar5;
  long *plVar6;
  ConstantArrayBuilder *pCVar7;
  
  uVar2 = (uint)param_3;
  lVar3 = 0;
  switch(param_2) {
  case 0:
    goto switchD_017c2678_caseD_0;
  case 1:
    pCVar4 = this;
    break;
  case 2:
    pCVar4 = this + 8;
    break;
  default:
    goto switchD_017c2678_caseD_3;
  case 4:
    pCVar4 = this + 0x10;
  }
  lVar3 = *(long *)pCVar4;
switchD_017c2678_caseD_3:
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + -1;
  pCVar5 = this + 0x38;
  pCVar7 = *(ConstantArrayBuilder **)pCVar5;
  pCVar4 = pCVar5;
  if (pCVar7 == (ConstantArrayBuilder *)0x0) goto LAB_017c2738;
  do {
    if (*(uint *)(pCVar7 + 0x20) >= uVar2) {
      pCVar4 = pCVar7;
    }
    pCVar7 = *(ConstantArrayBuilder **)(pCVar7 + (ulong)(*(uint *)(pCVar7 + 0x20) < uVar2) * 8);
  } while (pCVar7 != (ConstantArrayBuilder *)0x0);
  if ((pCVar4 == pCVar5) || (uVar2 < *(uint *)(pCVar4 + 0x20))) goto LAB_017c2738;
  plVar6 = (long *)0x0;
  switch(param_2) {
  case 0:
switchD_017c2678_caseD_0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    pCVar5 = this;
    break;
  case 2:
    pCVar5 = this + 8;
    break;
  default:
    goto switchD_017c2704_caseD_3;
  case 4:
    pCVar5 = this + 0x10;
  }
  plVar6 = *(long **)pCVar5;
switchD_017c2704_caseD_3:
  if ((ulong)*(uint *)(pCVar4 + 0x28) <= (*plVar6 + plVar6[1]) - 1U) {
    return (ulong)*(uint *)(pCVar4 + 0x28);
  }
LAB_017c2738:
  uVar1 = AllocateReservedEntry(this,param_3);
  return uVar1 & 0xffffffff;
}

