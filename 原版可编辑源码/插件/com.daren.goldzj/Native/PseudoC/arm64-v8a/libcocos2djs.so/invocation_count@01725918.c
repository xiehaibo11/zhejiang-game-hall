
/* v8::internal::compiler::FeedbackVectorRef::invocation_count() const */

undefined1  [16] __thiscall
v8::internal::compiler::FeedbackVectorRef::invocation_count(FeedbackVectorRef *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    auVar2._0_8_ = (double)(long)*(int *)(*(long *)**(undefined8 **)this + 0x13);
    auVar2._8_8_ = 0;
    return auVar2;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x9f) {
      auVar3._0_8_ = *(ulong *)(lVar1 + 0x18);
      auVar3._8_8_ = 0;
      return auVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFeedbackVector()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

