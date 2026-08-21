
/* v8::internal::compiler::BytecodeAnalysis::BytecodeAnalysis(v8::internal::Handle<v8::internal::BytecodeArray>,
   v8::internal::Zone*, v8::internal::BailoutId, bool) */

void __thiscall
v8::internal::compiler::BytecodeAnalysis::BytecodeAnalysis
          (BytecodeAnalysis *this,long *param_2,Zone *param_3,undefined4 param_4,byte param_5)

{
  *(long **)this = param_2;
  *(Zone **)(this + 8) = param_3;
  *(undefined4 *)(this + 0x10) = param_4;
  *(Zone **)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(Zone **)(this + 0x58) = param_3;
  *(Zone **)(this + 0x80) = param_3;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0x14] = (BytecodeAnalysis)(param_5 & 1);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(Zone **)(this + 0xa0) = param_3;
  *(BytecodeAnalysis **)(this + 0xa8) = this + 0xb0;
  *(Zone **)(this + 0xb8) = param_3;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(Zone **)(this + 0xd8) = param_3;
  *(undefined8 *)(this + 0xe0) = 0;
  *(BytecodeAnalysis **)(this + 200) = this + 0xd0;
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  BytecodeLivenessMap::BytecodeLivenessMap
            ((BytecodeLivenessMap *)(this + 0xf0),*(int *)(*param_2 + 3) >> 1,param_3);
  Analyze(this);
  return;
}

