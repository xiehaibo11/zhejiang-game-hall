
/* v8::internal::interpreter::BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry() */

void v8::internal::interpreter::BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry(void)

{
  ConstantArrayBuilder::InsertDeferred();
  return;
}

