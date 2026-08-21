
/* v8::internal::compiler::RepresentationSelector::VisitReturn(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitReturn
          (RepresentationSelector *this,Node *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 local_d4;
  undefined1 local_d2;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar4 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar2 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar3 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  iVar4 = iVar4 + (uVar2 & 1) + (uVar3 & 1);
  if (*(int *)(this + 0x78) == 2) {
    local_88[0] = 4;
    local_84 = 2;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    ConvertInput(this,param_1,0,local_88,0);
  }
  else if (*(int *)(this + 0x78) == 0) {
    local_88[0] = 4;
    local_84 = 2;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    EnqueueInput(this,param_1,0,local_88);
  }
  if (1 < iVar4) {
    iVar5 = 1;
    do {
      if (*(int *)(this + 0x78) == 2) {
        local_a8[0] = 8;
        *(undefined1 *)((undefined2 *)((ulong)local_a8 | 1) + 1) = local_d2;
        *(undefined2 *)((ulong)local_a8 | 1) = local_d4;
        local_a4 = 0x100000005;
        local_9c = 0;
        local_98 = 0;
        local_90 = 0xffffffff;
        ConvertInput(this,param_1,iVar5,local_a8,0);
      }
      else if (*(int *)(this + 0x78) == 0) {
        local_88[0] = 8;
        *(undefined1 *)((undefined2 *)((ulong)local_88 | 1) + 1) = local_d2;
        *(undefined2 *)((ulong)local_88 | 1) = local_d4;
        local_84 = 0x100000005;
        local_7c = 0;
        local_78 = 0;
        local_70 = 0xffffffff;
        EnqueueInput(this,param_1,iVar5,local_88);
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
  }
  while( true ) {
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar2 <= iVar4) break;
    local_c8[0] = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b0 = 0xffffffff;
    EnqueueInput(this,param_1,iVar4,local_c8);
    iVar4 = iVar4 + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

