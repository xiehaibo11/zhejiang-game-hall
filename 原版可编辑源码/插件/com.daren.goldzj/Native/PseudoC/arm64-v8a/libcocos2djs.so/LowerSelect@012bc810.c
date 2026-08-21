
/* v8::internal::compiler::SelectLowering::LowerSelect(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SelectLowering::LowerSelect(SelectLowering *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  undefined2 uVar3;
  long lVar4;
  undefined2 *puVar5;
  GraphAssembler *this_00;
  Node *pNVar6;
  GraphAssemblerLabel local_88 [4];
  undefined4 local_84;
  BasicBlock *local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar5 = (undefined2 *)SelectParametersOf(*(Operator **)param_1);
  uVar3 = *puVar5;
  pNVar6 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  pNVar1 = *(Node **)pNVar6;
  pNVar2 = *(Node **)(pNVar6 + 8);
  pNVar6 = *(Node **)(pNVar6 + 0x10);
  GraphAssembler::InitializeEffectControl
            (*(GraphAssembler **)(this + 8),*(Node **)(this + 0x10),*(Node **)(this + 0x10));
  local_80 = (BasicBlock *)GraphAssembler::NewBasicBlock(*(GraphAssembler **)(this + 8),false);
  local_88[0] = (GraphAssemblerLabel)0x0;
  uStack_78 = 0;
  local_84 = 1;
  local_50 = (undefined1)uVar3;
  GraphAssembler::GotoIf<v8::internal::compiler::Node*>
            (*(GraphAssembler **)(this + 8),pNVar1,local_88,pNVar2);
  this_00 = *(GraphAssembler **)(this + 8);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_88,pNVar6);
  GraphAssembler::GotoBasicBlock(this_00,local_80);
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  GraphAssembler::Bind<1ul>(*(GraphAssembler **)(this + 8),local_88);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}

