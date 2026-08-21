
/* v8::internal::interpreter::BytecodeArrayWriter::MaybeElideLastBytecode(v8::internal::interpreter::Bytecode,
   bool) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::MaybeElideLastBytecode
          (BytecodeArrayWriter *this,BytecodeArrayWriter param_2,byte param_3)

{
  BytecodeArrayWriter BVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (this[0x89] != (BytecodeArrayWriter)0x0) {
    if (((((byte)this[0x78] < 0x26) &&
         ((1L << ((ulong)(byte)this[0x78] & 0x3f) & 0x200f07f800U) != 0)) &&
        (Bytecodes::kAccumulatorUse[(byte)param_2] == '\x02')) &&
       ((BVar1 = this[0x88], BVar1 == (BytecodeArrayWriter)0x0 || ((param_3 & 1) == 0)))) {
      lVar2 = *(long *)(this + 0x10);
      uVar3 = *(ulong *)(this + 0x80);
      uVar4 = *(long *)(this + 0x18) - lVar2;
      if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
        if (uVar3 < uVar4) {
          *(ulong *)(this + 0x18) = lVar2 + uVar3;
        }
      }
      else {
        std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::__append
                  ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x10)
                   ,uVar3 - uVar4);
        BVar1 = this[0x88];
      }
      param_3 = BVar1 != (BytecodeArrayWriter)0x0 || (param_3 & 1) != 0;
    }
    this[0x78] = param_2;
    this[0x88] = (BytecodeArrayWriter)(param_3 & 1);
    *(long *)(this + 0x80) = *(long *)(this + 0x18) - *(long *)(this + 0x10);
  }
  return;
}

