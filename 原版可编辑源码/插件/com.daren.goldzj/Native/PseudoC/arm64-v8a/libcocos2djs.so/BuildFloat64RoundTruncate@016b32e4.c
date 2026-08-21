
/* v8::internal::compiler::EffectControlLinearizer::BuildFloat64RoundTruncate(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::BuildFloat64RoundTruncate
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  long lVar1;
  char cVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  GraphAssemblerLabel local_1c8 [4];
  undefined4 local_1c4;
  BasicBlock *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined1 local_190;
  GraphAssemblerLabel local_188 [4];
  undefined4 local_184;
  BasicBlock *local_180;
  undefined8 uStack_178;
  Node *local_160;
  undefined1 local_150;
  GraphAssemblerLabel local_148 [4];
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  GraphAssemblerLabel local_110 [4];
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  GraphAssemblerLabel local_d8 [4];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  GraphAssemblerLabel local_a0 [4];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  cVar2 = MachineOperatorBuilder::Float64RoundTruncate
                    (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  if (cVar2 == '\0') {
    this_00 = (GraphAssembler *)(this + 0x38);
    local_98 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_90 = 0;
    local_a0[0] = (GraphAssemblerLabel)0x0;
    local_9c = 0;
    local_d0 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_c8 = 0;
    local_d8[0] = (GraphAssemblerLabel)0x0;
    local_d4 = 0;
    local_108 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_100 = 0;
    local_110[0] = (GraphAssemblerLabel)0x0;
    local_10c = 0;
    local_140 = GraphAssembler::NewBasicBlock(this_00,true);
    uStack_138 = 0;
    local_148[0] = (GraphAssemblerLabel)0x0;
    local_144 = 0;
    local_180 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_178 = 0;
    local_188[0] = (GraphAssemblerLabel)0x0;
    local_184 = 1;
    local_150 = 0xc;
    local_1c0 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
    uStack_1b8 = 0;
    local_1c8[0] = (GraphAssemblerLabel)0x0;
    local_1c4 = 1;
    local_190 = 0xc;
    pNVar3 = (Node *)GraphAssembler::Float64Constant(this_00,0.0);
    pNVar4 = (Node *)GraphAssembler::Float64Constant(this_00,4503599627370496.0);
    pNVar5 = (Node *)GraphAssembler::Float64Constant(this_00,1.0);
    pNVar6 = (Node *)GraphAssembler::Float64LessThan(this_00,pNVar3,param_1);
    GraphAssembler::GotoIfNot<>(this_00,pNVar6,local_a0);
    pNVar6 = (Node *)GraphAssembler::Float64LessThanOrEqual(this_00,pNVar4,param_1);
    GraphAssembler::GotoIf<>(this_00,pNVar6,local_d8);
    pNVar6 = (Node *)GraphAssembler::Float64Add(this_00,pNVar4,param_1);
    pNVar6 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar6,pNVar4);
    pNVar7 = (Node *)GraphAssembler::Float64LessThan(this_00,param_1,pNVar6);
    GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar7,local_1c8,pNVar6);
    pNVar6 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar6,pNVar5);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_1c8,pNVar6);
    GraphAssembler::GotoBasicBlock(this_00,local_1c0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_d8);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_1c8,param_1);
    GraphAssembler::GotoBasicBlock(this_00,local_1c0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_a0);
    pNVar3 = (Node *)GraphAssembler::Float64Equal(this_00,param_1,pNVar3);
    GraphAssembler::GotoIf<>(this_00,pNVar3,local_148);
    pNVar3 = (Node *)GraphAssembler::Float64Constant(this_00,-4503599627370496.0);
    pNVar3 = (Node *)GraphAssembler::Float64LessThanOrEqual(this_00,param_1,pNVar3);
    GraphAssembler::GotoIf<>(this_00,pNVar3,local_110);
    pNVar3 = (Node *)GraphAssembler::Float64Constant(this_00,-0.0);
    pNVar6 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar3,param_1);
    pNVar7 = (Node *)GraphAssembler::Float64Add(this_00,pNVar4,pNVar6);
    pNVar4 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar7,pNVar4);
    pNVar6 = (Node *)GraphAssembler::Float64LessThan(this_00,pNVar6,pNVar4);
    GraphAssembler::GotoIfNot<v8::internal::compiler::Node*>(this_00,pNVar6,local_188,pNVar4);
    pNVar4 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar4,pNVar5);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_188,pNVar4);
    GraphAssembler::GotoBasicBlock(this_00,local_180);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<1ul>(this_00,local_188);
    pNVar3 = (Node *)GraphAssembler::Float64Sub(this_00,pNVar3,local_160);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_1c8,pNVar3);
    GraphAssembler::GotoBasicBlock(this_00,local_1c0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_110);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_1c8,param_1);
    GraphAssembler::GotoBasicBlock(this_00,local_1c0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<0ul>(this_00,local_148);
    GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_1c8,param_1);
    GraphAssembler::GotoBasicBlock(this_00,local_1c0);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    GraphAssembler::Bind<1ul>(this_00,local_1c8);
  }
  else {
    local_1a0 = GraphAssembler::Float64RoundTruncate((GraphAssembler *)(this + 0x38),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_1a0);
}

