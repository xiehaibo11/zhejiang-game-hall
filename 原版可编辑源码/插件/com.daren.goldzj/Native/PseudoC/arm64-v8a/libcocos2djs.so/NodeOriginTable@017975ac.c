
/* v8::internal::compiler::NodeOriginTable::NodeOriginTable(v8::internal::compiler::Graph*) */

void __thiscall
v8::internal::compiler::NodeOriginTable::NodeOriginTable(NodeOriginTable *this,Graph *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 **)(this + 0x10) = &DAT_0189703a;
  *(undefined1 **)(this + 0x18) = &DAT_0189703a;
  *(Graph **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x28) = 0x8000000000000000;
  *(char **)(this + 0x30) = "unknown";
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}

