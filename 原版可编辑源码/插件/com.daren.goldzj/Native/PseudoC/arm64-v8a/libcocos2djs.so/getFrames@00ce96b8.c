
/* spine::EventTimeline::getFrames() */

void spine::EventTimeline::getFrames(void)

{
  undefined8 *puVar1;
  long in_x0;
  long *plVar2;
  ulong uVar3;
  undefined8 *in_x8;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar11 = *(ulong *)(in_x0 + 0x10);
  *in_x8 = &PTR__Vector_01c8d048;
  in_x8[1] = uVar11;
  lVar12 = *(long *)(in_x0 + 0x18);
  in_x8[2] = lVar12;
  in_x8[3] = 0;
  if (lVar12 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    uVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,lVar12 << 2,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0xc5);
    in_x8[3] = uVar3;
    if (uVar11 != 0) {
      uVar4 = *(ulong *)(in_x0 + 0x20);
      if ((uVar11 < 8) || ((uVar3 < uVar4 + uVar11 * 4 && (uVar4 < uVar3 + uVar11 * 4)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar11 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(uVar3 + 0x10);
        puVar9 = (undefined8 *)(uVar4 + 0x10);
        uVar10 = uVar6;
        do {
          puVar1 = puVar9 + -1;
          uVar13 = puVar9[-2];
          uVar15 = puVar9[1];
          uVar14 = *puVar9;
          uVar10 = uVar10 - 8;
          puVar9 = puVar9 + 4;
          puVar8[-1] = *puVar1;
          puVar8[-2] = uVar13;
          puVar8[1] = uVar15;
          *puVar8 = uVar14;
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
        if (uVar11 == uVar6) {
          return;
        }
      }
      lVar12 = uVar11 - uVar6;
      puVar5 = (undefined4 *)(uVar4 + uVar6 * 4);
      puVar7 = (undefined4 *)(uVar3 + uVar6 * 4);
      do {
        lVar12 = lVar12 + -1;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar12 != 0);
    }
  }
  return;
}

