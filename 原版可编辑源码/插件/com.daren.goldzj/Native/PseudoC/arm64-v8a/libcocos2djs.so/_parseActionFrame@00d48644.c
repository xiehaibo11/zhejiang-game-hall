
/* dragonBones::JSONDataParser::_parseActionFrame(dragonBones::ActionFrame const&, unsigned int,
   unsigned int) */

ulong dragonBones::JSONDataParser::_parseActionFrame(ActionFrame *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = (ulong)param_2;
  lVar7 = *(long *)(param_1 + 0x168);
  uVar12 = *(long *)(param_1 + 0x170) - lVar7;
  uVar15 = *(long *)(uVar9 + 0x10) - *(long *)(uVar9 + 8);
  uVar14 = (long)uVar12 >> 1;
  uVar13 = (long)uVar15 >> 2;
  uVar4 = uVar13 + uVar14 + 2;
  if (uVar4 < uVar14 || uVar4 - uVar14 == 0) {
    if (uVar4 < uVar14) {
      *(ulong *)(param_1 + 0x170) = lVar7 + uVar4 * 2;
    }
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),uVar4 - uVar14);
    lVar7 = *(long *)(param_1 + 0x168);
  }
  puVar5 = (undefined2 *)(lVar7 + uVar14 * 2);
  *puVar5 = (short)param_3;
  puVar5[1] = (short)(uVar15 >> 2);
  if (uVar15 != 0) {
    lVar8 = *(long *)(uVar9 + 8);
    uVar4 = uVar13;
    if (uVar13 < 2) {
      uVar4 = 1;
    }
    if (uVar4 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar4 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)(lVar8 + 0x10);
      puVar11 = (undefined8 *)(lVar7 + uVar14 * 2 + 0xc);
      uVar15 = uVar9;
      do {
        puVar3 = puVar10 + -2;
        puVar6 = puVar10 + -1;
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar15 = uVar15 - 8;
        puVar11[-1] = CONCAT26((short)((ulong)*puVar6 >> 0x20),
                               CONCAT24((short)*puVar6,
                                        CONCAT22((short)((ulong)*puVar3 >> 0x20),(short)*puVar3)));
        *puVar11 = CONCAT26((short)((ulong)uVar17 >> 0x20),
                            CONCAT24((short)uVar17,
                                     CONCAT22((short)((ulong)uVar16 >> 0x20),(short)uVar16)));
        puVar11 = puVar11 + 2;
      } while (uVar15 != 0);
      if (uVar4 == uVar9) goto LAB_00d48734;
    }
    do {
      lVar2 = uVar9 * 4;
      lVar1 = uVar9 * 2;
      uVar9 = uVar9 + 1;
      *(short *)(lVar7 + uVar14 * 2 + lVar1 + 4) = (short)*(undefined4 *)(lVar8 + lVar2);
    } while (uVar9 < uVar13);
  }
LAB_00d48734:
  return uVar12 >> 1;
}

