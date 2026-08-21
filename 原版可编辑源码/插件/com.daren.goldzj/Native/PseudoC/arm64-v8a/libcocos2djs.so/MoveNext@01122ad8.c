
/* v8::internal::OrderedHashTableIterator<v8::internal::JSSetIterator,
   v8::internal::OrderedHashSet>::MoveNext() */

void __thiscall
v8::internal::OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet>::
MoveNext(OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet> *this)

{
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) + 2 & 0xfffffffe;
  return;
}

