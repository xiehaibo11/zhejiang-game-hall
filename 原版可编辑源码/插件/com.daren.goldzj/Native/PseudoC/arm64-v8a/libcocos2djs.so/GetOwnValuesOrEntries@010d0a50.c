
/* v8::internal::GetOwnValuesOrEntries(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::PropertyFilter, bool, bool) */

undefined8
v8::internal::GetOwnValuesOrEntries
          (Factory *param_1,undefined8 param_2,uint param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int local_104;
  PropertyDescriptor local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong *local_d0;
  LookupIterator aLStack_c8 [92];
  undefined1 local_6c [12];
  
  local_d0 = (ulong *)0x0;
  if ((param_3 == 0x12) && ((param_4 & 1) != 0)) {
    uVar2 = FastGetOwnValuesOrEntries(param_1,param_2,param_5 & 1,&local_d0);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if (0xff < uVar2) {
      return local_d0;
    }
  }
  plVar3 = (long *)KeyAccumulator::GetKeys(param_2,0,param_3 & 0xfffffffd,0,0,0);
  uVar7 = 0;
  if (plVar3 != (long *)0x0) {
    local_d0 = (ulong *)Factory::NewFixedArray(param_1,*(int *)(*plVar3 + 3) >> 1,0);
    lVar8 = *plVar3;
    if (*(int *)(lVar8 + 3) < 2) {
      local_104 = 0;
    }
    else {
      iVar10 = 0;
      lVar11 = 0;
      local_104 = 0;
      do {
        uVar1 = *(uint *)(lVar8 + iVar10 + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(param_1 + 0x95a0);
          if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend((Isolate *)param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
          *puVar4 = (ulong)(param_1 + uVar1);
          if ((param_3 >> 1 & 1) != 0) goto LAB_010d0bc4;
LAB_010d0c1c:
          LookupIterator::PropertyOrElement(aLStack_c8,param_1,param_2,puVar4,3);
          puVar5 = (ulong *)Object::GetProperty(aLStack_c8,false);
          if (puVar5 == (ulong *)0x0) {
            return 0;
          }
          if ((param_5 & 1) != 0) {
            puVar6 = (ulong *)Factory::NewUninitializedFixedArray(param_1,2);
            uVar13 = *puVar6;
            uVar12 = *puVar4;
            *(int *)(uVar13 + 7) = (int)uVar12;
            if ((uVar12 & 1) != 0) {
              uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar9 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar12);
                uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar9 & 0x18) != 0) &&
                 ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar12);
              }
            }
            uVar13 = *puVar6;
            uVar12 = *puVar5;
            *(int *)(uVar13 + 0xb) = (int)uVar12;
            if ((uVar12 & 1) != 0) {
              uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar9 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xb,uVar12);
                uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar9 & 0x18) != 0) &&
                 ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xb,uVar12);
              }
            }
            puVar5 = (ulong *)Factory::NewJSArrayWithElements(param_1,puVar6,2,2,0);
          }
          uVar12 = *puVar5;
          uVar13 = *local_d0;
          lVar8 = uVar13 + (long)(local_104 << 2);
          *(int *)(lVar8 + 7) = (int)uVar12;
          if ((uVar12 & 1) != 0) {
            uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
            lVar8 = lVar8 + 7;
            if (((uint)uVar9 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar13,lVar8,uVar12);
              uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar9 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar13,lVar8,uVar12);
            }
          }
          local_104 = local_104 + 1;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                       (ulong)(param_1 + uVar1));
          if ((param_3 >> 1 & 1) == 0) goto LAB_010d0c1c;
LAB_010d0bc4:
          local_f8[0] = (PropertyDescriptor)0x0;
          uStack_e8 = 0;
          local_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          local_6c[0] = 0;
          LookupIterator::PropertyOrElement(aLStack_c8,param_1,param_2,puVar4,local_6c,1);
          uVar2 = JSReceiver::GetOwnPropertyDescriptor(aLStack_c8,local_f8);
          if ((uVar2 & 0xff) == 0) {
            return 0;
          }
          if ((0xff < uVar2) && (((byte)local_f8[0] & 1) != 0)) goto LAB_010d0c1c;
        }
        lVar8 = *plVar3;
        lVar11 = lVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (lVar11 < *(int *)(lVar8 + 3) >> 1);
    }
    uVar7 = FixedArray::ShrinkOrEmpty(param_1,local_d0,local_104);
  }
  return uVar7;
}

