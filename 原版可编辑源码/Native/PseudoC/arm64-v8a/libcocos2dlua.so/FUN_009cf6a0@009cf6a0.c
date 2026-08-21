
void FUN_009cf6a0(int *param_1,int *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  size_t __n;
  long lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  long lVar21;
  byte local_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar17 = *(byte **)(param_1 + 2);
  lVar18 = *(long *)(param_1 + 6);
  uVar4 = (ulong)*pbVar17;
  iVar3 = *(int *)(lVar18 + uVar4 * 4);
  *param_2 = iVar3;
  while (iVar3 == 0xb) {
    pbVar17 = pbVar17 + 1;
    *(byte **)(param_1 + 2) = pbVar17;
    uVar4 = (ulong)*pbVar17;
    iVar3 = *(int *)(lVar18 + uVar4 * 4);
    *param_2 = iVar3;
  }
  uVar20 = *(undefined8 *)param_1;
  param_2[1] = (int)pbVar17 - (int)uVar20;
  if (iVar3 == 10) goto LAB_009cfd0c;
  if (iVar3 != 0xd) {
    if (iVar3 != 0xc) {
      *(byte **)(param_1 + 2) = pbVar17 + 1;
      goto LAB_009cfd0c;
    }
    goto LAB_009cf734;
  }
  iVar3 = (int)uVar4;
  if (iVar3 == 0x2d) {
LAB_009cfad8:
    if (*(int *)(lVar18 + 0x53c) != 0) goto LAB_009cfae0;
    bVar7 = *pbVar17;
    if (bVar7 != 0x2b) {
      pbVar19 = pbVar17;
      if (bVar7 == 0x2d) {
        pbVar19 = pbVar17 + 1;
        bVar7 = *pbVar19;
      }
      if (bVar7 == 0x30) {
                    /* try { // try from 009cfb48 to 00acfb5b has its CatchHandler @ 009d8058 */
        if (((pbVar19[1] | 0x20) == 0x78) || ((byte)(pbVar19[1] - 0x30) < 10)) goto LAB_009cfc68;
      }
      else if ((0x39 < bVar7) &&
              ((iVar3 = strncasecmp((char *)pbVar19,"inf",3), iVar3 == 0 ||
               (iVar3 = strncasecmp((char *)pbVar19,"nan",3), iVar3 == 0)))) goto LAB_009cfc68;
LAB_009cfae0:
      *param_2 = 5;
      uVar20 = fpconv_strtod(pbVar17,&local_70);
      *(undefined8 *)(param_2 + 2) = uVar20;
      pbVar17 = *(byte **)(param_1 + 2);
      pbVar19 = (byte *)CONCAT44(uStack_6c,
                                 CONCAT13(bStack_6d,CONCAT12(bStack_6e,CONCAT11(bStack_6f,local_70))
                                         ));
      if (pbVar17 != pbVar19) {
LAB_009cfb08:
        *(byte **)(param_1 + 2) = pbVar19;
        goto LAB_009cfd0c;
      }
      *param_2 = 0xc;
      iVar3 = *param_1;
      pcVar9 = "invalid number";
      goto LAB_009cfd00;
    }
LAB_009cfc68:
    pcVar9 = "invalid number";
LAB_009cf744:
    *param_2 = 0xc;
    param_2[1] = (int)pbVar17 - (int)uVar20;
  }
  else {
    if (iVar3 != 0x22) {
      if (iVar3 - 0x30U < 10) goto LAB_009cfad8;
                    /* try { // try from 009cfb60 to 00acfbcb has its CatchHandler @ 009d817c */
      iVar3 = strncmp((char *)pbVar17,"true",4);
      if (iVar3 == 0) {
        *param_2 = 6;
        param_2[2] = 1;
        *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + 4;
        goto LAB_009cfd0c;
      }
      iVar3 = strncmp((char *)pbVar17,"false",5);
      if (iVar3 == 0) {
        *param_2 = 6;
        param_2[2] = 0;
        *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + 5;
        goto LAB_009cfd0c;
      }
      iVar3 = strncmp((char *)pbVar17,"null",4);
      if (iVar3 == 0) {
        pbVar19 = pbVar17 + 4;
        *param_2 = 7;
        goto LAB_009cfb08;
      }
      if (*(int *)(lVar18 + 0x53c) == 0) goto LAB_009cf734;
      bVar7 = *pbVar17;
      if (bVar7 == 0x2b) goto LAB_009cfae0;
      pbVar19 = pbVar17;
      if (bVar7 == 0x2d) {
                    /* try { // try from 009cfbcc to 00acfccb has its CatchHandler @ 009cee70 */
        pbVar19 = pbVar17 + 1;
        bVar7 = *pbVar19;
      }
      if (bVar7 == 0x30) {
        if (((pbVar19[1] | 0x20) == 0x78) || ((byte)(pbVar19[1] - 0x30) < 10)) goto LAB_009cfae0;
      }
      else if ((0x39 < bVar7) &&
              ((iVar3 = strncasecmp((char *)pbVar19,"inf",3), iVar3 == 0 ||
               (iVar3 = strncasecmp((char *)pbVar19,"nan",3), iVar3 == 0)))) goto LAB_009cfae0;
LAB_009cf734:
      pcVar9 = "invalid token";
      goto LAB_009cf744;
    }
    pbVar17 = pbVar17 + 1;
    *(byte **)(param_1 + 2) = pbVar17;
    *(undefined4 *)(*(long *)(param_1 + 4) + 0xc) = 0;
LAB_009cf7c4:
    while (bVar7 = *pbVar17, bVar7 == 0x5c) {
      bVar7 = *(byte *)(lVar18 + (ulong)pbVar17[1] + 0x400);
      if (bVar7 != 0x75) {
        if (bVar7 != 0) {
          *(byte **)(param_1 + 2) = pbVar17 + 1;
          goto LAB_009cf7a0;
        }
        *param_2 = 0xc;
        iVar3 = *param_1;
        pcVar9 = "invalid escape code";
        goto LAB_009cfd00;
      }
      bVar7 = pbVar17[2];
      uVar8 = (uint)bVar7;
      if (9 < bVar7 - 0x30) {
        uVar8 = bVar7 | 0x20;
        if ((uVar8 - 0x61 & 0xff) < 6) {
          iVar3 = -0x57;
          goto LAB_009cf810;
        }
LAB_009cfc00:
        *param_2 = 0xc;
        iVar3 = *param_1;
        pcVar9 = "invalid unicode escape code";
        goto LAB_009cfd00;
      }
      iVar3 = -0x30;
LAB_009cf810:
      bVar7 = pbVar17[3];
      uVar10 = (uint)bVar7;
      if (bVar7 - 0x30 < 10) {
        iVar11 = -0x30;
      }
      else {
        uVar10 = bVar7 | 0x20;
        if (5 < (uVar10 - 0x61 & 0xff)) goto LAB_009cfc00;
        iVar11 = -0x57;
      }
      bVar7 = pbVar17[4];
      uVar12 = (uint)bVar7;
      if (bVar7 - 0x30 < 10) {
        iVar13 = -0x30;
      }
      else {
        uVar12 = bVar7 | 0x20;
        if (5 < (uVar12 - 0x61 & 0xff)) goto LAB_009cfc00;
        iVar13 = -0x57;
      }
      bVar7 = pbVar17[5];
      uVar14 = (uint)bVar7;
      if (bVar7 - 0x30 < 10) {
        iVar15 = -0x30;
      }
      else {
        uVar14 = bVar7 | 0x20;
        if (5 < (uVar14 - 0x61 & 0xff)) goto LAB_009cfc00;
        iVar15 = -0x57;
      }
      uVar8 = (iVar11 + uVar10) * 0x100 + (iVar3 + uVar8) * 0x1000 + (iVar13 + uVar12) * 0x10 +
              iVar15 + uVar14;
      if ((int)uVar8 < 0) goto LAB_009cfc00;
      if ((uVar8 & 0xf800) == 0xd800) {
        if ((((uVar8 >> 10 & 1) == 0) && (pbVar17[6] == 0x5c)) && (pbVar17[7] == 0x75)) {
          bVar7 = pbVar17[8];
          uVar10 = (uint)bVar7;
          if (bVar7 - 0x30 < 10) {
            iVar3 = -0x30;
          }
          else {
            uVar10 = bVar7 | 0x20;
            if (5 < (uVar10 - 0x61 & 0xff)) goto LAB_009cfc00;
            iVar3 = -0x57;
          }
          bVar7 = pbVar17[9];
          uVar12 = (uint)bVar7;
          if (bVar7 - 0x30 < 10) {
            iVar11 = -0x30;
          }
          else {
            uVar12 = bVar7 | 0x20;
            if (5 < (uVar12 - 0x61 & 0xff)) goto LAB_009cfc00;
            iVar11 = -0x57;
          }
          bVar7 = pbVar17[10];
          uVar14 = (uint)bVar7;
          if (bVar7 - 0x30 < 10) {
            iVar13 = -0x30;
          }
          else {
            uVar14 = bVar7 | 0x20;
            if (5 < (uVar14 - 0x61 & 0xff)) goto LAB_009cfc00;
            iVar13 = -0x57;
          }
          bVar7 = pbVar17[0xb];
          uVar16 = (uint)bVar7;
          if (bVar7 - 0x30 < 10) {
            iVar15 = -0x30;
          }
          else {
            uVar16 = bVar7 | 0x20;
            if (5 < (uVar16 - 0x61 & 0xff)) goto LAB_009cfc00;
            iVar15 = -0x57;
          }
          uVar10 = (iVar11 + uVar12) * 0x100 + (iVar3 + uVar10) * 0x1000 + (iVar13 + uVar14) * 0x10
                   + iVar15 + uVar16;
          if ((uVar10 & 0x8000fc00) == 0xdc00) {
            uVar8 = (uVar10 & 0x3ff | (uVar8 & 0x3ff) << 10) + 0x10000;
            lVar21 = 0xc;
            if (0x7f < uVar8) goto LAB_009cfa08;
            goto LAB_009cf910;
          }
        }
        goto LAB_009cfc00;
      }
      lVar21 = 6;
      if ((int)uVar8 < 0x80) {
LAB_009cf910:
        local_70 = (byte)uVar8;
        __n = 1;
      }
      else {
LAB_009cfa08:
        bVar7 = (byte)uVar8 & 0x3f | 0x80;
        if ((int)uVar8 < 0x800) {
          local_70 = (byte)(uVar8 >> 6) | 0xc0;
          __n = 2;
          bStack_6f = bVar7;
        }
        else {
          bVar1 = (byte)(uVar8 >> 6) & 0x3f | 0x80;
          if ((int)uVar8 < 0x10000) {
                    /* try { // try from 009cfa44 to 00acfaaf has its CatchHandler @ 009d8180 */
            local_70 = (byte)(uVar8 >> 0xc) | 0xe0;
            __n = 3;
            bStack_6f = bVar1;
            bStack_6e = bVar7;
          }
          else {
            if (0x1fffff < (int)uVar8) goto LAB_009cfc00;
            local_70 = (byte)(uVar8 >> 0x12) | 0xf0;
            bStack_6f = (byte)(uVar8 >> 0xc) & 0x3f | 0x80;
            __n = 4;
            bStack_6e = bVar1;
            bStack_6d = bVar7;
          }
        }
      }
      plVar5 = *(long **)(param_1 + 4);
      memcpy((void *)(*plVar5 + (long)*(int *)((long)plVar5 + 0xc)),&local_70,__n);
      *(int *)((long)plVar5 + 0xc) = *(int *)((long)plVar5 + 0xc) + (int)__n;
      pbVar17 = (byte *)(*(long *)(param_1 + 2) + lVar21);
      *(byte **)(param_1 + 2) = pbVar17;
    }
    if (bVar7 == 0x22) {
      *(byte **)(param_1 + 2) = pbVar17 + 1;
      *(undefined1 *)
       (**(long **)(param_1 + 4) + (long)*(int *)((long)*(long **)(param_1 + 4) + 0xc)) = 0;
      *param_2 = 4;
      puVar6 = *(undefined8 **)(param_1 + 4);
      param_2[4] = *(int *)((long)puVar6 + 0xc);
                    /* try { // try from 009cfccc to 00acfd37 has its CatchHandler @ 009d8178 */
      *(undefined8 *)(param_2 + 2) = *puVar6;
      goto LAB_009cfd0c;
    }
    if (bVar7 != 0) {
LAB_009cf7a0:
      plVar5 = *(long **)(param_1 + 4);
      iVar3 = *(int *)((long)plVar5 + 0xc);
      *(int *)((long)plVar5 + 0xc) = iVar3 + 1;
      *(byte *)(*plVar5 + (long)iVar3) = bVar7;
      pbVar17 = (byte *)(*(long *)(param_1 + 2) + 1);
      *(byte **)(param_1 + 2) = pbVar17;
      goto LAB_009cf7c4;
    }
    *param_2 = 0xc;
    iVar3 = *param_1;
    pcVar9 = "unexpected end of string";
LAB_009cfd00:
    param_2[1] = (int)pbVar17 - iVar3;
  }
  *(char **)(param_2 + 2) = pcVar9;
LAB_009cfd0c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

