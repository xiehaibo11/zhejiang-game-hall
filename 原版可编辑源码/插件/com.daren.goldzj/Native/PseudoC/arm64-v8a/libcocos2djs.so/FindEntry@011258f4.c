
/* v8::internal::OrderedNameDictionaryHandler::FindEntry(v8::internal::Isolate*,
   v8::internal::HeapObject, v8::internal::Name) */

ulong v8::internal::OrderedNameDictionaryHandler::FindEntry
                (undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long local_18;
  
  uVar4 = *(uint *)(param_3 + 3);
  local_18 = param_3;
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x94) {
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 >> 3;
    }
    else {
      uVar4 = String::ComputeAndSetHash((String *)&local_18);
    }
    bVar2 = *(byte *)(param_2 + 9);
    lVar1 = (ulong)(uint)bVar2 * 0x18 + 0xc;
    bVar3 = *(byte *)((param_2 - 1) + (long)(int)((int)lVar1 + (bVar2 - 1 & uVar4)));
    if (bVar3 != 0xff) {
      do {
        if (*(int *)((uint)bVar3 * 0xc + param_2 + 0xb) == (int)param_3) {
          return (ulong)bVar3;
        }
        bVar3 = *(byte *)((param_2 - 1) + lVar1 + (ulong)bVar2 + (ulong)bVar3);
      } while (bVar3 != 0xff);
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 >> 3;
    }
    else {
      uVar4 = String::ComputeAndSetHash((String *)&local_18);
    }
    iVar5 = ((*(uint *)(param_2 + 0x13) >> 1) - 1 & uVar4) * 4 + 0x10;
    while( true ) {
      uVar4 = *(int *)(param_2 + 7 + (long)iVar5) >> 1;
      if (uVar4 == 0xffffffff) break;
      iVar5 = uVar4 * 4 + 4;
      if (*(int *)(param_2 + 7 + (long)(int)((iVar5 + (*(uint *)(param_2 + 0x13) >> 1)) * 4)) ==
          (int)param_3) {
        return (ulong)uVar4;
      }
      iVar5 = (iVar5 + (*(uint *)(param_2 + 0x13) >> 1)) * 4 + 0xc;
    }
  }
  return 0xffffffff;
}

