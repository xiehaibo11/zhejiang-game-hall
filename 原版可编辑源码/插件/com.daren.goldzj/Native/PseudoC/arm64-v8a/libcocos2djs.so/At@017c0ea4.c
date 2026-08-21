
/* v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::At(unsigned long) */

long __thiscall
v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::At
          (ConstantArraySlice *this,ulong param_1)

{
  return *(long *)(this + 0x20) + (param_1 - *(long *)this) * 0x10;
}

