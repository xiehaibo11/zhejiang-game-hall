
void unzLocateFile(long param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  size_t sVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte local_174 [260];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if ((param_1 == 0) || (sVar11 = strlen((char *)param_2), 0xff < sVar11)) {
    uVar12 = 0xffffff9a;
                    /* try { // try from 00a0b9b0 to 00b0b9c7 has its CatchHandler @ 00a0bac0 */
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x98);
      uVar17 = *(undefined8 *)(param_1 + 0x90);
      uVar32 = *(undefined8 *)(param_1 + 0xa8);
      uVar31 = *(undefined8 *)(param_1 + 0xa0);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      puVar1 = (undefined8 *)(param_1 + 0x90);
                    /* try { // try from 00a0b9d0 to 00b0b9db has its CatchHandler @ 00a0babc */
      uVar25 = *(undefined8 *)(param_1 + 200);
      uVar23 = *(undefined8 *)(param_1 + 0xc0);
      uVar21 = *(undefined8 *)(param_1 + 0xd8);
      uVar18 = *(undefined8 *)(param_1 + 0xd0);
      uVar29 = *(undefined8 *)(param_1 + 0xb8);
      uVar27 = *(undefined8 *)(param_1 + 0xb0);
                    /* try { // try from 00a0b9dc to 00b0b9e7 has its CatchHandler @ 00a0bab8 */
                    /* try { // try from 00a0b9e8 to 00b0ba43 has its CatchHandler @ 00a0bad0 */
      uVar30 = *(undefined8 *)(param_1 + 0xf8);
      uVar28 = *(undefined8 *)(param_1 + 0xf0);
      uVar22 = *(undefined8 *)(param_1 + 0x108);
      uVar19 = *(undefined8 *)(param_1 + 0x100);
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      uVar26 = *(undefined8 *)(param_1 + 0xe8);
      uVar24 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x88);
      uVar12 = FUN_00a0aff0(param_1,puVar1,param_1 + 0x118,0,0,0,0,0,0);
      iVar10 = (int)uVar12;
      *(ulong *)(param_1 + 0x70) = (ulong)(iVar10 == 0);
      do {
                    /* catch() { ... } // from try @ 00a0b9dc with catch @ 00a0bab8 */
                    /* catch() { ... } // from try @ 00a0b9d0 with catch @ 00a0babc */
                    /* catch() { ... } // from try @ 00a0b9b0 with catch @ 00a0bac0 */
                    /* catch() { ... } // from try @ 00a0b9e8 with catch @ 00a0bad0 */
        if ((iVar10 != 0) ||
           (uVar12 = FUN_00a0aff0(param_1,0,0,local_174,0x100,0,0,0,0), (int)uVar12 != 0))
        goto LAB_00a0ba38;
        if (param_3 < 2) {
          iVar10 = strcmp((char *)local_174,(char *)param_2);
          if (iVar10 == 0) {
            uVar12 = 0;
            goto LAB_00a0ba78;
          }
        }
        else {
          pbVar13 = local_174;
          pbVar14 = param_2;
          do {
            bVar7 = *pbVar13;
            bVar8 = *pbVar14;
            uVar15 = bVar7 - 0x20;
            uVar16 = bVar8 - 0x20;
            if (0x19 < bVar7 - 0x61) {
              uVar15 = (uint)bVar7;
            }
            if (0x19 < bVar8 - 0x61) {
              uVar16 = (uint)bVar8;
            }
                    /* try { // try from 00a0bb28 to 00b0bb7b has its CatchHandler @ 00a0bb28
                       catch() { ... } // from try @ 00a0bb28 with catch @ 00a0bb28
                       catch() { ... } // from try @ 00a0bc40 with catch @ 00a0bb28 */
            if ((uVar15 & 0xff) == 0) {
              uVar15 = -(uint)((uVar16 & 0xff) != 0);
              uVar12 = (ulong)uVar15;
              if (uVar15 == 0) goto LAB_00a0ba78;
              break;
            }
            if ((uVar16 & 0xff) < (uVar15 & 0xff)) break;
            pbVar14 = pbVar14 + 1;
            pbVar13 = pbVar13 + 1;
          } while ((uVar16 - 1 & 0xff) < (uVar15 & 0xff));
        }
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_00a0bbdc;
        lVar2 = *(long *)(param_1 + 0x60) + 1;
                    /* try { // try from 00a0bb7c to 00b0bb93 has its CatchHandler @ 00a0bcbc */
        if ((*(long *)(param_1 + 0x48) != 0xffff) && (lVar2 == *(long *)(param_1 + 0x48)))
        goto LAB_00a0bbdc;
                    /* try { // try from 00a0bb9c to 00b0bba7 has its CatchHandler @ 00a0bcb8 */
                    /* try { // try from 00a0bba8 to 00b0bbb3 has its CatchHandler @ 00a0bcb4 */
                    /* try { // try from 00a0bbb4 to 00b0bc3f has its CatchHandler @ 00a0bccc */
        *(long *)(param_1 + 0x60) = lVar2;
        *(long *)(param_1 + 0x68) =
             *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0) +
             *(long *)(param_1 + 0x68) + 0x2e;
        uVar12 = FUN_00a0aff0(param_1,puVar1,param_1 + 0x118,0,0,0,0,0,0);
        iVar10 = (int)uVar12;
        *(ulong *)(param_1 + 0x70) = (ulong)(iVar10 == 0);
      } while( true );
    }
    uVar12 = 0xffffff9c;
  }
LAB_00a0ba78:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
LAB_00a0bbdc:
  uVar12 = 0xffffff9c;
LAB_00a0ba38:
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar20;
  *puVar1 = uVar17;
  *(undefined8 *)(param_1 + 0xa8) = uVar32;
  *(undefined8 *)(param_1 + 0xa0) = uVar31;
                    /* try { // try from 00a0ba44 to 00b0bb27 has its CatchHandler @ 00a0b95c */
  *(undefined8 *)(param_1 + 200) = uVar25;
  *(undefined8 *)(param_1 + 0xc0) = uVar23;
  *(undefined8 *)(param_1 + 0xd8) = uVar21;
  *(undefined8 *)(param_1 + 0xd0) = uVar18;
  *(undefined8 *)(param_1 + 0xb8) = uVar29;
  *(undefined8 *)(param_1 + 0xb0) = uVar27;
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  *(undefined8 *)(param_1 + 0xf8) = uVar30;
  *(undefined8 *)(param_1 + 0xf0) = uVar28;
  *(undefined8 *)(param_1 + 0x108) = uVar22;
  *(undefined8 *)(param_1 + 0x100) = uVar19;
  *(undefined8 *)(param_1 + 0xe8) = uVar26;
  *(undefined8 *)(param_1 + 0xe0) = uVar24;
  *(undefined8 *)(param_1 + 0x118) = uVar6;
  goto LAB_00a0ba78;
}

