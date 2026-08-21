
/* v8::internal::interpreter::BytecodeArrayWriter::ToSourcePositionTable(v8::internal::Isolate*) */

Isolate * __thiscall
v8::internal::interpreter::BytecodeArrayWriter::ToSourcePositionTable
          (BytecodeArrayWriter *this,Isolate *param_1)

{
  Isolate *pIVar1;
  
  if (*(int *)(this + 0x38) == 2) {
    pIVar1 = (Isolate *)
             SourcePositionTableBuilder::ToSourcePositionTable
                       ((SourcePositionTableBuilder *)(this + 0x38),param_1);
    return pIVar1;
  }
  return param_1 + 0x3c0;
}

