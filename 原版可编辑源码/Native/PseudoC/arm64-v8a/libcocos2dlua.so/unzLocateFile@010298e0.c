
/* cocos2d::unzLocateFile(void*, char const*, int) */

void cocos2d::unzLocateFile(void *param_1,char *param_2,int param_3)

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
  if ((param_1 == (void *)0x0) || (sVar11 = strlen(param_2), 0xff < sVar11)) {
    uVar12 = 0xffffff9a;
  }
  else {
    if (*(long *)((long)param_1 + 0x90) != 0) {
      uVar20 = *(undefined8 *)((long)param_1 + 200);
      uVar17 = *(undefined8 *)((long)param_1 + 0xc0);
      uVar25 = *(undefined8 *)((long)param_1 + 0xd8);
      uVar23 = *(undefined8 *)((long)param_1 + 0xd0);
      uVar29 = *(undefined8 *)((long)param_1 + 0xe8);
      uVar27 = *(undefined8 *)((long)param_1 + 0xe0);
      uVar32 = *(undefined8 *)((long)param_1 + 0xf8);
      uVar31 = *(undefined8 *)((long)param_1 + 0xf0);
      uVar3 = *(undefined8 *)((long)param_1 + 0x80);
      uVar5 = *(undefined8 *)((long)param_1 + 0x88);
      puVar1 = (undefined8 *)((long)param_1 + 0xb0);
      uVar21 = *(undefined8 *)((long)param_1 + 0x108);
      uVar18 = *(undefined8 *)((long)param_1 + 0x100);
      uVar30 = *(undefined8 *)((long)param_1 + 0x118);
      uVar28 = *(undefined8 *)((long)param_1 + 0x110);
      uVar4 = *(undefined8 *)((long)param_1 + 0x130);
      uVar6 = *(undefined8 *)((long)param_1 + 0x138);
      uVar26 = *(undefined8 *)((long)param_1 + 0x128);
      uVar24 = *(undefined8 *)((long)param_1 + 0x120);
      uVar22 = *(undefined8 *)((long)param_1 + 0xb8);
      uVar19 = *(undefined8 *)((long)param_1 + 0xb0);
                    /* try { // try from 0102997c to 011299e3 has its CatchHandler @ 0102997c
                       catch() { ... } // from try @ 0102997c with catch @ 0102997c
                       catch() { ... } // from try @ 010299f0 with catch @ 0102997c
                       catch() { ... } // from try @ 01029a20 with catch @ 0102997c
                       catch() { ... } // from try @ 01029a50 with catch @ 0102997c
                       catch() { ... } // from try @ 01029a80 with catch @ 0102997c
                       catch() { ... } // from try @ 01029ac4 with catch @ 0102997c
                       catch() { ... } // from try @ 01029b18 with catch @ 0102997c */
      *(undefined8 *)((long)param_1 + 0x80) = 0;
      *(undefined8 *)((long)param_1 + 0x88) = *(undefined8 *)((long)param_1 + 0xa8);
      uVar12 = FUN_01028a58(param_1,puVar1,(long)param_1 + 0x138,0,0,0,0,0,0);
      iVar10 = (int)uVar12;
      *(ulong *)((long)param_1 + 0x90) = (ulong)(iVar10 == 0);
      do {
        if ((iVar10 != 0) ||
           (uVar12 = FUN_01028a58(param_1,0,0,local_174,0x100,0,0,0,0), (int)uVar12 != 0))
        goto LAB_010299b8;
                    /* try { // try from 01029ab8 to 01129ac3 has its CatchHandler @ 01029b4c */
        if (param_3 == 1) {
                    /* try { // try from 01029ac4 to 01129b0b has its CatchHandler @ 0102997c */
          iVar10 = strcmp((char *)local_174,param_2);
          if (iVar10 == 0) {
            uVar12 = 0;
            goto LAB_010299f8;
          }
        }
        else {
          pbVar13 = local_174;
          pbVar14 = (byte *)param_2;
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
              if (uVar15 == 0) goto LAB_010299f8;
              break;
            }
                    /* try { // try from 01029b0c to 01129b17 has its CatchHandler @ 01029b48 */
            if ((uVar15 & 0xff) != (uVar16 & 0xff)) break;
            pbVar14 = pbVar14 + 1;
                    /* try { // try from 01029b18 to 01129b6f has its CatchHandler @ 0102997c */
            pbVar13 = pbVar13 + 1;
          } while ((uVar16 & 0xff) != 0);
        }
        if (*(long *)((long)param_1 + 0x90) == 0) goto LAB_01029b54;
        lVar2 = *(long *)((long)param_1 + 0x80) + 1;
                    /* catch() { ... } // from try @ 01029b0c with catch @ 01029b48 */
                    /* catch() { ... } // from try @ 01029ab8 with catch @ 01029b4c */
                    /* catch() { ... } // from try @ 01029a74 with catch @ 01029b50 */
        if ((*(long *)((long)param_1 + 0x68) != 0xffff) &&
           (lVar2 == *(long *)((long)param_1 + 0x68))) goto LAB_01029b54;
                    /* try { // try from 01029a44 to 01129a4f has its CatchHandler @ 01029b54 */
                    /* try { // try from 01029a50 to 01129a73 has its CatchHandler @ 0102997c */
        *(long *)((long)param_1 + 0x80) = lVar2;
        *(long *)((long)param_1 + 0x88) =
             *(long *)((long)param_1 + 0xf0) + *(long *)((long)param_1 + 0xf8) +
             *(long *)((long)param_1 + 0x100) + *(long *)((long)param_1 + 0x88) + 0x2e;
                    /* try { // try from 01029a74 to 01129a7f has its CatchHandler @ 01029b50 */
        uVar12 = FUN_01028a58(param_1,puVar1,(long)param_1 + 0x138,0,0,0,0,0,0);
        iVar10 = (int)uVar12;
                    /* try { // try from 01029a80 to 01129ab7 has its CatchHandler @ 0102997c */
        *(ulong *)((long)param_1 + 0x90) = (ulong)(iVar10 == 0);
      } while( true );
    }
    uVar12 = 0xffffff9c;
  }
