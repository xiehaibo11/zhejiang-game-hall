
/* cocos2d::renderer::RenderFlow::calculateLevelWorldMatrix(int, int) */

void cocos2d::renderer::RenderFlow::calculateLevelWorldMatrix(int param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar8 = (ulong)(uint)param_1;
  if (*(ulong *)(uVar8 + 0x20) <
      (ulong)((*(long *)(uVar8 + 0x30) - *(long *)(uVar8 + 0x28) >> 3) * -0x5555555555555555)) {
    plVar12 = (long *)(*(long *)(uVar8 + 0x28) + *(ulong *)(uVar8 + 0x20) * 0x18);
    lVar13 = *plVar12;
    uVar8 = plVar12[1] - lVar13 >> 6;
    if (param_2 < 0) {
      uVar11 = 0;
      if (uVar8 != 0) goto LAB_009254d4;
    }
    else {
      uVar11 = (uVar8 >> 1) * (long)param_2;
      uVar2 = uVar8 >> 1;
      if (param_2 != 0) {
        uVar2 = uVar8;
      }
      uVar8 = uVar2;
      if (uVar11 < uVar2) {
LAB_009254d4:
        lVar14 = (uVar8 - 1) - uVar11;
        uVar8 = uVar11 << 6 | 0x20;
        do {
          puVar3 = *(uint **)(lVar13 + uVar8 + -0x20);
          puVar4 = *(uint **)(lVar13 + uVar8 + -0x18);
          uVar6 = *puVar3;
          if (puVar4 == (uint *)0x0) {
            if ((uVar6 & 8) != 0) {
              puVar1 = *(undefined8 **)(lVar13 + uVar8);
              puVar5 = (undefined8 *)((long *)(lVar13 + uVar8))[1];
              uVar15 = puVar1[4];
              uVar17 = puVar1[7];
              uVar16 = puVar1[6];
              uVar19 = puVar1[1];
              uVar18 = *puVar1;
              uVar21 = puVar1[3];
              uVar20 = puVar1[2];
              puVar5[5] = puVar1[5];
              puVar5[4] = uVar15;
              puVar5[7] = uVar17;
              puVar5[6] = uVar16;
              puVar5[1] = uVar19;
              *puVar5 = uVar18;
              puVar5[3] = uVar21;
              puVar5[2] = uVar20;
              *puVar3 = *puVar3 & 0xbffffff7 | 0x40000000;
            }
            if ((uVar6 >> 5 & 1) != 0) {
              puVar9 = *(undefined1 **)(lVar13 + uVar8 + 0x18);
              uVar10 = **(undefined1 **)(lVar13 + uVar8 + 0x10);
              goto LAB_009255c0;
            }
          }
          else {
            uVar7 = *puVar4;
            if ((uVar7 & 0x40000000) != 0 || (uVar6 & 8) != 0) {
              puVar1 = (undefined8 *)(lVar13 + uVar8);
              Mat4::multiply((Mat4 *)puVar1[-2],(Mat4 *)*puVar1,(Mat4 *)puVar1[1]);
              *puVar3 = *puVar3 & 0xbffffff7 | 0x40000000;
              uVar7 = *puVar4;
            }
            if (((uVar6 >> 5 & 1) != 0) || ((int)uVar7 < 0)) {
              lVar13 = lVar13 + uVar8;
              puVar9 = *(undefined1 **)(lVar13 + 0x18);
              uVar10 = (undefined1)
                       (int)((float)((uint)**(byte **)(lVar13 + -8) *
                                    (uint)**(byte **)(lVar13 + 0x10)) / 255.0);
LAB_009255c0:
              *puVar9 = uVar10;
              *puVar3 = *puVar3 & 0x7fffffdf | 0x80000000;
            }
          }
          if (lVar14 == 0) {
            return;
          }
          lVar13 = *plVar12;
          lVar14 = lVar14 + -1;
          uVar8 = uVar8 + 0x40;
        } while( true );
      }
    }
  }
  return;
}

