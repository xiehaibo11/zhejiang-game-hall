
/* v8::internal::interpreter::ConstantArrayBuilder::IndexToSlice(unsigned long) const */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::IndexToSlice
          (ConstantArrayBuilder *this,ulong param_1)

{
  if ((((**(long **)this + (*(long **)this)[1]) - 1U < param_1) &&
      ((**(long **)(this + 8) + (*(long **)(this + 8))[1]) - 1U < param_1)) &&
     ((**(long **)(this + 0x10) + (*(long **)(this + 0x10))[1]) - 1U < param_1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
}

