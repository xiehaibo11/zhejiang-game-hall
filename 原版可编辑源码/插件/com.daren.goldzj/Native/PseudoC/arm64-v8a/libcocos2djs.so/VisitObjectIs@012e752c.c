
/* v8::internal::compiler::RepresentationSelector::VisitObjectIs(v8::internal::compiler::Node*,
   v8::internal::compiler::Type, v8::internal::compiler::SimplifiedLowering*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::VisitObjectIs
          (RepresentationSelector *this,Node *param_1,long param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  MachineGraph *this_00;
  Node *pNVar3;
  int iVar4;
  long local_78 [2];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  local_78[0] = *(long *)(*(long *)(this + 0x18) +
                          ((ulong)*(uint *)(*(long *)pNVar3 + 0x14) & 0xffffff) * 0x28 + 0x18);
  if (local_78[0] == 0) {
    local_78[0] = *(long *)(*(long *)pNVar3 + 8);
  }
  if ((local_78[0] == param_3) || (uVar2 = Type::SlowIs((Type *)local_78,param_3), (uVar2 & 1) != 0)
     ) {
    if (*(int *)(this + 0x78) == 2) {
      local_68[0] = 0;
      local_64 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0xffffffff;
      ConvertInput(this,param_1,0,local_68,0);
    }
    else if (*(int *)(this + 0x78) == 0) {
      local_68[0] = 0;
      local_64 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0xffffffff;
      EnqueueInput(this,param_1,0,local_68);
    }
    ProcessRemainingInputs(this,param_1,1);
    iVar4 = *(int *)(this + 0x78);
    if (iVar4 == 1) {
      *(undefined1 *)
       (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
LAB_012e76dc:
      iVar4 = *(int *)(this + 0x78);
    }
    else if (iVar4 == 0) {
      *(undefined8 *)
       (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto LAB_012e76dc;
    }
    if (iVar4 != 2) goto LAB_012e785c;
    this_00 = (MachineGraph *)*param_4;
    iVar4 = 1;
  }
  else {
    if (*(int *)(this + 0x78) == 2) {
      local_68[0] = 8;
      local_64 = 0x100000005;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0xffffffff;
      ConvertInput(this,param_1,0,local_68,0);
    }
    else if (*(int *)(this + 0x78) == 0) {
      local_68[0] = 8;
      local_64 = 0x100000005;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0xffffffff;
      EnqueueInput(this,param_1,0,local_68);
    }
    ProcessRemainingInputs(this,param_1,1);
    iVar4 = *(int *)(this + 0x78);
    if (iVar4 == 1) {
      *(undefined1 *)
       (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 1) = 1;
LAB_012e7840:
      iVar4 = *(int *)(this + 0x78);
    }
    else if (iVar4 == 0) {
      *(undefined8 *)
       (*(long *)(this + 0x18) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x28 + 0x10) =
           0xffffffff;
      goto LAB_012e7840;
    }
    if ((iVar4 != 2) || (uVar2 = Type::Maybe((Type *)local_78,param_3), (uVar2 & 1) != 0))
    goto LAB_012e785c;
    this_00 = (MachineGraph *)*param_4;
    iVar4 = 0;
  }
  pNVar3 = (Node *)MachineGraph::Int32Constant(this_00,iVar4);
  DeferReplacement(this,param_1,pNVar3);
LAB_012e785c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

