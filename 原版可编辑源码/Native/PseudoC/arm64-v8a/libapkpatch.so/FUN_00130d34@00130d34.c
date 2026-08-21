
void FUN_00130d34(long *param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  ushort uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  char *pcVar20;
  undefined1 *puVar21;
  ulong uVar22;
  int iVar23;
  byte *pbVar24;
  undefined2 uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  undefined1 *__dest;
  undefined1 *puVar31;
  ulong uVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  int local_80;
  uint local_7c;
  undefined4 local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  iVar9 = FUN_00130b1c();
  if (((iVar9 != 0) || (__dest = (undefined1 *)param_1[3], __dest == (undefined1 *)0x0)) ||
     ((pbVar33 = (byte *)*param_1, pbVar33 == (byte *)0x0 && ((int)param_1[1] != 0)))) {
switchD_00130e38_default:
    iVar10 = -2;
    goto LAB_00130d74;
  }
  lVar37 = param_1[7];
  puVar15 = (uint *)(lVar37 + 8);
  uVar35 = *puVar15;
  if (uVar35 == 0x3f3f) {
    uVar35 = 0x3f40;
    *puVar15 = 0x3f40;
  }
  uVar3 = *(uint *)(param_1 + 1);
  local_7c = *(uint *)(param_1 + 4);
  uVar36 = *(ulong *)(lVar37 + 0x50);
  uVar32 = (ulong)*(uint *)(lVar37 + 0x58);
  uVar30 = (ulong)uVar3;
  local_80 = 0;
  uVar13 = local_7c;
LAB_00130e10:
  uVar16 = (uint)uVar32;
  uVar17 = (uint)uVar30;
  pbVar34 = pbVar33;
  iVar9 = 1;
  iVar10 = -3;
  switch(uVar35) {
  case 0x3f34:
    uVar35 = *(uint *)(lVar37 + 0x10);
    if (uVar35 == 0) {
      uVar35 = 0x3f40;
      goto LAB_0013234c;
    }
    if (uVar16 < 0x10) {
      do {
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar14 = uVar32 + 8;
        uVar30 = (ulong)((int)uVar30 - 1);
        bVar8 = uVar32 < 8;
        uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
        uVar32 = uVar14;
        pbVar33 = pbVar34;
      } while (bVar8);
      uVar32 = uVar14 & 0xffffffff;
    }
    if (((uVar35 >> 1 & 1) == 0) || (uVar36 != 0x8b1f)) {
      *(undefined4 *)(lVar37 + 0x18) = 0;
      if (*(long *)(lVar37 + 0x30) != 0) {
        *(undefined4 *)(*(long *)(lVar37 + 0x30) + 0x48) = 0xffffffff;
      }
      if (((uVar35 & 1) == 0) ||
         (0x842108421084210 <
          (((ulong)(uint)((int)uVar36 << 8) & 0xff00) + (uVar36 >> 8)) * -0x1084210842108421)) {
        pcVar20 = "incorrect header check";
      }
      else {
        if ((uVar36 & 0xf) != 8) goto LAB_00132404;
        uVar35 = *(uint *)(lVar37 + 0x38);
        uVar14 = uVar36 >> 4 & 0xf;
        uVar17 = (uint)uVar14;
        if (uVar35 == 0) {
          uVar35 = uVar17 + 8;
          *(uint *)(lVar37 + 0x38) = uVar17 + 8;
        }
        if ((uVar17 < 8) && (uVar17 + 8 <= uVar35)) {
          *(int *)(lVar37 + 0x1c) = 0x100 << uVar14;
          lVar12 = FUN_00132b28(0,0,0);
          uVar18 = 0x3f3f;
          if ((uVar36 & 0x2000) != 0) {
            uVar18 = 0x3f3d;
          }
          uVar32 = 0;
          *(long *)(lVar37 + 0x20) = lVar12;
          param_1[0xc] = lVar12;
          *(undefined4 *)(lVar37 + 8) = uVar18;
          uVar36 = 0;
          goto LAB_00132418;
        }
        uVar32 = (ulong)((int)uVar32 - 4);
        uVar36 = uVar36 >> 4;
        pcVar20 = "invalid window size";
      }
      break;
    }
    if (*(int *)(lVar37 + 0x38) == 0) {
      *(undefined4 *)(lVar37 + 0x38) = 0xf;
    }
    uVar11 = FUN_0012e2ac(0,0,0);
    *(undefined8 *)(lVar37 + 0x20) = uVar11;
    local_6c = CONCAT22(local_6c._2_2_,0x8b1f);
    uVar11 = FUN_0012e2ac(uVar11,&local_6c,2);
    uVar32 = 0;
    *(undefined8 *)(lVar37 + 0x20) = uVar11;
    uVar36 = 0;
    *puVar15 = 0x3f35;
    goto LAB_00132418;
  case 0x3f35:
    if (uVar16 < 0x10) {
      do {
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar14 = uVar32 + 8;
        uVar30 = (ulong)((int)uVar30 - 1);
        bVar8 = uVar32 < 8;
        uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
        uVar32 = uVar14;
        pbVar33 = pbVar34;
      } while (bVar8);
      uVar32 = uVar14 & 0xffffffff;
    }
    uVar35 = (uint)uVar36;
    *(uint *)(lVar37 + 0x18) = uVar35;
    if ((uVar35 & 0xff) == 8) {
      if ((uVar36 & 0xe000) == 0) {
        if (*(uint **)(lVar37 + 0x30) != (uint *)0x0) {
          **(uint **)(lVar37 + 0x30) = uVar35 >> 8 & 1;
        }
        if (((uVar35 >> 9 & 1) != 0) && ((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0)) {
          local_6c = CONCAT22(local_6c._2_2_,(short)uVar36);
          uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),&local_6c,2);
          *(undefined8 *)(lVar37 + 0x20) = uVar11;
        }
        uVar32 = 0;
        uVar36 = 0;
        *puVar15 = 0x3f36;
        goto LAB_0013185c;
      }
      pcVar20 = "unknown header flags set";
    }
    else {
LAB_00132404:
      pcVar20 = "unknown compression method";
    }
    break;
  case 0x3f36:
    if (uVar16 < 0x20) {
LAB_0013185c:
      do {
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar30 = (ulong)((int)uVar30 - 1);
        bVar8 = uVar32 < 0x18;
        uVar14 = uVar32 & 0x3f;
        uVar32 = uVar32 + 8;
        uVar36 = ((ulong)*pbVar33 << uVar14) + uVar36;
        pbVar33 = pbVar34;
      } while (bVar8);
    }
    if (*(long *)(lVar37 + 0x30) != 0) {
      *(ulong *)(*(long *)(lVar37 + 0x30) + 8) = uVar36;
    }
    if (((*(byte *)(lVar37 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0)) {
      local_6c = (undefined4)uVar36;
      uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),&local_6c,4);
      *(undefined8 *)(lVar37 + 0x20) = uVar11;
    }
    uVar32 = 0;
    uVar36 = 0;
    *puVar15 = 0x3f37;
LAB_001318e4:
    do {
      if ((int)uVar30 == 0) goto LAB_0013244c;
      pbVar34 = pbVar33 + 1;
      uVar30 = (ulong)((int)uVar30 - 1);
      bVar8 = uVar32 < 8;
      uVar14 = uVar32 & 0x3f;
      uVar32 = uVar32 + 8;
      uVar36 = ((ulong)*pbVar33 << uVar14) + uVar36;
      pbVar33 = pbVar34;
    } while (bVar8);
    goto LAB_00131904;
  case 0x3f37:
    if (uVar16 < 0x10) goto LAB_001318e4;
LAB_00131904:
    lVar12 = *(long *)(lVar37 + 0x30);
    if (lVar12 != 0) {
      *(uint *)(lVar12 + 0x10) = (uint)uVar36 & 0xff;
      *(int *)(lVar12 + 0x14) = (int)(uVar36 >> 8);
    }
    if (((*(byte *)(lVar37 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0)) {
      local_6c = CONCAT22(local_6c._2_2_,(short)uVar36);
      uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),&local_6c,2);
      *(undefined8 *)(lVar37 + 0x20) = uVar11;
    }
    uVar35 = *(uint *)(lVar37 + 0x18);
    uVar36 = 0;
    uVar32 = 0;
    *(undefined4 *)(lVar37 + 8) = 0x3f38;
    uVar14 = 0;
    if ((uVar35 >> 10 & 1) == 0) {
LAB_00131978:
      pbVar34 = pbVar33;
      if (*(long *)(lVar37 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(lVar37 + 0x30) + 0x18) = 0;
      }
    }
    else {
LAB_0013198c:
      do {
        uVar32 = uVar14;
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar30 = (ulong)((int)uVar30 - 1);
        uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
        uVar14 = uVar32 + 8;
        pbVar33 = pbVar34;
      } while (uVar32 < 8);
LAB_001319b0:
      *(int *)(lVar37 + 0x5c) = (int)uVar36;
      if (*(long *)(lVar37 + 0x30) != 0) {
        *(int *)(*(long *)(lVar37 + 0x30) + 0x20) = (int)uVar36;
      }
      if (((uVar35 >> 9 & 1) == 0) || ((*(byte *)(lVar37 + 0x10) >> 2 & 1) == 0)) {
        uVar36 = 0;
        uVar32 = 0;
      }
      else {
        local_6c = CONCAT22(local_6c._2_2_,(short)uVar36);
        uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),&local_6c,2);
        uVar36 = 0;
        uVar32 = 0;
        *(undefined8 *)(lVar37 + 0x20) = uVar11;
      }
    }
    *puVar15 = 0x3f39;
    pbVar33 = pbVar34;
