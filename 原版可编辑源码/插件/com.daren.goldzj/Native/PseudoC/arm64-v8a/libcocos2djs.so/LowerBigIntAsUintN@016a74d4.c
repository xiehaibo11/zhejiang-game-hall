
/* v8::internal::compiler::EffectControlLinearizer::LowerBigIntAsUintN(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

undefined8
v8::internal::compiler::EffectControlLinearizer::LowerBigIntAsUintN(Node *param_1,Node *param_2)

{
  Node *pNVar1;
  undefined8 uVar2;
  Node *pNVar3;
  
  if (*(uint *)(*(long *)param_2 + 0x2c) == 0x40) {
    pNVar3 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
    }
    return *(undefined8 *)pNVar3;
  }
  pNVar3 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  pNVar3 = *(Node **)pNVar3;
  pNVar1 = (Node *)GraphAssembler::Int64Constant
                             ((GraphAssembler *)(param_1 + 0x38),
                              ~(-1L << ((ulong)*(uint *)(*(long *)param_2 + 0x2c) & 0x3f)));
  uVar2 = GraphAssembler::Word64And((GraphAssembler *)(param_1 + 0x38),pNVar3,pNVar1);
  return uVar2;
}

