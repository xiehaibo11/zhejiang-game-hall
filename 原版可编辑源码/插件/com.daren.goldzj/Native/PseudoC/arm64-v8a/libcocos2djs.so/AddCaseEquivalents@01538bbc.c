
/* v8::internal::CharacterRange::AddCaseEquivalents(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::ZoneList<v8::internal::CharacterRange>*, bool) */

void v8::internal::CharacterRange::AddCaseEquivalents
               (Isolate *param_1,Zone *param_2,ZoneList *param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  uint local_74 [4];
  bool local_64 [4];
  
  Canonicalize(param_3);
  uVar3 = *(uint *)(param_3 + 0xc);
  if (0 < (int)uVar3) {
    uVar13 = 0;
    do {
      uVar16 = *(ulong *)(*(long *)param_3 + uVar13 * 8);
      uVar15 = (uint)uVar16;
      if ((int)uVar15 < 0x10000) {
        uVar11 = (uint)(uVar16 >> 0x20);
        uVar6 = uVar11;
        if (0xfffe < (int)uVar11) {
          uVar6 = 0xffff;
        }
        if (((int)uVar15 < 0xd800) || (0xdfff < (int)uVar6)) {
          uVar9 = uVar6;
          if ((param_4) && (uVar7 = RangeContainsLatin1Equivalents(uVar16), (uVar7 & 1) == 0)) {
            if (0xff < (int)uVar15) goto LAB_01538c38;
            uVar9 = uVar11;
            if (0xfe < (int)uVar6) {
              uVar9 = 0xff;
            }
          }
          if (uVar9 == uVar15) {
            if (*(uint *)(param_1 + (uVar16 & 0xff) * 8 + 0x9e18) == uVar15) {
              if (*(int *)(param_1 + (uVar16 & 0xff) * 8 + 0x9e1c) != 0) {
                local_74[0] = *(int *)(param_1 + (uVar16 & 0xff) * 8 + 0x9e1c) + uVar15;
                uVar6 = 1;
                goto LAB_01538f8c;
              }
            }
            else {
              local_64[0] = true;
              uVar6 = unibrow::Ecma262UnCanonicalize::Convert(uVar15,0,local_74,local_64);
              if (local_64[0] == false) {
                if (0 < (int)uVar6) goto LAB_01538f8c;
              }
              else if (uVar6 == 1) {
                *(ulong *)(param_1 + (uVar16 & 0xff) * 8 + 0x9e18) =
                     uVar16 & 0xffffffff | (ulong)(local_74[0] - uVar15) << 0x20;
LAB_01538f8c:
                uVar16 = (ulong)uVar6;
                puVar14 = local_74;
                do {
                  uVar6 = *puVar14;
                  if (uVar6 != uVar15) {
                    uVar11 = *(uint *)(param_3 + 8);
                    uVar9 = *(uint *)(param_3 + 0xc);
                    if ((int)uVar9 < (int)uVar11) {
                      pvVar8 = *(void **)param_3;
                    }
                    else {
                      pvVar8 = *(void **)(param_2 + 0x10);
                      uVar12 = uVar11 << 1 | 1;
                      uVar7 = -(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                              (ulong)uVar12 << 3;
                      if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar8) < uVar7) {
                        pvVar8 = (void *)Zone::NewExpand(param_2,uVar7);
                      }
                      else {
                        *(ulong *)(param_2 + 0x10) = (long)pvVar8 + uVar7;
                      }
                      uVar9 = *(uint *)(param_3 + 0xc);
                      if (0 < (int)uVar9) {
                        MemCopy(pvVar8,*(void **)param_3,(ulong)uVar9 << 3);
                        uVar9 = *(uint *)(param_3 + 0xc);
                      }
                      *(void **)param_3 = pvVar8;
                      *(uint *)(param_3 + 8) = uVar12;
                    }
                    *(uint *)(param_3 + 0xc) = uVar9 + 1;
                    *(ulong *)((long)pvVar8 + (long)(int)uVar9 * 8) = CONCAT44(uVar6,uVar6);
                  }
                  uVar16 = uVar16 - 1;
                  puVar14 = puVar14 + 1;
                } while (uVar16 != 0);
              }
              else {
                *(ulong *)(param_1 + (uVar16 & 0xff) * 8 + 0x9e18) = uVar16 & 0xffffffff;
              }
            }
          }
          else if ((int)uVar15 <= (int)uVar9) {
            uVar16 = uVar16 & 0xffffffff;
            do {
              uVar6 = (uint)uVar16;
              uVar7 = (ulong)(uVar6 & 0xff);
              if (*(uint *)(param_1 + uVar7 * 8 + 0xa618) == uVar6) {
                if (*(int *)(param_1 + uVar7 * 8 + 0xa61c) != 0) {
                  local_74[0] = *(int *)(param_1 + uVar7 * 8 + 0xa61c) + uVar6;
                  uVar16 = (ulong)local_74[0];
                }
              }
              else {
                local_64[0] = true;
                iVar4 = unibrow::CanonicalizationRange::Convert(uVar6,0,local_74,local_64);
                if (local_64[0] == false) {
                  if (iVar4 != 0) {
                    uVar16 = (ulong)local_74[0];
                  }
                }
                else if (iVar4 == 1) {
                  *(ulong *)(param_1 + uVar7 * 8 + 0xa618) =
                       uVar16 | (ulong)(local_74[0] - uVar6) << 0x20;
                  uVar16 = (ulong)local_74[0];
                }
                else {
                  *(ulong *)(param_1 + uVar7 * 8 + 0xa618) = uVar16;
                }
              }
              uVar12 = (uint)uVar16;
              uVar7 = (ulong)(uVar12 & 0xff);
              uVar11 = uVar9;
              if ((int)uVar12 <= (int)uVar9) {
                uVar11 = uVar12;
              }
              if (*(uint *)(param_1 + uVar7 * 8 + 0x9e18) == uVar12) {
                if (*(int *)(param_1 + uVar7 * 8 + 0x9e1c) != 0) {
                  uVar5 = 1;
                  local_74[0] = *(int *)(param_1 + uVar7 * 8 + 0x9e1c) + uVar12;
                  goto LAB_01538e5c;
                }
              }
              else {
                local_64[0] = true;
                uVar5 = unibrow::Ecma262UnCanonicalize::Convert(uVar12,0,local_74,local_64);
                if (local_64[0] == false) {
                  if (0 < (int)uVar5) goto LAB_01538e5c;
                }
                else if (uVar5 == 1) {
                  *(ulong *)(param_1 + uVar7 * 8 + 0x9e18) =
                       uVar16 | (ulong)(local_74[0] - uVar12) << 0x20;
LAB_01538e5c:
                  uVar16 = (ulong)uVar5;
                  puVar14 = local_74;
                  do {
                    iVar4 = *puVar14 + (uVar6 - uVar12);
                    iVar1 = *puVar14 + (uVar11 - uVar12);
                    if ((iVar4 < (int)uVar15) || ((int)uVar9 < iVar1)) {
                      uVar5 = *(uint *)(param_3 + 8);
                      uVar10 = *(uint *)(param_3 + 0xc);
                      if ((int)uVar10 < (int)uVar5) {
                        pvVar8 = *(void **)param_3;
                      }
                      else {
                        pvVar8 = *(void **)(param_2 + 0x10);
                        uVar2 = uVar5 << 1 | 1;
                        uVar7 = -(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                                (ulong)uVar2 << 3;
                        if ((ulong)(*(long *)(param_2 + 0x18) - (long)pvVar8) < uVar7) {
                          pvVar8 = (void *)Zone::NewExpand(param_2,uVar7);
                        }
                        else {
                          *(ulong *)(param_2 + 0x10) = (long)pvVar8 + uVar7;
                        }
                        uVar10 = *(uint *)(param_3 + 0xc);
                        if (0 < (int)uVar10) {
                          MemCopy(pvVar8,*(void **)param_3,(ulong)uVar10 << 3);
                          uVar10 = *(uint *)(param_3 + 0xc);
                        }
                        *(void **)param_3 = pvVar8;
                        *(uint *)(param_3 + 8) = uVar2;
                      }
                      *(uint *)(param_3 + 0xc) = uVar10 + 1;
                      *(ulong *)((long)pvVar8 + (long)(int)uVar10 * 8) = CONCAT44(iVar1,iVar4);
                    }
                    uVar16 = uVar16 - 1;
                    puVar14 = puVar14 + 1;
                  } while (uVar16 != 0);
                }
                else {
                  *(ulong *)(param_1 + uVar7 * 8 + 0x9e18) = uVar16;
                }
              }
              uVar16 = (ulong)(uVar11 + 1);
            } while ((int)uVar12 < (int)uVar9);
          }
        }
      }
LAB_01538c38:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  return;
}

