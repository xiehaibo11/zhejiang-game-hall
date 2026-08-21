
/* btDbvt::collideTV(btDbvtNode const*, btDbvtAabbMm const&, btDbvt::ICollide&) const */

btDbvt * __thiscall
btDbvt::collideTV(btDbvt *this,btDbvtNode *param_1,btDbvtAabbMm *param_2,ICollide *param_3)

{
  bool bVar1;
  uint uVar2;
  btDbvt *pbVar3;
  btDbvt *pbVar4;
  ulong uVar5;
  long lVar6;
  btDbvt *pbVar7;
  ulong uVar8;
  btDbvt *pbVar9;
  btDbvt *pbVar10;
  ulong uVar11;
  uint uVar12;
  btDbvt *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  float *pfVar18;
  btDbvt *pbVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (param_1 != (btDbvtNode *)0x0) {
    fVar23 = *(float *)param_2;
    fVar24 = *(float *)(param_2 + 4);
    fVar25 = *(float *)(param_2 + 8);
    fVar26 = *(float *)(param_2 + 0x10);
    fVar27 = *(float *)(param_2 + 0x14);
    fVar28 = *(float *)(param_2 + 0x18);
    this = (btDbvt *)btAlignedAllocInternal(0x200,0x10);
    *(btDbvtNode **)this = param_1;
    uVar15 = 0x40;
    pbVar3 = this;
    pbVar4 = this;
    pbVar7 = this;
    pbVar9 = this;
    pbVar10 = this;
    pbVar19 = this;
    uVar14 = 1;
    do {
      uVar12 = uVar14 - 1;
      pfVar18 = *(float **)(pbVar9 + (long)(int)uVar12 * 8);
      if (((((*pfVar18 <= fVar26) && (fVar23 <= pfVar18[4])) && (pfVar18[1] <= fVar27)) &&
          ((fVar24 <= pfVar18[5] && (pfVar18[2] <= fVar28)))) && (fVar25 <= pfVar18[6])) {
        if (*(long *)(pfVar18 + 0xc) == 0) {
          this = (btDbvt *)(**(code **)(*(long *)param_3 + 0x18))(param_3,pfVar18);
        }
        else {
          uVar17 = *(undefined8 *)(pfVar18 + 10);
          uVar16 = uVar12;
          if (uVar12 == uVar15) {
            uVar2 = uVar15 << 1;
            if (uVar15 == 0) {
              uVar2 = 1;
            }
            uVar16 = uVar15;
            if ((int)uVar14 <= (int)uVar2) {
              uVar15 = uVar2;
              if (uVar2 == 0) {
                pbVar3 = (btDbvt *)0x0;
                if ((int)uVar14 < 2) goto LAB_01214620;
LAB_012145bc:
                uVar5 = (ulong)(int)uVar12;
                if (uVar12 < 4) {
LAB_012145ec:
                  uVar8 = 0;
                }
                else {
                  uVar8 = uVar5 & 0xfffffffffffffffc;
                  if (uVar8 != 0) {
                    if ((pbVar3 < pbVar9 + uVar5 * 8) && (pbVar10 < pbVar3 + uVar5 * 8))
                    goto LAB_012145ec;
                    pbVar7 = pbVar3 + 0x10;
                    pbVar10 = pbVar9 + 0x10;
                    uVar11 = uVar8;
                    do {
                      pbVar19 = pbVar10 + -8;
                      uVar20 = *(undefined8 *)(pbVar10 + -0x10);
                      uVar22 = *(undefined8 *)(pbVar10 + 8);
                      uVar21 = *(undefined8 *)pbVar10;
                      uVar11 = uVar11 - 4;
                      pbVar10 = pbVar10 + 0x20;
                      *(undefined8 *)(pbVar7 + -8) = *(undefined8 *)pbVar19;
                      *(undefined8 *)(pbVar7 + -0x10) = uVar20;
                      *(undefined8 *)(pbVar7 + 8) = uVar22;
                      *(undefined8 *)pbVar7 = uVar21;
                      pbVar7 = pbVar7 + 0x20;
                    } while (uVar11 != 0);
                    if (uVar8 == uVar5) goto LAB_01214624;
                  }
                }
                lVar6 = uVar5 - uVar8;
                pbVar7 = pbVar9 + uVar8 * 8;
                pbVar9 = pbVar3 + uVar8 * 8;
                do {
                  lVar6 = lVar6 + -1;
                  *(undefined8 *)pbVar9 = *(undefined8 *)pbVar7;
                  pbVar7 = pbVar7 + 8;
                  pbVar9 = pbVar9 + 8;
                } while (lVar6 != 0);
              }
              else {
                this = (btDbvt *)
                       btAlignedAllocInternal
                                 (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
                                  0x10);
                pbVar3 = this;
                if (1 < (int)uVar14) goto LAB_012145bc;
LAB_01214620:
                if (pbVar9 == (btDbvt *)0x0) {
                  pbVar4 = pbVar3;
                  pbVar7 = pbVar3;
                  pbVar9 = pbVar3;
                  pbVar10 = pbVar3;
                  pbVar19 = pbVar3;
                  uVar16 = 0;
                  goto LAB_01214644;
                }
              }
LAB_01214624:
              this = (btDbvt *)btAlignedFreeInternal(pbVar4);
              pbVar4 = pbVar3;
              pbVar7 = pbVar3;
              pbVar9 = pbVar3;
              pbVar10 = pbVar3;
              pbVar19 = pbVar3;
            }
          }
LAB_01214644:
          *(undefined8 *)(pbVar9 + (long)(int)uVar16 * 8) = uVar17;
          uVar17 = *(undefined8 *)(pfVar18 + 0xc);
          pbVar13 = pbVar3;
          if ((uint)((long)(int)uVar16 + 1) == uVar15) {
            uVar14 = uVar15 << 1;
            if (uVar15 == 0) {
              uVar14 = 1;
            }
            if ((int)uVar15 < (int)uVar14) {
              if (uVar14 == 0) {
                pbVar13 = (btDbvt *)0x0;
                if ((int)uVar16 < 0) goto LAB_01214708;
LAB_0121469c:
                uVar5 = (ulong)(int)uVar15;
                if (uVar15 < 4) {
LAB_012146cc:
                  uVar8 = 0;
                }
                else {
                  uVar8 = uVar5 & 0xfffffffffffffffc;
                  if (uVar8 != 0) {
                    if ((pbVar13 < pbVar9 + uVar5 * 8) && (pbVar19 < pbVar13 + uVar5 * 8))
                    goto LAB_012146cc;
                    pbVar4 = pbVar13 + 0x10;
                    pbVar7 = pbVar9 + 0x10;
                    uVar11 = uVar8;
                    do {
                      pbVar10 = pbVar7 + -8;
                      uVar20 = *(undefined8 *)(pbVar7 + -0x10);
                      uVar22 = *(undefined8 *)(pbVar7 + 8);
                      uVar21 = *(undefined8 *)pbVar7;
                      uVar11 = uVar11 - 4;
                      pbVar7 = pbVar7 + 0x20;
                      *(undefined8 *)(pbVar4 + -8) = *(undefined8 *)pbVar10;
                      *(undefined8 *)(pbVar4 + -0x10) = uVar20;
                      *(undefined8 *)(pbVar4 + 8) = uVar22;
                      *(undefined8 *)pbVar4 = uVar21;
                      pbVar4 = pbVar4 + 0x20;
                    } while (uVar11 != 0);
                    if (uVar8 == uVar5) goto LAB_0121470c;
                  }
                }
                lVar6 = uVar5 - uVar8;
                pbVar4 = pbVar9 + uVar8 * 8;
                pbVar7 = pbVar13 + uVar8 * 8;
                do {
                  lVar6 = lVar6 + -1;
                  *(undefined8 *)pbVar7 = *(undefined8 *)pbVar4;
                  pbVar4 = pbVar4 + 8;
                  pbVar7 = pbVar7 + 8;
                } while (lVar6 != 0);
              }
              else {
                this = (btDbvt *)
                       btAlignedAllocInternal
                                 (-(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3
                                  ,0x10);
                pbVar13 = this;
                if (-1 < (int)uVar16) goto LAB_0121469c;
LAB_01214708:
                bVar1 = pbVar9 == (btDbvt *)0x0;
                pbVar4 = pbVar13;
                pbVar7 = pbVar13;
                pbVar9 = pbVar13;
                pbVar10 = pbVar13;
                pbVar19 = pbVar13;
                uVar15 = uVar14;
                if (bVar1) goto LAB_0121472c;
              }
LAB_0121470c:
              this = (btDbvt *)btAlignedFreeInternal(pbVar3);
              pbVar4 = pbVar13;
              pbVar7 = pbVar13;
              pbVar9 = pbVar13;
              pbVar10 = pbVar13;
              pbVar19 = pbVar13;
              uVar15 = uVar14;
            }
          }
LAB_0121472c:
          *(undefined8 *)(pbVar9 + ((long)(int)uVar16 + 1) * 8) = uVar17;
          uVar12 = uVar16 + 2;
          pbVar3 = pbVar13;
        }
      }
      uVar14 = uVar12;
    } while (0 < (int)uVar12);
    if (pbVar9 != (btDbvt *)0x0) {
      pbVar3 = (btDbvt *)btAlignedFreeInternal(pbVar7);
      return pbVar3;
    }
  }
  return this;
}

