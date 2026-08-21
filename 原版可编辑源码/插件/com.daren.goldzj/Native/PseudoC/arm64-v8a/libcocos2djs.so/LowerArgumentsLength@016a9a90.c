
/* v8::internal::compiler::EffectControlLinearizer::LowerArgumentsLength(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerArgumentsLength
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  int iVar2;
  Node *pNVar3;
  ulong uVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  GraphAssemblerLabel local_c0 [4];
  undefined4 local_bc;
  BasicBlock *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined1 local_88;
  GraphAssemblerLabel local_80 [4];
  undefined4 local_7c;
  BasicBlock *local_78;
  undefined8 uStack_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
  iVar2 = FormalParameterCountOf(*(Operator **)param_1);
  uVar4 = IsRestLengthOf(*(Operator **)param_1);
  this_00 = (GraphAssembler *)(this + 0x38);
  if ((uVar4 & 1) == 0) {
    local_78 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_70 = 0;
    local_80[0] = (GraphAssemblerLabel)0x0;
    local_7c = 1;
    local_b8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_b0 = 0;
    local_c0[0] = (GraphAssemblerLabel)0x0;
    local_bc = 1;
    local_88 = 6;
    pNVar5 = (Node *)GraphAssembler::LoadFramePointer(this_00);
    pNVar5 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar5);
    pNVar6 = (Node *)GraphAssembler::SmiConstant(this_00,iVar2);
    GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar5,local_c0,pNVar6);
    GraphAssembler::MergeState<>(this_00,local_80);
    GraphAssembler::GotoBasicBlock(this_00,local_78);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_80);
    uVar7 = GraphAssembler::IntPtrConstant(this_00,-0x18);
    pNVar3 = (Node *)GraphAssembler::Load(this_00,0x206,pNVar3,uVar7);
  }
  else {
    local_78 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_70 = 0;
    local_80[0] = (GraphAssemblerLabel)0x0;
    local_7c = 1;
    local_b8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_b0 = 0;
    local_c0[0] = (GraphAssemblerLabel)0x0;
    local_bc = 1;
    local_88 = 6;
    pNVar5 = (Node *)GraphAssembler::LoadFramePointer(this_00);
    pNVar5 = (Node *)GraphAssembler::TaggedEqual(this_00,pNVar3,pNVar5);
    pNVar6 = (Node *)GraphAssembler::SmiConstant(this_00,0);
    GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar5,local_c0,pNVar6);
    GraphAssembler::MergeState<>(this_00,local_80);
    GraphAssembler::GotoBasicBlock(this_00,local_78);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_80);
    uVar7 = GraphAssembler::IntPtrConstant(this_00,-0x18);
    pNVar3 = (Node *)GraphAssembler::Load(this_00,0x206,pNVar3,uVar7);
    pNVar5 = (Node *)GraphAssembler::SmiConstant(this_00,iVar2);
    pNVar3 = (Node *)GraphAssembler::SmiSub(this_00,pNVar3,pNVar5);
    pNVar5 = (Node *)GraphAssembler::SmiConstant(this_00,0);
    pNVar5 = (Node *)GraphAssembler::SmiLessThan(this_00,pNVar3,pNVar5);
    pNVar6 = (Node *)GraphAssembler::SmiConstant(this_00,0);
    GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar5,local_c0,pNVar6);
  }
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_c0,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_b8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_c0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98);
}

