
/* v8::internal::compiler::JSCallReducer::Reduce(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::JSCallReducer::Reduce(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  Operator *pOVar9;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  pOVar9 = *(Operator **)param_1;
  switch(*(undefined2 *)(pOVar9 + 0x10)) {
  case 0x2fc:
    uVar2 = ReduceJSCall(this,param_1);
  default:
    goto switchD_016da354_caseD_2fd;
  case 0x2fe:
    puVar3 = (uint *)CallParametersOf(pOVar9);
    puVar7 = puVar3 + 2;
    puVar6 = puVar3 + 1;
    uVar5 = *puVar3 & 0x7ffffff;
    uVar8 = *puVar3 >> 0x1c & 1;
    break;
  case 0x2ff:
    puVar3 = (uint *)CallParametersOf(pOVar9);
    local_58[0] = puVar3[1];
    puVar6 = local_58;
    puVar7 = (uint *)&local_50;
    uStack_48 = *(undefined8 *)(puVar3 + 4);
    local_50 = *(undefined8 *)(puVar3 + 2);
    uVar5 = (*puVar3 & 0x7ffffff) - 1;
    uVar8 = *puVar3 >> 0x1c & 1;
    break;
  case 0x301:
    uVar2 = ReduceJSConstruct(this,param_1);
    goto switchD_016da354_caseD_2fd;
  case 0x302:
    local_58[0] = CallFrequencyOf(pOVar9);
    local_50 = 0;
    uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
    puVar6 = local_58;
    puVar7 = (uint *)&local_50;
    uVar5 = 1;
    uVar8 = 1;
    break;
  case 0x303:
    piVar4 = (int *)ConstructParametersOf(pOVar9);
    local_58[0] = piVar4[1];
    puVar6 = local_58;
    puVar7 = (uint *)&local_50;
    uVar8 = 1;
    uStack_48 = *(undefined8 *)(piVar4 + 4);
    local_50 = *(undefined8 *)(piVar4 + 2);
    uVar5 = *piVar4 - 2;
  }
  uVar2 = ReduceCallOrConstructWithArrayLikeOrSpread(this,param_1,uVar5,puVar6,puVar7,uVar8);
switchD_016da354_caseD_2fd:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

