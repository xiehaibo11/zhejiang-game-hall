
/* v8::internal::compiler::GraphReducer::GraphReducer(v8::internal::Zone*,
   v8::internal::compiler::Graph*, v8::internal::TickCounter*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphReducer::GraphReducer
          (GraphReducer *this,Zone *param_1,Graph *param_2,TickCounter *param_3,Node *param_4)

{
  *(Graph **)(this + 8) = param_2;
  *(Node **)(this + 0x10) = param_4;
  *(undefined ***)this = &PTR__GraphReducer_01cccf78;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x18),param_2,4);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(Zone **)(this + 0x38) = param_1;
  *(Zone **)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Zone **)(this + 0x80) = param_1;
  *(undefined8 *)(this + 0xa8) = 0;
  *(Zone **)(this + 0xb0) = param_1;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(Zone **)(this + 0xd0) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(TickCounter **)(this + 0xe0) = param_3;
  if (param_4 != (Node *)0x0) {
    *(undefined8 *)(*(long *)(this + 0x10) + 8) = 1;
  }
  return;
}

