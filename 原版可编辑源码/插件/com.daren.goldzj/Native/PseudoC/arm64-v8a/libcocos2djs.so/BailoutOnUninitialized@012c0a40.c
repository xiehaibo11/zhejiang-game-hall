
/* v8::internal::compiler::SerializerForBackgroundCompilation::BailoutOnUninitialized(v8::internal::compiler::ProcessedFeedback
   const&) */

undefined8 __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::BailoutOnUninitialized
          (SerializerForBackgroundCompilation *this,ProcessedFeedback *param_1)

{
  if (((byte)this[0x68] & 1) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x6c) != -1) {
    return 0;
  }
  if (*(int *)param_1 != 0) {
    return 0;
  }
  *(undefined8 *)(*(long *)(this + 0x28) + 0x38) = *(undefined8 *)(*(long *)(this + 0x28) + 0x30);
  return 1;
}

