
/* cocos2d::renderer::RenderFlow::calculateWorldMatrix() */

void __thiscall cocos2d::renderer::RenderFlow::calculateWorldMatrix(RenderFlow *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar9 = *(long *)(this + 0x28);
  lVar6 = *(long *)(this + 0x30) - lVar9;
  if (lVar6 == 0) {
    return;
  }
  uVar10 = 0;
  while( true ) {
    plVar11 = (long *)(lVar9 + uVar10 * 0x18);
    lVar9 = *plVar11;
    lVar7 = plVar11[1] - lVar9;
    if (lVar7 != 0) break;
LAB_0092577c:
    uVar10 = uVar10 + 1;
    if ((ulong)((lVar6 >> 3) * -0x5555555555555555) <= uVar10) {
      return;
    }
    lVar9 = *(long *)(this + 0x28);
  }
  lVar12 = 0;
  uVar13 = 1;
  do {
    puVar1 = (undefined8 *)(lVar9 + lVar12);
    uVar5 = *(uint *)*puVar1;
    if ((uint *)puVar1[1] == (uint *)0x0) {
      if ((uVar5 & 8) != 0) {
        puVar1 = (undefined8 *)(lVar9 + lVar12);
        puVar2 = (undefined8 *)puVar1[4];
        puVar4 = (undefined8 *)puVar1[5];
        uVar14 = puVar2[4];
        uVar16 = puVar2[7];
        uVar15 = puVar2[6];
        uVar18 = puVar2[1];
        uVar17 = *puVar2;
        uVar20 = puVar2[3];
        uVar19 = puVar2[2];
        puVar4[5] = puVar2[5];
        puVar4[4] = uVar14;
        puVar4[7] = uVar16;
        puVar4[6] = uVar15;
        puVar4[1] = uVar18;
        *puVar4 = uVar17;
        puVar4[3] = uVar20;
        puVar4[2] = uVar19;
        *(uint *)*puVar1 = *(uint *)*puVar1 & 0xbffffff7 | 0x40000000;
      }
      if ((uVar5 >> 5 & 1) != 0) {
        **(undefined1 **)(lVar9 + lVar12 + 0x38) = **(undefined1 **)(lVar9 + lVar12 + 0x30);
        goto LAB_00925758;
      }
    }
    else {
      uVar8 = *(uint *)puVar1[1];
      if ((uVar8 & 0x40000000) != 0 || (uVar5 & 8) != 0) {
        puVar2 = (undefined8 *)(lVar9 + lVar12);
        Mat4::multiply((Mat4 *)puVar2[2],(Mat4 *)puVar2[4],(Mat4 *)puVar2[5]);
        *(uint *)*puVar2 = *(uint *)*puVar2 & 0xbffffff7 | 0x40000000;
        uVar8 = *(uint *)puVar1[1];
      }
      if (((uVar5 >> 5 & 1) != 0) || ((int)uVar8 < 0)) {
        lVar3 = lVar9 + lVar12;
        **(undefined1 **)(lVar3 + 0x38) =
             (char)(int)((float)((uint)**(byte **)(lVar3 + 0x18) * (uint)**(byte **)(lVar3 + 0x30))
                        / 255.0);
LAB_00925758:
        **(uint **)(lVar9 + lVar12) = **(uint **)(lVar9 + lVar12) & 0x7fffffdf | 0x80000000;
      }
    }
    if ((ulong)(lVar7 >> 6) <= uVar13) goto LAB_0092577c;
    lVar9 = *plVar11;
    uVar13 = uVar13 + 1;
    lVar12 = lVar12 + 0x40;
  } while( true );
}

