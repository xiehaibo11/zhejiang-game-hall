
/* dragonBones::JSONDataParser::_parseCacheActionFrame(dragonBones::ActionFrame&) */

ulong __thiscall
dragonBones::JSONDataParser::_parseCacheActionFrame(JSONDataParser *this,ActionFrame *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar6 = *(long *)(this + 0x168);
  uVar11 = *(long *)(this + 0x170) - lVar6;
  uVar14 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar13 = (long)uVar11 >> 1;
  uVar12 = (long)uVar14 >> 2;
                    /* try { // try from 00d8d6d8 to 00e8d6df has its CatchHandler @ 00d8dc4c */
  uVar2 = uVar12 + uVar13 + 2;
  if (uVar2 < uVar13 || uVar2 - uVar13 == 0) {
    if (uVar2 < uVar13) {
      *(ulong *)(this + 0x170) = lVar6 + uVar2 * 2;
    }
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),uVar2 - uVar13);
    lVar6 = *(long *)(this + 0x168);
  }
  uVar4 = *(undefined4 *)param_1;
                    /* try { // try from 00d8d710 to 00e8d717 has its CatchHandler @ 00d8dc48 */
  puVar3 = (undefined2 *)(lVar6 + uVar13 * 2);
  puVar3[1] = (short)(uVar14 >> 2);
  *puVar3 = (short)uVar4;
  if (uVar14 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    uVar2 = uVar12;
    if (uVar12 < 2) {
      uVar2 = 1;
    }
    if (uVar2 < 8) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar2 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(lVar7 + 0x10);
      puVar9 = (undefined8 *)(lVar6 + uVar13 * 2 + 0xc);
                    /* try { // try from 00d8d74c to 00e8d753 has its CatchHandler @ 00d8dc40 */
      uVar10 = uVar14;
      do {
        puVar1 = puVar8 + -2;
        puVar5 = puVar8 + -1;
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar10 = uVar10 - 8;
        puVar9[-1] = CONCAT26((short)((ulong)*puVar5 >> 0x20),
                              CONCAT24((short)*puVar5,
                                       CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)));
        *puVar9 = CONCAT26((short)((ulong)uVar16 >> 0x20),
                           CONCAT24((short)uVar16,
                                    CONCAT22((short)((ulong)uVar15 >> 0x20),(short)uVar15)));
        puVar9 = puVar9 + 2;
      } while (uVar10 != 0);
      if (uVar2 == uVar14) goto LAB_00d8d790;
    }
    do {
      *(short *)(lVar6 + (uVar13 + 2) * 2 + uVar14 * 2) = (short)*(undefined4 *)(lVar7 + uVar14 * 4)
      ;
                    /* try { // try from 00d8d784 to 00e8d78b has its CatchHandler @ 00d8dc3c */
      uVar14 = uVar14 + 1;
                    /* try { // try from 00d8d78c to 00e8d7cf has its CatchHandler @ 00d8dc78 */
    } while (uVar14 < uVar12);
  }
LAB_00d8d790:
  return uVar11 >> 1;
}

