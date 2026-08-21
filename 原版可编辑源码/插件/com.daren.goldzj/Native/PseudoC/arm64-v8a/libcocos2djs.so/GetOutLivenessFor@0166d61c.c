
/* v8::internal::compiler::BytecodeAnalysis::GetOutLivenessFor(int) const */

undefined8 __thiscall
v8::internal::compiler::BytecodeAnalysis::GetOutLivenessFor(BytecodeAnalysis *this,int param_1)

{
  long lVar1;
  
  if (this[0x14] != (BytecodeAnalysis)0x0) {
    lVar1 = BytecodeLivenessMap::GetLiveness((BytecodeLivenessMap *)(this + 0xf0),param_1);
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}

