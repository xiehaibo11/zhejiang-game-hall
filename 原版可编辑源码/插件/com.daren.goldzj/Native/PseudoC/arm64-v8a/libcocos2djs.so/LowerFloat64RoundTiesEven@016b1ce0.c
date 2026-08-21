
/* v8::internal::compiler::EffectControlLinearizer::LowerFloat64RoundTiesEven(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerFloat64RoundTiesEven
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  char cVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  undefined8 uVar6;
  Node *pNVar7;
  GraphAssemblerLabel local_d0 [4];
  undefined4 local_cc;
  BasicBlock *local_c8;
  undefined8 uStack_c0;
  undefined1 local_98;
  GraphAssemblerLabel local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cVar2 = MachineOperatorBuilder::Float64RoundTiesEven
                    (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  if (cVar2 == '\0') {
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    pNVar7 = *(Node **)pNVar7;
    this_00 = (GraphAssembler *)(this + 0x38);
    local_88 = GraphAssembler::NewBasicBlock(this_00,false);
    uVar6 = 1;
    uStack_80 = 0;
    local_90[0] = (GraphAssemblerLabel)0x0;
    local_8c = 1;
    local_c8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_c0 = 0;
    local_d0[0] = (GraphAssemblerLabel)0x0;
    local_cc = 1;
    local_98 = 0xc;
    pNVar3 = (Node *)BuildFloat64RoundDown(this,pNVar7);
    pNVar7 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar7,pNVar3);
    pNVar4 = (Node *)GraphAssembler::Float64Constant(this_00,0.5);
    pNVar5 = (Node *)GraphAssembler::Float64LessThan(this_00,pNVar7,pNVar4);
    GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar5,local_d0,pNVar3);
    pNVar5 = (Node *)GraphAssembler::Float64Constant(this_00,1.0);
    pNVar7 = (Node *)GraphAssembler::Float64LessThan(this_00,pNVar4,pNVar7);
    GraphAssembler::GotoIfNot<>(this_00,pNVar7,local_90);
    pNVar7 = (Node *)GraphAssembler::Float64Add(this_00,pNVar3,pNVar5);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar7);
    GraphAssembler::GotoBasicBlock(this_00,local_c8);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_90);
    pNVar7 = (Node *)GraphAssembler::Float64Constant(this_00,2.0);
    pNVar7 = (Node *)GraphAssembler::Float64Mod(this_00,pNVar3,pNVar7);
    pNVar4 = (Node *)GraphAssembler::Float64Constant(this_00,0.0);
    pNVar7 = (Node *)GraphAssembler::Float64Equal(this_00,pNVar7,pNVar4);
    GraphAssembler::GotoIf<v8::internal::compiler::Node*>(this_00,pNVar7,local_d0,pNVar3);
    pNVar7 = (Node *)GraphAssembler::Float64Add(this_00,pNVar3,pNVar5);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar7);
    GraphAssembler::GotoBasicBlock(this_00,local_c8);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<1ul>(this_00,local_d0);
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

