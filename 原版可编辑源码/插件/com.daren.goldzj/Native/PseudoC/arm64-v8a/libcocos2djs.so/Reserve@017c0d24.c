
/* v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::Reserve() */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::Reserve
          (ConstantArraySlice *this)

{
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}

