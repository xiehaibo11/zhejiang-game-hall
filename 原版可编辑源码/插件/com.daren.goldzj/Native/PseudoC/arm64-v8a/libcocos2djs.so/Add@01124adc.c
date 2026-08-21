
/* v8::internal::SmallOrderedNameDictionary::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedNameDictionary>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDetails) */

ulong * v8::internal::SmallOrderedNameDictionary::Add
                  (undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_68;
  
  uVar11 = *param_2;
  bVar4 = *(byte *)(uVar11 + 9);
  puVar7 = param_2;
  if ((uint)*(byte *)(uVar11 + 8) + (uint)*(byte *)(uVar11 + 7) < (uint)bVar4 << 1) {
LAB_01124b70:
    bVar4 = *(byte *)(uVar11 + 7);
    uVar6 = *(uint *)(*param_3 + 3);
    if ((uVar6 & 1) == 0) {
      uVar6 = uVar6 >> 3;
    }
    else {
      local_68 = *param_3;
      uVar6 = String::ComputeAndSetHash((String *)&local_68);
      uVar11 = *puVar7;
    }
    uVar10 = *param_4;
    lVar3 = (ulong)*(byte *)(uVar11 + 8) + (ulong)bVar4;
    iVar1 = (*(byte *)(uVar11 + 9) - 1 & uVar6) + 0xc;
    uVar5 = *(undefined1 *)(uVar11 + (long)(int)(iVar1 + (uint)*(byte *)(uVar11 + 9) * 0x18) + -1);
    lVar9 = lVar3 * 0xc;
    *(int *)(lVar9 + uVar11 + 0xf) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      lVar2 = lVar9 + uVar11 + 0xf;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar11,lVar2,uVar10);
        uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar11,lVar2,uVar10);
      }
    }
    uVar10 = *puVar7;
    uVar11 = *param_3;
    *(int *)(uVar10 + lVar9 + 0xb) = (int)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar8 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      lVar2 = uVar10 + lVar9 + 0xb;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,lVar2,uVar11);
        uVar8 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,lVar2,uVar11);
      }
    }
    *(int *)(*puVar7 + lVar9 + 0x13) = param_5 << 1;
    *(char *)(*puVar7 + (long)(int)(iVar1 + (uint)*(byte *)(*puVar7 + 9) * 0x18) + -1) = (char)lVar3
    ;
    *(undefined1 *)(lVar3 + (ulong)*(byte *)(*puVar7 + 9) * 0x19 + *puVar7 + 0xb) = uVar5;
    *(byte *)(*puVar7 + 7) = bVar4 + 1;
  }
  else {
    if ((uint)*(byte *)(uVar11 + 8) < (uint)bVar4) {
      uVar6 = 0xfe;
      if (bVar4 != 0x40) {
        uVar6 = (uint)bVar4 << 2;
      }
      if (uVar6 < 0xff) goto LAB_01124b4c;
    }
    else {
LAB_01124b4c:
      puVar7 = (ulong *)SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash
                                  (param_1,param_2);
      *(undefined4 *)(*puVar7 + 3) = *(undefined4 *)(*param_2 + 3);
      if (puVar7 != (ulong *)0x0) {
        uVar11 = *puVar7;
        goto LAB_01124b70;
      }
    }
    puVar7 = (ulong *)0x0;
  }
  return puVar7;
}

