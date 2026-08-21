
void FUN_014acb2c(long *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  long lVar8;
  Isolate *pIVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long local_70;
  long local_68;
  
  puVar3 = (ulong *)param_1[1];
  puVar5 = (ulong *)v8::internal::
                    HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
                    New(*param_1,*(int *)(*puVar3 + 3) >> 1,0,0);
  uVar2 = *(int *)(*puVar3 + 3) >> 1;
  if (uVar2 != 0) {
    pIVar9 = (Isolate *)*param_1;
    uVar10 = 0;
    uVar13 = 0;
    pIVar1 = pIVar9 + 0x95a0;
    do {
      local_70 = *(long *)pIVar1;
      local_68 = *(long *)(pIVar9 + 0x95a8);
      uVar13 = uVar13 + 0x400;
      *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
      if ((uVar10 < uVar2) && (uVar10 < uVar13)) {
        iVar11 = uVar10 << 2;
        do {
          uVar4 = *(uint *)(*puVar3 + (long)iVar11 + 7);
          pIVar6 = (Isolate *)*param_1;
          uVar12 = *puVar3 & 0xffffffff00000000 | (ulong)uVar4;
          if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar6 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
              puVar7 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
            }
            *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar12;
            lVar8 = *param_1;
            if ((uVar4 & 1) != 0) goto LAB_014acc64;
LAB_014acc70:
            puVar7 = (ulong *)v8::internal::NumberDictionary::Set(lVar8,puVar5,uVar10,puVar7,0,0xc0)
            ;
            if ((puVar7 != puVar5) &&
               (((uVar12 = *puVar7, puVar5 == (ulong *)0x0 || (puVar7 == (ulong *)0x0)) ||
                (uVar12 != *puVar5)))) {
              *(long *)pIVar1 = local_70;
              *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
              if (*(long *)(pIVar9 + 0x95a8) != local_68) {
                *(long *)(pIVar9 + 0x95a8) = local_68;
                v8::internal::HandleScope::DeleteExtensions(pIVar9);
              }
              if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar5 = *(ulong **)pIVar1;
                if (puVar5 == *(ulong **)(pIVar9 + 0x95a8)) {
                  puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
                }
                *(ulong **)pIVar1 = puVar5 + 1;
                *puVar5 = uVar12;
              }
              else {
                puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar12);
              }
              local_70 = *(long *)pIVar1;
              local_68 = *(long *)(pIVar9 + 0x95a8);
              *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
            }
          }
          else {
            puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar12);
            uVar12 = *puVar7;
            lVar8 = *param_1;
            if ((uVar12 & 1) == 0) goto LAB_014acc70;
LAB_014acc64:
            if ((int)uVar12 != *(int *)(lVar8 + 0xa8)) goto LAB_014acc70;
          }
          uVar10 = uVar10 + 1;
        } while ((uVar10 < uVar2) && (iVar11 = iVar11 + 4, uVar10 < uVar13));
      }
      if (pIVar9 != (Isolate *)0x0) {
        *(long *)pIVar1 = local_70;
        *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
        if (*(long *)(pIVar9 + 0x95a8) != local_68) {
          *(long *)(pIVar9 + 0x95a8) = local_68;
          v8::internal::HandleScope::DeleteExtensions(pIVar9);
        }
      }
    } while (uVar10 < uVar2);
  }
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[1]);
  lVar8 = v8::internal::GlobalHandles::Create(*(GlobalHandles **)(*param_1 + 0x95e0),*puVar5);
  param_1[1] = lVar8;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xfffffffe;
  return;
}

