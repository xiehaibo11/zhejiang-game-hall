
/* v8::internal::PartialDeserializer::DeserializeEmbedderFields(v8::DeserializeInternalFieldsCallback)
    */

void v8::internal::PartialDeserializer::DeserializeEmbedderFields
               (Deserializer *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  void *__dest;
  int iVar13;
  Isolate *pIVar14;
  long lVar15;
  Isolate *pIVar16;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  iVar13 = *(int *)(param_1 + 0x7c);
  if ((iVar13 < *(int *)(param_1 + 0x78)) &&
     (*(int *)(param_1 + 0x7c) = iVar13 + 1,
     *(char *)(*(long *)(param_1 + 0x70) + (long)iVar13) == '\x1d')) {
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
              (aPStack_78,*(Isolate **)(param_1 + 0x50));
    iVar13 = *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x7c) = iVar13 + 1;
    bVar8 = *(byte *)(*(long *)(param_1 + 0x70) + (long)iVar13);
    while (bVar8 != 0x1a) {
      pIVar16 = *(Isolate **)(param_1 + 0x50);
      uVar6 = *(undefined8 *)(pIVar16 + 0x95a0);
      lVar7 = *(long *)(pIVar16 + 0x95a8);
      *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + 1;
      uVar11 = Deserializer::GetBackReferencedObject(param_1,bVar8 & 7);
      pIVar14 = *(Isolate **)(param_1 + 0x50);
      if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)(pIVar14 + 0x95a0);
        if (puVar12 == *(ulong **)(pIVar14 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(pIVar14);
        }
        *(ulong **)(pIVar14 + 0x95a0) = puVar12 + 1;
        *puVar12 = uVar11;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar11);
      }
      lVar15 = *(long *)(param_1 + 0x70);
      puVar2 = (uint *)(lVar15 + *(int *)(param_1 + 0x7c));
      uVar10 = *puVar2;
      lVar1 = ((ulong)(byte)*puVar2 & 3) + 1;
      lVar3 = lVar1 + *(int *)(param_1 + 0x7c);
      iVar13 = (int)lVar3;
      *(int *)(param_1 + 0x7c) = iVar13;
      lVar4 = iVar13 + lVar15;
      bVar8 = *(byte *)(lVar15 + lVar3);
      lVar3 = ((ulong)bVar8 & 3) + 1;
      lVar5 = lVar3 + iVar13;
      uVar11 = ((ulong)CONCAT13(*(undefined1 *)(lVar4 + 3),
                                CONCAT12(*(undefined1 *)(lVar4 + 2),
                                         CONCAT11(*(undefined1 *)(lVar4 + 1),bVar8))) &
               0xffffffffUL >> (lVar3 * -8 + 0x20U & 0x3f)) >> 2;
      *(int *)(param_1 + 0x7c) = (int)lVar5;
      __dest = operator_new__(uVar11);
      memcpy(__dest,(void *)(lVar15 + lVar5),uVar11);
      *(int *)(param_1 + 0x7c) = (int)uVar11 + *(int *)(param_1 + 0x7c);
      (*param_2)(puVar12,(uVar10 & 0xffffffffU >> (ulong)((int)lVar1 * -8 & 0x1f)) >> 2,__dest,
                 uVar11,param_3);
      operator_delete__(__dest);
      if (pIVar16 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar16 + 0x95a0) = uVar6;
        *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
        if (*(long *)(pIVar16 + 0x95a8) != lVar7) {
          *(long *)(pIVar16 + 0x95a8) = lVar7;
          HandleScope::DeleteExtensions(pIVar16);
        }
      }
      iVar13 = *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x7c) = iVar13 + 1;
      bVar8 = *(byte *)(*(long *)(param_1 + 0x70) + (long)iVar13);
    }
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
              (aPStack_78);
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

