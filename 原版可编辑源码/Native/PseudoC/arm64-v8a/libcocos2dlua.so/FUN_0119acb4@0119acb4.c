
void FUN_0119acb4(long param_1,undefined1 param_2 [16],undefined1 param_3 [16],uint param_4,
                 char *param_5,int param_6,undefined8 param_7,ushort *param_8,char *param_9)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  undefined1 in_ZR;
  char cVar5;
  char *pcVar6;
  char cVar7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  char *pcVar12;
  ushort *puVar13;
  char cVar14;
  ushort *in_x9;
  ushort *in_x10;
  char in_w11;
  long in_x12;
  uint in_w13;
  ulong in_x14;
  char in_w15;
  int in_w16;
  uint in_w17;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x29;
  
code_r0x0119acb4:
  puVar10 = (ushort *)((long)param_8 + 0xb);
  if ((bool)in_ZR) {
    puVar9 = (ushort *)((long)param_8 + 0xb);
    pcVar12 = param_9 + 0xb;
    do {
      puVar10 = puVar9;
      if (in_x9 <= puVar9) break;
      cVar7 = *pcVar12;
      puVar10 = (ushort *)((long)puVar9 + 1);
      uVar4 = *puVar9;
      puVar9 = puVar10;
      pcVar12 = pcVar12 + 1;
    } while (cVar7 == (char)uVar4);
  }
