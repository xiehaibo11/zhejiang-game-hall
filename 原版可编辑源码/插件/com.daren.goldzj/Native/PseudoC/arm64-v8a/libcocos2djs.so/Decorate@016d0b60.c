
/* v8::internal::compiler::Graph::Decorate(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::Graph::Decorate(Graph *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  for (puVar2 = *(undefined8 **)(this + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,param_1);
  }
  return;
}

