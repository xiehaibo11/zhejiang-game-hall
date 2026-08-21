
/* v8::internal::compiler::EffectControlLinearizer::ComputeUnseededHash(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ComputeUnseededHash
          (EffectControlLinearizer *this,Node *param_1)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  Node *pNVar2;
  
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar1 = (Node *)GraphAssembler::Int32Constant(this_00,-1);
  pNVar1 = (Node *)GraphAssembler::Word32Xor(this_00,param_1,pNVar1);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0xf);
  pNVar2 = (Node *)GraphAssembler::Word32Shl(this_00,param_1,pNVar2);
  pNVar1 = (Node *)GraphAssembler::Int32Add(this_00,pNVar1,pNVar2);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0xc);
  pNVar2 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar1,pNVar2);
  pNVar1 = (Node *)GraphAssembler::Word32Xor(this_00,pNVar1,pNVar2);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,2);
  pNVar2 = (Node *)GraphAssembler::Word32Shl(this_00,pNVar1,pNVar2);
  pNVar1 = (Node *)GraphAssembler::Int32Add(this_00,pNVar1,pNVar2);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,4);
  pNVar2 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar1,pNVar2);
  pNVar1 = (Node *)GraphAssembler::Word32Xor(this_00,pNVar1,pNVar2);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0x809);
  pNVar1 = (Node *)GraphAssembler::Int32Mul(this_00,pNVar1,pNVar2);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0x10);
  pNVar2 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar1,pNVar2);
  pNVar1 = (Node *)GraphAssembler::Word32Xor(this_00,pNVar1,pNVar2);
  pNVar2 = (Node *)GraphAssembler::Int32Constant(this_00,0x3fffffff);
  GraphAssembler::Word32And(this_00,pNVar1,pNVar2);
  return;
}