joined_r0x0119ad0c:
  if (in_w17 == 0) {
    param_5 = param_5 + -1;
  }
  else {
    param_5[~(ulong)in_w17] = (char)in_w17 + -1;
  }
  iVar15 = (int)(char *)((long)puVar10 + -3);
  uVar11 = iVar15 - (int)param_8;
  cVar5 = (char)param_4;
  cVar7 = (char)(param_4 >> 8);
  if (0x106 < uVar11) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)((iVar15 - (int)param_8) - 0x107) & 0xfffffffe;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = in_x14;
    uVar1 = (SUB168(auVar2 * auVar3,8) >> 2) + 1;
    cVar14 = cVar7 + -0x20;
    if (0x1f < uVar1) {
      uVar16 = uVar1 & 0x1ffffe0;
      uVar11 = uVar11 + (int)uVar16 * in_w16;
      pcVar12 = param_5 + uVar16 * 3;
      uVar17 = uVar16;
      do {
        *param_5 = cVar14;
        param_5[1] = param_3[0];
        param_5[2] = cVar5;
        param_5[3] = cVar14;
        param_5[4] = param_3[1];
        param_5[5] = cVar5;
        param_5[6] = cVar14;
        param_5[7] = param_3[2];
        param_5[8] = cVar5;
        param_5[9] = cVar14;
        param_5[10] = param_3[3];
        param_5[0xb] = cVar5;
        param_5[0xc] = cVar14;
        param_5[0xd] = param_3[4];
        param_5[0xe] = cVar5;
        param_5[0xf] = cVar14;
        param_5[0x10] = param_3[5];
        param_5[0x11] = cVar5;
        param_5[0x12] = cVar14;
        param_5[0x13] = param_3[6];
        param_5[0x14] = cVar5;
        param_5[0x15] = cVar14;
        param_5[0x16] = param_3[7];
        param_5[0x17] = cVar5;
        param_5[0x18] = cVar14;
        param_5[0x19] = param_3[8];
        param_5[0x1a] = cVar5;
        param_5[0x1b] = cVar14;
        param_5[0x1c] = param_3[9];
        param_5[0x1d] = cVar5;
        param_5[0x1e] = cVar14;
        param_5[0x1f] = param_3[10];
        param_5[0x20] = cVar5;
        param_5[0x21] = cVar14;
        param_5[0x22] = param_3[0xb];
        param_5[0x23] = cVar5;
        param_5[0x24] = cVar14;
        param_5[0x25] = param_3[0xc];
        param_5[0x26] = cVar5;
        param_5[0x27] = cVar14;
        param_5[0x28] = param_3[0xd];
        param_5[0x29] = cVar5;
        param_5[0x2a] = cVar14;
        param_5[0x2b] = param_3[0xe];
        param_5[0x2c] = cVar5;
        param_5[0x2d] = cVar14;
        param_5[0x2e] = param_3[0xf];
        param_5[0x2f] = cVar5;
        uVar17 = uVar17 - 0x20;
        param_5[0x30] = cVar14;
        param_5[0x31] = param_3[0];
        param_5[0x32] = cVar5;
        param_5[0x33] = cVar14;
        param_5[0x34] = param_3[1];
        param_5[0x35] = cVar5;
        param_5[0x36] = cVar14;
        param_5[0x37] = param_3[2];
        param_5[0x38] = cVar5;
        param_5[0x39] = cVar14;
        param_5[0x3a] = param_3[3];
        param_5[0x3b] = cVar5;
        param_5[0x3c] = cVar14;
        param_5[0x3d] = param_3[4];
        param_5[0x3e] = cVar5;
        param_5[0x3f] = cVar14;
        param_5[0x40] = param_3[5];
        param_5[0x41] = cVar5;
        param_5[0x42] = cVar14;
        param_5[0x43] = param_3[6];
        param_5[0x44] = cVar5;
        param_5[0x45] = cVar14;
        param_5[0x46] = param_3[7];
        param_5[0x47] = cVar5;
        param_5[0x48] = cVar14;
        param_5[0x49] = param_3[8];
        param_5[0x4a] = cVar5;
        param_5[0x4b] = cVar14;
        param_5[0x4c] = param_3[9];
        param_5[0x4d] = cVar5;
        param_5[0x4e] = cVar14;
        param_5[0x4f] = param_3[10];
        param_5[0x50] = cVar5;
        param_5[0x51] = cVar14;
        param_5[0x52] = param_3[0xb];
        param_5[0x53] = cVar5;
        param_5[0x54] = cVar14;
        param_5[0x55] = param_3[0xc];
        param_5[0x56] = cVar5;
        param_5[0x57] = cVar14;
        param_5[0x58] = param_3[0xd];
        param_5[0x59] = cVar5;
        param_5[0x5a] = cVar14;
        param_5[0x5b] = param_3[0xe];
        param_5[0x5c] = cVar5;
        param_5[0x5d] = cVar14;
        param_5[0x5e] = param_3[0xf];
        param_5[0x5f] = cVar5;
        param_5 = param_5 + 0x60;
      } while (uVar17 != 0);
      param_5 = pcVar12;
      if (uVar1 == uVar16) goto LAB_0119ad48;
    }
    do {
      pcVar12 = param_5 + 3;
      uVar11 = uVar11 - 0x106;
      *param_5 = cVar14;
      param_5[1] = in_w15;
      param_5[2] = cVar5;
      param_5 = pcVar12;
    } while (0x106 < uVar11);
  }
LAB_0119ad48:
  if (uVar11 < 7) {
    pcVar12 = param_5 + 2;
    *param_5 = (char)uVar11 * ' ' + cVar7;
  }
  else {
    param_5[2] = cVar5;
    param_4 = uVar11 - 7;
    pcVar12 = param_5 + 3;
    *param_5 = cVar7 + -0x20;
  }
  param_5[1] = (char)param_4;
  puVar9 = puVar10 + -1;
  puVar13 = (ushort *)((long)puVar10 + -1);
  *(char **)(in_x12 + (ulong)((ushort)(*(ushort *)((long)puVar10 + -3) ^
                                       *(ushort *)((long)puVar10 + -3) >> 3 ^ *puVar9) & 0x1fff) * 8
            ) = (char *)((long)puVar10 + -3);
  *(ushort **)
   (in_x12 + (ulong)((ushort)(*puVar9 ^ *puVar9 >> 3 ^ CONCAT11((char)*puVar10,*(char *)puVar13)) &
                    0x1fff) * 8) = puVar9;
  pcVar6 = pcVar12 + 1;
