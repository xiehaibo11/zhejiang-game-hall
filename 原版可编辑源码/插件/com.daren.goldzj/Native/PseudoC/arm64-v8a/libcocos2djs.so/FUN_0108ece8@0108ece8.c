
void FUN_0108ece8(undefined8 param_1,ulong *param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  double dVar13;
  
  v8::internal::JSObject::TransitionElementsKind(param_2,5);
  pIVar3 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar10 = (ulong)pIVar3 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar10;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar10);
  }
  uVar10 = *param_2 & 0xffffffff00000000;
  if ((*(short *)((uVar10 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x423) &&
     ((*(int *)(*puVar4 + 3) >> 1) - 1U == param_3)) {
    FUN_0108fef0(param_2,puVar4,param_3);
    return;
  }
  *(undefined8 *)(*puVar4 + ((long)(int)(param_3 * 8) | 7U)) = 0xfff7fffffff7ffff;
  uVar6 = *puVar4;
  if ((0x7f < *(int *)(uVar6 + 3)) &&
     (((uVar6 & 1) == 0 || ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)))) {
    uVar9 = *param_2;
    uVar7 = uVar9 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar9 - 1)) == 0x423) {
      uVar8 = *(uint *)(uVar9 + 0xb);
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
        if (-1 < (int)uVar8) {
          uVar5 = uVar8 >> 1;
        }
      }
      else {
        uVar6 = uVar9 & 0xffffffff00000000 | (ulong)uVar8;
        if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x42) {
          dVar13 = *(double *)(uVar6 + 3) + 4503599627370496.0;
          uVar5 = SUB84(dVar13,0);
          if ((ulong)dVar13 >> 0x20 != 0x43300000) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = *(int *)(uVar6 + 3) >> 1;
    }
    puVar1 = (ulong *)(uVar10 + 0xc768);
    if (*puVar1 < (ulong)(uVar5 >> 4)) {
      *puVar1 = *puVar1 + 1;
    }
    else {
      *puVar1 = 0;
      if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x423)
      {
        iVar12 = param_3 * 8 + 0xf;
        uVar8 = param_3;
        do {
          uVar8 = uVar8 + 1;
          if (uVar5 <= uVar8) break;
          lVar11 = (long)iVar12;
          iVar12 = iVar12 + 8;
        } while (*(long *)(*puVar4 + lVar11) == -0x8000000080001);
        if (uVar5 == uVar8) {
          FUN_0108fef0(param_2,puVar4,param_3);
          return;
        }
      }
      uVar10 = *puVar4;
      if (1 < *(int *)(uVar10 + 3)) {
        uVar6 = 0;
        lVar11 = 0;
        iVar12 = 0;
        do {
          if (*(long *)((uVar6 & 0xfffffff8 | 7) + uVar10) == -0x8000000080001) {
            uVar5 = *(int *)(uVar10 + 3) >> 1;
          }
          else {
            iVar12 = iVar12 + 1;
            iVar2 = v8::base::bits::RoundUpToPowerOfTwo32(iVar12 + (iVar12 >> 1));
            uVar10 = *puVar4;
            if (iVar2 < 5) {
              iVar2 = 4;
            }
            uVar5 = *(int *)(uVar10 + 3) >> 1;
            if (uVar5 < (uint)(iVar2 * 9)) {
              return;
            }
          }
          lVar11 = lVar11 + 1;
          uVar6 = uVar6 + 8;
        } while (lVar11 < (int)uVar5);
      }
      v8::internal::JSObject::NormalizeElements(param_2);
    }
  }
  return;
}

