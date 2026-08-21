
/* cocos2d::AudioMixer::volumeStereo(cocos2d::AudioMixer::track_t*, int*, unsigned long, int*, int*)
    */

void cocos2d::AudioMixer::volumeStereo
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7d3b4 with catch @ 00a7d4b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d3e0 with catch @ 00a7d4b0
                        */
  if (param_5 == (int *)0x0) {
    iVar15 = (int)*(short *)(param_1 + 4);
    iVar16 = (int)*(short *)(param_1 + 6);
    if ((3 < param_3) && ((param_4 + param_3 * 2 <= param_2 || (param_2 + param_3 * 2 <= param_4))))
    {
                    /* try { // try from 00a7d520 to 00b7d553 has its CatchHandler @ 00a7d520
                       catch() { ... } // from try @ 00a7d520 with catch @ 00a7d520
                       catch() { ... } // from try @ 00a7d568 with catch @ 00a7d520 */
      uVar13 = param_3 & 0xfffffffffffffffc;
      piVar1 = param_4 + uVar13 * 2;
      piVar2 = param_2 + uVar13 * 2;
      uVar14 = uVar13;
      do {
        iVar17 = *param_4;
        iVar21 = param_4[1];
        iVar18 = param_4[2];
        iVar23 = param_4[3];
        iVar19 = param_4[4];
        iVar24 = param_4[5];
        iVar20 = param_4[6];
        iVar25 = param_4[7];
        param_4 = param_4 + 8;
        uVar14 = uVar14 - 4;
                    /* try { // try from 00a7d554 to 00b7d55b has its CatchHandler @ 00a7d58c */
                    /* try { // try from 00a7d564 to 00b7d567 has its CatchHandler @ 00a7d57c */
        *param_2 = *param_2 + ((iVar17 << 4) >> 0x10) * iVar15;
        param_2[1] = param_2[1] + ((iVar21 << 4) >> 0x10) * iVar16;
        param_2[2] = param_2[2] + ((iVar18 << 4) >> 0x10) * iVar15;
        param_2[3] = param_2[3] + ((iVar23 << 4) >> 0x10) * iVar16;
        param_2[4] = param_2[4] + ((iVar19 << 4) >> 0x10) * iVar15;
        param_2[5] = param_2[5] + ((iVar24 << 4) >> 0x10) * iVar16;
        param_2[6] = param_2[6] + ((iVar20 << 4) >> 0x10) * iVar15;
        param_2[7] = param_2[7] + ((iVar25 << 4) >> 0x10) * iVar16;
        param_2 = param_2 + 8;
                    /* try { // try from 00a7d568 to 00b7d59f has its CatchHandler @ 00a7d520 */
      } while (uVar14 != 0);
      bVar4 = uVar13 == param_3;
      param_4 = piVar1;
      param_3 = param_3 - uVar13;
      param_2 = piVar2;
      if (bVar4) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *(ulong *)param_2 =
           CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) +
                    (((int)((ulong)*(undefined8 *)param_4 >> 0x20) << 4) >> 0x10) * iVar16,
                    (int)*(undefined8 *)param_2 +
                    (((int)*(undefined8 *)param_4 << 4) >> 0x10) * iVar15);
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
    } while (param_3 != 0);
  }
  else {
    sVar3 = *(short *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 00a7d564 with catch @ 00a7d57c */
    iVar16 = (int)*(short *)(param_1 + 4);
    iVar17 = (int)*(short *)(param_1 + 6);
    iVar15 = (int)sVar3;
    if (3 < param_3) {
                    /* catch() { ... } // from try @ 00a7d554 with catch @ 00a7d58c */
                    /* try { // try from 00a7d5a0 to 00b7d5d7 has its CatchHandler @ 00a7d5a0
                       catch() { ... } // from try @ 00a7d5a0 with catch @ 00a7d5a0
                       catch() { ... } // from try @ 00a7d5e0 with catch @ 00a7d5a0 */
                    /* try { // try from 00a7d5d8 to 00b7d5df has its CatchHandler @ 00a7d5f0 */
                    /* try { // try from 00a7d5e0 to 00b7d603 has its CatchHandler @ 00a7d5a0 */
      if (((param_5 + param_3 <= param_2 || param_2 + param_3 * 2 <= param_5) &&
          (param_4 + param_3 * 2 <= param_2 || param_2 + param_3 * 2 <= param_4)) &&
         (param_4 + param_3 * 2 <= param_5 || param_5 + param_3 <= param_4)) {
        uVar13 = param_3 & 0xfffffffffffffffc;
                    /* catch() { ... } // from try @ 00a7d5d8 with catch @ 00a7d5f0 */
        piVar1 = param_4 + uVar13 * 2;
        piVar2 = param_2 + uVar13 * 2;
        piVar12 = param_5;
        uVar14 = uVar13;
        do {
          uVar22 = *param_4;
          puVar5 = (uint *)(param_4 + 1);
          puVar6 = (uint *)(param_4 + 2);
          puVar7 = (uint *)(param_4 + 3);
          puVar8 = (uint *)(param_4 + 4);
          puVar9 = (uint *)(param_4 + 5);
          puVar10 = (uint *)(param_4 + 6);
          puVar11 = (uint *)(param_4 + 7);
          param_4 = param_4 + 8;
          uVar14 = uVar14 - 4;
          iVar23 = (int)(short)(uVar22 >> 0xc);
          iVar24 = (int)(short)(*puVar6 >> 0xc);
          iVar25 = (int)(short)(*puVar8 >> 0xc);
          iVar26 = (int)(short)(*puVar10 >> 0xc);
          iVar18 = (int)(short)(*puVar5 >> 0xc);
          iVar19 = (int)(short)(*puVar7 >> 0xc);
          iVar20 = (int)(short)(*puVar9 >> 0xc);
          iVar21 = (int)(short)(*puVar11 >> 0xc);
          *param_2 = *param_2 + iVar23 * iVar16;
          param_2[1] = param_2[1] + iVar18 * iVar17;
          param_2[2] = param_2[2] + iVar24 * iVar16;
          param_2[3] = param_2[3] + iVar19 * iVar17;
          param_2[4] = param_2[4] + iVar25 * iVar16;
          param_2[5] = param_2[5] + iVar20 * iVar17;
          param_2[6] = param_2[6] + iVar26 * iVar16;
          param_2[7] = param_2[7] + iVar21 * iVar17;
          param_2 = param_2 + 8;
          *(ulong *)(piVar12 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(piVar12 + 2) >> 0x20) +
                        (iVar21 + iVar26 >> 1) * iVar15,
                        (int)*(undefined8 *)(piVar12 + 2) + (iVar20 + iVar25 >> 1) * iVar15);
          *(ulong *)piVar12 =
               CONCAT44((int)((ulong)*(undefined8 *)piVar12 >> 0x20) +
                        (iVar19 + iVar24 >> 1) * (int)sVar3,
                        (int)*(undefined8 *)piVar12 + (iVar18 + iVar23 >> 1) * (int)sVar3);
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
        bVar4 = uVar13 == param_3;
        param_5 = param_5 + uVar13;
        param_4 = piVar1;
        param_3 = param_3 - uVar13;
        param_2 = piVar2;
        if (bVar4) {
          return;
        }
      }
    }
    do {
      param_3 = param_3 - 1;
      iVar18 = (int)(short)((uint)*(undefined8 *)param_4 >> 0xc);
      iVar19 = (int)(short)(uint)((ulong)*(undefined8 *)param_4 >> 0x2c);
      *(ulong *)param_2 =
           CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + iVar19 * iVar17,
                    (int)*(undefined8 *)param_2 + iVar18 * iVar16);
                    /* try { // try from 00a7d6a8 to 00b7d6bf has its CatchHandler @ 00a7d7a4 */
      *param_5 = *param_5 + (iVar19 + iVar18 >> 1) * iVar15;
      param_5 = param_5 + 1;
      param_4 = param_4 + 2;
      param_2 = param_2 + 2;
    } while (param_3 != 0);
  }
  return;
}