LAB_010299f8:
  if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 01029a14 to 01129a1f has its CatchHandler @ 01029b58 */
                    /* try { // try from 01029a20 to 01129a43 has its CatchHandler @ 0102997c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 010299e4 with catch @ 01029b5c */
  __stack_chk_fail(uVar12);
LAB_01029b54:
                    /* catch() { ... } // from try @ 01029a44 with catch @ 01029b54 */
  uVar12 = 0xffffff9c;
                    /* catch() { ... } // from try @ 01029a14 with catch @ 01029b58 */
LAB_010299b8:
  *(undefined8 *)((long)param_1 + 0x80) = uVar3;
  *(undefined8 *)((long)param_1 + 0x88) = uVar5;
  *(undefined8 *)((long)param_1 + 0xb8) = uVar22;
  *puVar1 = uVar19;
  *(undefined8 *)((long)param_1 + 200) = uVar20;
  *(undefined8 *)((long)param_1 + 0xc0) = uVar17;
  *(undefined8 *)((long)param_1 + 0xe8) = uVar29;
  *(undefined8 *)((long)param_1 + 0xe0) = uVar27;
  *(undefined8 *)((long)param_1 + 0xf8) = uVar32;
  *(undefined8 *)((long)param_1 + 0xf0) = uVar31;
  *(undefined8 *)((long)param_1 + 0xd8) = uVar25;
  *(undefined8 *)((long)param_1 + 0xd0) = uVar23;
  *(undefined8 *)((long)param_1 + 0x130) = uVar4;
                    /* try { // try from 010299e4 to 011299ef has its CatchHandler @ 01029b5c */
  *(undefined8 *)((long)param_1 + 0x118) = uVar30;
  *(undefined8 *)((long)param_1 + 0x110) = uVar28;
  *(undefined8 *)((long)param_1 + 0x128) = uVar26;
  *(undefined8 *)((long)param_1 + 0x120) = uVar24;
  *(undefined8 *)((long)param_1 + 0x108) = uVar21;
  *(undefined8 *)((long)param_1 + 0x100) = uVar18;
  *(undefined8 *)((long)param_1 + 0x138) = uVar6;
                    /* try { // try from 010299f0 to 01129a13 has its CatchHandler @ 0102997c */
  goto LAB_010299f8;
}

