
void FUN_0109484c(undefined8 param_1,ulong *param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  double dVar15;
  
  v8::internal::JSObject::TransitionElementsKind(param_2,7);
  v8::internal::JSObject::EnsureWritableFastElements(param_2);
  pIVar4 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar13 = (ulong)pIVar4 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar13;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8),uVar13);
  }
  uVar13 = *param_2 & 0xffffffff00000000;
  if ((*(short *)((uVar13 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x423) &&
     ((*(int *)(*puVar5 + 3) >> 1) - 1U == param_3)) {
LAB_01094910:
    FUN_010957e8(param_2,puVar5,param_3);
    return;
  }
  iVar6 = param_3 * 4;
  *(undefined4 *)(*puVar5 + (long)iVar6 + 7) = *(undefined4 *)(uVar13 + 0xa8);
  uVar8 = *puVar5;
  if ((0x7f < *(int *)(uVar8 + 3)) &&
     (((uVar8 & 1) == 0 || ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)))) {
    uVar11 = *param_2;
    uVar9 = uVar11 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar11 - 1)) == 0x423) {
      uVar10 = *(uint *)(uVar11 + 0xb);
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
        if (-1 < (int)uVar10) {
          uVar7 = uVar10 >> 1;
        }
      }
      else {
        uVar8 = uVar11 & 0xffffffff00000000 | (ulong)uVar10;
        if (*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0x42) {
          dVar15 = *(double *)(uVar8 + 3) + 4503599627370496.0;
          uVar7 = SUB84(dVar15,0);
          if ((ulong)dVar15 >> 0x20 != 0x43300000) {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 0;
        }
      }
    }
    else {
      uVar7 = *(int *)(uVar8 + 3) >> 1;
    }
    puVar1 = (ulong *)(uVar13 + 0xc768);
    if ((ulong)(uVar7 >> 4) <= *puVar1) {
      *puVar1 = 0;
      uVar10 = param_3;
      if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x423)
      {
        do {
          iVar6 = iVar6 + 4;
          uVar10 = uVar10 + 1;
          if ((uVar7 <= uVar10) || (uVar2 = *(uint *)(*puVar5 + (long)iVar6 + 7), (uVar2 & 1) == 0))
          break;
        } while (uVar2 == *(uint *)(uVar13 + 0xa8));
        if (uVar7 == uVar10) goto LAB_01094910;
      }
      uVar8 = *puVar5;
      if (1 < *(int *)(uVar8 + 3)) {
        iVar12 = 0;
        lVar14 = 0;
        iVar6 = 0;
        do {
          uVar7 = *(uint *)(uVar8 + (long)iVar12 + 7);
          if (((uVar7 & 1) == 0) || (uVar7 != *(uint *)(uVar13 + 0xa8))) {
            iVar6 = iVar6 + 1;
            iVar3 = v8::base::bits::RoundUpToPowerOfTwo32(iVar6 + (iVar6 >> 1));
            uVar8 = *puVar5;
            if (iVar3 < 5) {
              iVar3 = 4;
            }
            uVar7 = *(int *)(uVar8 + 3) >> 1;
            if (uVar7 < (uint)(iVar3 * 9)) {
              return;
            }
          }
          else {
            uVar7 = *(int *)(uVar8 + 3) >> 1;
          }
          lVar14 = lVar14 + 1;
          iVar12 = iVar12 + 4;
        } while (lVar14 < (int)uVar7);
      }
      v8::internal::JSObject::NormalizeElements(param_2);
      return;
    }
    *puVar1 = *puVar1 + 1;
  }
  return;
}

