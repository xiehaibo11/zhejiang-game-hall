
/* v8::internal::TextNode::FillInBMInfo(v8::internal::Isolate*, int, int,
   v8::internal::BoyerMooreLookahead*, bool) */

void __thiscall
v8::internal::TextNode::FillInBMInfo
          (TextNode *this,Isolate *param_1,int param_2,int param_3,BoyerMooreLookahead *param_4,
          bool param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint local_78 [4];
  uint local_68;
  uint uStack_64;
  
  iVar5 = *(int *)param_4;
  if (iVar5 <= param_2) {
    return;
  }
  plVar7 = *(long **)(this + 0x40);
  uVar12 = (ulong)(uint)param_2;
  if (0 < *(int *)((long)plVar7 + 0xc)) {
    uVar1 = *(uint *)(param_4 + 0x10);
    lVar15 = 0;
    bVar8 = true;
    uVar12 = (ulong)(uint)param_2;
    do {
      if (!bVar8) goto joined_r0x01543320;
      lVar10 = *plVar7 + lVar15 * 0x10;
      lVar9 = *(long *)(lVar10 + 8);
      iVar11 = (int)uVar12;
      if (*(int *)(lVar10 + 4) == 0) {
        if (0 < *(int *)(lVar9 + 0x10)) {
          if (iVar11 < iVar5) {
            lVar10 = 0;
            uVar12 = (ulong)iVar11;
            do {
              uVar2 = *(ushort *)(*(long *)(lVar9 + 8) + lVar10 * 2);
              uVar14 = (ulong)uVar2;
              if ((*(byte *)(lVar9 + 0x18) >> 1 & 1) == 0) {
                if (((int)(uint)uVar2 <= (int)uVar1) &&
                   (uVar13 = (uint)uVar2, (int)uVar13 <= *(int *)(param_4 + 0x10))) {
                  local_78[0] = uVar13;
                  local_78[1] = uVar13;
                  BoyerMoorePositionInfo::SetInterval
                            (*(BoyerMoorePositionInfo **)(**(long **)(param_4 + 0x18) + uVar12 * 8),
                             (Interval *)local_78);
                }
              }
              else {
                uVar13 = (uint)uVar2;
                iVar5 = *(int *)(param_4 + 0x10);
                if (*(uint *)(param_1 + (ulong)(byte)uVar2 * 8 + 0x9e18) == uVar13) {
                  if (*(int *)(param_1 + (ulong)(byte)uVar2 * 8 + 0x9e1c) == 0) goto LAB_015431c4;
                  local_78[0] = *(int *)(param_1 + (ulong)(byte)uVar2 * 8 + 0x9e1c) + uVar13;
LAB_015431c8:
                  uVar3 = 1;
                }
                else {
                  local_68 = CONCAT31(local_68._1_3_,1);
                  uVar3 = unibrow::Ecma262UnCanonicalize::Convert
                                    (uVar13,0,local_78,(bool *)&local_68);
                  if (local_68._0_1_ == false) {
                    if (uVar3 == 0) goto LAB_015431c4;
                  }
                  else {
                    if (uVar3 != 1) {
                      *(ulong *)(param_1 + (uVar14 & 0xff) * 8 + 0x9e18) = uVar14;
LAB_015431c4:
                      local_78[0] = uVar13;
                      goto LAB_015431c8;
                    }
                    *(ulong *)(param_1 + (uVar14 & 0xff) * 8 + 0x9e18) =
                         uVar14 | (ulong)(local_78[0] - uVar13) << 0x20;
                  }
                }
                if (iVar5 == 0xff) {
                  if ((int)uVar3 < 1) goto LAB_01543220;
                  uVar14 = (ulong)uVar3;
                  puVar4 = local_78;
                  uVar13 = 0;
                  do {
                    uVar3 = uVar13;
                    if (*puVar4 < 0x100) {
                      uVar3 = uVar13 + 1;
                      local_78[(int)uVar13] = *puVar4;
                    }
                    uVar14 = uVar14 - 1;
                    puVar4 = puVar4 + 1;
                    uVar13 = uVar3;
                  } while (uVar14 != 0);
                }
                if (0 < (int)uVar3) {
                  uVar14 = (ulong)uVar3;
                  puVar4 = local_78;
                  do {
                    uVar13 = *puVar4;
                    if ((int)uVar13 <= *(int *)(param_4 + 0x10)) {
                      local_68 = uVar13;
                      uStack_64 = uVar13;
                      BoyerMoorePositionInfo::SetInterval
                                (*(BoyerMoorePositionInfo **)
                                  (**(long **)(param_4 + 0x18) + uVar12 * 8),(Interval *)&local_68);
                    }
                    uVar14 = uVar14 - 1;
                    puVar4 = puVar4 + 1;
                  } while (uVar14 != 0);
                }
              }
LAB_01543220:
              lVar10 = lVar10 + 1;
              uVar12 = uVar12 + 1;
              if (*(int *)(lVar9 + 0x10) <= lVar10) goto LAB_0154327c;
              if ((long)*(int *)param_4 <= (long)uVar12) break;
            } while( true );
          }
          goto joined_r0x01543320;
        }
      }
      else {
        plVar7 = (long *)CharacterSet::ranges((CharacterSet *)(lVar9 + 8),*(Zone **)(this + 0x30));
        if ((*(byte *)(lVar9 + 0x1c) & 1) == 0) {
          iVar5 = *(int *)((long)plVar7 + 0xc);
          if (0 < iVar5) {
            lVar9 = 0;
            lVar10 = 0;
            do {
              uVar13 = *(uint *)(*plVar7 + lVar9);
              if ((int)uVar13 <= (int)uVar1) {
                uVar3 = *(uint *)(*plVar7 + lVar9 + 4);
                uStack_64 = uVar1;
                if ((int)uVar3 <= (int)uVar1) {
                  uStack_64 = uVar3;
                }
                local_68 = uVar13;
                uVar3 = *(uint *)(param_4 + 0x10);
                if ((int)uVar13 <= (int)uVar3) {
                  if ((int)uVar3 < (int)uStack_64) {
                    puVar4 = local_78;
                    local_78[0] = uVar13;
                    local_78[1] = uVar3;
                  }
                  else {
                    puVar4 = &local_68;
                  }
                  BoyerMoorePositionInfo::SetInterval
                            (*(BoyerMoorePositionInfo **)
                              (**(long **)(param_4 + 0x18) + (long)iVar11 * 8),(Interval *)puVar4);
                }
                iVar5 = *(int *)((long)plVar7 + 0xc);
              }
              lVar10 = lVar10 + 1;
              lVar9 = lVar9 + 8;
            } while (lVar10 < iVar5);
          }
        }
        else {
          puVar6 = *(undefined8 **)(**(long **)(param_4 + 0x18) + (long)iVar11 * 8);
          *(undefined4 *)((long)puVar6 + 0x14) = 3;
          if (*(int *)(puVar6 + 2) != 0x80) {
            *(undefined4 *)(puVar6 + 2) = 0x80;
            *puVar6 = 0xffffffffffffffff;
            puVar6[1] = 0xffffffffffffffff;
          }
        }
        uVar12 = (ulong)(iVar11 + 1);
      }
LAB_0154327c:
      plVar7 = *(long **)(this + 0x40);
      iVar5 = *(int *)param_4;
      lVar15 = lVar15 + 1;
      bVar8 = (int)uVar12 < iVar5;
    } while (lVar15 < *(int *)((long)plVar7 + 0xc));
    if (iVar5 <= (int)uVar12) goto joined_r0x01543320;
  }
  (**(code **)(**(long **)(this + 0x38) + 0x48))
            (*(long **)(this + 0x38),param_1,uVar12 & 0xffffffff,param_3 + -1,param_4,1);
joined_r0x01543320:
  if (param_2 == 0) {
    *(BoyerMooreLookahead **)(this + (ulong)param_5 * 8 + 0x20) = param_4;
  }
  return;
}

