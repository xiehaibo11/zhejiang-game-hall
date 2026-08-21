
uint FUN_01099c50(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  short sVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  uint local_90;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
                    /* try { // try from 01099c5c to 01199c67 has its CatchHandler @ 01099d04 */
                    /* try { // try from 01099c68 to 01199c6f has its CatchHandler @ 01099cf4 */
                    /* try { // try from 01099c70 to 01199c7f has its CatchHandler @ 01099ce4 */
                    /* try { // try from 01099c80 to 01199d33 has its CatchHandler @ 01099bc4 */
  if (*(ulong *)(param_2 + 0x108) < param_1 + 4U) {
    ft_validator_error(param_2,8);
  }
  uVar16 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if (*(ulong *)(param_2 + 0x108) < param_1 + (ulong)uVar16) {
    if (*(int *)(param_2 + 0x110) != 0) {
      ft_validator_error(param_2,8);
    }
    uVar16 = (int)*(undefined8 *)(param_2 + 0x108) - (int)param_1;
  }
  if (uVar16 < 0x10) {
    ft_validator_error(param_2,8);
  }
  bVar6 = *(byte *)(param_1 + 7);
                    /* catch() { ... } // from try @ 01099c70 with catch @ 01099ce4 */
  bVar7 = *(byte *)(param_1 + 6);
                    /* catch() { ... } // from try @ 01099c68 with catch @ 01099cf4 */
  if ((1 < *(uint *)(param_2 + 0x110)) && ((bVar6 & 1) != 0)) {
                    /* catch() { ... } // from try @ 01099c5c with catch @ 01099d04 */
                    /* catch() { ... } // from try @ 01099c04 with catch @ 01099d08 */
    ft_validator_error(param_2,8);
  }
  uVar20 = bVar6 & 0xfffe | (uint)bVar7 << 8;
  uVar18 = (ulong)uVar20;
                    /* catch() { ... } // from try @ 01099bfc with catch @ 01099d10 */
                    /* catch() { ... } // from try @ 01099c20 with catch @ 01099d18 */
  if (uVar16 < uVar20 * 4 + 0x10) {
    ft_validator_error(param_2,8);
  }
  uVar14 = (uint)(ushort)(CONCAT11(bVar7,bVar6) >> 1);
                    /* catch() { ... } // from try @ 01099d88 with catch @ 01099d34
                       catch() { ... } // from try @ 01099e0c with catch @ 01099d34 */
  if (1 < *(uint *)(param_2 + 0x110)) {
    bVar6 = *(byte *)(param_1 + 9);
    bVar7 = *(byte *)(param_1 + 0xb);
    bVar8 = *(byte *)(param_1 + 0xd);
    bVar9 = *(byte *)(param_1 + 8);
    uVar10 = *(undefined1 *)(param_1 + 0xc);
    if (((bVar8 | bVar6) & 1) != 0) {
      ft_validator_error(param_2,8);
    }
    uVar23 = (uint)(ushort)(CONCAT11(bVar9,bVar6) >> 1);
                    /* try { // try from 01099d80 to 01199d87 has its CatchHandler @ 01099e64 */
                    /* try { // try from 01099d88 to 01199deb has its CatchHandler @ 01099d34 */
    if ((((uVar23 != 1 << (ulong)(bVar7 & 0x1f)) || ((bVar6 & 0xfffe | (uint)bVar9 << 8) < uVar14))
        || (uVar14 < uVar23)) || (uVar23 + (ushort)(CONCAT11(uVar10,bVar8) >> 1) != uVar14)) {
      ft_validator_error(param_2,8);
    }
  }
  local_70 = (undefined1 *)(param_1 + 0xe);
  if ((1 < *(uint *)(param_2 + 0x110)) &&
     (CONCAT11(local_70[uVar20 - 2],(local_70 + (uVar20 - 2))[1]) != -1)) {
                    /* try { // try from 01099dec to 01199df3 has its CatchHandler @ 01099ea0 */
                    /* try { // try from 01099df4 to 01199dff has its CatchHandler @ 01099e90 */
    ft_validator_error(param_2,8);
  }
  if (uVar14 == 0) {
    local_90 = 0;
  }
  else {
                    /* try { // try from 01099e00 to 01199e0b has its CatchHandler @ 01099e80 */
    local_90 = 0;
                    /* try { // try from 01099e0c to 01199eb3 has its CatchHandler @ 01099d34 */
    local_78 = (undefined1 *)(param_1 + uVar18 + 0x10);
    local_80 = local_78 + uVar18;
    puVar1 = local_80 + uVar18;
    uVar20 = 0;
    lVar24 = param_1 + uVar18 * 3 + 0x11;
    puVar17 = puVar1;
    uVar23 = 0;
    uVar21 = 0;
    do {
      uVar3 = (uint)CONCAT11(*local_78,local_78[1]);
                    /* catch() { ... } // from try @ 01099d80 with catch @ 01099e64 */
      uVar4 = (uint)CONCAT11(*local_70,local_70[1]);
      uVar10 = *local_80;
      uVar11 = local_80[1];
                    /* catch() { ... } // from try @ 01099e00 with catch @ 01099e80 */
      uVar12 = *puVar17;
      uVar13 = puVar17[1];
                    /* catch() { ... } // from try @ 01099df4 with catch @ 01099e90 */
      if (uVar4 < uVar3) {
        ft_validator_error(param_2,8);
      }
                    /* catch() { ... } // from try @ 01099dec with catch @ 01099ea0 */
      uVar5 = (uint)CONCAT11(uVar12,uVar13);
      uVar19 = (ulong)uVar5;
                    /* try { // try from 01099eb4 to 01199eeb has its CatchHandler @ 01099eb4
                       catch() { ... } // from try @ 01099eb4 with catch @ 01099eb4
                       catch() { ... } // from try @ 01099f5c with catch @ 01099eb4 */
      if ((uVar20 != 0) && (uVar3 <= uVar23)) {
        if (*(int *)(param_2 + 0x110) == 0) {
                    /* try { // try from 01099eec to 01199ef3 has its CatchHandler @ 01099fe8 */
                    /* try { // try from 01099ef4 to 01199efb has its CatchHandler @ 01099fe0 */
          if ((uVar3 < uVar21) || (uVar4 < uVar23)) {
            local_90 = local_90 | 1;
          }
          else {
                    /* try { // try from 01099f00 to 01199f13 has its CatchHandler @ 01099fd8 */
            local_90 = local_90 | 2;
          }
        }
        else {
          ft_validator_error(param_2,8);
        }
      }
      local_78 = local_78 + 2;
      local_70 = local_70 + 2;
      local_80 = local_80 + 2;
      if (uVar5 != 0) {
                    /* try { // try from 01099f4c to 01199f5b has its CatchHandler @ 01099ff0 */
        if (uVar5 == 0xffff) {
                    /* try { // try from 01099f5c to 0119a013 has its CatchHandler @ 01099eb4 */
          if ((((1 < *(uint *)(param_2 + 0x110)) || (uVar20 != uVar14 - 1)) || (uVar3 != 0xffff)) ||
             (uVar4 != 0xffff)) {
            ft_validator_error(param_2,8);
          }
        }
        else {
          puVar2 = puVar17 + uVar19;
          if (*(int *)(param_2 + 0x110) == 0) {
                    /* catch() { ... } // from try @ 01099f14 with catch @ 01099fd4 */
                    /* catch() { ... } // from try @ 01099f00 with catch @ 01099fd8 */
                    /* catch() { ... } // from try @ 01099ef4 with catch @ 01099fe0 */
                    /* catch() { ... } // from try @ 01099eec with catch @ 01099fe8 */
                    /* catch() { ... } // from try @ 01099f4c with catch @ 01099ff0 */
            if ((((uVar20 != uVar14 - 1) || (uVar3 != 0xffff)) || (uVar4 != 0xffff)) &&
               ((puVar2 < puVar1 + uVar18 ||
                (*(undefined1 **)(param_2 + 0x108) < puVar2 + ((uVar4 - uVar3) * 2 + 2)))))
            goto LAB_0109a024;
          }
          else if ((puVar2 < puVar1 + uVar18) ||
                  ((undefined1 *)(param_1 + (ulong)uVar16) < puVar2 + ((uVar4 - uVar3) * 2 + 2))) {
LAB_0109a024:
            ft_validator_error(param_2,8);
          }
          if ((*(int *)(param_2 + 0x110) != 0) &&
             (iVar22 = uVar4 - uVar3, uVar3 <= uVar4 && iVar22 != 0)) {
            do {
              sVar15 = CONCAT11(puVar17[uVar19],*(undefined1 *)(lVar24 + uVar19));
              if ((sVar15 != 0) &&
                 (*(uint *)(param_2 + 0x118) <= (uint)(ushort)(sVar15 + CONCAT11(uVar10,uVar11)))) {
                ft_validator_error(param_2,0x10);
              }
              iVar22 = iVar22 + -1;
              uVar19 = uVar19 + 2;
            } while (iVar22 != 0);
          }
        }
      }
      uVar20 = uVar20 + 1;
      lVar24 = lVar24 + 2;
      puVar17 = puVar17 + 2;
      uVar23 = uVar4;
      uVar21 = uVar3;
    } while (uVar20 != uVar14);
  }
  return local_90;
}

