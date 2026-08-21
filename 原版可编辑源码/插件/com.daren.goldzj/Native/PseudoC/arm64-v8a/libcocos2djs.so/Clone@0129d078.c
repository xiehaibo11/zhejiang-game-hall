
/* v8::internal::compiler::Node::Clone(v8::internal::Zone*, unsigned int,
   v8::internal::compiler::Node const*) */

void v8::internal::compiler::Node::Clone(Zone *param_1,uint param_2,Node *param_3)

{
  long lVar1;
  uint uVar2;
  Node *pNVar3;
  
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    uVar2 = *(uint *)(*(long *)(param_3 + 0x20) + 8);
    pNVar3 = (Node *)(*(long *)(param_3 + 0x20) + 0x10);
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x14) >> 0x18 & 0xf;
    pNVar3 = param_3 + 0x20;
  }
  lVar1 = New(param_1,param_2,*(Operator **)param_3,uVar2,(Node **)pNVar3,false);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_3 + 8);
  return;
}

