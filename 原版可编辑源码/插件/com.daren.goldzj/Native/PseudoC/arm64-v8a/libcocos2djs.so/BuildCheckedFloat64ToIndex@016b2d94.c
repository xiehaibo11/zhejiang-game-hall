
/* v8::internal::compiler::EffectControlLinearizer::BuildCheckedFloat64ToIndex(v8::internal::compiler::FeedbackSource
   const&, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::BuildCheckedFloat64ToIndex
          (EffectControlLinearizer *this,FeedbackSource *param_1,Node *param_2,Node *param_3)

{
  Node *pNVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GraphAssembler *this_00;
  
  this_00 = (GraphAssembler *)(this + 0x38);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar1 = (Node *)GraphAssembler::TruncateFloat64ToInt64(this_00,param_2);
    pNVar2 = (Node *)GraphAssembler::ChangeInt64ToFloat64(this_00,pNVar1);
    uVar3 = GraphAssembler::Float64Equal(this_00,param_2,pNVar2);
    GraphAssembler::DeoptimizeIfNot(this_00,0x11,param_1,uVar3,param_3,1);
    pNVar2 = (Node *)GraphAssembler::Int64Constant(this_00,0x1fffffffffffff);
    uVar3 = GraphAssembler::IntLessThan(this_00,pNVar1,pNVar2);
    GraphAssembler::DeoptimizeIfNot(this_00,0x19,param_1,uVar3,param_3,1);
    pNVar2 = (Node *)GraphAssembler::Int64Constant(this_00,-0x1fffffffffffff);
    uVar3 = GraphAssembler::IntLessThan(this_00,pNVar2,pNVar1);
    uVar4 = 0x19;
  }
  else {
    pNVar1 = (Node *)GraphAssembler::RoundFloat64ToInt32(this_00,param_2);
    pNVar2 = (Node *)GraphAssembler::ChangeInt32ToFloat64(this_00,pNVar1);
    uVar3 = GraphAssembler::Float64Equal(this_00,param_2,pNVar2);
    uVar4 = 0x11;
  }
  GraphAssembler::DeoptimizeIfNot(this_00,uVar4,param_1,uVar3,param_3,1);
  return pNVar1;
}

