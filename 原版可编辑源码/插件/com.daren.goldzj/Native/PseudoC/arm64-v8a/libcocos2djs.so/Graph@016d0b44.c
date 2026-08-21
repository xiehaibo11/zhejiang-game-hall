
/* v8::internal::compiler::Graph::Graph(v8::internal::Zone*) */

void __thiscall v8::internal::compiler::Graph::Graph(Graph *this,Zone *param_1)

{
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x38) = param_1;
  return;
}

