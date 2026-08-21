
/* v8::internal::JSObject::AllocateStorageForMap(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Map>) */

void v8::internal::JSObject::AllocateStorageForMap(ulong *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  CanonicalHandleScope *this;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  Isolate *this_00;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong local_68;
  
  local_68 = *param_2;
  bVar3 = *(byte *)((*param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1)) + 10) >> 3;
  bVar6 = *(byte *)(local_68 + 10) >> 3;
  if (bVar6 != bVar3) {
    uVar8 = IsMoreGeneralElementsKindTransition(bVar6,bVar3);
    bVar2 = bVar3;
    if ((uVar8 & 1) == 0) {
      bVar2 = bVar6;
    }
    if (bVar3 != 0xc) {
      bVar3 = bVar2;
    }
    if (bVar3 == 0xc) {
      NormalizeElements();
    }
    else {
      TransitionElementsKind(param_1,bVar3);
    }
    param_2 = (ulong *)Map::ReconfigureElementsKind
                                 ((ulong)*(uint *)((long)param_1 + 4) << 0x20,param_2,bVar3);
    local_68 = *param_2;
  }
  iVar7 = Map::NumberOfFields((Map *)&local_68);
  uVar8 = *param_2;
  bVar3 = *(byte *)(uVar8 + 5);
  uVar15 = (uint)bVar3;
  uVar4 = (uint)*(byte *)(uVar8 + 3) - (uint)*(byte *)(uVar8 + 4);
  if (2 < bVar3) {
    uVar15 = (uint)*(byte *)(uVar8 + 3) - (uint)bVar3;
  }
  this = *(CanonicalHandleScope **)((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x95b8);
  this_00 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x17);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(this_00 + 0x95a0);
    if (puVar9 == *(ulong **)(this_00 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(this_00);
    }
    *(ulong **)(this_00 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar8;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup(this,uVar8);
  }
  puVar10 = (ulong *)Factory::NewFixedArray((Factory *)this_00,uVar4,0);
  puVar11 = (ulong *)Factory::NewPropertyArray((Factory *)this_00,(iVar7 - uVar4) + uVar15);
  uVar8 = (ulong)(*(uint *)(*param_2 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar8 != 0) {
    lVar18 = 0;
    do {
      if ((*(uint *)(lVar18 + *puVar9 + 0x13) & 0x380) == 0x100) {
        uVar16 = *param_2;
        uVar15 = *(int *)((uVar16 & 0xffffffff00000000 | lVar18 + 0x13U) +
                         (ulong)*(uint *)(uVar16 + 0x17)) >> 1;
        uVar5 = uVar15 >> 0x13 & 0x3ff;
        iVar7 = (uint)*(byte *)(uVar16 + 3) - (uint)*(byte *)(uVar16 + 4);
        if ((int)uVar5 < iVar7) {
          uVar17 = (ulong)*(byte *)(uVar16 + 4) << 0x1c;
          uVar21 = (uVar5 + *(byte *)(uVar16 + 4)) * 4;
        }
        else {
          uVar21 = (uVar5 - iVar7) * 4 + 8;
          uVar17 = 0x20000000;
        }
        uVar15 = uVar15 >> 6 & 7;
        local_68 = CONCAT71(local_68._1_7_,(char)uVar15);
        if (4 < uVar15) {
          uVar13 = Representation::Mnemonic((Representation *)&local_68);
          PrintF("%s\n",uVar13);
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar16 = (ulong)((int)uVar5 < iVar7) << 0xd | (long)iVar7 << 0x10 | (long)(int)uVar21;
        puVar12 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                     ((Factory *)this_00);
        *(undefined8 *)(*puVar12 + 3) = 0xfff7fffffff7ffff;
        if (((uint)uVar16 >> 0xd & 1) == 0) {
          uVar20 = *puVar11;
        }
        else {
          uVar20 = *puVar10;
        }
        uVar19 = *puVar12;
        puVar1 = (undefined4 *)
                 (uVar20 + (long)(int)(((uVar21 & 0x1ffc) -
                                       ((uint)((uVar16 | uVar17) >> 0x1a) & 0x7c)) + 7));
        *puVar1 = (int)uVar19;
        if ((uVar19 & 1) != 0) {
          uVar16 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar16 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar20,puVar1,uVar19);
            uVar16 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar16 & 0x18) != 0) && ((*(byte *)((uVar20 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar20,puVar1,uVar19);
          }
        }
      }
      lVar18 = lVar18 + 0xc;
    } while (uVar8 * 0xc - lVar18 != 0);
  }
  local_68 = *param_1;
  JSReceiver::SetProperties((JSReceiver *)&local_68,*puVar11);
  if (0 < (int)uVar4) {
    uVar8 = 0;
    lVar18 = 7;
    do {
      uVar16 = *param_2;
      lVar14 = (ulong)*(byte *)(uVar16 + 3) - (ulong)*(byte *)(uVar16 + 4);
      if ((long)uVar8 < lVar14) {
        uVar17 = (ulong)*(byte *)(uVar16 + 4) << 0x1c;
        iVar7 = ((int)uVar8 + (uint)*(byte *)(uVar16 + 4)) * 4;
      }
      else {
        iVar7 = ((int)uVar8 + ((uint)*(byte *)(uVar16 + 4) - (uint)*(byte *)(uVar16 + 3))) * 4 + 8;
        uVar17 = 0x20000000;
      }
      local_68 = *param_1;
      RawFastPropertyAtPut
                ((JSObject *)&local_68,
                 (ulong)((long)uVar8 < lVar14) << 0xd | lVar14 * 0x10000 | (long)iVar7 | uVar17,
                 *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(lVar18 + *puVar10),4);
      uVar8 = uVar8 + 1;
      lVar18 = lVar18 + 4;
    } while (uVar4 != uVar8);
  }
  uVar16 = *param_2;
  uVar8 = *param_1;
  if ((int)uVar16 == 0) {
    *(undefined4 *)(uVar8 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar8 & 0xffffffff00000000 | 0x8850),uVar8,uVar16);
    *(int *)(uVar8 - 1) = (int)uVar16;
    if (((uVar16 & 1) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar8,0,uVar16);
    }
  }
  return;
}

