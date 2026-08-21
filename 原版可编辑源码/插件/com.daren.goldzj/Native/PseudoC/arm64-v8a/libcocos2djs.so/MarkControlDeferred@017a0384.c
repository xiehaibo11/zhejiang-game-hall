
/* v8::internal::compiler::RawMachineAssembler::MarkControlDeferred(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::RawMachineAssembler::MarkControlDeferred
          (RawMachineAssembler *this,Node *param_1)

{
  char cVar1;
  Operator *pOVar2;
  char *pcVar3;
  undefined4 *puVar4;
  Node *pNVar5;
  int iVar6;
  
LAB_017a03a8:
  pOVar2 = *(Operator **)param_1;
  switch(*(undefined2 *)(pOVar2 + 0x10)) {
  case 0:
  case 7:
    goto switchD_017a03c4_caseD_0;
  default:
    pNVar5 = param_1;
    break;
  case 2:
  case 3:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 4:
    pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pcVar3 = (char *)BranchOperatorInfoOf(*(Operator **)pNVar5);
    if (*pcVar3 == '\x01') break;
    cVar1 = '\x02';
joined_r0x017a0404:
    if (pNVar5 != (Node *)0x0) {
      pcVar3 = (char *)BranchOperatorInfoOf(*(Operator **)pNVar5);
      if (*pcVar3 != cVar1) {
        pOVar2 = (Operator *)
                 CommonOperatorBuilder::Branch
                           ((CommonOperatorBuilder *)(this + 0x48),cVar1,pcVar3[1]);
        param_1 = pNVar5;
LAB_017a04e0:
        NodeProperties::ChangeOp(param_1,pOVar2);
        return;
      }
switchD_017a03c4_caseD_0:
      return;
    }
    goto LAB_017a03a8;
  case 5:
    pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pcVar3 = (char *)BranchOperatorInfoOf(*(Operator **)pNVar5);
    if (*pcVar3 != '\x02') {
      cVar1 = '\x01';
      goto joined_r0x017a0404;
    }
    break;
  case 8:
    puVar4 = (undefined4 *)IfValueParametersOf(pOVar2);
    if (*(char *)(puVar4 + 2) == '\x02') {
      return;
    }
    pOVar2 = (Operator *)
             CommonOperatorBuilder::IfValue
                       ((CommonOperatorBuilder *)(this + 0x48),*puVar4,puVar4[1],2);
    goto LAB_017a04e0;
  case 9:
    cVar1 = BranchHintOf(pOVar2);
    if (cVar1 == '\x02') {
      return;
    }
    pOVar2 = (Operator *)CommonOperatorBuilder::IfDefault((CommonOperatorBuilder *)(this + 0x48),2);
    goto LAB_017a04e0;
  case 10:
    if (0 < *(int *)(pOVar2 + 0x1c)) {
      iVar6 = 0;
      do {
        pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,iVar6);
        MarkControlDeferred(this,pNVar5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(*(long *)param_1 + 0x1c));
    }
    goto switchD_017a03c4_caseD_0;
  }
  param_1 = (Node *)NodeProperties::GetControlInput(pNVar5,0);
  goto LAB_017a03a8;
}

