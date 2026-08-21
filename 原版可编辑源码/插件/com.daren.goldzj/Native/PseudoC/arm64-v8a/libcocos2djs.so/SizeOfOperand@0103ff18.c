
/* v8::internal::interpreter::Register::SizeOfOperand() const */

undefined4 __thiscall v8::internal::interpreter::Register::SizeOfOperand(Register *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (0xffff < 0x7ffbU - *(int *)this) {
    uVar1 = 4;
  }
  if (0x7bU - *(int *)this < 0x100) {
    uVar1 = 1;
  }
  return uVar1;
}

