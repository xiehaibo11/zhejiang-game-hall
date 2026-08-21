
/* v8::internal::compiler::SourcePositionTable::SourcePositionTable(v8::internal::compiler::Graph*)
    */

void __thiscall
v8::internal::compiler::SourcePositionTable::SourcePositionTable
          (SourcePositionTable *this,Graph *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Graph **)this = param_1;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

