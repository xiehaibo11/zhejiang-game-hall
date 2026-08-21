
/* v8::internal::JSWeakCollection::Set(v8::internal::Handle<v8::internal::JSWeakCollection>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>, int) */

void v8::internal::JSWeakCollection::Set
               (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar9 = (ulong)pIVar3 | (ulong)*(uint *)(*param_1 + 0xb);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar9);
  }
  puVar5 = (ulong *)ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                    ::Put((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar4,param_2,param_3,param_4
                         );
  uVar8 = *param_1;
  uVar9 = *puVar5;
  *(int *)(uVar8 + 0xb) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
      uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar9);
    }
  }
  uVar9 = *puVar4;
  if ((((int)uVar9 != (int)*puVar5) && (uVar2 = *(uint *)(uVar9 + 3), 7 < (int)uVar2)) &&
     (*(undefined4 *)(uVar9 + 0x13) = *(undefined4 *)((uVar9 & 0xffffffff00000000) + 0xa8),
     9 < uVar2)) {
    iVar7 = 0x10;
    uVar9 = 4;
    do {
      uVar9 = uVar9 + 1;
      lVar1 = (long)iVar7;
      iVar7 = iVar7 + 4;
      *(undefined4 *)(*puVar4 + lVar1 + 7) = *(undefined4 *)((*puVar4 & 0xffffffff00000000) + 0xa8);
    } while (uVar9 < uVar2 >> 1);
  }
  return;
}

