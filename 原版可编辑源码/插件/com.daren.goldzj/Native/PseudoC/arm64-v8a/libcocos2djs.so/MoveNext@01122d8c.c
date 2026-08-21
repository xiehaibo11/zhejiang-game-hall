
/* v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,
   v8::internal::OrderedHashMap>::MoveNext() */

void __thiscall
v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>::
MoveNext(OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap> *this)

{
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) + 2 & 0xfffffffe;
  return;
}

