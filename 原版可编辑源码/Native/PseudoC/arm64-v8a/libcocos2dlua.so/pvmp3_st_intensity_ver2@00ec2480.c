
void pvmp3_st_intensity_ver2
               (long param_1,long param_2,int param_3,uint param_4,ulong param_5,uint param_6)

{
  long lVar1;
  undefined1 (*pauVar2) [12];
  uint uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [12];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  void *pvVar13;
  undefined1 (*__dest) [12];
  undefined1 (*__src) [12];
  undefined1 (*pauVar14) [12];
  int iVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  
  uVar16 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
  __src = (undefined1 (*) [12])(param_1 + uVar16);
  __dest = (undefined1 (*) [12])(param_2 + uVar16);
  if (param_4 == 0) {
    memcpy(__dest,__src,-(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2);
    return;
  }
  uVar3 = param_3 << 2 | 3;
  iVar15 = (int)param_6 >> 1;
  if ((param_4 & 1) != 0) {
    iVar17 = *(int *)(&DAT_01435c38 +
                     (long)(int)((param_4 + 1 & uVar3) << (ulong)(1U - param_3 & 0x1f)) * 4) >>
             ((int)(param_4 + 1) >> (param_3 + 2U & 0x1f) & 0x1fU);
    pauVar14 = __src;
    pauVar2 = __dest;
    if (iVar15 != 0) {
      uVar16 = (ulong)(iVar15 - 1) + 1;
      lVar18 = (long)iVar17;
      if ((3 < uVar16) &&
         ((lVar1 = ((long)(int)param_5 + (ulong)(iVar15 - 1) * 2) * 4 + 8,
          (undefined1 (*) [12])(param_1 + lVar1) <= __dest ||
          ((undefined1 (*) [12])(param_2 + lVar1) <= __src)))) {
        uVar19 = uVar16 & 0x1fffffffc;
        iVar15 = iVar15 - (int)uVar19;
        pauVar2 = (undefined1 (*) [12])((long)*__dest + uVar19 * 8);
        pauVar14 = (undefined1 (*) [12])((long)*__src + uVar19 * 8);
        uVar20 = uVar19;
        do {
          uVar7 = *(undefined8 *)((long)*__src + 8);
          uVar6 = *(undefined8 *)*__src;
          auVar10 = *__src;
          pauVar5 = (undefined1 (*) [12])(__src[1] + 4);
          uVar9 = *(undefined8 *)__src[2];
          uVar8 = *(undefined8 *)*pauVar5;
          auVar12 = *pauVar5;
          auVar11 = *pauVar5;
          uVar20 = uVar20 - 4;
                    /* catch() { ... } // from try @ 00ec26d4 with catch @ 00ec27cc */
                    /* catch() { ... } // from try @ 00ec2658 with catch @ 00ec27d0 */
          *(undefined8 *)((long)*__dest + 8) = uVar7;
          *(undefined8 *)*__dest = uVar6;
          *(undefined8 *)__dest[2] = uVar9;
          *(undefined8 *)(__dest[1] + 4) = uVar8;
          *(int *)*__src = (int)((ulong)(lVar18 * (auVar10._0_4_ << 1)) >> 0x20);
          *(int *)((long)*__src + 4) =
               (int)((ulong)(lVar18 * ((int)((ulong)uVar6 >> 0x20) << 1)) >> 0x20);
          *(int *)((long)*__src + 8) = (int)((ulong)(lVar18 * (auVar10._8_4_ << 1)) >> 0x20);
          *(int *)__src[1] = (int)((ulong)(lVar18 * ((int)((ulong)uVar7 >> 0x20) << 1)) >> 0x20);
          *(int *)(__src[1] + 4) = (int)((ulong)(lVar18 * (auVar11._0_4_ << 1)) >> 0x20);
          *(int *)(__src[1] + 8) = (int)((ulong)(lVar18 * (auVar12._4_4_ << 1)) >> 0x20);
          *(int *)__src[2] = (int)((ulong)(lVar18 * (auVar11._8_4_ << 1)) >> 0x20);
          *(int *)(__src[2] + 4) =
               (int)((ulong)(lVar18 * ((int)((ulong)uVar9 >> 0x20) << 1)) >> 0x20);
          __src = (undefined1 (*) [12])(__src[2] + 8);
          __dest = (undefined1 (*) [12])(__dest[2] + 8);
        } while (uVar20 != 0);
        __src = pauVar14;
        __dest = pauVar2;
        if (uVar16 == uVar19) goto joined_r0x00ec264c;
      }
      do {
        iVar15 = iVar15 + -1;
        *(undefined4 *)*__dest = *(undefined4 *)*__src;
        uVar4 = *(undefined4 *)((long)*__src + 4);
        *(int *)*__src = (int)((ulong)((*(int *)*__src << 1) * lVar18) >> 0x20);
        *(undefined4 *)((long)*__dest + 4) = uVar4;
        pauVar2 = (undefined1 (*) [12])((long)*__dest + 8);
        *(int *)((long)*__src + 4) =
             (int)((ulong)((*(int *)((long)*__src + 4) << 1) * lVar18) >> 0x20);
        pauVar14 = (undefined1 (*) [12])((long)*__src + 8);
        __src = pauVar14;
        __dest = pauVar2;
      } while (iVar15 != 0);
    }
joined_r0x00ec264c:
    if ((param_6 & 1) == 0) {
      return;
    }
    *(undefined4 *)*pauVar2 = *(undefined4 *)*pauVar14;
                    /* try { // try from 00ec2658 to 00fc2663 has its CatchHandler @ 00ec27d0 */
    iVar15 = *(int *)*pauVar14;
    goto LAB_00ec2730;
  }
  iVar17 = *(int *)(&DAT_01435c38 +
                   (long)(int)((uVar3 & param_4) << (ulong)(1U - param_3 & 0x1f)) * 4) >>
           ((int)param_4 >> (param_3 + 2U & 0x1f) & 0x1fU);
  pauVar14 = __dest;
  pauVar2 = __src;
  if (iVar15 != 0) {
    uVar16 = (ulong)(iVar15 - 1) + 1;
    lVar18 = (long)iVar17;
    if ((3 < uVar16) &&
       ((lVar1 = ((long)(int)param_5 + (ulong)(iVar15 - 1) * 2) * 4 + 8,
        (undefined1 (*) [12])(param_1 + lVar1) <= __dest ||
        ((undefined1 (*) [12])(param_2 + lVar1) <= __src)))) {
      uVar19 = uVar16 & 0x1fffffffc;
                    /* try { // try from 00ec2664 to 00fc26d3 has its CatchHandler @ 00ec22f4 */
      iVar15 = iVar15 - (int)uVar19;
      pauVar14 = (undefined1 (*) [12])((long)*__dest + uVar19 * 8);
      pauVar2 = (undefined1 (*) [12])((long)*__src + uVar19 * 8);
      uVar20 = uVar19;
      do {
        pvVar13 = *__src;
        iVar24 = *(int *)((long)*__src + 4);
        iVar21 = *(int *)((long)*__src + 8);
        iVar25 = *(int *)__src[1];
        iVar22 = *(int *)(__src[1] + 4);
        iVar26 = *(int *)(__src[1] + 8);
        iVar23 = *(int *)__src[2];
        iVar27 = *(int *)(__src[2] + 4);
        __src = (undefined1 (*) [12])(__src[2] + 8);
        uVar20 = uVar20 - 4;
                    /* try { // try from 00ec26d4 to 00fc26df has its CatchHandler @ 00ec27cc */
                    /* try { // try from 00ec26e0 to 00fc27eb has its CatchHandler @ 00ec22f4 */
        *(int *)*__dest = (int)((ulong)(lVar18 * (*(int *)pvVar13 << 1)) >> 0x20);
        *(int *)((long)*__dest + 4) = (int)((ulong)(lVar18 * (iVar24 << 1)) >> 0x20);
        *(int *)((long)*__dest + 8) = (int)((ulong)(lVar18 * (iVar21 << 1)) >> 0x20);
        *(int *)__dest[1] = (int)((ulong)(lVar18 * (iVar25 << 1)) >> 0x20);
        *(int *)(__dest[1] + 4) = (int)((ulong)(lVar18 * (iVar22 << 1)) >> 0x20);
        *(int *)(__dest[1] + 8) = (int)((ulong)(lVar18 * (iVar26 << 1)) >> 0x20);
        *(int *)__dest[2] = (int)((ulong)(lVar18 * (iVar23 << 1)) >> 0x20);
        *(int *)(__dest[2] + 4) = (int)((ulong)(lVar18 * (iVar27 << 1)) >> 0x20);
        __dest = (undefined1 (*) [12])(__dest[2] + 8);
      } while (uVar20 != 0);
      __dest = pauVar14;
      __src = pauVar2;
      if (uVar16 == uVar19) goto joined_r0x00ec2728;
    }
    do {
      pauVar14 = (undefined1 (*) [12])((long)*__dest + 8);
      iVar15 = iVar15 + -1;
      *(int *)*__dest = (int)((ulong)((*(int *)*__src << 1) * lVar18) >> 0x20);
      pauVar2 = (undefined1 (*) [12])((long)*__src + 8);
      *(int *)((long)*__dest + 4) =
           (int)((ulong)((*(int *)((long)*__src + 4) << 1) * lVar18) >> 0x20);
      __dest = pauVar14;
      __src = pauVar2;
    } while (iVar15 != 0);
  }
joined_r0x00ec2728:
  if ((param_6 & 1) == 0) {
    return;
  }
  iVar15 = *(int *)*pauVar2;
LAB_00ec2730:
  *(int *)*pauVar14 = (int)((ulong)((long)(iVar15 << 1) * (long)iVar17) >> 0x20);
  return;
}

