
/* dragonBones::JSONDataParser::_parseActionFrame(dragonBones::ActionFrame const&, unsigned int,
   unsigned int) */

ulong dragonBones::JSONDataParser::_parseActionFrame(ActionFrame *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar7 = (ulong)param_2;
                    /* try { // try from 00d96afc to 00e96b17 has its CatchHandler @ 00d96e18 */
  lVar5 = *(long *)(param_1 + 0x168);
  uVar10 = *(long *)(param_1 + 0x170) - lVar5;
  uVar13 = *(long *)(uVar7 + 0x10) - *(long *)(uVar7 + 8);
  uVar12 = (long)uVar10 >> 1;
                    /* try { // try from 00d96b1c to 00e96b2b has its CatchHandler @ 00d96e1c */
  uVar11 = (long)uVar13 >> 2;
  uVar2 = uVar11 + uVar12 + 2;
  if (uVar2 < uVar12 || uVar2 - uVar12 == 0) {
    if (uVar2 < uVar12) {
      *(ulong *)(param_1 + 0x170) = lVar5 + uVar2 * 2;
    }
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),uVar2 - uVar12);
    lVar5 = *(long *)(param_1 + 0x168);
  }
  puVar3 = (undefined2 *)(lVar5 + uVar12 * 2);
  *puVar3 = (short)param_3;
  puVar3[1] = (short)(uVar13 >> 2);
  if (uVar13 != 0) {
    lVar6 = *(long *)(uVar7 + 8);
    uVar2 = uVar11;
    if (uVar11 < 2) {
      uVar2 = 1;
    }
    if (uVar2 < 8) {
      uVar7 = 0;
    }
    else {
                    /* try { // try from 00d96b80 to 00e96be7 has its CatchHandler @ 00d96dd4 */
      uVar7 = uVar2 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(lVar6 + 0x10);
      puVar9 = (undefined8 *)(lVar5 + uVar12 * 2 + 0xc);
      uVar13 = uVar7;
      do {
        puVar1 = puVar8 + -2;
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar13 = uVar13 - 8;
        puVar9[-1] = CONCAT26((short)((ulong)*puVar4 >> 0x20),
                              CONCAT24((short)*puVar4,
                                       CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)));
        *puVar9 = CONCAT26((short)((ulong)uVar15 >> 0x20),
                           CONCAT24((short)uVar15,
                                    CONCAT22((short)((ulong)uVar14 >> 0x20),(short)uVar14)));
        puVar9 = puVar9 + 2;
      } while (uVar13 != 0);
      if (uVar2 == uVar7) goto LAB_00d96bd4;
    }
    do {
      *(short *)(lVar5 + (uVar12 + 2) * 2 + uVar7 * 2) = (short)*(undefined4 *)(lVar6 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar11);
  }
LAB_00d96bd4:
  return uVar10 >> 1;
}

