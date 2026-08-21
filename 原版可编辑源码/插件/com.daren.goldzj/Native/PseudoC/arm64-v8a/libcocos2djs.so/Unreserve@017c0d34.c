
/* v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::Unreserve() */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::ConstantArraySlice::Unreserve
          (ConstantArraySlice *this)

{
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  return;
}

