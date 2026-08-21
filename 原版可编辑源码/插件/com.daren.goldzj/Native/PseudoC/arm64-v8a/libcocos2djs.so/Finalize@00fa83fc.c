
/* v8::internal::IncrementalMarking::Finalize() */

void __thiscall v8::internal::IncrementalMarking::Finalize(IncrementalMarking *this)

{
  Hurry(this);
  Stop(this);
  return;
}

