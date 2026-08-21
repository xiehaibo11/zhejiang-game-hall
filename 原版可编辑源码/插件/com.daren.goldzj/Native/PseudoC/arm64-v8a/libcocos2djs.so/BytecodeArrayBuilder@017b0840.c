
/* v8::internal::interpreter::BytecodeArrayBuilder::BytecodeArrayBuilder(v8::internal::Zone*, int,
   int, v8::internal::FeedbackVectorSpec*, v8::internal::SourcePositionTableBuilder::RecordingMode)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::BytecodeArrayBuilder
          (BytecodeArrayBuilder *this,Zone *param_1,int param_2,undefined4 param_3,
          undefined8 param_4,undefined4 param_6)

{
  int iVar1;
  BytecodeRegisterOptimizer *this_00;
  BytecodeWriter *pBVar2;
  long lVar3;
  
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 8) = param_4;
  this[0x10] = (BytecodeArrayBuilder)0x0;
  ConstantArrayBuilder::ConstantArrayBuilder((ConstantArrayBuilder *)(this + 0x18),param_1);
  HandlerTableBuilder::HandlerTableBuilder((HandlerTableBuilder *)(this + 0xd8),param_1);
  *(int *)(this + 0xf8) = param_2;
  *(undefined4 *)(this + 0xfc) = param_3;
  *(undefined4 *)(this + 0x100) = param_3;
  *(undefined4 *)(this + 0x104) = param_3;
  *(undefined8 *)(this + 0x108) = 0;
  BytecodeArrayWriter::BytecodeArrayWriter
            ((BytecodeArrayWriter *)(this + 0x110),param_1,(ConstantArrayBuilder *)(this + 0x18),
             param_6);
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x1a8] = (BytecodeArrayBuilder)0x0;
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1ac) = 0xffffffff;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  if (FLAG_ignition_reo != '\0') {
    this_00 = *(BytecodeRegisterOptimizer **)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((ulong)(lVar3 - (long)this_00) < 0xb8) {
      this_00 = (BytecodeRegisterOptimizer *)Zone::NewExpand(param_1,0xb8);
      pBVar2 = *(BytecodeWriter **)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      pBVar2 = (BytecodeWriter *)(this_00 + 0xb8);
      *(BytecodeWriter **)(param_1 + 0x10) = pBVar2;
    }
    iVar1 = *(int *)(this + 0xfc);
    if ((ulong)(lVar3 - (long)pBVar2) < 0x10) {
      pBVar2 = (BytecodeWriter *)Zone::NewExpand(param_1,0x10);
    }
    else {
      *(BytecodeWriter **)(param_1 + 0x10) = pBVar2 + 0x10;
    }
    *(undefined ***)pBVar2 = &PTR__BytecodeWriter_01cdaf58;
    *(BytecodeArrayBuilder **)(pBVar2 + 8) = this;
    BytecodeRegisterOptimizer::BytecodeRegisterOptimizer
              (this_00,param_1,(BytecodeRegisterAllocator *)(this + 0x100),iVar1,param_2,pBVar2);
    *(BytecodeRegisterOptimizer **)(this + 0x1a0) = this_00;
  }
  return;
}

