
/* v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,
   v8::internal::OrderedHashMap>::CurrentKey() */

ulong __thiscall
v8::internal::OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>::
CurrentKey(OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap> *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
  return uVar1 & 0xffffffff00000000 |
         (ulong)*(uint *)(uVar2 + (long)(int)(((*(uint *)(uVar1 + 0xf) >> 1) * 3 +
                                              (*(uint *)(uVar2 + 0xf) >> 1)) * 4 + 0xc) + 7);
}