switchD_00130e38_caseD_3f39:
    uVar35 = *(uint *)(lVar37 + 0x18);
    if ((uVar35 >> 10 & 1) != 0) {
      uVar16 = *(uint *)(lVar37 + 0x5c);
      uVar28 = (uint)uVar30;
      uVar17 = uVar28;
      if (uVar16 <= uVar28) {
        uVar17 = uVar16;
      }
      if (uVar17 != 0) {
        lVar12 = *(long *)(lVar37 + 0x30);
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
          uVar16 = *(int *)(lVar12 + 0x20) - uVar16;
          uVar35 = *(uint *)(lVar12 + 0x24) - uVar16;
          if (uVar16 + uVar17 <= *(uint *)(lVar12 + 0x24)) {
            uVar35 = uVar17;
          }
          memcpy((void *)(*(long *)(lVar12 + 0x18) + (ulong)uVar16),pbVar33,(ulong)uVar35);
          uVar35 = *(uint *)(lVar37 + 0x18);
        }
        if (((uVar35 >> 9 & 1) != 0) && ((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0)) {
          uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),pbVar33,uVar17);
          *(undefined8 *)(lVar37 + 0x20) = uVar11;
        }
        uVar30 = (ulong)(uVar28 - uVar17);
        pbVar33 = pbVar33 + uVar17;
        uVar16 = *(int *)(lVar37 + 0x5c) - uVar17;
        *(uint *)(lVar37 + 0x5c) = uVar16;
      }
      uVar17 = (uint)uVar30;
      iVar9 = local_80;
      if (uVar16 != 0) goto switchD_00130e38_caseD_3f50;
    }
    *(undefined4 *)(lVar37 + 0x5c) = 0;
    *(undefined4 *)(lVar37 + 8) = 0x3f3a;
switchD_00130e38_caseD_3f3a:
    if ((*(byte *)(lVar37 + 0x19) >> 3 & 1) == 0) {
      if (*(long *)(lVar37 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(lVar37 + 0x30) + 0x28) = 0;
      }
    }
    else {
      uVar17 = 0;
      iVar9 = local_80;
      if ((int)uVar30 == 0) goto switchD_00130e38_caseD_3f50;
      uVar14 = 0;
      do {
        lVar12 = *(long *)(lVar37 + 0x30);
        bVar4 = pbVar33[uVar14];
        if ((lVar12 != 0) && (lVar19 = *(long *)(lVar12 + 0x28), lVar19 != 0)) {
          uVar35 = *(uint *)(lVar37 + 0x5c);
          if (uVar35 < *(uint *)(lVar12 + 0x30)) {
            *(uint *)(lVar37 + 0x5c) = uVar35 + 1;
            *(byte *)(lVar19 + (ulong)uVar35) = bVar4;
          }
        }
        uVar14 = uVar14 + 1;
      } while ((bVar4 != 0) && (uVar14 < (uVar30 & 0xffffffff)));
      if (((*(byte *)(lVar37 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0))
      {
        uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),pbVar33,uVar14 & 0xffffffff);
        *(undefined8 *)(lVar37 + 0x20) = uVar11;
      }
      pbVar33 = pbVar33 + uVar14;
      if (bVar4 != 0) {
        uVar17 = (int)uVar30 - (int)uVar14;
        goto switchD_00130e38_caseD_3f50;
      }
      uVar30 = (uVar30 & 0xffffffff) - uVar14;
    }
    *(undefined4 *)(lVar37 + 0x5c) = 0;
    *(undefined4 *)(lVar37 + 8) = 0x3f3b;
