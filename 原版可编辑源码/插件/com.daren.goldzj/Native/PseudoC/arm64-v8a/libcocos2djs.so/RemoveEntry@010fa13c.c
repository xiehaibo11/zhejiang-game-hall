
/* v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::RemoveEntry(v8::internal::InternalIndex) */

void __thiscall
v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
::RemoveEntry(ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
              *this,int param_2)

{
  *(undefined4 *)(*(ulong *)this + (long)(param_2 * 8 + 0xc) + 7) =
       *(undefined4 *)((*(ulong *)this & 0xffffffff00000000) + 0xa8);
  *(undefined4 *)(*(ulong *)this + ((long)(param_2 * 8 + 0x10) | 7U)) =
       *(undefined4 *)((*(ulong *)this & 0xffffffff00000000) + 0xa8);
  *(uint *)(*(long *)this + 7) = *(uint *)(*(long *)this + 7) - 2 & 0xfffffffe;
  *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) + 2 & 0xfffffffe;
  return;
}

