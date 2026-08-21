
/* WARNING: Removing unreachable block (ram,0x009f4634) */

int FUN_009f427c(code *param_1)

{
  int iVar1;
  undefined8 *__ptr;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  int unaff_w21;
  undefined4 *unaff_x22;
  undefined4 *unaff_x23;
  long unaff_x25;
  int unaff_w26;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uStack0000000000000008;
  undefined8 in_stack_00000010;
  long in_stack_00000028;
  
  iVar1 = (*param_1)();
                    /* try { // try from 009f42a0 to 00af42b7 has its CatchHandler @ 009f4380 */
                    /* try { // try from 009f42bc to 00af42e7 has its CatchHandler @ 009f437c */
  if (((iVar1 != 1) && (iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7]), iVar1 != 0)) ||
     ((iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7]), iVar1 != 1 &&
      (iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7]), iVar1 != 0)))) {
                    /* try { // try from 009f42e8 to 00af430f has its CatchHandler @ 009f4250 */
    unaff_w26 = -1;
  }
  uVar6 = unaff_x19[8];
  iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
                    /* try { // try from 009f4310 to 00af4323 has its CatchHandler @ 009f4380 */
  bVar10 = in_stack_00000010._4_1_;
  if (iVar1 == 1) {
LAB_009f433c:
    iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
                    /* try { // try from 009f4360 to 00af4367 has its CatchHandler @ 009f437c */
                    /* try { // try from 009f4368 to 00af439b has its CatchHandler @ 009f4250 */
    if ((iVar1 == 1) || (iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6), iVar1 == 0)) {
      bVar10 = bVar10 & 8;
    }
    else {
      bVar10 = 0;
      unaff_w26 = -1;
    }
  }
  else {
    iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
    bVar10 = 0;
    if (iVar1 == 0) goto LAB_009f433c;
    unaff_w26 = -1;
  }
                    /* catch() { ... } // from try @ 009f42bc with catch @ 009f437c
                       catch() { ... } // from try @ 009f4360 with catch @ 009f437c */
  uVar6 = unaff_x19[8];
                    /* catch() { ... } // from try @ 009f42a0 with catch @ 009f4380
                       catch() { ... } // from try @ 009f4310 with catch @ 009f4380 */
  iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
  if (iVar1 == 1) {
    uStack0000000000000008 = (ulong)in_stack_00000010._4_1_;
LAB_009f43b8:
    iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
    if (iVar1 == 1) {
      uVar9 = (ulong)in_stack_00000010._4_1_;
    }
    else {
      iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
      uVar9 = uStack0000000000000008;
      if (iVar1 != 0) goto LAB_009f43f4;
    }
    uStack0000000000000008 = uStack0000000000000008 | uVar9 << 8;
    if (unaff_w26 == 0) {
      if ((uStack0000000000000008 == unaff_x19[0x15]) && ((uStack0000000000000008 | 8) == 8)) {
        unaff_w26 = 0;
      }
      else {
        unaff_w26 = -0x67;
      }
    }
  }
  else {
    iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
    if (iVar1 == 0) {
      uStack0000000000000008 = 0;
      goto LAB_009f43b8;
    }
LAB_009f43f4:
    uStack0000000000000008 = 0;
    unaff_w26 = -1;
  }
  iVar1 = FUN_009f3164();
  if (iVar1 != 0) {
    unaff_w26 = -1;
  }
  iVar1 = FUN_009f3164();
  if (iVar1 == 0) {
    if (unaff_w26 == 0) {
      if (uStack0000000000000008 == unaff_x19[0x17]) {
        unaff_w26 = 0;
      }
      else {
        unaff_w26 = -0x67;
        if (bVar10 != 0) {
          unaff_w26 = 0;
        }
      }
    }
  }
  else {
    unaff_w26 = -1;
  }
  iVar1 = FUN_009f3164();
  if (iVar1 == 0) {
    if (unaff_w26 == 0) {
      if (uStack0000000000000008 == unaff_x19[0x18]) {
        unaff_w26 = 0;
      }
      else {
        unaff_w26 = -0x67;
        if (bVar10 != 0) {
          unaff_w26 = 0;
        }
      }
    }
  }
  else {
    unaff_w26 = -1;
  }
  iVar1 = FUN_009f3164();
  if (iVar1 == 0) {
    if (unaff_w26 == 0) {
      if (uStack0000000000000008 == unaff_x19[0x19]) {
        unaff_w26 = 0;
      }
      else {
        unaff_w26 = -0x67;
        if (bVar10 != 0) {
          unaff_w26 = 0;
        }
      }
    }
  }
  else {
    unaff_w26 = -1;
  }
  uVar6 = unaff_x19[8];
  iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
  if (iVar1 == 1) {
    uVar9 = (ulong)in_stack_00000010._4_1_;
LAB_009f4550:
    iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
    if (iVar1 == 1) {
      uVar5 = (ulong)in_stack_00000010._4_1_;
    }
    else {
      iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
      uVar5 = uVar9;
      if (iVar1 != 0) goto LAB_009f4590;
    }
    uVar9 = uVar9 | uVar5 << 8;
    if ((unaff_w26 == 0) && (unaff_w26 = 0, uVar9 != unaff_x19[0x1a])) {
      unaff_w26 = -0x67;
    }
  }
  else {
    iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
    uVar9 = 0;
    if (iVar1 == 0) goto LAB_009f4550;
LAB_009f4590:
    uVar9 = 0;
    unaff_w26 = -1;
  }
  uVar6 = unaff_x19[8];
  iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
  if (iVar1 == 1) {
    uVar11 = (uint)in_stack_00000010._4_1_;
LAB_009f45ec:
    iVar1 = (*(code *)unaff_x19[1])(unaff_x19[7],uVar6,(long)&stack0x00000010 + 4,1);
    if (iVar1 == 1) {
      uVar3 = (uint)in_stack_00000010._4_1_;
    }
    else {
      iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
      uVar3 = uVar11;
      if (iVar1 != 0) goto LAB_009f41f8;
    }
    uVar11 = uVar11 | uVar3 << 8;
    if (unaff_w26 == 0) {
      lVar12 = unaff_x19[0x23];
      __ptr = malloc(0x120);
      if (__ptr != (undefined8 *)0x0) {
        pvVar2 = malloc(0x4000);
        *__ptr = pvVar2;
        __ptr[0x11] = uVar9 + lVar12 + 0x1e;
        *(uint *)(__ptr + 0x12) = uVar11;
        __ptr[0x13] = 0;
        *(int *)(__ptr + 0x23) = unaff_w21;
        if (pvVar2 == (void *)0x0) {
          free(__ptr);
          iVar1 = -0x68;
          goto LAB_009f4204;
        }
        __ptr[0x10] = 0;
        if (unaff_x23 != (undefined4 *)0x0) {
          *unaff_x23 = (int)unaff_x19[0x15];
        }
        if (unaff_x22 != (undefined4 *)0x0) {
          *unaff_x22 = 6;
          uVar5 = unaff_x19[0x14] & 6;
          if (uVar5 == 2) {
            uVar4 = 9;
          }
          else if (uVar5 == 4) {
            uVar4 = 2;
          }
          else {
            if (uVar5 != 6) goto LAB_009f46e8;
            uVar4 = 1;
          }
          *unaff_x22 = uVar4;
        }
LAB_009f46e8:
        uVar6 = unaff_x19[0x17];
        __ptr[0x14] = 0;
        __ptr[0x15] = uVar6;
        lVar7 = unaff_x19[0x15];
        __ptr[0x20] = unaff_x19[8];
        __ptr[0x21] = lVar7;
        uVar6 = unaff_x19[4];
        uVar14 = unaff_x19[7];
        uVar13 = unaff_x19[6];
        uVar16 = unaff_x19[1];
        uVar15 = *unaff_x19;
        uVar18 = unaff_x19[3];
        uVar17 = unaff_x19[2];
        __ptr[0x1d] = unaff_x19[5];
        __ptr[0x1c] = uVar6;
        __ptr[0x1f] = uVar14;
        __ptr[0x1e] = uVar13;
        __ptr[0x19] = uVar16;
        __ptr[0x18] = uVar15;
        __ptr[0x1b] = uVar18;
        __ptr[0x1a] = uVar17;
        uVar6 = unaff_x19[0xb];
        __ptr[6] = 0;
        __ptr[0x22] = uVar6;
        if ((unaff_w21 == 0) && (lVar7 == 8)) {
          __ptr[1] = 0;
          *(undefined4 *)(__ptr + 2) = 0;
          __ptr[10] = 0;
          __ptr[0xb] = 0;
          __ptr[9] = 0;
          iVar1 = inflateInit2_(__ptr + 1,0xfffffff1,&DAT_012f55e1,0x70);
          if (iVar1 != 0) {
            free(__ptr);
            goto LAB_009f4204;
          }
          __ptr[0x10] = 1;
          lVar12 = unaff_x19[0x23];
        }
        uVar13 = unaff_x19[0x19];
        uVar6 = unaff_x19[0x18];
        *(undefined4 *)(__ptr + 2) = 0;
        __ptr[0xf] = (ulong)(uVar11 + (int)uVar9) + lVar12 + 0x1e;
        __ptr[0x17] = uVar13;
        __ptr[0x16] = uVar6;
        unaff_x19[0x24] = __ptr;
        if (unaff_x20 == (byte *)0x0) {
          iVar1 = 0;
          goto LAB_009f4204;
        }
        uVar9 = 0x34567890;
        lVar12 = get_crc_table();
        unaff_x19[0x28] = 0x34567890;
        unaff_x19[0x29] = lVar12;
        unaff_x19[0x27] = 0x23456789;
        unaff_x19[0x26] = 0x12345678;
        uVar11 = (uint)*unaff_x20;
        if (*unaff_x20 != 0) {
          uVar5 = 0x12345678;
          lVar7 = 0x23456789;
          do {
            unaff_x20 = unaff_x20 + 1;
            uVar5 = *(ulong *)(lVar12 + ((ulong)((uint)uVar5 ^ uVar11) & 0xff) * 8) ^ uVar5 >> 8;
            lVar7 = (lVar7 + (uVar5 & 0xff)) * 0x8088405 + 1;
            unaff_x19[0x26] = uVar5;
            unaff_x19[0x27] = lVar7;
            uVar9 = *(ulong *)(lVar12 + ((ulong)((uint)uVar9 ^ (uint)lVar7 >> 0x18) & 0xff) * 8) ^
                    uVar9 >> 8;
            unaff_x19[0x28] = uVar9;
            uVar11 = (uint)*unaff_x20;
          } while (uVar11 != 0);
        }
        lVar12 = (*(code *)unaff_x19[4])
                           (unaff_x19[7],unaff_x19[8],
                            *(long *)(unaff_x19[0x24] + 0x110) + *(long *)(unaff_x19[0x24] + 0x78),0
                           );
        if (lVar12 == 0) {
          uVar9 = (*(code *)unaff_x19[1])(unaff_x19[7],unaff_x19[8],&stack0x00000018,0xc);
          if (0xb < uVar9) {
            uVar9 = unaff_x19[0x28];
            lVar7 = unaff_x19[0x29];
            uVar5 = unaff_x19[0x26];
            lVar8 = unaff_x19[0x27];
            lVar12 = 0;
            do {
              uVar11 = (uint)uVar9 & 0xfffd;
              uVar11 = (uint)(byte)(&stack0x00000018)[lVar12] ^ (uVar11 | 2) * (uVar11 ^ 3) >> 8;
              (&stack0x00000018)[lVar12] = (char)uVar11;
              lVar12 = lVar12 + 1;
              uVar5 = *(ulong *)(lVar7 + ((ulong)((uint)uVar5 ^ uVar11) & 0xff) * 8) ^ uVar5 >> 8;
              lVar8 = (lVar8 + (uVar5 & 0xff)) * 0x8088405 + 1;
              unaff_x19[0x26] = uVar5;
              unaff_x19[0x27] = lVar8;
              uVar9 = *(ulong *)(lVar7 + ((ulong)((uint)uVar9 ^ (uint)lVar8 >> 0x18) & 0xff) * 8) ^
                      uVar9 >> 8;
              unaff_x19[0x28] = uVar9;
            } while (lVar12 != 0xc);
            iVar1 = 0;
            *(long *)(unaff_x19[0x24] + 0x78) = *(long *)(unaff_x19[0x24] + 0x78) + 0xc;
            *(undefined4 *)(unaff_x19 + 0x25) = 1;
            goto LAB_009f4204;
          }
        }
      }
      iVar1 = -0x68;
      goto LAB_009f4204;
    }
  }
  else {
    iVar1 = (*(code *)unaff_x19[6])(unaff_x19[7],uVar6);
    if (iVar1 == 0) {
      uVar11 = 0;
      goto LAB_009f45ec;
    }
  }
LAB_009f41f8:
  iVar1 = -0x67;
LAB_009f4204:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000028) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

