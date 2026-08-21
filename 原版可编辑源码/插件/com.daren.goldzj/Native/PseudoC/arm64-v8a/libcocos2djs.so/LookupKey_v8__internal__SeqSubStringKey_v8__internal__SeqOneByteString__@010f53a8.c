
/* v8::internal::Handle<v8::internal::String>
   v8::internal::StringTable::LookupKey<v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>
   >(v8::internal::Isolate*, v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>*) */

void v8::internal::StringTable::
     LookupKey<v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>>
               (Isolate *param_1,SeqSubStringKey *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  
  uVar10 = *(ulong *)(param_1 + 0xfd0);
  piVar9 = (int *)(uVar10 + 0xf);
  piVar11 = (int *)(uVar10 + 7);
  uVar2 = *(uint *)(param_1 + 0xa0);
  uVar13 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = (*piVar9 >> 1) - 1;
  uVar1 = uVar4 & *(uint *)(param_2 + 8) >> 3;
  uVar3 = *(uint *)((long)piVar11 + (long)(int)(uVar1 * 4 + 0xc));
  pIVar5 = param_1 + 0xfd0;
  if (uVar3 != uVar2) {
    iVar12 = 1;
    do {
      if ((((uVar3 != (uint)uVar13) &&
           (uVar8 = uVar10 & 0xffffffff00000000 | (ulong)uVar3,
           *(int *)(uVar8 + 3) == *(int *)(param_2 + 8))) &&
          (*(int *)(uVar8 + 7) == *(int *)(param_2 + 0xc))) &&
         (uVar8 = (**(code **)(*(long *)param_2 + 0x18))(param_2), (uVar8 & 1) != 0)) {
        uVar10 = *(ulong *)(param_1 + 0xfd0) & 0xffffffff00000000 |
                 (ulong)*(uint *)(*(ulong *)(param_1 + 0xfd0) + (long)(int)(uVar1 * 4 + 0xc) + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(param_1 + 0x95a0);
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar10;
        }
        else {
          CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
        }
        return;
      }
      uVar1 = uVar1 + iVar12 & uVar4;
      uVar3 = *(uint *)((long)piVar11 + (long)(int)(uVar1 * 4 + 0xc));
      iVar12 = iVar12 + 1;
    } while (uVar3 != uVar2);
    piVar9 = (int *)(*(long *)pIVar5 + 0xf);
    piVar11 = (int *)(*(long *)pIVar5 + 7);
  }
  if ((0x1001 < *piVar9) && (*piVar11 >> 1 <= (int)((uint)(*piVar9 >> 1) >> 2))) {
    pIVar5 = (Isolate *)
             HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::Shrink
                       (param_1,pIVar5,*piVar11 >> 3);
  }
  puVar6 = (undefined8 *)
           HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::EnsureCapacity
                     (param_1,pIVar5,1,0);
  *(undefined8 *)(param_1 + 0xfd0) = *puVar6;
  AddKeyNoResize(param_1,(StringTableKey *)param_2);
  return;
}

