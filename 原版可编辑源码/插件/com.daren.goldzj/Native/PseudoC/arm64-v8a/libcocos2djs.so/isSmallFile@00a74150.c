
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::AudioPlayerProvider::isSmallFile(cocos2d::AudioPlayerProvider::AudioFileInfo const&) */

void __thiscall
cocos2d::AudioPlayerProvider::isSmallFile(AudioPlayerProvider *this,AudioFileInfo *param_1)

{
  AudioFileInfo *pAVar1;
  size_t __n;
  undefined *puVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int *piVar5;
  AudioFileInfo *pAVar6;
  ulong __n_00;
  long lVar7;
  bool bVar8;
  int iVar9;
  undefined1 *puVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  AudioFileInfo *__src;
  uint uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong local_78;
  size_t sStack_70;
  char *local_68;
  ulong local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 00a7417c to 00b74193 has its CatchHandler @ 00a74348 */
  uVar17 = *(ulong *)(param_1 + 8);
  pAVar6 = *(AudioFileInfo **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pAVar6 = param_1 + 1;
    uVar17 = (ulong)((byte)*param_1 >> 1);
  }
  pAVar1 = pAVar6 + uVar17;
  uVar13 = uVar17;
  __src = pAVar1;
  if (0 < (long)uVar17) {
    do {
      if (uVar13 == 0) goto LAB_00a741c4;
      lVar11 = uVar13 - 1;
                    /* try { // try from 00a741a8 to 00b741b3 has its CatchHandler @ 00a74328 */
      uVar13 = uVar13 - 1;
                    /* try { // try from 00a741b4 to 00b741f3 has its CatchHandler @ 00a74358 */
    } while (pAVar6[lVar11] != (AudioFileInfo)0x2e);
    __src = pAVar6 + uVar13;
  }
LAB_00a741c4:
  local_60 = 0;
  sStack_58 = 0;
  local_50 = (char *)0x0;
  if ((__src == pAVar1) || (uVar13 = (long)__src - (long)pAVar6, uVar13 == 0xffffffffffffffff)) {
    uVar15 = 0;
                    /* try { // try from 00a74224 to 00b7425f has its CatchHandler @ 00a74358 */
  }
  else {
    __n_00 = uVar17 - uVar13;
    local_78 = 0;
    sStack_70 = 0;
    local_68 = (char *)0x0;
                    /* try { // try from 00a741f4 to 00b74207 has its CatchHandler @ 00a74330 */
    if ((uVar17 < uVar13) || (0xffffffffffffffef < __n_00)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (__n_00 < 0x17) {
      pcVar16 = (char *)((ulong)&local_78 | 1);
      local_78 = (ulong)(byte)((int)__n_00 << 1);
      if (__n_00 != 0) goto LAB_00a74248;
    }
    else {
      uVar17 = __n_00 + 0x10 & 0xfffffffffffffff0;
      pcVar16 = operator_new(uVar17);
      local_78 = uVar17 | 1;
      sStack_70 = __n_00;
      local_68 = pcVar16;
LAB_00a74248:
      memcpy(pcVar16,__src,__n_00);
    }
    pcVar16[__n_00] = '\0';
    sStack_58 = sStack_70;
    local_60 = local_78;
    uVar17 = local_60;
    local_60._0_1_ = (byte)local_78;
    uVar15 = (uint)(byte)local_60;
    local_50 = local_68;
    local_60 = uVar17;
  }
  bVar8 = (uVar15 & 1) != 0;
  __n = (ulong)(uVar15 >> 1);
  if (bVar8) {
    __n = sStack_58;
  }
  pcVar16 = (char *)((ulong)&local_60 | 1);
  if (bVar8) {
    pcVar16 = local_50;
  }
  sVar3 = (ulong)(DAT_01d38d20 >> 1);
  if ((DAT_01d38d20 & 1) != 0) {
    sVar3 = _DAT_01d38d28;
  }
  if (sVar3 == __n) {
    puVar4 = &DAT_01d38d21;
    if ((DAT_01d38d20 & 1) != 0) {
      puVar4 = DAT_01d38d30;
    }
    if ((DAT_01d38d20 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(DAT_01d38d20 >> 1);
                    /* try { // try from 00a742d0 to 00b74313 has its CatchHandler @ 00a74330 */
        pcVar12 = (char *)&DAT_01d38d21;
        puVar10 = &DAT_01d38d20;
        pcVar14 = pcVar16;
        do {
          if (*pcVar12 != *pcVar14) goto LAB_00a7431c;
          pcVar12 = pcVar12 + 1;
          lVar11 = lVar11 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar11 != 0);
        goto LAB_00a74500;
      }
    }
    else {
                    /* try { // try from 00a74314 to 00b743af has its CatchHandler @ 00a74128 */
      if ((__n != 0) && (iVar9 = memcmp(puVar4,pcVar16,__n), iVar9 != 0)) goto LAB_00a7431c;
    }
    puVar10 = &DAT_01d38d20;
    goto LAB_00a74500;
  }
LAB_00a7431c:
                    /* catch() { ... } // from try @ 00a741a8 with catch @ 00a74328 */
                    /* catch() { ... } // from try @ 00a7419c with catch @ 00a7432c */
                    /* catch() { ... } // from try @ 00a741f4 with catch @ 00a74330
                       catch() { ... } // from try @ 00a742d0 with catch @ 00a74330 */
  sVar3 = (ulong)(DAT_01d38d40 >> 1);
  if ((DAT_01d38d40 & 1) != 0) {
    sVar3 = DAT_01d38d48;
  }
  if (sVar3 == __n) {
                    /* catch() { ... } // from try @ 00a7417c with catch @ 00a74348 */
    puVar2 = &DAT_01d38d41;
    if ((DAT_01d38d40 & 1) != 0) {
      puVar2 = DAT_01d38d50;
    }
    if ((DAT_01d38d40 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a741b4 with catch @ 00a74358
                       catch() { ... } // from try @ 00a74224 with catch @ 00a74358 */
      if (__n != 0) {
        lVar11 = -(ulong)(DAT_01d38d40 >> 1);
        pcVar12 = &DAT_01d38d41;
        puVar10 = &DAT_01d38d40;
        pcVar14 = pcVar16;
        do {
          if (*pcVar12 != *pcVar14) goto LAB_00a743b8;
          pcVar12 = pcVar12 + 1;
          lVar11 = lVar11 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar11 != 0);
        goto LAB_00a74500;
      }
    }
    else {
                    /* try { // try from 00a743b0 to 00b74403 has its CatchHandler @ 00a743b0
                       catch() { ... } // from try @ 00a743b0 with catch @ 00a743b0
                       catch() { ... } // from try @ 00a744fc with catch @ 00a743b0 */
      if ((__n != 0) && (iVar9 = memcmp(puVar2,pcVar16,__n), iVar9 != 0)) goto LAB_00a743b8;
    }
    puVar10 = &DAT_01d38d40;
                    /* try { // try from 00a7443c to 00b74443 has its CatchHandler @ 00a745a0 */
    goto LAB_00a74500;
  }
LAB_00a743b8:
  sVar3 = (ulong)(DAT_01d38d60 >> 1);
  if ((DAT_01d38d60 & 1) != 0) {
    sVar3 = DAT_01d38d68;
  }
  if (sVar3 == __n) {
    puVar2 = &DAT_01d38d61;
    if ((DAT_01d38d60 & 1) != 0) {
      puVar2 = DAT_01d38d70;
    }
    if ((DAT_01d38d60 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(DAT_01d38d60 >> 1);
                    /* try { // try from 00a74404 to 00b7441b has its CatchHandler @ 00a74590 */
        pcVar12 = &DAT_01d38d61;
        puVar10 = &DAT_01d38d60;
        pcVar14 = pcVar16;
        do {
          if (*pcVar12 != *pcVar14) goto LAB_00a74454;
          pcVar12 = pcVar12 + 1;
                    /* try { // try from 00a74424 to 00b7442f has its CatchHandler @ 00a74574 */
          lVar11 = lVar11 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar11 != 0);
        goto LAB_00a74500;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(puVar2,pcVar16,__n), iVar9 != 0)) goto LAB_00a74454;
    puVar10 = &DAT_01d38d60;
    goto LAB_00a74500;
  }
LAB_00a74454:
                    /* try { // try from 00a74460 to 00b7448b has its CatchHandler @ 00a74578 */
  sVar3 = (ulong)(DAT_01d38d80 >> 1);
  if ((DAT_01d38d80 & 1) != 0) {
    sVar3 = DAT_01d38d88;
  }
  if (sVar3 == __n) {
    puVar4 = &DAT_01d38d81;
    if ((DAT_01d38d80 & 1) != 0) {
      puVar4 = DAT_01d38d90;
    }
    if ((DAT_01d38d80 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(DAT_01d38d80 >> 1);
        pcVar12 = (char *)&DAT_01d38d81;
                    /* try { // try from 00a744a4 to 00b744fb has its CatchHandler @ 00a745a0 */
        puVar10 = &DAT_01d38d80;
        do {
          if (*pcVar12 != *pcVar16) goto LAB_00a744ec;
          pcVar12 = pcVar12 + 1;
          lVar11 = lVar11 + 1;
          pcVar16 = pcVar16 + 1;
        } while (lVar11 != 0);
        goto LAB_00a74500;
      }
    }
    else if ((__n != 0) && (iVar9 = memcmp(puVar4,pcVar16,__n), iVar9 != 0)) goto LAB_00a744ec;
                    /* try { // try from 00a744fc to 00b745f7 has its CatchHandler @ 00a743b0 */
    puVar10 = &DAT_01d38d80;
  }
  else {
LAB_00a744ec:
    puVar10 = &DAT_01d38da0;
  }
LAB_00a74500:
  piVar5 = &DAT_01d38d38;
  if (puVar10 != &DAT_01d38da0) {
    piVar5 = (int *)(puVar10 + 0x18);
  }
  lVar11 = *(long *)(param_1 + 0x30);
  iVar9 = *piVar5;
  if ((uVar15 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar11 < iVar9);
}

