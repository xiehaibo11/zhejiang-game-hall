
void FUN_015198e0(long param_1,BytecodeGenerator *param_2,long *param_3)

{
  BytecodeArrayBuilder *this;
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  BytecodeLabels *pBVar5;
  AstNode *pAVar6;
  BytecodeLabel local_b0 [8];
  undefined8 local_a8;
  long local_a0;
  BytecodeLabels *local_98;
  BytecodeLabels *local_90;
  long local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_b0[0] = (BytecodeLabel)0x0;
  local_a8 = 0xffffffffffffffff;
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  local_78 = 0;
  local_88 = 0;
  local_70 = *(undefined8 *)(param_1 + 0x310);
  *(BytecodeLabels **)(param_1 + 0x310) = (BytecodeLabels *)&local_98;
  local_68 = *(undefined8 *)(param_2 + 0x300);
  pAVar6 = *(AstNode **)(*param_3 + 8);
  local_58 = *(int *)(param_2 + 0x118);
  local_50 = 2;
  *(undefined8 **)(param_2 + 0x300) = &local_68;
  local_a0 = param_1;
  local_98 = (BytecodeLabels *)&local_98;
  local_90 = (BytecodeLabels *)&local_98;
  pBStack_60 = param_2;
  if (param_2[8] == (BytecodeGenerator)0x0) {
    uVar3 = v8::internal::GetCurrentStackPosition();
    if (uVar3 < *(ulong *)param_2) {
      param_2[8] = (BytecodeGenerator)0x1;
    }
    else {
      v8::internal::interpreter::BytecodeGenerator::VisitNoStackOverflowCheck(param_2,pAVar6);
    }
  }
  *(undefined8 *)(pBStack_60 + 0x300) = local_68;
  plVar4 = *(long **)(pBStack_60 + 0x120);
  iVar1 = *(int *)(pBStack_60 + 0x118);
  *(int *)(pBStack_60 + 0x118) = local_58;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_58,local_58));
  }
  this = (BytecodeArrayBuilder *)(param_1 + 0x18);
  v8::internal::interpreter::BytecodeArrayBuilder::Jump(this,local_b0);
  v8::internal::interpreter::BytecodeLabels::Bind((BytecodeLabels *)&local_98,this);
  v8::internal::interpreter::BytecodeArrayBuilder::LoadUndefined(this);
  v8::internal::interpreter::BytecodeArrayBuilder::Bind(this,local_b0);
  *(undefined8 *)(local_a0 + 0x310) = local_70;
  if (local_88 != 0) {
    *(undefined8 *)(*(long *)local_90 + 8) = *(undefined8 *)(local_98 + 8);
    **(undefined8 **)(local_98 + 8) = *(undefined8 *)local_90;
    local_88 = 0;
    for (pBVar5 = local_90; pBVar5 != (BytecodeLabels *)&local_98;
        pBVar5 = *(BytecodeLabels **)(pBVar5 + 8)) {
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

