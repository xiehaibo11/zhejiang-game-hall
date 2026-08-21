
/* v8::internal::StringTable::LookupString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>) */

ulong * v8::internal::StringTable::LookupString(Isolate *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **local_68;
  uint local_60;
  undefined4 uStack_5c;
  ulong *local_58;
  ulong local_38;
  
  puVar4 = (ulong *)String::Flatten(param_1,param_2,0);
  uVar7 = *puVar4;
  if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x20) {
    return puVar4;
  }
  uStack_5c = *(undefined4 *)(uVar7 + 7);
  local_60 = 0;
  local_68 = &PTR__StringTableKey_01cb4d58;
  uVar6 = *(uint *)(*puVar4 + 3);
  local_58 = puVar4;
  if ((uVar6 & 1) != 0) {
    local_38 = *puVar4;
    String::ComputeAndSetHash((String *)&local_38);
    uVar6 = *(uint *)(*puVar4 + 3);
  }
  local_60 = uVar6;
  puVar5 = (ulong *)LookupKey<v8::internal::InternalizedStringKey>
                              (param_1,(InternalizedStringKey *)&local_68);
  uVar7 = *puVar4;
  uVar9 = uVar7 & 0xffffffff00000000 | 7;
  uVar3 = *(ushort *)(uVar9 + *(uint *)(uVar7 - 1));
  if (FLAG_thin_strings != '\0') {
    if (uVar3 < 0x20) {
      return puVar5;
    }
    local_38 = uVar7;
    String::MakeThin((String *)&local_38,param_1,*puVar5);
    return puVar5;
  }
  if ((uVar3 < 0x40) && ((*(ushort *)(uVar9 + *(uint *)(uVar7 - 1)) & 7) == 1)) {
    uVar9 = *puVar5;
    *(int *)(uVar7 + 0xb) = (int)uVar9;
    if ((uVar9 & 1) == 0) goto LAB_01118788;
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar7 + 0xb;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,lVar1,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar8 & 0x18) == 0) goto LAB_01118788;
    bVar2 = *(byte *)((uVar7 & 0xfffffffffffc0000) + 8);
  }
  else {
    if (0x3f < *(ushort *)(uVar9 + *(uint *)(uVar7 - 1))) {
      return puVar5;
    }
    if ((*(ushort *)(uVar9 + *(uint *)(uVar7 - 1)) & 7) != 3) {
      return puVar5;
    }
    lVar1 = 0x2f0;
    if ((*(byte *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 8) != 0) {
      lVar1 = 0x2e8;
    }
    uVar9 = *(ulong *)(param_1 + lVar1);
    if ((int)uVar9 == 0) {
      *(undefined4 *)(uVar7 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange((Heap *)((uVar7 & 0xffffffff00000000) + 0x8850),uVar7,uVar9);
      *(int *)(uVar7 - 1) = (int)uVar9;
      if (((uVar9 & 1) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar7,0,uVar9);
      }
    }
    uVar7 = *puVar4;
    uVar9 = *puVar5;
    *(int *)(uVar7 + 0xb) = (int)uVar9;
    if ((uVar9 & 1) == 0) goto LAB_01118788;
    uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar7 + 0xb;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,lVar1,uVar9);
      uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar8 & 0x18) == 0) goto LAB_01118788;
    bVar2 = *(byte *)((uVar7 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar2 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar9);
  }
LAB_01118788:
  uVar9 = *puVar4;
  uVar7 = *(ulong *)(param_1 + 200);
  *(int *)(uVar9 + 0xf) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xf,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xf,uVar7);
    }
  }
  return puVar5;
}