LAB_0119add0:
  in_w17 = 0;
  *pcVar12 = in_w11;
  param_8 = puVar13;
LAB_0119abb0:
  param_5 = pcVar6;
  if (in_x10 <= param_8) {
    if (param_8 <= (ushort *)((long)in_x9 + 1U)) {
      param_8 = (ushort *)((long)param_8 - 1);
      do {
        in_w17 = in_w17 + 1;
        *param_5 = *(char *)((long)param_8 + 1);
        pcVar12 = param_5 + 1;
        if (in_w17 == 0x20) {
          in_w17 = 0;
          param_5[1] = '\x1f';
          pcVar12 = param_5 + 2;
        }
        param_5 = pcVar12;
        param_8 = (ushort *)((long)param_8 + 1);
      } while (param_8 <= in_x9);
    }
    if (in_w17 == 0) {
      param_5 = param_5 + -1;
    }
    else {
      param_5[~(ulong)in_w17] = (char)in_w17 + -1;
    }
    if (*(long *)(param_1 + 0x28) != *(long *)(unaff_x29 + -0x38)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail((int)param_5 - param_6);
    }
    return;
  }
  puVar13 = (ushort *)((long)param_8 + 1);
  lVar8 = (ulong)((ushort)(*param_8 ^ *param_8 >> 3 ^ *puVar13) & 0x1fff) * 8;
  param_9 = *(char **)(in_x12 + lVar8);
  *(ushort **)(in_x12 + lVar8) = param_8;
  param_4 = ~(uint)param_9 + (int)param_8;
  if (param_4 < in_w13) {
    cVar5 = *param_9;
    cVar7 = (char)*param_8;
    if (((cVar5 == (char)*param_8) && (cVar7 = cVar5, param_9[1] == *(char *)puVar13)) &&
       (param_9[2] == (char)param_8[1])) goto code_r0x0119ac30;
  }
  else {
    cVar7 = (char)*param_8;
  }
  in_w17 = in_w17 + 1;
  pcVar12 = param_5 + 1;
  *param_5 = cVar7;
  pcVar6 = pcVar12;
  param_8 = puVar13;
  if (in_w17 == 0x20) goto LAB_0119ae1c;
  goto LAB_0119abb0;
code_r0x0119ac30:
  pcVar12 = param_9 + 3;
  if (param_4 != 0) {
    if (*pcVar12 != *(char *)((long)param_8 + 3)) {
      puVar10 = param_8 + 2;
      goto joined_r0x0119ad0c;
    }
    if (param_9[4] != (char)param_8[2]) {
      puVar10 = (ushort *)((long)param_8 + 5);
      goto joined_r0x0119ad0c;
    }
    if (param_9[5] != *(char *)((long)param_8 + 5)) {
      puVar10 = param_8 + 3;
      goto joined_r0x0119ad0c;
    }
    if (param_9[6] != (char)param_8[3]) {
      puVar10 = (ushort *)((long)param_8 + 7);
      goto joined_r0x0119ad0c;
    }
    if (param_9[7] != *(char *)((long)param_8 + 7)) {
      puVar10 = param_8 + 4;
      goto joined_r0x0119ad0c;
    }
    if (param_9[8] != (char)param_8[4]) {
      puVar10 = (ushort *)((long)param_8 + 9);
      goto joined_r0x0119ad0c;
    }
    if (param_9[9] != *(char *)((long)param_8 + 9)) {
      puVar10 = param_8 + 5;
      goto joined_r0x0119ad0c;
    }
    in_ZR = param_9[10] == (char)param_8[5];
    goto code_r0x0119acb4;
  }
  puVar10 = (ushort *)((long)param_8 + 3);
  for (; (puVar10 < in_x9 && (*pcVar12 == param_9[2])); pcVar12 = pcVar12 + 1) {
    puVar10 = (ushort *)((long)puVar10 + 1);
  }
  goto joined_r0x0119ad0c;
LAB_0119ae1c:
  pcVar6 = param_5 + 2;
  goto LAB_0119add0;
}

