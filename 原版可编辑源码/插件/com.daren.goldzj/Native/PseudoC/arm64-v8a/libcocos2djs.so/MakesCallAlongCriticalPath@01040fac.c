
/* v8::internal::interpreter::Bytecodes::MakesCallAlongCriticalPath(v8::internal::interpreter::Bytecode)
    */

undefined8 v8::internal::interpreter::Bytecodes::MakesCallAlongCriticalPath(uint param_1)

{
  uint uVar1;
  
  if ((0x10 < (param_1 & 0xff) - 0x56) &&
     ((uVar1 = (param_1 & 0xff) - 0x79, 0x39 < uVar1 ||
      ((1L << ((ulong)uVar1 & 0x3f) & 0x200000000002601U) == 0)))) {
    return 0;
  }
  return 1;
}

