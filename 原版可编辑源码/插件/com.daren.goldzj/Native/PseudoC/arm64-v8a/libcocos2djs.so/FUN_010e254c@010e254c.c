
ulong FUN_010e254c(KeyAccumulator *param_1,ulong *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  if (param_3 == param_4) {
    uVar13 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    uVar9 = *(uint *)(param_1 + 0x24);
    uVar13 = 0xffffffff;
    lVar15 = (long)(int)param_3 * 0xc00000000 + 0x1000000000;
    lVar14 = (long)(int)param_4 - (long)(int)param_3;
    do {
      uVar8 = *param_2;
      uVar11 = lVar15 >> 0x20;
      uVar3 = *(uint *)(uVar8 + (uVar11 | 3));
      uVar1 = uVar9 & 7 & uVar3 >> 4;
      uVar4 = uVar13;
      if ((uVar1 == 0) || (iVar2 == 1)) {
        if ((uVar9 >> 5 & 1) == 0) {
          uVar10 = uVar8 & 0xffffffff00000000 | 7;
LAB_010e25f8:
          uVar3 = *(uint *)(uVar8 + uVar11 + -1);
          uVar8 = uVar8 & 0xffffffff00000000 | (ulong)uVar3;
          if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x40) {
            uVar13 = *(uint *)(param_1 + 0x24);
            if ((uVar3 & 1) == 0) {
              bVar5 = false;
              if (uVar13 == 0x40) goto LAB_010e26a0;
LAB_010e2624:
              if (!bVar5) {
                if ((uVar13 >> 3 & 1) == 0) goto LAB_010e2634;
                goto LAB_010e25b8;
              }
              if (((uVar13 >> 4 & 1) != 0) || ((*(byte *)(uVar8 + 7) & 1) != 0)) goto LAB_010e25b8;
            }
            else {
              bVar5 = *(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x40;
              if (uVar13 != 0x40) goto LAB_010e2624;
LAB_010e26a0:
              if ((!bVar5) || ((*(byte *)(uVar8 + 7) >> 4 & 1) == 0)) goto LAB_010e25b8;
            }
LAB_010e2634:
            if (uVar1 == 0) {
              pIVar6 = *(Isolate **)param_1;
              if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar7 = *(ulong **)(pIVar6 + 0x95a0);
                if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
                  puVar7 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
                }
                *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
                *puVar7 = uVar8;
              }
              else {
                puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar8);
              }
              uVar8 = v8::internal::KeyAccumulator::AddKey(param_1,puVar7,0);
              if ((uVar8 & 1) == 0) {
                uVar8 = 0;
                uVar13 = 0;
                uVar9 = 0;
                goto LAB_010e2748;
              }
            }
            else {
              v8::internal::KeyAccumulator::AddShadowingKey(param_1,uVar8);
            }
          }
          else {
            uVar4 = param_3;
            if (uVar13 != 0xffffffff) {
              uVar4 = uVar13;
            }
          }
        }
        else if (((uVar3 >> 1 & 1) != 0) &&
                (uVar3 = *(uint *)(uVar8 + uVar11 + 7), (uVar3 & 1) != 0)) {
          uVar12 = uVar8 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = uVar8 & 0xffffffff00000000 | 7;
          if ((*(short *)(uVar10 + *(uint *)(uVar12 - 1)) == 0x51) &&
             ((*(byte *)(uVar12 + 7) >> 1 & 1) != 0)) goto LAB_010e25f8;
        }
      }
LAB_010e25b8:
      uVar13 = uVar4;
      lVar15 = lVar15 + 0xc00000000;
      lVar14 = lVar14 + -1;
      param_3 = param_3 + 1;
    } while (lVar14 != 0);
  }
  uVar9 = uVar13 & 0xffffff00;
  uVar13 = uVar13 & 0xff;
  uVar8 = 1;
LAB_010e2748:
  return uVar8 | (ulong)(uVar9 | uVar13) << 0x20;
}

