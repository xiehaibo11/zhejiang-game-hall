
/* v8::internal::compiler::Graph::RemoveDecorator(v8::internal::compiler::GraphDecorator*) */

void __thiscall v8::internal::compiler::Graph::RemoveDecorator(Graph *this,GraphDecorator *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x20);
  puVar2 = *(undefined8 **)(this + 0x28);
  if ((__dest != puVar2) && ((GraphDecorator *)*__dest != param_1)) {
    puVar3 = __dest;
    do {
      __dest = puVar2;
      if (puVar2 + -1 == puVar3) break;
      puVar1 = puVar3 + 1;
      __dest = puVar3 + 1;
      puVar3 = __dest;
    } while ((GraphDecorator *)*puVar1 != param_1);
  }
  __n = (long)puVar2 - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x28) = __dest + ((long)__n >> 3);
  return;
}

