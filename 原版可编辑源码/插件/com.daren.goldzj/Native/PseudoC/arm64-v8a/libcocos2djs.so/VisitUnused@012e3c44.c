
/* v8::internal::compiler::RepresentationSelector::VisitUnused(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitUnused
          (RepresentationSelector *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar4 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar5 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  iVar1 = iVar2 + (uVar4 & 1) + (uVar5 & 1);
  if (0 < iVar1) {
    iVar6 = 0;
    do {
      if (*(int *)(this + 0x78) == 2) {
        local_a8[0] = 0;
        *(undefined1 *)((undefined2 *)((ulong)local_a8 | 1) + 1) = local_aa;
        *(undefined2 *)((ulong)local_a8 | 1) = local_ac;
        local_a4 = 0;
        local_9c = 0;
        local_98 = 0;
        local_90 = 0xffffffff;
        ConvertInput(this,param_1,iVar6,local_a8,0);
      }
      else if (*(int *)(this + 0x78) == 0) {
        local_88[0] = 0;
        *(undefined1 *)((undefined2 *)((ulong)local_88 | 1) + 1) = local_aa;
        *(undefined2 *)((ulong)local_88 | 1) = local_ac;
        local_84 = 0;
        local_7c = 0;
        local_78 = 0;
        local_70 = 0xffffffff;
        EnqueueInput(this,param_1,iVar6,local_88);
      }
      iVar6 = iVar6 + 1;
    } while (iVar2 + (uVar5 & 1) + (uVar4 & 1) != iVar6);
  }
  ProcessRemainingInputs(this,param_1,iVar1);
  if (*(int *)(this + 0x78) == 2) {
    Kill(this,param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

