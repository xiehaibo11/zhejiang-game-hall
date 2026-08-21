
undefined8
FUN_0108a4b4(undefined8 param_1,Isolate *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            int *param_6)

{
  long lVar1;
  int iVar2;
  Isolate *pIVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  
  uVar13 = *param_3 & 0xffffffff00000000;
  uVar15 = uVar13 | *(uint *)(*param_3 + 7);
  if ((param_5 & 1) == 0) {
    iVar16 = *(int *)(uVar15 + 3) >> 1;
    if (iVar16 != 0) {
      iVar11 = 0;
      iVar9 = 0;
      do {
        if ((((ulong)(param_2 + *(uint *)(uVar15 + 7 + (long)iVar11)) & 1) == 0) ||
           ((int)(param_2 + *(uint *)(uVar15 + 7 + (long)iVar11)) != *(int *)(param_2 + 0xa8))) {
          uVar4 = *(uint *)((long)iVar11 + uVar15 + 7);
          iVar2 = iVar9 + 1;
          uVar17 = *param_4;
          lVar1 = uVar17 + (long)(iVar9 << 2);
          *(uint *)(lVar1 + 7) = uVar4;
          iVar9 = iVar2;
          if ((uVar4 & 1) != 0) {
            uVar14 = uVar13 | uVar4;
            uVar12 = uVar13 | (ulong)uVar4 & 0xfffffffffffc0000;
            uVar10 = *(ulong *)(uVar12 + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar17,lVar1,uVar14);
              uVar10 = *(ulong *)(uVar12 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar17,lVar1,uVar14);
            }
          }
        }
        iVar16 = iVar16 + -1;
        iVar11 = iVar11 + 4;
      } while (iVar16 != 0);
      goto LAB_0108a78c;
    }
  }
  else {
    pIVar3 = param_2 + 0x95a0;
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar3;
      if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar3 = puVar5 + 1;
      *puVar5 = uVar15;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar15);
      uVar15 = *puVar5;
    }
    uVar4 = *(int *)(uVar15 + 3) >> 1;
    if (uVar4 != 0) {
      iVar16 = 0;
      uVar13 = 0;
      iVar9 = 0;
      while( true ) {
        if ((((ulong)(param_2 + *(uint *)(uVar15 + 7 + (long)iVar16)) & 1) == 0) ||
           ((int)(param_2 + *(uint *)(uVar15 + 7 + (long)iVar16)) != *(int *)(param_2 + 0xa8))) {
          uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)((long)iVar16 + uVar15 + 7);
          if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)pIVar3;
            if (puVar6 == *(ulong **)(param_2 + 0x95a8)) {
              puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_2);
            }
            *(ulong **)pIVar3 = puVar6 + 1;
            *puVar6 = uVar15;
          }
          else {
            puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar15);
          }
          puVar7 = (undefined4 *)v8::internal::Factory::SizeToString((Factory *)param_2,uVar13,true)
          ;
          plVar8 = (long *)v8::internal::Factory::NewUninitializedFixedArray((Factory *)param_2,2);
          *(undefined4 *)(*plVar8 + 7) = *puVar7;
          *(int *)(*plVar8 + 0xb) = (int)*puVar6;
          puVar6 = (ulong *)v8::internal::Factory::NewJSArrayWithElements(param_2,plVar8,2,2,0);
          uVar17 = *puVar6;
          iVar11 = iVar9 + 1;
          uVar15 = *param_4;
          lVar1 = uVar15 + (long)(iVar9 << 2);
          *(int *)(lVar1 + 7) = (int)uVar17;
          iVar9 = iVar11;
          if ((uVar17 & 1) != 0) {
            uVar10 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar15,lVar1,uVar17);
              uVar10 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar15,lVar1,uVar17);
            }
          }
        }
        if ((ulong)uVar4 - 1 == uVar13) break;
        uVar15 = *puVar5;
        uVar13 = uVar13 + 1;
        iVar16 = iVar16 + 4;
      }
      goto LAB_0108a78c;
    }
  }
  iVar9 = 0;
LAB_0108a78c:
  *param_6 = iVar9;
  return 0x101;
}

