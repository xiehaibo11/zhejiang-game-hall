
/* v8::internal::ObjectHashTableBase<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::FillEntriesWithHoles(v8::internal::Handle<v8::internal::ObjectHashTable>)
    */

void v8::internal::
     ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
     FillEntriesWithHoles(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar2 = *(uint *)(uVar4 + 3);
  if ((7 < (int)uVar2) &&
     (*(undefined4 *)(uVar4 + 0x13) = *(undefined4 *)((uVar4 & 0xffffffff00000000) + 0xa8),
     9 < uVar2)) {
    iVar3 = 0x10;
    uVar4 = 4;
    do {
      uVar4 = uVar4 + 1;
      lVar1 = (long)iVar3;
      iVar3 = iVar3 + 4;
      *(undefined4 *)(*param_1 + lVar1 + 7) =
           *(undefined4 *)((*param_1 & 0xffffffff00000000) + 0xa8);
    } while (uVar4 < uVar2 >> 1);
  }
  return;
}

