
/* v8::internal::Isolate::ThrowIllegalOperation() */

void __thiscall v8::internal::Isolate::ThrowIllegalOperation(Isolate *this)

{
  if (FLAG_stack_trace_on_illegal != '\0') {
    PrintStack(this,waitpid,1);
  }
  Throw(this,*(undefined8 *)(this + 0x740),0);
  return;
}

