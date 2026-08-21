
/* dragonBones::JSONDataParser::_parseCacheActionFrame(dragonBones::ActionFrame&) */

ulong __thiscall
dragonBones::JSONDataParser::_parseCacheActionFrame(JSONDataParser *this,ActionFrame *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar8 = *(long *)(this + 0x168);
  uVar13 = *(long *)(this + 0x170) - lVar8;
  uVar16 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar15 = (long)uVar13 >> 1;
  uVar14 = (long)uVar16 >> 2;
  uVar4 = uVar14 + uVar15 + 2;
  if (uVar4 < uVar15 || uVar4 - uVar15 == 0) {
    if (uVar4 < uVar15) {
      *(ulong *)(this + 0x170) = lVar8 + uVar4 * 2;
    }
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),uVar4 - uVar15);
    lVar8 = *(long *)(this + 0x168);
  }
  uVar6 = *(undefined4 *)param_1;
  puVar5 = (undefined2 *)(lVar8 + uVar15 * 2);
  puVar5[1] = (short)(uVar16 >> 2);
  *puVar5 = (short)uVar6;
  if (uVar16 != 0) {
    lVar9 = *(long *)(param_1 + 8);
    uVar4 = uVar14;
    if (uVar14 < 2) {
      uVar4 = 1;
    }
    if (uVar4 < 8) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar4 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)(lVar9 + 0x10);
      puVar11 = (undefined8 *)(lVar8 + uVar15 * 2 + 0xc);
      uVar12 = uVar16;
      do {
        puVar3 = puVar10 + -2;
        puVar7 = puVar10 + -1;
        uVar18 = puVar10[1];
        uVar17 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar12 = uVar12 - 8;
        puVar11[-1] = CONCAT26((short)((ulong)*puVar7 >> 0x20),
                               CONCAT24((short)*puVar7,
                                        CONCAT22((short)((ulong)*puVar3 >> 0x20),(short)*puVar3)));
        *puVar11 = CONCAT26((short)((ulong)uVar18 >> 0x20),
                            CONCAT24((short)uVar18,
                                     CONCAT22((short)((ulong)uVar17 >> 0x20),(short)uVar17)));
        puVar11 = puVar11 + 2;
      } while (uVar12 != 0);
      if (uVar4 == uVar16) goto LAB_00d3fae8;
    }
    do {
      lVar2 = uVar16 * 4;
      lVar1 = uVar16 * 2;
      uVar16 = uVar16 + 1;
      *(short *)(lVar8 + uVar15 * 2 + lVar1 + 4) = (short)*(undefined4 *)(lVar9 + lVar2);
    } while (uVar16 < uVar14);
  }
LAB_00d3fae8:
  return uVar13 >> 1;
}

