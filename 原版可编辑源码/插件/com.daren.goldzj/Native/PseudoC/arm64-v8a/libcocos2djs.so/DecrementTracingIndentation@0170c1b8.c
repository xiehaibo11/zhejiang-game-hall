
/* v8::internal::compiler::JSHeapBroker::DecrementTracingIndentation() */

void __thiscall
v8::internal::compiler::JSHeapBroker::DecrementTracingIndentation(JSHeapBroker *this)

{
  *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
  return;
}

