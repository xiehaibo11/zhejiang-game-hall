
/* v8::internal::HeapObject::IsExternal(v8::internal::Isolate*) const */

bool __thiscall v8::internal::HeapObject::IsExternal(HeapObject *this,Isolate *param_1)

{
  int iVar1;
  ulong local_8;
  
  local_8 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1);
  iVar1 = Map::FindRootMap((Map *)&local_8,param_1);
  return iVar1 == *(int *)(param_1 + 0xe78);
}

