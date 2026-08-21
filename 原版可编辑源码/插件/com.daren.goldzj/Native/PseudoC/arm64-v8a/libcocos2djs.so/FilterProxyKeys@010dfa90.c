
/* v8::internal::FilterProxyKeys(v8::internal::KeyAccumulator*,
   v8::internal::Handle<v8::internal::JSProxy>, v8::internal::Handle<v8::internal::FixedArray>,
   v8::internal::PropertyFilter) */

ulong * v8::internal::FilterProxyKeys
                  (undefined8 *param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  byte local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_4 != 0) {
    uVar7 = *param_3;
    pIVar9 = (Isolate *)*param_1;
    if (*(int *)(uVar7 + 3) < 2) {
      uVar11 = 0;
    }
    else {
      iVar13 = 0;
      uVar10 = 0;
      uVar11 = 0;
      do {
        uVar1 = *(uint *)(uVar7 + (long)iVar13 + 7);
        uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar1;
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar7;
          if ((uVar1 & 1) != 0) goto LAB_010dfc10;
LAB_010dfb44:
          bVar2 = false;
          if (param_4 != 0x40) goto LAB_010dfb50;
LAB_010dfc30:
          if ((!bVar2) || ((*(byte *)(uVar7 + 7) >> 4 & 1) == 0)) goto LAB_010dfafc;
          goto LAB_010dfc3c;
        }
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar7);
        uVar7 = *puVar4;
        if ((uVar7 & 1) == 0) goto LAB_010dfb44;
LAB_010dfc10:
        bVar2 = *(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40;
        if (param_4 == 0x40) goto LAB_010dfc30;
LAB_010dfb50:
        if (bVar2) {
          if (((param_4 >> 4 & 1) == 0) && ((*(byte *)(uVar7 + 7) & 1) == 0)) {
LAB_010dfb60:
            if ((param_4 >> 1 & 1) == 0) {
LAB_010dfc3c:
              if (uVar10 != uVar11) {
                uVar12 = *param_3;
                uVar7 = *puVar4;
                lVar6 = uVar12 + (long)(int)(uVar11 << 2);
                *(int *)(lVar6 + 7) = (int)uVar7;
                if ((uVar7 & 1) != 0) {
                  uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
                  lVar6 = lVar6 + 7;
                  if (((uint)uVar8 >> 0x12 & 1) != 0) {
                    Heap_MarkingBarrierSlow(uVar12,lVar6,uVar7);
                    uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
                  }
                  if (((uVar8 & 0x18) != 0) &&
                     ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                    Heap_GenerationalBarrierSlow(uVar12,lVar6,uVar7);
                  }
                }
              }
              uVar11 = uVar11 + 1;
            }
            else {
              local_88[0] = 0;
              uStack_78 = 0;
              local_80 = 0;
              uStack_68 = 0;
              uStack_70 = 0;
              uVar3 = JSProxy::GetOwnPropertyDescriptor(pIVar9,param_2,puVar4,local_88);
              if ((uVar3 & 0xff) == 0) {
                return (ulong *)0x0;
              }
              if (0xff < uVar3) {
                if ((local_88[0] & 1) != 0) goto LAB_010dfc3c;
                if (*(int *)(param_1 + 4) != 0) {
                  lVar6 = param_1[3];
                  if (lVar6 == 0) {
                    lVar6 = HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>
                            ::New(*param_1,0x10,0,0);
                    param_1[3] = lVar6;
                  }
                  uVar5 = ObjectHashSet::Add(*param_1,lVar6,puVar4);
                  param_1[3] = uVar5;
                }
              }
            }
          }
        }
        else if ((param_4 >> 3 & 1) == 0) goto LAB_010dfb60;
LAB_010dfafc:
        uVar7 = *param_3;
        uVar10 = uVar10 + 1;
        iVar13 = iVar13 + 4;
      } while ((long)uVar10 < (long)(*(int *)(uVar7 + 3) >> 1));
    }
    param_3 = (ulong *)FixedArray::ShrinkOrEmpty(pIVar9,param_3,uVar11);
  }
  return param_3;
}

