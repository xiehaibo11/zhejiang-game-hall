
/* v8::internal::HeapSnapshot::RememberLastJSObjectId() */

void __thiscall v8::internal::HeapSnapshot::RememberLastJSObjectId(HeapSnapshot *this)

{
  *(int *)(this + 0x188) = **(int **)(*(long *)this + 8) + -2;
  return;
}

