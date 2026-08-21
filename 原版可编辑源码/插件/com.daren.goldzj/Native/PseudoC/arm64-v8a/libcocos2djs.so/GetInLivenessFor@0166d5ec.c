
/* v8::internal::compiler::BytecodeAnalysis::GetInLivenessFor(int) const */

undefined8 __thiscall
v8::internal::compiler::BytecodeAnalysis::GetInLivenessFor(BytecodeAnalysis *this,int param_1)

{
  undefined8 *puVar1;
  
  if (this[0x14] != (BytecodeAnalysis)0x0) {
    puVar1 = (undefined8 *)
             BytecodeLivenessMap::GetLiveness((BytecodeLivenessMap *)(this + 0xf0),param_1);
    return *puVar1;
  }
  return 0;
}

