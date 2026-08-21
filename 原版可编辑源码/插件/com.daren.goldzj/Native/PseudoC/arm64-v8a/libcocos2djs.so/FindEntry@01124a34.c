
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::FindEntry(v8::internal::Isolate*,
   v8::internal::Object) */

ulong __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::FindEntry
          (SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary> *this,undefined8 param_2,
          long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long local_28;
  
  if ((*(uint *)(param_3 + 3) & 1) == 0) {
    uVar4 = *(uint *)(param_3 + 3) >> 3;
  }
  else {
    local_28 = param_3;
    uVar4 = String::ComputeAndSetHash((String *)&local_28);
  }
  lVar5 = *(long *)this;
  bVar2 = *(byte *)(lVar5 + 9);
  lVar1 = (ulong)(uint)bVar2 * 0x18 + 0xc;
  bVar3 = *(byte *)(lVar5 + -1 + (long)(int)((int)lVar1 + (bVar2 - 1 & uVar4)));
  if (bVar3 != 0xff) {
    do {
      if (*(int *)((ulong)((uint)bVar3 * 0xc) + lVar5 + 0xb) == (int)param_3) {
        return (ulong)bVar3;
      }
      bVar3 = *(byte *)(lVar5 + -1 + lVar1 + (ulong)bVar2 + (ulong)bVar3);
    } while (bVar3 != 0xff);
  }
  return 0xff;
}

