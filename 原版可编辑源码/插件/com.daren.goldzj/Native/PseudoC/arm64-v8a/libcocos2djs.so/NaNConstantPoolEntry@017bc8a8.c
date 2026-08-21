
/* v8::internal::interpreter::BytecodeArrayBuilder::NaNConstantPoolEntry() */

void v8::internal::interpreter::BytecodeArrayBuilder::NaNConstantPoolEntry(void)

{
  ConstantArrayBuilder::InsertNaN();
  return;
}

