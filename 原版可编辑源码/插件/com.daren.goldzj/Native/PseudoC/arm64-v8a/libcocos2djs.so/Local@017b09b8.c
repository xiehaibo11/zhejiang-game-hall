
/* v8::internal::interpreter::BytecodeArrayBuilder::Local(int) const */

int __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::Local(BytecodeArrayBuilder *this,int param_1)

{
  if (param_1 < *(int *)(this + 0xfc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","index < locals_count()");
}

