
/* v8::internal::compiler::RepresentationSelector::VisitInputs(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitInputs
          (RepresentationSelector *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
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
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar3 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar4 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  iVar5 = iVar1 + (uVar3 & 1) + (uVar4 & 1);
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      if (*(int *)(this + 0x78) == 2) {
        local_a8[0] = 8;
        *(undefined1 *)((undefined2 *)((ulong)local_a8 | 1) + 1) = local_ca;
        *(undefined2 *)((ulong)local_a8 | 1) = local_cc;
        local_a4 = 0x100000005;
        local_9c = 0;
        local_98 = 0;
        local_90 = 0xffffffff;
        ConvertInput(this,param_1,iVar6,local_a8,0);
      }
      else if (*(int *)(this + 0x78) == 0) {
        local_88[0] = 8;
        *(undefined1 *)((undefined2 *)((ulong)local_88 | 1) + 1) = local_ca;
        *(undefined2 *)((ulong)local_88 | 1) = local_cc;
        local_84 = 0x100000005;
        local_7c = 0;
        local_78 = 0;
        local_70 = 0xffffffff;
        EnqueueInput(this,param_1,iVar6,local_88);
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 + (uVar4 & 1) + (uVar3 & 1) != iVar6);
  }
  while( true ) {
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar3 <= iVar5) break;
    local_c8[0] = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b0 = 0xffffffff;
    EnqueueInput(this,param_1,iVar5,local_c8);
    iVar5 = iVar5 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

