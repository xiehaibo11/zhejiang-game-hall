
/* v8::internal::JavaScriptBuiltinContinuationWithCatchFrame::SetException(v8::internal::Object) */

void __thiscall
v8::internal::JavaScriptBuiltinContinuationWithCatchFrame::SetException
          (JavaScriptBuiltinContinuationWithCatchFrame *this,undefined8 param_2)

{
  if (*(int *)(*(long *)(this + 0x10) + 0xa8) == *(int *)(*(long *)(this + 0x20) + 0x18)) {
    *(undefined8 *)(*(long *)(this + 0x20) + 0x18) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "ReadOnlyRoots(isolate()).the_hole_value() == Object(Memory<Address>(exception_argument_slot))"
          );
}

