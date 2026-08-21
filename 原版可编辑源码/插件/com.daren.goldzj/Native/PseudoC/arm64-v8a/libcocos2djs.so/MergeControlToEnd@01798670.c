
/* v8::internal::compiler::NodeProperties::MergeControlToEnd(v8::internal::compiler::Graph*,
   v8::internal::compiler::CommonOperatorBuilder*, v8::internal::compiler::Node*) */

void v8::internal::compiler::NodeProperties::MergeControlToEnd
               (Graph *param_1,CommonOperatorBuilder *param_2,Node *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  Node::AppendInput(*(Node **)(param_1 + 0x10),*(Zone **)param_1,param_3);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((~*(uint *)((long)puVar3 + 0x14) & 0xf000000) == 0) {
    uVar2 = *(uint *)(puVar3[4] + 8);
  }
  else {
    uVar2 = *(uint *)((long)puVar3 + 0x14) >> 0x18 & 0xf;
  }
  uVar1 = CommonOperatorBuilder::End(param_2,(long)(int)uVar2);
  *puVar3 = uVar1;
  return;
}

