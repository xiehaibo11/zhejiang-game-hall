
undefined4
FUN_00ad3d68(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5)

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
  
  local_9c = 1;
LAB_00ad3dbc:
  uVar9 = (ulong)*param_1;
LAB_00ad3dc0:
  iVar7 = 1;
  switch(uVar9) {
  case 0:
    goto switchD_00ad3de0_caseD_0;
  case 0x20:
  case 0x2c:
  case 0x3a:
  case 0x3b:
    goto switchD_00ad3de0_caseD_20;
  case 0x21:
    param_1 = param_1 + 1;
    iVar7 = 2;
    break;
  case 0x2b:
    param_1 = param_1 + 1;
    iVar7 = 4;
    break;
  case 0x2d:
    param_1 = param_1 + 1;
    iVar7 = 3;
    break;
  case 0x40:
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
    __n = 0;
    while( true ) {
      bVar2 = __s1[__n];
      if (((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) && (9 < (byte)(bVar2 - 0x30))) &&
         ((0x3d < bVar2 || ((1L << ((ulong)bVar2 & 0x3f) & 0x2000600000000000U) == 0)))) break;
      __n = __n + 1;
    }
    param_1 = __s1 + __n;
    iVar12 = (int)__n;
    if (iVar12 == 0) {
      ERR_put_error(0x14,0xe6,0x118,"ssl/ssl_ciph.c",0x41c);
      bVar3 = false;
      local_9c = 0;
      param_1 = param_1 + 1;
      goto LAB_00ad4048;
    }
    if (iVar7 == 5) {
      param_1 = __s1 + __n;
      goto joined_r0x00ad4108;
    }
    piVar13 = (int *)*param_4;
    if (bVar2 == 0x2b) {
      param_1 = __s1 + __n + 1;
    }
    if (piVar13 == (int *)0x0) goto LAB_00ad41b0;
    puVar11 = param_4;
    while( true ) {
      puVar11 = puVar11 + 1;
      __s2 = *(char **)(piVar13 + 2);
      iVar6 = strncmp((char *)__s1,__s2,__n);
      if ((iVar6 == 0) && (__s2[__n] == '\0')) break;
      piVar13 = (int *)*puVar11;
      if (piVar13 == (int *)0x0) {
        bVar3 = false;
        goto LAB_00ad4048;
      }
    }
    uVar8 = piVar13[5];
    uVar1 = local_7c;
    uVar10 = local_68;
    if ((uVar8 == 0) || (uVar1 = uVar8, local_7c == 0)) {
      local_7c = uVar1;
      uVar8 = piVar13[6];
      if (piVar13[6] == 0) goto LAB_00ad3f44;
LAB_00ad3f1c:
      uVar10 = uVar8;
      if (local_68 != 0) {
        uVar10 = uVar10 & local_68;
        if (uVar10 != 0) goto LAB_00ad3f44;
        local_68 = 0;
        bVar3 = false;
        goto LAB_00ad4048;
      }
      uVar8 = piVar13[7];
      if (uVar8 != 0) goto LAB_00ad3f4c;
LAB_00ad3f58:
      uVar1 = piVar13[8];
      local_68 = uVar10;
    }
    else {
      local_7c = uVar8 & local_7c;
      if (local_7c == 0) {
        bVar3 = false;
        local_7c = 0;
        goto LAB_00ad4048;
      }
      uVar8 = piVar13[6];
      if (piVar13[6] != 0) goto LAB_00ad3f1c;
LAB_00ad3f44:
      uVar8 = piVar13[7];
      if (uVar8 == 0) goto LAB_00ad3f58;
LAB_00ad3f4c:
      local_68 = uVar10;
      if (local_6c != 0) {
        local_6c = uVar8 & local_6c;
        if (local_6c != 0) goto LAB_00ad3f58;
        local_6c = 0;
        bVar3 = false;
        goto LAB_00ad4048;
      }
      uVar1 = piVar13[8];
      local_6c = uVar8;
    }
    uVar10 = local_70;
    if (((uVar1 != 0) && (uVar10 = uVar1, local_70 != 0)) &&
       (uVar10 = uVar1 & local_70, (uVar1 & local_70) == 0)) {
      local_70 = 0;
      bVar3 = false;
      goto LAB_00ad4048;
    }
    local_70 = uVar10;
    uVar8 = piVar13[0xd];
    uVar10 = uVar8 & 0x1f;
    if (uVar10 != 0) {
      if ((local_74 & 0x1f) == 0) {
        if ((uVar8 >> 5 & 1) != 0) goto LAB_00ad3fbc;
        goto LAB_00ad4004;
      }
      local_74 = (uVar8 | 0xffffffe0) & local_74;
      if ((local_74 & 0x1f) != 0) goto LAB_00ad3fb8;
LAB_00ad41e0:
      bVar3 = false;
      goto LAB_00ad4048;
    }
LAB_00ad3fb8:
    uVar10 = local_74;
    if ((uVar8 >> 5 & 1) == 0) {
LAB_00ad4004:
      iVar6 = *piVar13;
      local_74 = uVar10;
    }
    else {
LAB_00ad3fbc:
      if (uVar10 >> 5 != 0) {
        uVar10 = (uVar8 | 0xffffffdf) & uVar10;
        local_74 = uVar10;
        if (uVar10 >> 5 == 0) goto LAB_00ad41e0;
        goto LAB_00ad4004;
      }
      local_74 = uVar8 & 0x20 | uVar10;
      iVar6 = *piVar13;
    }
    iVar4 = local_78;
    if (((iVar6 == 0) && (iVar6 = piVar13[9], iVar6 != 0)) &&
       ((iVar4 = iVar6, local_78 != 0 && (local_78 != iVar6)))) goto LAB_00ad41e0;
    local_78 = iVar4;
    param_1 = __s1 + __n + 1;
  } while (bVar2 == 0x2b);
  param_1 = __s1 + __n;
  bVar3 = true;
