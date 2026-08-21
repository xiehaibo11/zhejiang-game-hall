
/* v8::internal::Runtime::DeleteObjectProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::LanguageMode) */

undefined2
v8::internal::Runtime::DeleteObjectProperty
          (Isolate *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong local_c0 [11];
  char local_68 [8];
  
  pIVar1 = param_1 + 0x95a0;
  uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    uVar12 = *puVar6;
  }
  if ((((0x410 < *(ushort *)(uVar12 + 7)) && (uVar9 = *param_3, (uVar9 & 1) != 0)) &&
      ((uVar10 = uVar9 & 0xffffffff00000000 | 7, *(ushort *)(uVar10 + *(uint *)(uVar9 - 1)) < 0x20
       || (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x40)))) &&
     (uVar4 = *(uint *)(uVar12 + 0xb) >> 10 & 0x3ff, uVar4 != 0)) {
    uVar4 = uVar4 - 1;
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0x17);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar12;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
      uVar12 = *puVar7;
    }
    uVar9 = (long)(int)uVar4 * 0xc00000000 + 0x1000000000 >> 0x20;
    if ((*(int *)(uVar9 + uVar12 + -1) == (int)*param_3) &&
       (uVar11 = *(uint *)(uVar12 + (uVar9 | 3)), (uVar11 >> 6 & 1) == 0)) {
      uVar2 = *(uint *)(*puVar6 + 0x13);
      uVar12 = *puVar6 & 0xffffffff00000000;
      if (((uVar2 & 1) == 0) ||
         (uVar10 = uVar12 | uVar2, *(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2))
      {
        uVar10 = *(ulong *)(uVar12 + 0xa0);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar10;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
        uVar10 = *puVar8;
      }
      if ((((uVar10 & 1) != 0) &&
          (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0xa2)) &&
         ((*(uint *)(uVar10 + 0xb) >> 10 & 0x3ff) == uVar4)) {
        if ((uVar11 & 0xc) == 8) {
          uVar12 = Map::UnwrapFieldType
                             (*puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + *puVar7 + 7));
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)pIVar1;
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar7 + 1;
            *puVar7 = uVar12;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
          }
          Map::GeneralizeField
                    (param_1,puVar6,(long)(int)uVar4,0,(uint)((int)uVar11 >> 1) >> 6 & 7,puVar7);
        }
        if ((uVar11 >> 2 & 1) == 0) {
          Heap::NotifyObjectLayoutChange((Heap *)(param_1 + 0x8850),*param_2,local_68,1);
          uVar12 = *puVar6;
          uVar4 = (uint)((int)uVar11 >> 1) >> 0x13 & 0x3ff;
          iVar3 = (uint)*(byte *)(uVar12 + 3) - (uint)*(byte *)(uVar12 + 4);
          if ((int)uVar4 < iVar3) {
            uVar9 = (ulong)*(byte *)(uVar12 + 4) << 0x1c;
            uVar11 = (uVar4 + *(byte *)(uVar12 + 4)) * 4;
          }
          else {
            uVar11 = (uVar4 - iVar3) * 4 + 8;
            uVar9 = 0x20000000;
          }
          uVar12 = (ulong)((int)uVar4 < iVar3) << 0xd | (long)iVar3 << 0x10 | (long)(int)uVar11;
          uVar9 = uVar12 | uVar9;
          if (((uint)uVar12 >> 0xd & 1) == 0) {
            if ((uVar11 >> 2 & 0x7ff) == ((uint)(uVar9 >> 0x1c) & 0x1f)) {
              local_c0[0] = *param_2;
              JSReceiver::SetProperties((JSReceiver *)local_c0,*(undefined8 *)(param_1 + 0x168));
            }
            else {
              local_c0[0] = *param_2;
              JSObject::RawFastPropertyAtPut
                        ((JSObject *)local_c0,uVar9,*(undefined8 *)(param_1 + 0x88),4);
            }
          }
          else {
            local_c0[0] = *param_2;
            JSObject::RawFastPropertyAtPut
                      ((JSObject *)local_c0,uVar9,*(undefined8 *)(param_1 + 0x88),4);
            Heap::ClearRecordedSlot
                      ((Heap *)(param_1 + 0x8850),*param_2,
                       ((long)(int)uVar11 & 0x1fffU) + *param_2 + -1);
            MemoryChunk::InvalidateRecordedSlots((MemoryChunk *)(*param_2 & 0xfffffffffffc0000));
          }
        }
        uVar12 = *puVar6;
        if ((*(uint *)(uVar12 + 0xb) >> 0x19 & 1) == 0) {
          *(uint *)(uVar12 + 0xb) = *(uint *)(uVar12 + 0xb) | 0x2000000;
          local_c0[0] = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0x1b);
          DependentCode::DeoptimizeDependentCodeGroup(local_c0,param_1,1);
        }
        uVar12 = *puVar8;
        uVar9 = *param_2;
        if ((int)uVar12 == 0) {
          *(undefined4 *)(uVar9 - 1) = 0;
        }
        else {
          Heap::VerifyObjectLayoutChange((Heap *)(uVar9 & 0xffffffff00000000 | 0x8850),uVar9,uVar12)
          ;
          *(int *)(uVar9 - 1) = (int)uVar12;
          if (((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)
             ) {
            Heap_MarkingBarrierSlow(uVar9,0,uVar12);
          }
        }
        local_c0[0] = *param_2;
        HeapObject::HeapObjectVerify((HeapObject *)local_c0,param_1);
        uVar4 = *(uint *)(*param_2 + 3);
        local_c0[0] = *param_2 & 0xffffffff00000000;
        if (((uVar4 & 1) == 0) || (uVar4 == *(uint *)(local_c0[0] + 0x168))) {
          local_c0[0] = *(ulong *)(local_c0[0] + 0x3b8);
        }
        else {
          local_c0[0] = local_c0[0] | uVar4;
        }
        PropertyArray::PropertyArrayVerify((PropertyArray *)local_c0,param_1);
        return 0x101;
      }
    }
  }
  local_68[0] = '\0';
  LookupIterator::PropertyOrElement((LookupIterator *)local_c0,param_1,param_2,param_3,local_68,1);
  if (local_68[0] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = JSReceiver::DeleteProperty(local_c0,param_4 & 1);
  }
  return uVar5;
}

