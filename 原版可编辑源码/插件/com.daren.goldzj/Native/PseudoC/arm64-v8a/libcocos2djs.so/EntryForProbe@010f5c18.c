
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::EntryForProbe(v8::internal::ReadOnlyRoots, v8::internal::Object,
   int, v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::EntryForProbe
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,
          undefined8 param_2,long param_3,int param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long local_18;
  
  if ((*(uint *)(param_3 + 3) & 1) == 0) {
    uVar2 = *(uint *)(param_3 + 3) >> 3;
  }
  else {
    local_18 = param_3;
    uVar2 = String::ComputeAndSetHash((String *)&local_18);
  }
  uVar1 = (*(int *)(*(long *)this + 0xf) >> 1) - 1;
  uVar3 = (ulong)(uVar2 & uVar1);
  if (1 < param_4) {
    iVar4 = 1;
    do {
      if (uVar3 == param_5) {
        return param_5;
      }
      uVar2 = (int)uVar3 + iVar4;
      iVar4 = iVar4 + 1;
      uVar3 = (ulong)(uVar2 & uVar1);
    } while (param_4 != iVar4);
  }
  return uVar3;
}

