
/* v8::internal::WeakArrayList::IsFull() */

bool __thiscall v8::internal::WeakArrayList::IsFull(WeakArrayList *this)

{
  return (*(uint *)(*(long *)this + 3) ^ *(uint *)(*(long *)this + 7)) < 2;
}

