
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitReThrow(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitReThrow
               (BytecodeArrayIterator *param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38) =
       *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  return;
}

