
/* v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,
   3>::FindEntry(v8::internal::Isolate*, v8::internal::Object) */

void __thiscall
v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,3>::FindEntry
          (OrderedHashTable<v8::internal::OrderedNameDictionary,3> *this,undefined8 param_2,
          long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long local_28;
  
  if ((*(uint *)(param_3 + 3) & 1) == 0) {
    uVar1 = *(uint *)(param_3 + 3) >> 3;
  }
  else {
    local_28 = param_3;
    uVar1 = String::ComputeAndSetHash((String *)&local_28);
  }
  lVar2 = *(long *)this;
  iVar3 = ((*(uint *)(lVar2 + 0x13) >> 1) - 1 & uVar1) * 4 + 0x10;
  while ((iVar3 = *(int *)(lVar2 + 7 + (long)iVar3) >> 1, iVar3 != -1 &&
         (iVar3 = iVar3 * 4 + 4,
         *(int *)(lVar2 + 7 + (long)(int)((iVar3 + (*(uint *)(lVar2 + 0x13) >> 1)) * 4)) !=
         (int)param_3))) {
    iVar3 = (iVar3 + (*(uint *)(lVar2 + 0x13) >> 1)) * 4 + 0xc;
  }
  return;
}

