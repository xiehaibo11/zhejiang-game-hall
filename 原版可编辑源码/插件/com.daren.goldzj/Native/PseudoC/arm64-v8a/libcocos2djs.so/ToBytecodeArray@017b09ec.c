
/* v8::internal::interpreter::BytecodeArrayBuilder::ToBytecodeArray(v8::internal::Isolate*) */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::ToBytecodeArray
          (BytecodeArrayBuilder *this,Isolate *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  this[0x10] = (BytecodeArrayBuilder)0x1;
  if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
    iVar2 = *(int *)(this + 0x104);
  }
  else {
    BytecodeRegisterOptimizer::Flush(*(BytecodeRegisterOptimizer **)(this + 0x1a0));
    iVar2 = *(int *)(*(long *)(this + 0x1a0) + 0x1c) + 1;
  }
  uVar1 = HandlerTableBuilder::ToHandlerTable((HandlerTableBuilder *)(this + 0xd8),param_1);
  BytecodeArrayWriter::ToBytecodeArray
            ((BytecodeArrayWriter *)(this + 0x110),param_1,iVar2,*(undefined4 *)(this + 0xf8),uVar1)
  ;
  return;
}

