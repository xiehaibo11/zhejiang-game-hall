
void FUN_01628eac(InstructionSelector *param_1,Node *param_2,Node *param_3,uint *param_4,
                 uint param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  Node *pNVar5;
  char local_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_2,param_3);
  if ((uVar2 & 1) == 0) {
LAB_01628fbc:
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_3 + 0x14) & 0xf000000;
    if (uVar4 != 0xf000000) {
      if ((*(uint *)(param_3 + 0x14) >> 0x18 & 0xf) == 2) goto LAB_01628f1c;
      goto LAB_01628fbc;
    }
    if (*(int *)(*(long *)(param_3 + 0x20) + 8) != 2) goto LAB_01628fbc;
LAB_01628f1c:
    pNVar5 = param_3 + 0x20;
    if (uVar4 == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    if (1 < *(ushort *)(**(long **)(pNVar5 + 8) + 0x10) - 0x17) goto LAB_01628fbc;
    uVar3 = 0;
    switch(*(undefined2 *)(*(long *)param_3 + 0x10)) {
    case 299:
    case 0x13e:
      uVar4 = *param_4 | 0x600;
      break;
    case 300:
    case 0x13f:
      uVar4 = *param_4 | 0x800;
      break;
    case 0x12e:
    case 0x141:
      if ((param_5 & 1) == 0) goto LAB_01628fbc;
      uVar4 = *param_4 | 0xc00;
      break;
    default:
      goto switchD_01628f78_caseD_12f;
    case 0x140:
      FUN_016286f0(local_70,param_3,param_1);
      if (local_70[0] != '\0') goto LAB_01628fbc;
    case 0x12d:
      uVar4 = *param_4 | 0xa00;
    }
    uVar3 = 1;
    *param_4 = uVar4;
  }
switchD_01628f78_caseD_12f:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

