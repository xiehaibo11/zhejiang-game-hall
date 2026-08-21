
void pvmp3_st_intensity_ver2
               (long param_1,long param_2,int param_3,uint param_4,ulong param_5,uint param_6)

{
  long lVar1;
  undefined1 (*pauVar2) [12];
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *__dest;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [12];
  undefined1 (*__src) [12];
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  uVar19 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
  __src = (undefined1 (*) [12])(param_1 + uVar19);
  __dest = (undefined8 *)(param_2 + uVar19);
  if (param_4 == 0) {
    memcpy(__dest,__src,-(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2);
    return;
  }
  uVar5 = param_3 << 2 | 3;
  uVar18 = (int)param_6 >> 1;
  if ((param_4 & 1) == 0) {
    iVar4 = *(int *)(&DAT_01995ba8 +
                    (long)(int)((uVar5 & param_4) << (ulong)(1U - param_3 & 0x1f)) * 4) >>
            ((int)param_4 >> (param_3 + 2U & 0x1f) & 0x1fU);
    pauVar17 = __src;
    if (uVar18 != 0) {
      uVar19 = (ulong)(uVar18 - 1);
      lVar22 = (long)(int)param_5 + uVar19 * 2;
      lVar1 = lVar22 + 2;
      lVar20 = (long)iVar4;
      pauVar17 = (undefined1 (*) [12])(param_1 + lVar1 * 4);
      if (uVar19 + 1 < 4) goto LAB_00e95fa0;
      lVar22 = lVar22 * 4 + 8;
      if ((__dest < (undefined8 *)(param_1 + lVar22)) &&
         (__src < (undefined1 (*) [12])(param_2 + lVar22))) goto LAB_00e95fa0;
      uVar5 = param_6 >> 1 & 3;
      lVar21 = (uVar19 + 1) - (ulong)uVar5;
      uVar18 = uVar18 - (int)lVar21;
      lVar22 = (uVar19 + 1) - (ulong)uVar5;
      puVar15 = __dest + lVar21;
      pauVar2 = (undefined1 (*) [12])((long)__src + lVar21 * 8);
      do {
        pvVar14 = *__src;
        iVar26 = *(int *)((long)*__src + 4);
        iVar23 = *(int *)((long)*__src + 8);
        iVar27 = *(int *)__src[1];
        iVar24 = *(int *)(__src[1] + 4);
        iVar28 = *(int *)(__src[1] + 8);
        iVar25 = *(int *)__src[2];
        iVar29 = *(int *)(__src[2] + 4);
        __src = (undefined1 (*) [12])(__src[2] + 8);
        lVar22 = lVar22 + -4;
        *(int *)__dest = (int)((ulong)(lVar20 * (*(int *)pvVar14 << 1)) >> 0x20);
        *(int *)((long)__dest + 4) = (int)((ulong)(lVar20 * (iVar26 << 1)) >> 0x20);
        *(int *)(__dest + 1) = (int)((ulong)(lVar20 * (iVar23 << 1)) >> 0x20);
        *(int *)((long)__dest + 0xc) = (int)((ulong)(lVar20 * (iVar27 << 1)) >> 0x20);
        *(int *)(__dest + 2) = (int)((ulong)(lVar20 * (iVar24 << 1)) >> 0x20);
        *(int *)((long)__dest + 0x14) = (int)((ulong)(lVar20 * (iVar28 << 1)) >> 0x20);
        *(int *)(__dest + 3) = (int)((ulong)(lVar20 * (iVar25 << 1)) >> 0x20);
        *(int *)((long)__dest + 0x1c) = (int)((ulong)(lVar20 * (iVar29 << 1)) >> 0x20);
        __dest = __dest + 4;
      } while (lVar22 != 0);
      while (__src = pauVar2, __dest = puVar15, uVar5 != 0) {
LAB_00e95fa0:
        *(int *)__dest = (int)((ulong)((*(int *)*__src << 1) * lVar20) >> 0x20);
        *(int *)((long)__dest + 4) =
             (int)((ulong)((*(int *)((long)*__src + 4) << 1) * lVar20) >> 0x20);
        uVar18 = uVar18 - 1;
        puVar15 = __dest + 1;
        pauVar2 = (undefined1 (*) [12])((long)*__src + 8);
        uVar5 = uVar18;
      }
      __dest = (undefined8 *)(param_2 + lVar1 * 4);
    }
    if ((param_6 & 1) != 0) {
      *(int *)__dest = (int)((ulong)((long)(*(int *)*pauVar17 << 1) * (long)iVar4) >> 0x20);
    }
  }
  else {
    iVar4 = *(int *)(&DAT_01995ba8 +
                    (long)(int)((param_4 + 1 & uVar5) << (ulong)(1U - param_3 & 0x1f)) * 4) >>
            ((int)(param_4 + 1) >> (param_3 + 2U & 0x1f) & 0x1fU);
    puVar15 = __dest;
    if (uVar18 != 0) {
      uVar19 = (ulong)(uVar18 - 1);
      lVar22 = (long)(int)param_5 + uVar19 * 2;
      lVar1 = lVar22 + 2;
      lVar20 = (long)iVar4;
      puVar15 = (undefined8 *)(param_2 + lVar1 * 4);
      if (uVar19 + 1 < 4) goto LAB_00e96070;
      lVar22 = lVar22 * 4 + 8;
      if ((__dest < (undefined8 *)(param_1 + lVar22)) &&
         (__src < (undefined1 (*) [12])(param_2 + lVar22))) goto LAB_00e96070;
      uVar5 = param_6 >> 1 & 3;
      lVar21 = (uVar19 + 1) - (ulong)uVar5;
      uVar18 = uVar18 - (int)lVar21;
      lVar22 = (uVar19 + 1) - (ulong)uVar5;
      puVar3 = __dest + lVar21;
      pauVar17 = (undefined1 (*) [12])((long)__src + lVar21 * 8);
      puVar16 = __dest;
      do {
        uVar8 = *(undefined8 *)((long)*__src + 8);
        uVar7 = *(undefined8 *)*__src;
        auVar11 = *__src;
        pauVar2 = (undefined1 (*) [12])(__src[1] + 4);
        uVar10 = *(undefined8 *)__src[2];
        uVar9 = *(undefined8 *)*pauVar2;
        auVar13 = *pauVar2;
        auVar12 = *pauVar2;
        lVar22 = lVar22 + -4;
        puVar16[1] = uVar8;
        *puVar16 = uVar7;
        puVar16[3] = uVar10;
        puVar16[2] = uVar9;
        *(int *)*__src = (int)((ulong)(lVar20 * (auVar11._0_4_ << 1)) >> 0x20);
        *(int *)((long)*__src + 4) =
             (int)((ulong)(lVar20 * ((int)((ulong)uVar7 >> 0x20) << 1)) >> 0x20);
        *(int *)((long)*__src + 8) = (int)((ulong)(lVar20 * (auVar11._8_4_ << 1)) >> 0x20);
        *(int *)__src[1] = (int)((ulong)(lVar20 * ((int)((ulong)uVar8 >> 0x20) << 1)) >> 0x20);
        *(int *)(__src[1] + 4) = (int)((ulong)(lVar20 * (auVar12._0_4_ << 1)) >> 0x20);
        *(int *)(__src[1] + 8) = (int)((ulong)(lVar20 * (auVar13._4_4_ << 1)) >> 0x20);
        *(int *)__src[2] = (int)((ulong)(lVar20 * (auVar12._8_4_ << 1)) >> 0x20);
        *(int *)(__src[2] + 4) =
             (int)((ulong)(lVar20 * ((int)((ulong)uVar10 >> 0x20) << 1)) >> 0x20);
        __src = (undefined1 (*) [12])(__src[2] + 8);
        puVar16 = puVar16 + 4;
        __dest = puVar3;
      } while (lVar22 != 0);
      while (__src = pauVar17, uVar5 != 0) {
LAB_00e96070:
        *(undefined4 *)__dest = *(undefined4 *)*__src;
        uVar6 = *(undefined4 *)((long)*__src + 4);
        *(int *)*__src = (int)((ulong)((*(int *)*__src << 1) * lVar20) >> 0x20);
        *(undefined4 *)((long)__dest + 4) = uVar6;
        *(int *)((long)*__src + 4) =
             (int)((ulong)((*(int *)((long)*__src + 4) << 1) * lVar20) >> 0x20);
        uVar18 = uVar18 - 1;
        __dest = __dest + 1;
        pauVar17 = (undefined1 (*) [12])((long)*__src + 8);
        uVar5 = uVar18;
      }
      __src = (undefined1 (*) [12])(param_1 + lVar1 * 4);
    }
    if ((param_6 & 1) != 0) {
      *(undefined4 *)puVar15 = *(undefined4 *)*__src;
      *(int *)*__src = (int)((ulong)((long)(*(int *)*__src << 1) * (long)iVar4) >> 0x20);
    }
  }
  return;
}