LAB_00ad4048:
  if (iVar7 == 5) {
joined_r0x00ad4108:
    if (iVar12 == 10) {
      iVar7 = strncmp((char *)__s1,"SECLEVEL=",9);
      if (iVar7 != 0) goto LAB_00ad4124;
      if (__s1[9] - 0x30 < 6) {
        iVar7 = 1;
        *(uint *)(param_5 + 0x1c0) = __s1[9] - 0x30;
        goto LAB_00ad4144;
      }
      iVar7 = 0x4b4;
LAB_00ad4134:
      ERR_put_error(0x14,0xe6,0x118,"ssl/ssl_ciph.c",iVar7);
      iVar7 = 0;
    }
    else {
      if ((iVar12 != 8) || (iVar7 = strncmp((char *)__s1,"STRENGTH",8), iVar7 != 0)) {
LAB_00ad4124:
        iVar7 = 0x4ba;
        goto LAB_00ad4134;
      }
      iVar7 = FUN_00ad3be4(param_2,param_3);
    }
LAB_00ad4144:
    uVar5 = 0;
    if (iVar7 != 0) {
      uVar5 = local_9c;
    }
    while ((local_9c = uVar5, uVar9 = (ulong)*param_1, 0x3b < *param_1 ||
           ((1L << (uVar9 & 0x3f) & 0xc00100100000001U) == 0))) {
      param_1 = param_1 + 1;
      uVar5 = local_9c;
    }
LAB_00ad41c8:
    if ((int)uVar9 == 0) {
      return local_9c;
    }
  }
  else {
    if (!bVar3) {
LAB_00ad41b0:
      while ((uVar9 = (ulong)*param_1, 0x3b < *param_1 ||
             ((1L << (uVar9 & 0x3f) & 0xc00100100000001U) == 0))) {
        param_1 = param_1 + 1;
      }
      goto LAB_00ad41c8;
    }
    FUN_00ad38f0(local_7c,local_68,local_6c,local_70,local_78,local_74,iVar7,0xffffffff,param_2,
                 param_3);
    uVar9 = (ulong)*param_1;
    if (*param_1 == 0) {
switchD_00ad3de0_caseD_0:
      return local_9c;
    }
  }
  goto LAB_00ad3dc0;
switchD_00ad3de0_caseD_20:
  param_1 = param_1 + 1;
  goto LAB_00ad3dbc;
}

