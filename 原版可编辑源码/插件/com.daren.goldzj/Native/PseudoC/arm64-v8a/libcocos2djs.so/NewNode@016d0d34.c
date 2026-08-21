
/* v8::internal::compiler::Graph::NewNode(v8::internal::compiler::Operator const*, int,
   v8::internal::compiler::Node* const*, bool) */

undefined8 __thiscall
v8::internal::compiler::Graph::NewNode
          (Graph *this,Operator *param_1,int param_2,Node **param_3,bool param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(uint *)(this + 0x1c);
  *(uint *)(this + 0x1c) = uVar2 + 1;
  uVar3 = Node::New(*(Zone **)this,uVar2,param_1,param_2,param_3,param_4);
  puVar1 = *(undefined8 **)(this + 0x28);
  for (puVar4 = *(undefined8 **)(this + 0x20); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,uVar3);
  }
  return uVar3;
}

