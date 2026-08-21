
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
                    /* try { // try from 009f3e70 to 00af3e83 has its CatchHandler @ 009f3e8c */
  if ((param_1 == 0) || (sVar11 = strlen((char *)param_2), 0xff < sVar11)) {
    uVar12 = 0xffffff9a;
  }
  else {
                    /* try { // try from 009f3e84 to 00af3ea7 has its CatchHandler @ 009f3da0 */
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      uVar17 = *(undefined8 *)(param_1 + 0xa0);
      uVar25 = *(undefined8 *)(param_1 + 0xb8);
      uVar23 = *(undefined8 *)(param_1 + 0xb0);
                    /* catch() { ... } // from try @ 009f3df0 with catch @ 009f3e8c
                       catch() { ... } // from try @ 009f3e70 with catch @ 009f3e8c */
      uVar29 = *(undefined8 *)(param_1 + 200);
      uVar27 = *(undefined8 *)(param_1 + 0xc0);
      uVar32 = *(undefined8 *)(param_1 + 0xd8);
      uVar31 = *(undefined8 *)(param_1 + 0xd0);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      puVar1 = (undefined8 *)(param_1 + 0x90);
      uVar21 = *(undefined8 *)(param_1 + 0xe8);
      uVar18 = *(undefined8 *)(param_1 + 0xe0);
      uVar30 = *(undefined8 *)(param_1 + 0xf8);
      uVar28 = *(undefined8 *)(param_1 + 0xf0);
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      uVar26 = *(undefined8 *)(param_1 + 0x108);
      uVar24 = *(undefined8 *)(param_1 + 0x100);
      uVar22 = *(undefined8 *)(param_1 + 0x98);
      uVar19 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x88);
      uVar12 = FUN_009f34c0(param_1,puVar1,param_1 + 0x118,0,0,0,0,0,0);
      iVar10 = (int)uVar12;
      *(ulong *)(param_1 + 0x70) = (ulong)(iVar10 == 0);
      do {
        if ((iVar10 != 0) ||
           (uVar12 = FUN_009f34c0(param_1,0,0,local_174,0x100,0,0,0,0), (int)uVar12 != 0))
        goto LAB_009f3f04;
                    /* try { // try from 009f4000 to 00af4013 has its CatchHandler @ 009f401c */
        if (param_3 < 2) {
          iVar10 = strcmp((char *)local_174,(char *)param_2);
                    /* try { // try from 009f4014 to 00af4037 has its CatchHandler @ 009f3f30 */
          if (iVar10 == 0) {
            uVar12 = 0;
            goto LAB_009f3f44;
          }
        }
        else {
                    /* catch() { ... } // from try @ 009f3f80 with catch @ 009f401c
                       catch() { ... } // from try @ 009f4000 with catch @ 009f401c */
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
            if ((uVar15 & 0xff) == 0) {
              uVar15 = -(uint)((uVar16 & 0xff) != 0);
              uVar12 = (ulong)uVar15;
              if (uVar15 == 0) goto LAB_009f3f44;
              break;
            }
            if ((uVar16 & 0xff) < (uVar15 & 0xff)) break;
            pbVar14 = pbVar14 + 1;
            pbVar13 = pbVar13 + 1;
          } while ((uVar16 - 1 & 0xff) < (uVar15 & 0xff));
        }
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_009f40a8;
        lVar2 = *(long *)(param_1 + 0x60) + 1;
        if ((*(long *)(param_1 + 0x48) != 0xffff) && (lVar2 == *(long *)(param_1 + 0x48)))
        goto LAB_009f40a8;
                    /* try { // try from 009f3f80 to 00af3fa7 has its CatchHandler @ 009f401c */
                    /* try { // try from 009f3fa8 to 00af3fff has its CatchHandler @ 009f3f30 */
        *(long *)(param_1 + 0x60) = lVar2;
        *(long *)(param_1 + 0x68) =
             *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0) +
             *(long *)(param_1 + 0x68) + 0x2e;
        uVar12 = FUN_009f34c0(param_1,puVar1,param_1 + 0x118,0,0,0,0,0,0);
        iVar10 = (int)uVar12;
        *(ulong *)(param_1 + 0x70) = (ulong)(iVar10 == 0);
      } while( true );
    }
    uVar12 = 0xffffff9c;
  }
LAB_009f3f44:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
LAB_009f40a8:
  uVar12 = 0xffffff9c;
LAB_009f3f04:
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar22;
  *puVar1 = uVar19;
  *(undefined8 *)(param_1 + 0xa8) = uVar20;
  *(undefined8 *)(param_1 + 0xa0) = uVar17;
  *(undefined8 *)(param_1 + 200) = uVar29;
  *(undefined8 *)(param_1 + 0xc0) = uVar27;
  *(undefined8 *)(param_1 + 0xd8) = uVar32;
  *(undefined8 *)(param_1 + 0xd0) = uVar31;
  *(undefined8 *)(param_1 + 0xb8) = uVar25;
  *(undefined8 *)(param_1 + 0xb0) = uVar23;
  *(undefined8 *)(param_1 + 0x110) = uVar4;
                    /* try { // try from 009f3f30 to 00af3f7f has its CatchHandler @ 009f3f30
                       catch() { ... } // from try @ 009f3f30 with catch @ 009f3f30
                       catch() { ... } // from try @ 009f3fa8 with catch @ 009f3f30
                       catch() { ... } // from try @ 009f4014 with catch @ 009f3f30 */
  *(undefined8 *)(param_1 + 0xf8) = uVar30;
  *(undefined8 *)(param_1 + 0xf0) = uVar28;
  *(undefined8 *)(param_1 + 0x108) = uVar26;
  *(undefined8 *)(param_1 + 0x100) = uVar24;
  *(undefined8 *)(param_1 + 0xe8) = uVar21;
  *(undefined8 *)(param_1 + 0xe0) = uVar18;
  *(undefined8 *)(param_1 + 0x118) = uVar6;
  goto LAB_009f3f44;
}

