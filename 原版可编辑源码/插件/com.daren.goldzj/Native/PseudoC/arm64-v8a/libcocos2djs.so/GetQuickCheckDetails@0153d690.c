
/* v8::internal::TextNode::GetQuickCheckDetails(v8::internal::QuickCheckDetails*,
   v8::internal::RegExpCompiler*, int, bool) */

void v8::internal::TextNode::GetQuickCheckDetails
               (QuickCheckDetails *param_1,RegExpCompiler *param_2,int param_3,bool param_4)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  uint *puVar14;
  RegExpCompiler *pRVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined2 uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint local_74 [4];
  bool local_64 [4];
  
  uVar23 = (ulong)param_4;
  uVar6 = (ulong)(uint)param_3;
  if (param_1[0x48] == (QuickCheckDetails)0x0) {
    plVar9 = *(long **)(param_1 + 0x40);
    uVar16 = 0xffff;
    if (*(char *)(uVar6 + 0x30) != '\0') {
      uVar16 = 0xff;
    }
    if (0 < *(int *)((long)plVar9 + 0xc)) {
      iVar4 = *(int *)param_2;
      lVar25 = 0;
      lVar12 = *(long *)(*(long *)(uVar6 + 0x28) + 0x18);
      do {
        lVar18 = *plVar9 + lVar25 * 0x10;
        lVar26 = *(long *)(lVar18 + 8);
        iVar22 = (int)uVar23;
        if (*(int *)(lVar18 + 4) == 0) {
          if ((0 < iVar4) && (iVar8 = (int)*(undefined8 *)(lVar26 + 0x10), 0 < iVar8)) {
            lVar21 = *(long *)(lVar26 + 8);
            lVar18 = 0;
            uVar23 = (ulong)iVar22;
            do {
              uVar3 = *(ushort *)(lVar21 + lVar18 * 2);
              uVar10 = (ulong)uVar3;
              pRVar15 = param_2 + uVar23 * 6 + 4;
              if ((*(byte *)(lVar26 + 0x18) >> 1 & 1) == 0) {
                if (uVar16 < uVar3) {
LAB_0153db80:
                  param_2[0x24] = (RegExpCompiler)0x1;
                  goto LAB_0153db94;
                }
                *(short *)pRVar15 = (short)uVar16;
                *(ushort *)(param_2 + uVar23 * 6 + 6) = uVar3;
                param_2[uVar23 * 6 + 8] = (RegExpCompiler)0x1;
              }
              else {
                uVar24 = (uint)uVar3;
                lVar17 = lVar12 + (ulong)(byte)uVar3 * 8;
                cVar2 = *(char *)(uVar6 + 0x30);
                if (*(uint *)(lVar17 + 0x9e18) == uVar24) {
                  iVar22 = *(int *)(lVar17 + 0x9e1c);
                  if (iVar22 == 0) goto LAB_0153d91c;
                  local_74[0] = iVar22 + (uint)uVar3;
                  uVar5 = 1;
                }
                else {
                  local_64[0] = true;
                  uVar5 = unibrow::Ecma262UnCanonicalize::Convert(uVar24,0,local_74,local_64);
                  if (local_64[0] == false) {
                    if (uVar5 == 0) goto LAB_0153d91c;
                  }
                  else if (uVar5 == 1) {
                    *(ulong *)(lVar12 + (uVar10 & 0xff) * 8 + 0x9e18) =
                         uVar10 | (ulong)(local_74[0] - uVar24) << 0x20;
                  }
                  else {
                    *(ulong *)(lVar12 + (uVar10 & 0xff) * 8 + 0x9e18) = uVar10;
LAB_0153d91c:
                    local_74[0] = (uint)uVar3;
                    uVar5 = 1;
                  }
                }
                if (cVar2 != '\0') {
                  if ((int)uVar5 < 1) goto LAB_0153db80;
                  uVar10 = (ulong)uVar5;
                  puVar14 = local_74;
                  uVar24 = 0;
                  do {
                    uVar5 = uVar24;
                    if (*puVar14 < 0x100) {
                      uVar5 = uVar24 + 1;
                      local_74[(int)uVar24] = *puVar14;
                    }
                    uVar10 = uVar10 - 1;
                    puVar14 = puVar14 + 1;
                    uVar24 = uVar5;
                  } while (uVar10 != 0);
                }
                if (uVar5 == 1) {
                  *(short *)pRVar15 = (short)uVar16;
                  uVar7 = (undefined2)local_74[0];
                  pRVar15 = param_2 + uVar23 * 6;
                  pRVar15[8] = (RegExpCompiler)0x1;
                }
                else {
                  if (uVar5 == 0) goto LAB_0153db80;
                  uVar24 = local_74[0];
                  uVar11 = uVar16;
                  if (1 < (int)uVar5) {
                    lVar17 = (ulong)uVar5 - 1;
                    puVar14 = local_74;
                    do {
                      puVar14 = puVar14 + 1;
                      lVar17 = lVar17 + -1;
                      uVar11 = uVar11 ^ uVar24 ^ *puVar14 & uVar11;
                      uVar24 = uVar11 & uVar24;
                    } while (lVar17 != 0);
                    if ((uVar5 == 2) &&
                       (uVar5 = uVar16 & (uVar11 ^ 0xffffffff), (uVar5 & uVar5 - 1) == 0)) {
                      param_2[uVar23 * 6 + 8] = (RegExpCompiler)0x1;
                    }
                  }
                  uVar7 = (undefined2)uVar24;
                  *(short *)pRVar15 = (short)uVar11;
                  pRVar15 = param_2 + uVar23 * 6;
                }
                *(undefined2 *)(pRVar15 + 6) = uVar7;
              }
              uVar23 = uVar23 + 1;
              if (*(int *)param_2 == (int)uVar23) {
                return;
              }
              lVar18 = lVar18 + 1;
            } while ((lVar18 < iVar4) && (lVar18 < iVar8));
          }
        }
        else {
          uVar23 = (ulong)iVar22;
          plVar9 = (long *)CharacterSet::ranges
                                     ((CharacterSet *)(lVar26 + 8),*(Zone **)(param_1 + 0x30));
          if ((*(byte *)(lVar26 + 0x1c) & 1) == 0) {
            puVar13 = (ushort *)*plVar9;
            uVar10 = 0;
            uVar24 = 1;
            while ((int)uVar16 < *(int *)puVar13) {
              uVar10 = uVar10 + 1;
              puVar13 = puVar13 + 4;
              uVar24 = uVar24 + 1;
              if (uVar10 == *(uint *)((long)plVar9 + 0xc)) {
                param_2[0x24] = (RegExpCompiler)0x1;
LAB_0153db94:
                param_2[uVar23 * 6 + 8] = (RegExpCompiler)0x0;
                return;
              }
            }
            uVar3 = *puVar13;
            uVar5 = uVar16;
            if ((*(uint *)(puVar13 + 2) & 0xffff) <= uVar16) {
              uVar5 = *(uint *)(puVar13 + 2);
            }
            uVar11 = uVar5 & 0xffff ^ (uint)uVar3;
            if ((uVar11 + uVar3 == (uVar5 & 0xffff)) && ((uVar11 + 1 & uVar11) == 0)) {
              param_2[uVar23 * 6 + 8] = (RegExpCompiler)0x1;
            }
            uVar11 = uVar11 | uVar11 >> 1;
            iVar8 = *(int *)((long)plVar9 + 0xc);
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar20 = ~uVar11;
            uVar19 = (undefined2)uVar20;
            uVar5 = (uint)uVar3 & (uVar11 ^ 0xffffffff);
            uVar7 = (undefined2)uVar5;
            if ((int)uVar10 + 1 < iVar8) {
              lVar18 = 0;
              do {
                puVar13 = (ushort *)(*plVar9 + (ulong)uVar24 * 8 + lVar18 * 8);
                uVar3 = *puVar13;
                if (uVar3 <= uVar16) {
                  uVar1 = *(uint *)(puVar13 + 2);
                  param_2[uVar23 * 6 + 8] = (RegExpCompiler)0x0;
                  iVar8 = *(int *)((long)plVar9 + 0xc);
                  uVar11 = uVar16;
                  if ((uVar1 & 0xffff) <= uVar16) {
                    uVar11 = uVar1;
                  }
                  uVar11 = uVar11 & 0xffff ^ (uint)uVar3;
                  uVar11 = uVar11 | uVar11 >> 1;
                  uVar11 = uVar11 | uVar11 >> 2;
                  uVar11 = uVar11 | uVar11 >> 4;
                  uVar11 = uVar11 | uVar11 >> 8;
                  uVar20 = uVar20 & (uVar11 ^ 0xffffffff);
                  uVar20 = uVar20 ^ uVar5 & (uVar11 ^ 0xffffffff) ^ uVar20 & uVar3;
                  uVar5 = uVar5 & uVar20;
                }
                uVar7 = (undefined2)uVar5;
                uVar19 = (undefined2)uVar20;
                lVar18 = lVar18 + 1;
              } while ((int)uVar10 + (int)lVar18 + 1 < iVar8);
            }
            *(undefined2 *)(param_2 + (long)iVar22 * 6 + 4) = uVar19;
          }
          else {
            uVar7 = 0;
            *(undefined2 *)(param_2 + (long)iVar22 * 6 + 4) = 0;
          }
          *(undefined2 *)(param_2 + uVar23 * 6 + 6) = uVar7;
          uVar23 = (ulong)(iVar22 + 1U);
          if (iVar22 + 1U == *(uint *)param_2) {
            return;
          }
        }
        plVar9 = *(long **)(param_1 + 0x40);
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)((long)plVar9 + 0xc));
    }
    if (param_2[0x24] == (RegExpCompiler)0x0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,uVar6,uVar23 & 0xffffffff,1);
    }
  }
  return;
}

