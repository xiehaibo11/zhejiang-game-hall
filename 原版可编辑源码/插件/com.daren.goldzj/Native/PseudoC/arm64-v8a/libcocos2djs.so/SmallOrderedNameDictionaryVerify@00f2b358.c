
/* v8::internal::SmallOrderedNameDictionary::SmallOrderedNameDictionaryVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::SmallOrderedNameDictionary::SmallOrderedNameDictionaryVerify
          (SmallOrderedNameDictionary *this,Isolate *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::SmallOrderedHashTableVerify
            ((SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary> *)this,param_1);
  lVar2 = *(long *)this;
  uVar1 = (ulong)*(byte *)(lVar2 + 7);
  if (*(byte *)(lVar2 + 8) <= *(byte *)(lVar2 + 7)) {
    return;
  }
  lVar3 = lVar2 + uVar1 * 0xc;
  puVar4 = (uint *)(lVar3 + 0x13);
  uVar6 = *(uint *)(lVar3 + 0xb);
  if ((uVar6 & 1) == 0) goto LAB_00f2b3bc;
  while ((puVar5 = puVar4, uVar6 == 0x180 || (uVar6 == *(uint *)(param_1 + 0xa8)))) {
    while( true ) {
      uVar6 = puVar5[-1];
      if ((uVar6 & 1) == 0) {
        if (uVar6 != 0x180) goto LAB_00f2b420;
      }
      else if ((uVar6 != 0x180) && (uVar6 != *(uint *)(param_1 + 0xa8))) goto LAB_00f2b420;
      uVar6 = *puVar5;
      if ((uVar6 & 1) == 0) {
        if (uVar6 != 0x180) goto LAB_00f2b420;
      }
      else if ((uVar6 != 0x180) && (uVar6 != *(uint *)(param_1 + 0xa8))) goto LAB_00f2b420;
      uVar1 = uVar1 + 1;
      puVar4 = puVar5 + 3;
      if (*(byte *)(lVar2 + 8) <= uVar1) {
        return;
      }
      uVar6 = puVar5[1];
      if ((uVar6 & 1) != 0) break;
LAB_00f2b3bc:
      puVar5 = puVar4;
      if (uVar6 != 0x180) goto LAB_00f2b420;
    }
  }
LAB_00f2b420:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "val.IsTheHole(isolate) || (PropertyDetails::Empty().AsSmi() == Smi::cast(val))");
}