switchD_00130e38_caseD_3f3b:
    if ((*(byte *)(lVar37 + 0x19) >> 4 & 1) == 0) {
      if (*(long *)(lVar37 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(lVar37 + 0x30) + 0x38) = 0;
      }
    }
    else {
      uVar17 = 0;
      iVar9 = local_80;
      if ((int)uVar30 == 0) goto switchD_00130e38_caseD_3f50;
      uVar14 = 0;
      do {
        lVar12 = *(long *)(lVar37 + 0x30);
        bVar4 = pbVar33[uVar14];
        if ((lVar12 != 0) && (lVar19 = *(long *)(lVar12 + 0x38), lVar19 != 0)) {
          uVar35 = *(uint *)(lVar37 + 0x5c);
          if (uVar35 < *(uint *)(lVar12 + 0x40)) {
            *(uint *)(lVar37 + 0x5c) = uVar35 + 1;
            *(byte *)(lVar19 + (ulong)uVar35) = bVar4;
          }
        }
        uVar14 = uVar14 + 1;
      } while ((bVar4 != 0) && (uVar14 < (uVar30 & 0xffffffff)));
      if (((*(byte *)(lVar37 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0))
      {
        uVar11 = FUN_0012e2ac(*(undefined8 *)(lVar37 + 0x20),pbVar33,uVar14 & 0xffffffff);
        *(undefined8 *)(lVar37 + 0x20) = uVar11;
      }
      pbVar33 = pbVar33 + uVar14;
      if (bVar4 != 0) {
        uVar17 = (int)uVar30 - (int)uVar14;
        goto switchD_00130e38_caseD_3f50;
      }
      uVar30 = (uVar30 & 0xffffffff) - uVar14;
    }
    *puVar15 = 0x3f3c;
switchD_00130e38_caseD_3f3c:
    if ((*(uint *)(lVar37 + 0x18) >> 9 & 1) != 0) {
      if ((uint)uVar32 < 0x10) {
        do {
          if ((int)uVar30 == 0) goto LAB_0013244c;
          pbVar34 = pbVar33 + 1;
          uVar14 = uVar32 + 8;
          uVar30 = (ulong)((int)uVar30 - 1);
          bVar8 = uVar32 < 8;
          uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
          uVar32 = uVar14;
          pbVar33 = pbVar34;
        } while (bVar8);
        uVar32 = uVar14 & 0xffffffff;
      }
      if (((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0) && (uVar36 != *(ushort *)(lVar37 + 0x20))) {
        pcVar20 = "header crc mismatch";
        break;
      }
      uVar36 = 0;
      uVar32 = 0;
    }
    lVar12 = *(long *)(lVar37 + 0x30);
    if (lVar12 != 0) {
      *(uint *)(lVar12 + 0x44) = *(uint *)(lVar37 + 0x18) >> 9 & 1;
      *(undefined4 *)(lVar12 + 0x48) = 1;
    }
    lVar12 = FUN_0012e2ac(0,0,0);
    *(long *)(lVar37 + 0x20) = lVar12;
    param_1[0xc] = lVar12;
    *puVar15 = 0x3f3f;
    goto LAB_00132418;
  case 0x3f38:
    uVar35 = *(uint *)(lVar37 + 0x18);
    if ((uVar35 >> 10 & 1) != 0) {
      uVar14 = uVar32;
      pbVar34 = pbVar33;
      if (uVar16 < 0x10) goto LAB_0013198c;
      goto LAB_001319b0;
    }
    goto LAB_00131978;
  case 0x3f39:
    goto switchD_00130e38_caseD_3f39;
  case 0x3f3a:
    goto switchD_00130e38_caseD_3f3a;
  case 0x3f3b:
    goto switchD_00130e38_caseD_3f3b;
  case 0x3f3c:
    goto switchD_00130e38_caseD_3f3c;
  case 0x3f3d:
    if (uVar16 < 0x20) {
      do {
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar30 = (ulong)((int)uVar30 - 1);
        bVar8 = uVar32 < 0x18;
        uVar14 = uVar32 & 0x3f;
        uVar32 = uVar32 + 8;
        uVar36 = ((ulong)*pbVar33 << uVar14) + uVar36;
        pbVar33 = pbVar34;
      } while (bVar8);
    }
    uVar32 = 0;
    uVar35 = ((uint)uVar36 & 0xff00ff00) >> 8 | ((uint)uVar36 & 0xff00ff) << 8;
    uVar14 = (ulong)(uVar35 >> 0x10 | uVar35 << 0x10);
    uVar36 = 0;
    *(ulong *)(lVar37 + 0x20) = uVar14;
    param_1[0xc] = uVar14;
    *puVar15 = 0x3f3e;
  case 0x3f3e:
    if (*(int *)(lVar37 + 0x14) == 0) {
      param_1[3] = (long)__dest;
      *(uint *)(param_1 + 4) = uVar13;
      *param_1 = (long)pbVar34;
      *(int *)(param_1 + 1) = (int)uVar30;
      *(ulong *)(lVar37 + 0x50) = uVar36;
      *(int *)(lVar37 + 0x58) = (int)uVar32;
      iVar10 = 2;
      goto LAB_00130d74;
    }
    lVar12 = FUN_00132b28(0,0,0);
    *(long *)(lVar37 + 0x20) = lVar12;
    param_1[0xc] = lVar12;
    *puVar15 = 0x3f3f;
    pbVar33 = pbVar34;
switchD_00130e38_caseD_3f3f:
    uVar17 = (uint)uVar30;
    pbVar34 = pbVar33;
    iVar9 = local_80;
    if (param_2 - 5U < 2) goto switchD_00130e38_caseD_3f50;
switchD_00130e38_caseD_3f40:
    uVar35 = (uint)uVar32;
    pbVar33 = pbVar34;
    if (*(int *)(lVar37 + 0xc) != 0) {
      uVar17 = 0x3f4e;
      uVar32 = (ulong)(uVar35 & 0xfffffff8);
      uVar36 = uVar36 >> (uVar35 & 7);
      goto LAB_00132414;
    }
    if (uVar35 < 3) {
      if ((int)uVar30 == 0) {
        uVar17 = 0;
        iVar10 = local_80;
switchD_00130e38_caseD_3f51:
        iVar9 = iVar10;
        goto switchD_00130e38_caseD_3f50;
      }
      pbVar33 = pbVar34 + 1;
      uVar30 = (ulong)((int)uVar30 - 1);
      uVar36 = ((ulong)*pbVar34 << (uVar32 & 0x3f)) + uVar36;
      uVar35 = uVar35 + 8;
    }
    uVar17 = (uint)uVar30;
    *(uint *)(lVar37 + 0xc) = (uint)uVar36 & 1;
    uVar16 = 0x3f41;
    switch((uint)uVar36 >> 1 & 3) {
    case 1:
      *(undefined **)(lVar37 + 0x70) = &DAT_0011e014;
      *(undefined8 *)(lVar37 + 0x78) = 0x500000009;
      *(undefined **)(lVar37 + 0x68) = &DAT_0011d814;
      *(undefined4 *)(lVar37 + 8) = 0x3f47;
      if (param_2 != 6) goto LAB_00131718;
      uVar36 = uVar36 >> 3;
      uVar32 = (ulong)(uVar35 - 3);
      iVar9 = local_80;
      goto switchD_00130e38_caseD_3f50;
    case 2:
      uVar16 = 0x3f44;
      break;
    case 3:
      param_1[6] = (long)"invalid block type";
      uVar16 = 0x3f51;
    }
    *puVar15 = uVar16;
LAB_00131718:
    uVar36 = uVar36 >> 3;
    uVar32 = (ulong)(uVar35 - 3);
    goto LAB_00132418;
  case 0x3f3f:
    goto switchD_00130e38_caseD_3f3f;
  case 0x3f40:
    goto switchD_00130e38_caseD_3f40;
  case 0x3f41:
    uVar32 = (ulong)(uVar16 & 0xfffffff8);
    uVar36 = uVar36 >> (uVar16 & 7);
    if ((uVar16 & 0xfffffff8) < 0x20) {
      do {
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar14 = uVar32 + 8;
        uVar30 = (ulong)((int)uVar30 - 1);
        bVar8 = uVar32 < 0x18;
        uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
        uVar32 = uVar14;
        pbVar33 = pbVar34;
      } while (bVar8);
      uVar32 = uVar14 & 0xffffffff;
    }
    uVar17 = (uint)uVar30;
    uVar35 = (uint)uVar36;
    if ((uVar36 >> 0x10 ^ 0xffff) == (uVar36 & 0xffff)) {
      uVar32 = 0;
      uVar36 = 0;
      *(uint *)(lVar37 + 0x5c) = uVar35 & 0xffff;
      *(undefined4 *)(lVar37 + 8) = 0x3f42;
      iVar9 = local_80;
      if (param_2 != 6) goto switchD_00130e38_caseD_3f42;
      goto switchD_00130e38_caseD_3f50;
    }
    pcVar20 = "invalid stored block lengths";
    break;
  case 0x3f42:
switchD_00130e38_caseD_3f42:
    *puVar15 = 0x3f43;
  case 0x3f43:
    uVar17 = (uint)uVar30;
    uVar35 = *(uint *)(lVar37 + 0x5c);
    if (uVar35 == 0) {
      uVar35 = 0x3f3f;
LAB_0013234c:
      *puVar15 = uVar35;
      goto LAB_00132418;
    }
    uVar16 = uVar17;
    if (uVar35 <= uVar17) {
      uVar16 = uVar35;
    }
    uVar35 = uVar13;
    if (uVar16 <= uVar13) {
      uVar35 = uVar16;
    }
    iVar9 = local_80;
    if (uVar35 == 0) goto switchD_00130e38_caseD_3f50;
    memcpy(__dest,pbVar33,(ulong)uVar35);
    uVar30 = (ulong)(uVar17 - uVar35);
    pbVar33 = pbVar33 + uVar35;
    uVar13 = uVar13 - uVar35;
    __dest = __dest + uVar35;
    *(uint *)(lVar37 + 0x5c) = *(int *)(lVar37 + 0x5c) - uVar35;
    goto LAB_00132418;
  case 0x3f44:
    if (uVar16 < 0xe) {
      do {
        if ((int)uVar30 == 0) goto LAB_0013244c;
        pbVar34 = pbVar33 + 1;
        uVar14 = uVar32 + 8;
        uVar30 = (ulong)((int)uVar30 - 1);
        bVar8 = uVar32 < 6;
        uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
        uVar32 = uVar14;
        pbVar33 = pbVar34;
      } while (bVar8);
      uVar16 = (uint)uVar14;
    }
    uVar28 = (uint)uVar36;
    uVar17 = uVar28 >> 5 & 0x1f;
    uVar36 = uVar36 >> 0xe;
    uVar35 = (uVar28 >> 10 & 0xf) + 4;
    uVar32 = (ulong)(uVar16 - 0xe);
    *(uint *)(lVar37 + 0x84) = (uVar28 & 0x1f) + 0x101;
    *(uint *)(lVar37 + 0x88) = uVar17 + 1;
    *(uint *)(lVar37 + 0x80) = uVar35;
    if (((uVar28 & 0x1f) < 0x1e) && (uVar17 < 0x1e)) {
      uVar14 = 0;
      *(undefined4 *)(lVar37 + 0x8c) = 0;
      *(undefined4 *)(lVar37 + 8) = 0x3f45;
LAB_00131270:
      do {
        uVar17 = (uint)uVar32;
        pbVar34 = pbVar33;
        if (uVar17 < 3) {
          if ((int)uVar30 == 0) goto LAB_0013244c;
          pbVar34 = pbVar33 + 1;
          uVar30 = (ulong)((int)uVar30 - 1);
          uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
          uVar17 = uVar17 + 8;
        }
        uVar5 = (&DAT_0011d7ee)[uVar14];
        uVar14 = uVar14 + 1;
        uVar7 = (ushort)uVar36;
        uVar36 = uVar36 >> 3;
        uVar32 = (ulong)(uVar17 - 3);
        *(uint *)(lVar37 + 0x8c) = (uint)uVar14;
        *(ushort *)(lVar37 + (ulong)uVar5 * 2 + 0x98) = uVar7 & 7;
        pbVar33 = pbVar34;
      } while ((uint)uVar14 < uVar35);
      goto LAB_001312bc;
    }
    pcVar20 = "too many length or distance symbols";
    break;
  case 0x3f45:
    uVar35 = *(uint *)(lVar37 + 0x80);
    uVar14 = (ulong)*(uint *)(lVar37 + 0x8c);
    if (*(uint *)(lVar37 + 0x8c) < uVar35) goto LAB_00131270;
LAB_001312bc:
    if ((uint)uVar14 < 0x13) {
      uVar14 = uVar14 & 0xffffffff;
      do {
        puVar1 = &DAT_0011d7ee + uVar14;
        uVar14 = uVar14 + 1;
        *(undefined2 *)(lVar37 + (ulong)*puVar1 * 2 + 0x98) = 0;
      } while ((int)uVar14 != 0x13);
      *(undefined4 *)(lVar37 + 0x8c) = 0x13;
    }
    *(long *)(lVar37 + 0x90) = lVar37 + 0x558;
    *(long *)(lVar37 + 0x68) = lVar37 + 0x558;
    *(undefined4 *)(lVar37 + 0x78) = 7;
    local_80 = FUN_00134450(0,lVar37 + 0x98,0x13,lVar37 + 0x90,lVar37 + 0x78,lVar37 + 0x318);
    if (local_80 == 0) {
      uVar35 = 0;
      local_80 = 0;
      *(undefined4 *)(lVar37 + 0x8c) = 0;
      *(undefined4 *)(lVar37 + 8) = 0x3f46;
      goto LAB_00131444;
    }
    pcVar20 = "invalid code lengths set";
    pbVar33 = pbVar34;
    goto LAB_001317e0;
  case 0x3f46:
    uVar35 = *(uint *)(lVar37 + 0x8c);
LAB_00131444:
    iVar9 = *(int *)(lVar37 + 0x84);
    uVar17 = *(int *)(lVar37 + 0x88) + iVar9;
    pbVar33 = pbVar34;
    if (uVar35 < uVar17) {
      lVar12 = *(long *)(lVar37 + 0x68);
      uVar16 = ~(-1 << (ulong)(*(uint *)(lVar37 + 0x78) & 0x1f));
      do {
        uVar29 = (uint)uVar30;
        uVar26 = (ulong)(uVar16 & (uint)uVar36);
        bVar4 = *(byte *)(lVar12 + uVar26 * 4 + 1);
        uVar14 = (ulong)bVar4;
        uVar28 = (uint)uVar32;
        if (uVar28 < bVar4) {
          uVar30 = uVar30 & 0xffffffff;
          pbVar24 = pbVar34;
          do {
            pbVar33 = pbVar34;
            if ((int)uVar30 == 0) goto LAB_0013246c;
            pbVar33 = pbVar24 + 1;
            uVar30 = (ulong)((int)uVar30 - 1);
            uVar36 = ((ulong)*pbVar24 << (uVar32 & 0x3f)) + uVar36;
            uVar2 = uVar16 & (uint)uVar36;
            uVar14 = (ulong)*(byte *)(lVar12 + (ulong)uVar2 * 4 + 1);
            uVar32 = uVar32 + 8;
            pbVar24 = pbVar33;
          } while (uVar32 < uVar14);
          uVar26 = (ulong)uVar2;
          uVar32 = uVar32 & 0xffffffff;
          uVar22 = uVar14;
          pbVar34 = pbVar33;
        }
        else {
          uVar22 = (ulong)(uint)bVar4;
        }
        uVar5 = *(ushort *)(lVar12 + uVar26 * 4 + 2);
        iVar10 = (int)uVar14;
        uVar28 = (uint)uVar32;
        if (0xf < uVar5) {
          pbVar33 = pbVar34;
          if (uVar5 == 0x10) {
            if (uVar28 < iVar10 + 2U) {
              do {
                if ((int)uVar30 == 0) {
                  uVar17 = 0;
                  iVar9 = local_80;
                  goto switchD_00130e38_caseD_3f50;
                }
                pbVar34 = pbVar33 + 1;
                uVar30 = (ulong)((int)uVar30 - 1);
                uVar14 = uVar32 & 0x3f;
                uVar32 = uVar32 + 8;
                uVar36 = ((ulong)*pbVar33 << uVar14) + uVar36;
                pbVar33 = pbVar34;
              } while (uVar32 < iVar10 + 2U);
            }
            uVar36 = uVar36 >> (uVar22 & 0x3f);
            uVar28 = (int)uVar32 - iVar10;
            uVar32 = (ulong)uVar28;
            if (uVar35 != 0) {
              uVar25 = *(undefined2 *)(lVar37 + (ulong)(uVar35 - 1) * 2 + 0x98);
              iVar23 = ((uint)uVar36 & 3) + 3;
              uVar36 = uVar36 >> 2;
              uVar32 = (ulong)(uVar28 - 2);
              goto LAB_00131620;
            }
          }
          else {
            if (uVar5 == 0x11) {
              if (uVar28 < iVar10 + 3U) {
                do {
                  if ((int)uVar30 == 0) goto LAB_0013244c;
                  pbVar34 = pbVar33 + 1;
                  uVar30 = (ulong)((int)uVar30 - 1);
                  uVar14 = uVar32 & 0x3f;
                  uVar32 = uVar32 + 8;
                  uVar36 = ((ulong)*pbVar33 << uVar14) + uVar36;
                  pbVar33 = pbVar34;
                } while (uVar32 < iVar10 + 3U);
              }
              uVar14 = uVar36 >> (uVar22 & 0x3f);
              uVar25 = 0;
              uVar36 = uVar14 >> 3;
              iVar23 = ((uint)uVar14 & 7) + 3;
              uVar32 = (ulong)(((int)uVar32 - iVar10) - 3);
            }
            else {
              if (uVar28 < iVar10 + 7U) {
                do {
                  if ((int)uVar30 == 0) goto LAB_0013244c;
                  pbVar34 = pbVar33 + 1;
                  uVar30 = (ulong)((int)uVar30 - 1);
                  uVar14 = uVar32 & 0x3f;
                  uVar32 = uVar32 + 8;
                  uVar36 = ((ulong)*pbVar33 << uVar14) + uVar36;
                  pbVar33 = pbVar34;
                } while (uVar32 < iVar10 + 7U);
              }
              uVar14 = uVar36 >> (uVar22 & 0x3f);
              uVar25 = 0;
              uVar36 = uVar14 >> 7;
              iVar23 = ((uint)uVar14 & 0x7f) + 0xb;
              uVar32 = (ulong)(((int)uVar32 - iVar10) - 7);
            }
LAB_00131620:
            if (iVar23 + uVar35 <= uVar17) {
              do {
                iVar23 = iVar23 + -1;
                uVar14 = (ulong)uVar35;
                uVar35 = uVar35 + 1;
                *(undefined2 *)(lVar37 + uVar14 * 2 + 0x98) = uVar25;
              } while (iVar23 != 0);
              *(uint *)(lVar37 + 0x8c) = uVar35;
              goto LAB_00131644;
            }
          }
          pcVar20 = "invalid bit length repeat";
          pbVar33 = pbVar34;
          goto LAB_0013240c;
        }
        uVar32 = (ulong)(uVar28 - iVar10);
        uVar14 = (ulong)uVar35;
        uVar35 = uVar35 + 1;
        uVar36 = uVar36 >> (uVar22 & 0x3f);
        *(uint *)(lVar37 + 0x8c) = uVar35;
        *(ushort *)(lVar37 + uVar14 * 2 + 0x98) = uVar5;
LAB_00131644:
        pbVar33 = pbVar34;
      } while (uVar35 < uVar17);
    }
    uVar17 = (uint)uVar30;
    if (*(short *)(lVar37 + 0x298) == 0) {
      param_1[6] = (long)"invalid code -- missing end-of-block";
      *puVar15 = 0x3f51;
      goto LAB_00132418;
    }
    *(long *)(lVar37 + 0x90) = lVar37 + 0x558;
    *(long *)(lVar37 + 0x68) = lVar37 + 0x558;
    *(undefined4 *)(lVar37 + 0x78) = 9;
    local_80 = FUN_00134450(1,lVar37 + 0x98,iVar9,lVar37 + 0x90,lVar37 + 0x78,lVar37 + 0x318);
    if (local_80 == 0) {
      *(undefined8 *)(lVar37 + 0x70) = *(undefined8 *)(lVar37 + 0x90);
      *(undefined4 *)(lVar37 + 0x7c) = 6;
      local_80 = FUN_00134450(2,lVar37 + (ulong)*(uint *)(lVar37 + 0x84) * 2 + 0x98,
                              *(undefined4 *)(lVar37 + 0x88),lVar37 + 0x90,lVar37 + 0x7c,
                              lVar37 + 0x318);
      if (local_80 == 0) {
        local_80 = 0;
        *puVar15 = 0x3f47;
        iVar9 = local_80;
        if (param_2 != 6) goto switchD_00130e38_caseD_3f47;
        goto switchD_00130e38_caseD_3f50;
      }
      pcVar20 = "invalid distances set";
    }
    else {
      pcVar20 = "invalid literal/lengths set";
    }
LAB_001317e0:
    param_1[6] = (long)pcVar20;
    *puVar15 = 0x3f51;
    goto LAB_00132418;
  case 0x3f47:
switchD_00130e38_caseD_3f47:
    *puVar15 = 0x3f48;
  case 0x3f48:
    uVar29 = (uint)uVar30;
    uVar28 = (uint)uVar32;
    if ((5 < uVar29) && (0x101 < uVar13)) {
      param_1[3] = (long)__dest;
      *(uint *)(param_1 + 4) = uVar13;
      *param_1 = (long)pbVar33;
      *(uint *)(param_1 + 1) = uVar29;
      *(ulong *)(lVar37 + 0x50) = uVar36;
      *(uint *)(lVar37 + 0x58) = uVar28;
      FUN_00134884(param_1,local_7c);
      __dest = (undefined1 *)param_1[3];
      uVar13 = *(uint *)(param_1 + 4);
      pbVar33 = (byte *)*param_1;
      uVar30 = (ulong)*(uint *)(param_1 + 1);
      uVar36 = *(ulong *)(lVar37 + 0x50);
      uVar32 = (ulong)*(uint *)(lVar37 + 0x58);
      if (*(int *)(lVar37 + 8) == 0x3f3f) {
        *(undefined4 *)(lVar37 + 0x1bec) = 0xffffffff;
      }
      goto LAB_00132418;
    }
    lVar12 = *(long *)(lVar37 + 0x68);
    *(undefined4 *)(lVar37 + 0x1bec) = 0;
    uVar35 = -1 << (ulong)(*(uint *)(lVar37 + 0x78) & 0x1f);
    uVar26 = (ulong)((uint)uVar36 & (uVar35 ^ 0xffffffff));
    bVar4 = *(byte *)(lVar12 + uVar26 * 4 + 1);
    uVar14 = (ulong)bVar4;
    if (uVar28 < bVar4) {
      uVar30 = uVar30 & 0xffffffff;
      pbVar34 = pbVar33;
      do {
        if ((int)uVar30 == 0) goto LAB_0013246c;
        pbVar24 = pbVar34 + 1;
        uVar30 = (ulong)((int)uVar30 - 1);
        uVar36 = ((ulong)*pbVar34 << (uVar32 & 0x3f)) + uVar36;
        uVar17 = ~uVar35 & (uint)uVar36;
        uVar14 = (ulong)*(byte *)(lVar12 + (ulong)uVar17 * 4 + 1);
        uVar32 = uVar32 + 8;
        pbVar34 = pbVar24;
      } while (uVar32 < uVar14);
      uVar26 = (ulong)uVar17;
      uVar32 = uVar32 & 0xffffffff;
      uVar22 = uVar14;
      pbVar33 = pbVar24;
    }
    else {
      uVar22 = (ulong)(uint)bVar4;
    }
    uVar29 = (uint)uVar30;
    uVar28 = (uint)uVar32;
    pbVar34 = (byte *)(lVar12 + uVar26 * 4);
    bVar4 = *pbVar34;
    uVar5 = *(ushort *)(pbVar34 + 2);
    uVar35 = (uint)uVar14;
    if ((bVar4 == 0) || ((bVar4 & 0xf0) != 0)) {
      uVar16 = 0;
      uVar17 = uVar35;
    }
    else {
      uVar17 = -1 << (ulong)(uVar35 + bVar4 & 0x1f);
      uVar27 = (ulong)((((uint)uVar36 & (uVar17 ^ 0xffffffff)) >> (ulong)(uVar35 & 0x1f)) +
                      (uint)uVar5);
      bVar4 = *(byte *)(lVar12 + uVar27 * 4 + 1);
      uVar26 = (ulong)bVar4;
      pbVar34 = pbVar33;
      if (uVar28 < uVar35 + bVar4) {
        uVar30 = uVar30 & 0xffffffff;
        pbVar24 = pbVar33;
        do {
          if ((int)uVar30 == 0) goto LAB_0013246c;
          pbVar34 = pbVar24 + 1;
          uVar30 = (ulong)((int)uVar30 - 1);
          uVar36 = ((ulong)*pbVar24 << (uVar32 & 0x3f)) + uVar36;
          uVar16 = (((uint)uVar36 & ~uVar17) >> (ulong)(uVar35 & 0x1f)) + (uint)uVar5;
          uVar26 = (ulong)*(byte *)(lVar12 + (ulong)uVar16 * 4 + 1);
          uVar32 = uVar32 + 8;
          pbVar24 = pbVar34;
        } while (uVar32 < uVar26 + uVar14);
        uVar27 = (ulong)uVar16;
        uVar28 = (uint)uVar32;
      }
      pbVar33 = (byte *)(lVar12 + uVar27 * 4);
      uVar5 = *(ushort *)(pbVar33 + 2);
      bVar4 = *pbVar33;
      uVar36 = uVar36 >> (uVar22 & 0x3f);
      uVar28 = uVar28 - uVar35;
      uVar22 = uVar26;
      pbVar33 = pbVar34;
      uVar17 = (uint)uVar26;
      uVar16 = uVar35;
    }
    uVar36 = uVar36 >> (uVar22 & 0x3f);
    uVar32 = (ulong)(uVar28 - uVar17);
    *(uint *)(lVar37 + 0x1bec) = uVar16 + uVar17;
    *(uint *)(lVar37 + 0x5c) = (uint)uVar5;
    if (bVar4 == 0) {
      uVar35 = 0x3f4d;
      goto LAB_0013234c;
    }
    if ((bVar4 >> 5 & 1) != 0) {
      uVar18 = 0x3f3f;
      *(undefined4 *)(lVar37 + 0x1bec) = 0xffffffff;
LAB_00131348:
      *(undefined4 *)(lVar37 + 8) = uVar18;
      goto LAB_00132418;
    }
    if ((bVar4 >> 6 & 1) != 0) {
      pcVar20 = "invalid literal/length code";
      break;
    }
    uVar35 = bVar4 & 0xf;
    *(uint *)(lVar37 + 100) = uVar35;
    *(undefined4 *)(lVar37 + 8) = 0x3f49;
    if ((bVar4 & 0xf) == 0) {
LAB_0013208c:
      iVar9 = *(int *)(lVar37 + 0x5c);
    }
    else {
LAB_00130fe8:
      uVar29 = (uint)uVar30;
      uVar28 = (uint)uVar32;
      if (uVar28 < uVar35) {
        uVar30 = uVar30 & 0xffffffff;
        pbVar24 = pbVar33;
        do {
          if ((int)uVar30 == 0) goto LAB_0013246c;
          pbVar34 = pbVar24 + 1;
          uVar30 = (ulong)((int)uVar30 - 1);
          uVar14 = uVar32 & 0x3f;
          uVar17 = (int)uVar32 + 8;
          uVar32 = (ulong)uVar17;
          uVar36 = ((ulong)*pbVar24 << uVar14) + uVar36;
          pbVar24 = pbVar34;
        } while (uVar17 < uVar35);
      }
      else {
        uVar30 = uVar30 & 0xffffffff;
        pbVar34 = pbVar33;
        uVar17 = uVar28;
      }
      uVar32 = (ulong)(uVar17 - uVar35);
      uVar17 = (uint)uVar36;
      uVar36 = uVar36 >> ((ulong)uVar35 & 0x3f);
      iVar9 = *(int *)(lVar37 + 0x5c) + (uVar17 & (-1 << (ulong)(uVar35 & 0x1f) ^ 0xffffffffU));
      *(int *)(lVar37 + 0x5c) = iVar9;
      *(uint *)(lVar37 + 0x1bec) = *(int *)(lVar37 + 0x1bec) + uVar35;
      pbVar33 = pbVar34;
    }
    *(int *)(lVar37 + 0x1bf0) = iVar9;
    *(undefined4 *)(lVar37 + 8) = 0x3f4a;
    pbVar34 = pbVar33;
switchD_00130e38_caseD_3f4a:
    uVar29 = (uint)uVar30;
    lVar12 = *(long *)(lVar37 + 0x70);
    uVar35 = -1 << (ulong)(*(uint *)(lVar37 + 0x7c) & 0x1f);
    uVar26 = (ulong)((uint)uVar36 & (uVar35 ^ 0xffffffff));
    bVar4 = *(byte *)(lVar12 + uVar26 * 4 + 1);
    uVar14 = (ulong)bVar4;
    uVar28 = (uint)uVar32;
    if (uVar28 < bVar4) {
      uVar30 = uVar30 & 0xffffffff;
      pbVar24 = pbVar34;
      do {
        pbVar33 = pbVar34;
        if ((int)uVar30 == 0) goto LAB_0013246c;
        pbVar33 = pbVar24 + 1;
        uVar30 = (ulong)((int)uVar30 - 1);
        uVar36 = ((ulong)*pbVar24 << (uVar32 & 0x3f)) + uVar36;
        uVar17 = ~uVar35 & (uint)uVar36;
        uVar14 = (ulong)*(byte *)(lVar12 + (ulong)uVar17 * 4 + 1);
        uVar32 = uVar32 + 8;
        pbVar24 = pbVar33;
      } while (uVar32 < uVar14);
      uVar26 = (ulong)uVar17;
      uVar32 = uVar32 & 0xffffffff;
      uVar22 = uVar14;
      pbVar34 = pbVar33;
    }
    else {
      uVar22 = (ulong)(uint)bVar4;
    }
    uVar29 = (uint)uVar30;
    uVar35 = (uint)uVar14;
    uVar28 = (uint)uVar32;
    pbVar33 = (byte *)(lVar12 + uVar26 * 4);
    bVar4 = *pbVar33;
    uVar5 = *(ushort *)(pbVar33 + 2);
    pbVar33 = pbVar34;
    if ((bVar4 & 0xf0) == 0) {
      uVar17 = -1 << (ulong)(uVar35 + bVar4 & 0x1f);
      uVar27 = (ulong)((((uint)uVar36 & (uVar17 ^ 0xffffffff)) >> (ulong)(uVar35 & 0x1f)) +
                      (uint)uVar5);
      bVar4 = *(byte *)(lVar12 + uVar27 * 4 + 1);
      uVar26 = (ulong)bVar4;
      if (uVar28 < uVar35 + bVar4) {
        uVar30 = uVar30 & 0xffffffff;
        pbVar24 = pbVar34;
        do {
          pbVar33 = pbVar34;
          if ((int)uVar30 == 0) goto LAB_0013246c;
          pbVar33 = pbVar24 + 1;
          uVar30 = (ulong)((int)uVar30 - 1);
          uVar36 = ((ulong)*pbVar24 << (uVar32 & 0x3f)) + uVar36;
          uVar16 = (((uint)uVar36 & ~uVar17) >> (ulong)(uVar35 & 0x1f)) + (uint)uVar5;
          uVar26 = (ulong)*(byte *)(lVar12 + (ulong)uVar16 * 4 + 1);
          uVar32 = uVar32 + 8;
          pbVar24 = pbVar33;
        } while (uVar32 < uVar26 + uVar14);
        uVar27 = (ulong)uVar16;
        uVar28 = (uint)uVar32;
      }
      uVar17 = (uint)uVar26;
      pbVar34 = (byte *)(lVar12 + uVar27 * 4);
      uVar5 = *(ushort *)(pbVar34 + 2);
      bVar4 = *pbVar34;
      uVar36 = uVar36 >> (uVar22 & 0x3f);
      uVar28 = uVar28 - uVar35;
      iVar9 = *(int *)(lVar37 + 0x1bec) + uVar35;
    }
    else {
      iVar9 = *(int *)(lVar37 + 0x1bec);
      uVar26 = uVar22;
      uVar17 = uVar35;
    }
    uVar36 = uVar36 >> (uVar26 & 0x3f);
    uVar32 = (ulong)(uVar28 - uVar17);
    *(uint *)(lVar37 + 0x1bec) = iVar9 + uVar17;
    if ((bVar4 >> 6 & 1) == 0) {
      uVar35 = bVar4 & 0xf;
      *(uint *)(lVar37 + 0x60) = (uint)uVar5;
      *(uint *)(lVar37 + 100) = uVar35;
      *(undefined4 *)(lVar37 + 8) = 0x3f4b;
      if ((bVar4 & 0xf) != 0) {
LAB_00132204:
        uVar29 = (uint)uVar30;
        uVar28 = (uint)uVar32;
        if (uVar28 < uVar35) {
          uVar30 = uVar30 & 0xffffffff;
          pbVar24 = pbVar33;
          do {
            if ((int)uVar30 == 0) goto LAB_0013246c;
            pbVar34 = pbVar24 + 1;
            uVar30 = (ulong)((int)uVar30 - 1);
            uVar14 = uVar32 & 0x3f;
            uVar17 = (int)uVar32 + 8;
            uVar32 = (ulong)uVar17;
            uVar36 = ((ulong)*pbVar24 << uVar14) + uVar36;
            pbVar24 = pbVar34;
          } while (uVar17 < uVar35);
        }
        else {
          uVar30 = uVar30 & 0xffffffff;
          pbVar34 = pbVar33;
          uVar17 = uVar28;
        }
        uVar32 = (ulong)(uVar17 - uVar35);
        uVar17 = (uint)uVar36;
        uVar36 = uVar36 >> ((ulong)uVar35 & 0x3f);
        *(uint *)(lVar37 + 0x60) =
             *(int *)(lVar37 + 0x60) + (uVar17 & (-1 << (ulong)(uVar35 & 0x1f) ^ 0xffffffffU));
        *(uint *)(lVar37 + 0x1bec) = *(int *)(lVar37 + 0x1bec) + uVar35;
        pbVar33 = pbVar34;
      }
LAB_00132288:
      *puVar15 = 0x3f4c;
switchD_00130e38_caseD_3f4c:
      uVar17 = (uint)uVar30;
      iVar9 = local_80;
      if (uVar13 != 0) {
        uVar35 = *(uint *)(lVar37 + 0x60);
        if (local_7c - uVar13 < uVar35) {
          uVar35 = uVar35 - (local_7c - uVar13);
          if ((*(uint *)(lVar37 + 0x40) < uVar35) && (*(int *)(lVar37 + 0x1be8) != 0)) {
            pcVar20 = "invalid distance too far back";
            break;
          }
          uVar16 = *(uint *)(lVar37 + 0x44);
          uVar17 = uVar35 - uVar16;
          if (uVar35 < uVar16 || uVar17 == 0) {
            uVar16 = uVar16 - uVar35;
          }
          else {
            uVar16 = *(int *)(lVar37 + 0x3c) - uVar17;
            uVar35 = uVar17;
          }
          uVar17 = *(uint *)(lVar37 + 0x5c);
          puVar21 = (undefined1 *)(*(long *)(lVar37 + 0x48) + (ulong)uVar16);
          uVar16 = uVar17;
          if (uVar35 <= uVar17) {
            uVar16 = uVar35;
          }
        }
        else {
          uVar17 = *(uint *)(lVar37 + 0x5c);
          puVar21 = __dest + -(ulong)uVar35;
          uVar16 = uVar17;
        }
        uVar35 = uVar13;
        if (uVar16 <= uVar13) {
          uVar35 = uVar16;
        }
        *(uint *)(lVar37 + 0x5c) = uVar17 - uVar35;
        puVar31 = __dest;
        uVar17 = uVar35;
        do {
          uVar17 = uVar17 - 1;
          __dest = puVar31 + 1;
          *puVar31 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar31 = __dest;
        } while (uVar17 != 0);
        uVar13 = uVar13 - uVar35;
        if (*(int *)(lVar37 + 0x5c) == 0) {
          uVar35 = 0x3f48;
          goto LAB_0013234c;
        }
        goto LAB_00132418;
      }
      goto switchD_00130e38_caseD_3f50;
    }
    pcVar20 = "invalid distance code";
    break;
  case 0x3f49:
    uVar35 = *(uint *)(lVar37 + 100);
    if (uVar35 != 0) goto LAB_00130fe8;
    goto LAB_0013208c;
  case 0x3f4a:
    goto switchD_00130e38_caseD_3f4a;
  case 0x3f4b:
    uVar35 = *(uint *)(lVar37 + 100);
    if (uVar35 != 0) goto LAB_00132204;
    goto LAB_00132288;
  case 0x3f4c:
    goto switchD_00130e38_caseD_3f4c;
  case 0x3f4d:
    iVar9 = local_80;
    if (uVar13 != 0) {
      uVar18 = 0x3f48;
      uVar13 = uVar13 - 1;
      *__dest = (char)*(undefined4 *)(lVar37 + 0x5c);
      __dest = __dest + 1;
      goto LAB_00131348;
    }
    goto switchD_00130e38_caseD_3f50;
  case 0x3f4e:
    uVar35 = *(uint *)(lVar37 + 0x10);
    if (uVar35 != 0) {
      if (uVar16 < 0x20) {
        do {
          if ((int)uVar30 == 0) goto LAB_0013244c;
          pbVar34 = pbVar33 + 1;
          uVar14 = uVar32 + 8;
          uVar30 = (ulong)((int)uVar30 - 1);
          bVar8 = uVar32 < 0x18;
          uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
          uVar32 = uVar14;
          pbVar33 = pbVar34;
        } while (bVar8);
        uVar32 = uVar14 & 0xffffffff;
      }
      lVar12 = *(long *)(lVar37 + 0x28);
      uVar14 = (ulong)(local_7c - uVar13);
      param_1[5] = param_1[5] + uVar14;
      uVar17 = uVar35 & 4;
      *(ulong *)(lVar37 + 0x28) = lVar12 + uVar14;
      if (((uVar35 >> 2 & 1) != 0) && (local_7c - uVar13 != 0)) {
        if (*(int *)(lVar37 + 0x18) == 0) {
          lVar12 = FUN_00132b28(*(undefined8 *)(lVar37 + 0x20),(long)__dest - uVar14);
        }
        else {
          lVar12 = FUN_0012e2ac();
        }
        uVar35 = *(uint *)(lVar37 + 0x10);
        uVar17 = uVar35 & 4;
        *(long *)(lVar37 + 0x20) = lVar12;
        param_1[0xc] = lVar12;
      }
      local_7c = uVar13;
      if (uVar17 == 0) {
        uVar36 = 0;
        uVar32 = 0;
      }
      else {
        uVar17 = ((uint)uVar36 & 0xff00ff00) >> 8 | ((uint)uVar36 & 0xff00ff) << 8;
        uVar14 = (ulong)(uVar17 >> 0x10 | uVar17 << 0x10);
        if (*(int *)(lVar37 + 0x18) != 0) {
          uVar14 = uVar36;
        }
        if (uVar14 != *(ulong *)(lVar37 + 0x20)) {
          param_1[6] = (long)"incorrect data check";
          *puVar15 = 0x3f51;
          goto LAB_00132418;
        }
        uVar36 = 0;
        uVar32 = 0;
      }
    }
    *puVar15 = 0x3f4f;
    goto LAB_00131df0;
  case 0x3f4f:
    uVar35 = *(uint *)(lVar37 + 0x10);
LAB_00131df0:
    uVar17 = (uint)uVar30;
    if ((uVar35 != 0) && (*(int *)(lVar37 + 0x18) != 0)) {
      pbVar34 = pbVar33;
      if ((uint)uVar32 < 0x20) {
        do {
          if ((int)uVar30 == 0) goto LAB_0013244c;
          pbVar34 = pbVar33 + 1;
          uVar14 = uVar32 + 8;
          uVar30 = (ulong)((int)uVar30 - 1);
          bVar8 = uVar32 < 0x18;
          uVar36 = ((ulong)*pbVar33 << (uVar32 & 0x3f)) + uVar36;
          uVar32 = uVar14;
          pbVar33 = pbVar34;
        } while (bVar8);
        uVar32 = uVar14 & 0xffffffff;
      }
      uVar17 = (uint)uVar30;
      pbVar33 = pbVar34;
      if (uVar36 != *(uint *)(lVar37 + 0x28)) {
        pcVar20 = "incorrect length check";
        break;
      }
      uVar36 = 0;
      uVar32 = 0;
    }
    *puVar15 = 0x3f50;
    iVar9 = 1;
  case 0x3f50:
    goto switchD_00130e38_caseD_3f50;
  case 0x3f51:
    goto switchD_00130e38_caseD_3f51;
  case 0x3f52:
    goto switchD_00130e38_caseD_3f52;
  default:
    goto switchD_00130e38_default;
  }
LAB_0013240c:
  uVar17 = 0x3f51;
  param_1[6] = (long)pcVar20;
LAB_00132414:
  *puVar15 = uVar17;
LAB_00132418:
  uVar35 = *puVar15;
  goto LAB_00130e10;
LAB_0013246c:
  uVar32 = (ulong)(uVar28 + uVar29 * 8);
  pbVar33 = pbVar33 + uVar29;
  uVar17 = 0;
  iVar9 = local_80;
  goto switchD_00130e38_caseD_3f50;
LAB_0013244c:
  uVar17 = 0;
  iVar9 = local_80;
switchD_00130e38_caseD_3f50:
  iVar10 = *(int *)(lVar37 + 0x3c);
  *(int *)(lVar37 + 0x58) = (int)uVar32;
  param_1[3] = (long)__dest;
  *(uint *)(param_1 + 4) = uVar13;
  *param_1 = (long)pbVar33;
  *(uint *)(param_1 + 1) = uVar17;
  *(ulong *)(lVar37 + 0x50) = uVar36;
  if ((iVar10 != 0) ||
     (((local_7c != uVar13 && (*puVar15 < 0x3f51)) && ((*puVar15 < 0x3f4e || (param_2 != 4)))))) {
    iVar10 = FUN_0013266c(param_1,__dest,local_7c - uVar13);
    if (iVar10 != 0) {
      *puVar15 = 0x3f52;
switchD_00130e38_caseD_3f52:
      iVar10 = -4;
      goto LAB_00130d74;
    }
    uVar17 = *(uint *)(param_1 + 1);
    uVar13 = *(uint *)(param_1 + 4);
  }
  local_7c = local_7c - uVar13;
  uVar32 = (ulong)local_7c;
  uVar3 = uVar3 - uVar17;
  param_1[2] = param_1[2] + (ulong)uVar3;
  param_1[5] = param_1[5] + uVar32;
  *(ulong *)(lVar37 + 0x28) = *(long *)(lVar37 + 0x28) + uVar32;
  if (((*(byte *)(lVar37 + 0x10) >> 2 & 1) != 0) && (local_7c != 0)) {
    if (*(int *)(lVar37 + 0x18) == 0) {
      lVar12 = FUN_00132b28(*(undefined8 *)(lVar37 + 0x20),param_1[3] - uVar32,local_7c);
    }
    else {
      lVar12 = FUN_0012e2ac();
    }
    *(long *)(lVar37 + 0x20) = lVar12;
    param_1[0xc] = lVar12;
  }
  iVar23 = *(int *)(lVar37 + 8);
  iVar10 = 0x100;
  if (iVar23 != 0x3f42 && iVar23 != 0x3f47) {
    iVar10 = 0;
  }
  *(uint *)(param_1 + 0xb) =
       *(int *)(lVar37 + 0x58) + (uint)(*(int *)(lVar37 + 0xc) != 0) * 0x40 +
       (uint)(iVar23 == 0x3f3f) * 0x80 + iVar10;
  iVar10 = -5;
  if (param_2 != 4 && (uVar3 != 0 || local_7c != 0) || iVar9 != 0) {
    iVar10 = iVar9;
  }
LAB_00130d74:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar10);
}

