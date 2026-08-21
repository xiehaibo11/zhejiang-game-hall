
undefined4
FUN_00ac4594(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *__s1;
  int iVar12;
  size_t __n;
  char *__s2;
  int *piVar13;
  undefined4 local_9c;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  
                    /* try { // try from 00ac45c0 to 00bc4627 has its CatchHandler @ 00ac45c0
                       catch() { ... } // from try @ 00ac45c0 with catch @ 00ac45c0
                       catch() { ... } // from try @ 00ac4634 with catch @ 00ac45c0
                       catch() { ... } // from try @ 00ac4664 with catch @ 00ac45c0
                       catch() { ... } // from try @ 00ac4694 with catch @ 00ac45c0
                       catch() { ... } // from try @ 00ac46c4 with catch @ 00ac45c0
                       catch() { ... } // from try @ 00ac4708 with catch @ 00ac45c0
                       catch() { ... } // from try @ 00ac475c with catch @ 00ac45c0 */
  local_9c = 1;
LAB_00ac45e8:
  uVar9 = (ulong)*param_1;
LAB_00ac45ec:
  iVar7 = 1;
  switch(uVar9) {
  case 0:
    goto switchD_00ac460c_caseD_0;
  case 0x20:
  case 0x2c:
  case 0x3a:
  case 0x3b:
    goto switchD_00ac460c_caseD_20;
  case 0x21:
    param_1 = param_1 + 1;
    iVar7 = 2;
    break;
  case 0x2b:
    param_1 = param_1 + 1;
    iVar7 = 4;
    break;
  case 0x2d:
                    /* try { // try from 00ac4628 to 00bc4633 has its CatchHandler @ 00ac47a0 */
    param_1 = param_1 + 1;
    iVar7 = 3;
    break;
  case 0x40:
                    /* try { // try from 00ac4634 to 00bc4657 has its CatchHandler @ 00ac45c0 */
    param_1 = param_1 + 1;
    iVar7 = 5;
  }
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_68 = 0;
  local_7c = 0;
  do {
    __s1 = param_1;
                    /* try { // try from 00ac4658 to 00bc4663 has its CatchHandler @ 00ac479c */
    __n = 0;
                    /* try { // try from 00ac4664 to 00bc4687 has its CatchHandler @ 00ac45c0 */
    while( true ) {
      bVar2 = __s1[__n];
                    /* try { // try from 00ac4688 to 00bc4693 has its CatchHandler @ 00ac4798 */
                    /* try { // try from 00ac4694 to 00bc46b7 has its CatchHandler @ 00ac45c0 */
      if (((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (9 < (byte)(bVar2 - 0x30))) &&
         ((0x3d < bVar2 || ((1L << ((ulong)bVar2 & 0x3f) & 0x2000600000000000U) == 0)))) break;
      __n = __n + 1;
    }
    param_1 = __s1 + __n;
    iVar12 = (int)__n;
                    /* try { // try from 00ac46b8 to 00bc46c3 has its CatchHandler @ 00ac4794 */
    if (iVar12 == 0) {
      ERR_put_error(0x14,0xe6,0x118,"ssl/ssl_ciph.c",0x41c);
      bVar3 = false;
      local_9c = 0;
      param_1 = param_1 + 1;
      goto LAB_00ac4874;
    }
                    /* try { // try from 00ac46c4 to 00bc46fb has its CatchHandler @ 00ac45c0 */
    if (iVar7 == 5) {
      param_1 = __s1 + __n;
      goto joined_r0x00ac4934;
    }
    piVar13 = (int *)*param_4;
    if (bVar2 == 0x2b) {
      param_1 = __s1 + __n + 1;
    }
    if (piVar13 == (int *)0x0) goto LAB_00ac49dc;
    puVar11 = param_4;
    while( true ) {
      puVar11 = puVar11 + 1;
      __s2 = *(char **)(piVar13 + 2);
                    /* try { // try from 00ac46fc to 00bc4707 has its CatchHandler @ 00ac4790 */
      iVar6 = strncmp((char *)__s1,__s2,__n);
                    /* try { // try from 00ac4708 to 00bc474f has its CatchHandler @ 00ac45c0 */
      if ((iVar6 == 0) && (__s2[__n] == '\0')) break;
      piVar13 = (int *)*puVar11;
      if (piVar13 == (int *)0x0) {
        bVar3 = false;
        goto LAB_00ac4874;
      }
    }
    uVar8 = piVar13[5];
    uVar1 = local_7c;
    uVar10 = local_68;
    if ((uVar8 == 0) || (uVar1 = uVar8, local_7c == 0)) {
                    /* try { // try from 00ac475c to 00bc47b3 has its CatchHandler @ 00ac45c0 */
      local_7c = uVar1;
      uVar8 = piVar13[6];
      if (piVar13[6] == 0) goto LAB_00ac4770;
LAB_00ac4748:
      uVar10 = uVar8;
      if (local_68 != 0) {
        uVar10 = uVar10 & local_68;
                    /* try { // try from 00ac4750 to 00bc475b has its CatchHandler @ 00ac478c */
        if (uVar10 != 0) goto LAB_00ac4770;
        local_68 = 0;
        bVar3 = false;
        goto LAB_00ac4874;
      }
                    /* catch() { ... } // from try @ 00ac4658 with catch @ 00ac479c */
                    /* catch() { ... } // from try @ 00ac4628 with catch @ 00ac47a0 */
      uVar8 = piVar13[7];
      if (uVar8 != 0) goto LAB_00ac4778;
LAB_00ac4784:
      uVar1 = piVar13[8];
      local_68 = uVar10;
    }
    else {
      local_7c = uVar8 & local_7c;
      if (local_7c == 0) {
        bVar3 = false;
        local_7c = 0;
        goto LAB_00ac4874;
      }
      uVar8 = piVar13[6];
      if (piVar13[6] != 0) goto LAB_00ac4748;
LAB_00ac4770:
      uVar8 = piVar13[7];
      if (uVar8 == 0) goto LAB_00ac4784;
LAB_00ac4778:
      local_68 = uVar10;
      if (local_6c != 0) {
        local_6c = uVar8 & local_6c;
        if (local_6c != 0) goto LAB_00ac4784;
        local_6c = 0;
        bVar3 = false;
        goto LAB_00ac4874;
      }
      uVar1 = piVar13[8];
      local_6c = uVar8;
    }
    uVar10 = local_70;
                    /* catch() { ... } // from try @ 00ac4750 with catch @ 00ac478c */
                    /* catch() { ... } // from try @ 00ac46fc with catch @ 00ac4790 */
                    /* catch() { ... } // from try @ 00ac46b8 with catch @ 00ac4794 */
    if (((uVar1 != 0) && (uVar10 = uVar1, local_70 != 0)) &&
       (uVar10 = uVar1 & local_70, (uVar1 & local_70) == 0)) {
      local_70 = 0;
      bVar3 = false;
      goto LAB_00ac4874;
    }
    local_70 = uVar10;
    uVar8 = piVar13[0xd];
    uVar10 = uVar8 & 0x1f;
    if (uVar10 != 0) {
      if ((local_74 & 0x1f) == 0) {
        if ((uVar8 >> 5 & 1) != 0) goto LAB_00ac47e8;
        goto LAB_00ac4830;
      }
      local_74 = (uVar8 | 0xffffffe0) & local_74;
      if ((local_74 & 0x1f) != 0) goto LAB_00ac47e4;
LAB_00ac4a0c:
      bVar3 = false;
      goto LAB_00ac4874;
    }
LAB_00ac47e4:
    uVar10 = local_74;
    if ((uVar8 >> 5 & 1) == 0) {
LAB_00ac4830:
      iVar6 = *piVar13;
      local_74 = uVar10;
    }
    else {
LAB_00ac47e8:
      if (uVar10 >> 5 != 0) {
        uVar10 = (uVar8 | 0xffffffdf) & uVar10;
        local_74 = uVar10;
        if (uVar10 >> 5 == 0) goto LAB_00ac4a0c;
        goto LAB_00ac4830;
      }
      local_74 = uVar8 & 0x20 | uVar10;
      iVar6 = *piVar13;
    }
    iVar4 = local_78;
    if (((iVar6 == 0) && (iVar6 = piVar13[9], iVar6 != 0)) &&
       ((iVar4 = iVar6, local_78 != 0 && (local_78 != iVar6)))) goto LAB_00ac4a0c;
    local_78 = iVar4;
    param_1 = __s1 + __n + 1;
  } while (bVar2 == 0x2b);
  param_1 = __s1 + __n;
  bVar3 = true;
LAB_00ac4874:
  if (iVar7 == 5) {
joined_r0x00ac4934:
    if (iVar12 == 10) {
      iVar7 = strncmp((char *)__s1,"SECLEVEL=",9);
      if (iVar7 != 0) goto LAB_00ac4950;
      if (__s1[9] - 0x30 < 6) {
        iVar7 = 1;
        *(uint *)(param_5 + 0x1c0) = __s1[9] - 0x30;
        goto LAB_00ac4970;
      }
      iVar7 = 0x4b4;
LAB_00ac4960:
      ERR_put_error(0x14,0xe6,0x118,"ssl/ssl_ciph.c",iVar7);
      iVar7 = 0;
    }
    else {
      if ((iVar12 != 8) || (iVar7 = strncmp((char *)__s1,"STRENGTH",8), iVar7 != 0)) {
LAB_00ac4950:
        iVar7 = 0x4ba;
        goto LAB_00ac4960;
      }
      iVar7 = FUN_00ac4410(param_2,param_3);
    }
LAB_00ac4970:
    uVar5 = 0;
    if (iVar7 != 0) {
      uVar5 = local_9c;
    }
    while ((local_9c = uVar5, uVar9 = (ulong)*param_1, 0x3b < *param_1 ||
           ((1L << (uVar9 & 0x3f) & 0xc00100100000001U) == 0))) {
      param_1 = param_1 + 1;
      uVar5 = local_9c;
    }
LAB_00ac49f4:
    if ((int)uVar9 == 0) {
      return local_9c;
    }
  }
  else {
    if (!bVar3) {
LAB_00ac49dc:
      while ((uVar9 = (ulong)*param_1, 0x3b < *param_1 ||
             ((1L << (uVar9 & 0x3f) & 0xc00100100000001U) == 0))) {
        param_1 = param_1 + 1;
      }
      goto LAB_00ac49f4;
    }
    FUN_00ac411c(local_7c,local_68,local_6c,local_70,local_78,local_74,iVar7,0xffffffff,param_2,
                 param_3);
    uVar9 = (ulong)*param_1;
    if (*param_1 == 0) {
switchD_00ac460c_caseD_0:
      return local_9c;
    }
  }
  goto LAB_00ac45ec;
switchD_00ac460c_caseD_20:
  param_1 = param_1 + 1;
  goto LAB_00ac45e8;
}

