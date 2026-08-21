
/* WARNING: Removing unreachable block (ram,0x00a0c168) */

int unzOpenCurrentFile3(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                       byte *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_88;
  byte local_7c [4];
  long local_78 [2];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a0bba8 with catch @ 00a0bcb4 */
                    /* catch() { ... } // from try @ 00a0bb9c with catch @ 00a0bcb8 */
                    /* catch() { ... } // from try @ 00a0bb7c with catch @ 00a0bcbc */
  if ((param_1 == (undefined8 *)0x0) || (param_1[0xe] == 0)) {
    iVar2 = -0x66;
    goto LAB_00a0bd38;
  }
  puVar12 = (undefined8 *)param_1[0x24];
                    /* catch() { ... } // from try @ 00a0bbb4 with catch @ 00a0bccc */
  if (puVar12 != (undefined8 *)0x0) {
    if ((void *)*puVar12 != (void *)0x0) {
      free((void *)*puVar12);
    }
    *puVar12 = 0;
    if (puVar12[0x10] != 0) {
      inflateEnd(puVar12 + 1);
    }
    free(puVar12);
    param_1[0x24] = 0;
  }
                    /* try { // try from 00a0bd24 to 00b0bdbf has its CatchHandler @ 00a0bd24
                       catch() { ... } // from try @ 00a0bd24 with catch @ 00a0bd24
                       catch() { ... } // from try @ 00a0bdd8 with catch @ 00a0bd24 */
  lVar4 = (*(code *)param_1[4])(param_1[7],param_1[8],param_1[0xb] + param_1[0x23],0);
  if (lVar4 == 0) {
    iVar2 = FUN_00a0ac94(param_1,param_1[8],local_78);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (local_78[0] != 0x4034b50) {
        iVar2 = -0x67;
      }
    }
    else {
      iVar2 = -1;
    }
    uVar9 = param_1[8];
    iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
    if (iVar3 == 1) {
                    /* try { // try from 00a0bdc0 to 00b0bdd7 has its CatchHandler @ 00a0be04 */
      uVar15 = (ulong)local_7c[0];
LAB_00a0bddc:
      iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
      if (iVar3 == 1) {
        uVar8 = (ulong)local_7c[0];
      }
      else {
                    /* catch() { ... } // from try @ 00a0bdc0 with catch @ 00a0be04 */
        iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
        uVar8 = uVar15;
        if (iVar3 != 0) goto LAB_00a0be1c;
      }
      local_88 = uVar15 | uVar8 << 8;
    }
    else {
      iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
      uVar15 = 0;
                    /* try { // try from 00a0bdd8 to 00b0be17 has its CatchHandler @ 00a0bd24 */
      if (iVar3 == 0) goto LAB_00a0bddc;
LAB_00a0be1c:
      local_88 = 0;
      iVar2 = -1;
    }
    uVar9 = param_1[8];
                    /* try { // try from 00a0be3c to 00b0be3f has its CatchHandler @ 00a0be54 */
                    /* try { // try from 00a0be40 to 00b0be67 has its CatchHandler @ 00a0be18 */
    iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
    bVar13 = local_7c[0];
    if (iVar3 == 1) {
LAB_00a0be70:
      iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
      if ((iVar3 == 1) || (iVar3 = (*(code *)param_1[6])(param_1[7],uVar9), iVar3 == 0)) {
        bVar13 = bVar13 & 8;
      }
      else {
        bVar13 = 0;
        iVar2 = -1;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a0be3c with catch @ 00a0be54 */
      iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
      bVar13 = 0;
      if (iVar3 == 0) goto LAB_00a0be70;
                    /* try { // try from 00a0be68 to 00b0bedb has its CatchHandler @ 00a0be68
                       catch() { ... } // from try @ 00a0be68 with catch @ 00a0be68
                       catch() { ... } // from try @ 00a0beec with catch @ 00a0be68 */
      iVar2 = -1;
    }
    uVar9 = param_1[8];
    iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
    if (iVar3 == 1) {
      uVar15 = (ulong)local_7c[0];
LAB_00a0beec:
                    /* try { // try from 00a0beec to 00b0c00b has its CatchHandler @ 00a0be68 */
      iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
      if (iVar3 == 1) {
        uVar8 = (ulong)local_7c[0];
      }
      else {
        iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
        uVar8 = uVar15;
        if (iVar3 != 0) goto LAB_00a0bf28;
      }
      local_88 = uVar15 | uVar8 << 8;
      if (iVar2 == 0) {
        if ((local_88 == param_1[0x15]) && ((local_88 | 8) == 8)) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
        }
      }
    }
    else {
                    /* try { // try from 00a0bedc to 00b0beeb has its CatchHandler @ 00a0bfc4 */
      iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
      if (iVar3 == 0) {
        uVar15 = 0;
        goto LAB_00a0beec;
      }
LAB_00a0bf28:
      local_88 = 0;
      iVar2 = -1;
    }
    iVar3 = FUN_00a0ac94(param_1,param_1[8],&local_88);
    if (iVar3 != 0) {
      iVar2 = -1;
    }
    iVar3 = FUN_00a0ac94(param_1,param_1[8],&local_88);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        if (local_88 == param_1[0x17]) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
          if (bVar13 != 0) {
            iVar2 = 0;
          }
        }
      }
    }
    else {
      iVar2 = -1;
    }
                    /* catch() { ... } // from try @ 00a0bedc with catch @ 00a0bfc4 */
    iVar3 = FUN_00a0ac94(param_1,param_1[8],&local_88);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        if (local_88 == param_1[0x18]) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
          if (bVar13 != 0) {
            iVar2 = 0;
          }
        }
      }
    }
    else {
      iVar2 = -1;
    }
    iVar3 = FUN_00a0ac94(param_1,param_1[8],&local_88);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        if (local_88 == param_1[0x19]) {
          iVar2 = 0;
        }
        else {
          iVar2 = -0x67;
          if (bVar13 != 0) {
            iVar2 = 0;
          }
        }
      }
    }
    else {
      iVar2 = -1;
    }
    uVar9 = param_1[8];
    iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
    if (iVar3 == 1) {
      uVar15 = (ulong)local_7c[0];
LAB_00a0c084:
      iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
      if (iVar3 == 1) {
        uVar8 = (ulong)local_7c[0];
      }
      else {
        iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
        uVar8 = uVar15;
        if (iVar3 != 0) goto LAB_00a0c0c4;
      }
      uVar15 = uVar15 | uVar8 << 8;
      if ((iVar2 == 0) && (iVar2 = 0, uVar15 != param_1[0x1a])) {
        iVar2 = -0x67;
      }
    }
    else {
      iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
      uVar15 = 0;
      if (iVar3 == 0) goto LAB_00a0c084;
LAB_00a0c0c4:
      uVar15 = 0;
      iVar2 = -1;
    }
    uVar9 = param_1[8];
    iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
    if (iVar3 == 1) {
      uVar14 = (uint)local_7c[0];
    }
    else {
      iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
      if (iVar3 != 0) goto LAB_00a0bd2c;
      uVar14 = 0;
    }
    iVar3 = (*(code *)param_1[1])(param_1[7],uVar9,local_7c,1);
    if (iVar3 == 1) {
      uVar6 = (uint)local_7c[0];
    }
    else {
      iVar3 = (*(code *)param_1[6])(param_1[7],uVar9);
      uVar6 = uVar14;
      if (iVar3 != 0) goto LAB_00a0bd2c;
    }
    uVar14 = uVar14 | uVar6 << 8;
    if (iVar2 == 0) {
      lVar4 = param_1[0x23];
      puVar12 = malloc(0x120);
      if (puVar12 != (undefined8 *)0x0) {
        pvVar5 = malloc(0x4000);
        *puVar12 = pvVar5;
        puVar12[0x11] = uVar15 + lVar4 + 0x1e;
        *(uint *)(puVar12 + 0x12) = uVar14;
        puVar12[0x13] = 0;
        *(int *)(puVar12 + 0x23) = param_4;
        if (pvVar5 == (void *)0x0) {
          free(puVar12);
          iVar2 = -0x68;
          goto LAB_00a0bd38;
        }
        puVar12[0x10] = 0;
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = (int)param_1[0x15];
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 6;
          uVar8 = param_1[0x14] & 6;
          if (uVar8 == 2) {
            uVar7 = 9;
          }
          else if (uVar8 == 4) {
            uVar7 = 2;
          }
          else {
            if (uVar8 != 6) goto LAB_00a0c21c;
            uVar7 = 1;
          }
          *param_3 = uVar7;
        }
LAB_00a0c21c:
        uVar9 = param_1[0x17];
        puVar12[0x14] = 0;
        puVar12[0x15] = uVar9;
        lVar10 = param_1[0x15];
        puVar12[0x20] = param_1[8];
        puVar12[0x21] = lVar10;
        uVar9 = param_1[4];
        uVar17 = param_1[7];
        uVar16 = param_1[6];
        uVar19 = param_1[1];
        uVar18 = *param_1;
        uVar21 = param_1[3];
        uVar20 = param_1[2];
        puVar12[0x1d] = param_1[5];
        puVar12[0x1c] = uVar9;
        puVar12[0x1f] = uVar17;
        puVar12[0x1e] = uVar16;
        puVar12[0x19] = uVar19;
        puVar12[0x18] = uVar18;
        puVar12[0x1b] = uVar21;
        puVar12[0x1a] = uVar20;
        uVar9 = param_1[0xb];
        puVar12[6] = 0;
        puVar12[0x22] = uVar9;
        if ((param_4 == 0) && (lVar10 == 8)) {
          puVar12[1] = 0;
          *(undefined4 *)(puVar12 + 2) = 0;
          puVar12[10] = 0;
          puVar12[0xb] = 0;
          puVar12[9] = 0;
          iVar2 = inflateInit2_(puVar12 + 1,0xfffffff1,"1.2.11",0x70);
          if (iVar2 != 0) {
            free(puVar12);
            goto LAB_00a0bd38;
          }
          puVar12[0x10] = 1;
          lVar4 = param_1[0x23];
        }
        uVar16 = param_1[0x19];
        uVar9 = param_1[0x18];
                    /* try { // try from 00a0c2a4 to 00b0c2fb has its CatchHandler @ 00a0c2a4
                       catch() { ... } // from try @ 00a0c2a4 with catch @ 00a0c2a4
                       catch() { ... } // from try @ 00a0c300 with catch @ 00a0c2a4 */
        *(undefined4 *)(puVar12 + 2) = 0;
        puVar12[0xf] = (ulong)(uVar14 + (int)uVar15) + lVar4 + 0x1e;
        puVar12[0x17] = uVar16;
        puVar12[0x16] = uVar9;
        param_1[0x24] = puVar12;
        if (param_5 == (byte *)0x0) {
          iVar2 = 0;
          goto LAB_00a0bd38;
        }
        uVar15 = 0x34567890;
        lVar4 = get_crc_table();
        param_1[0x28] = 0x34567890;
        param_1[0x29] = lVar4;
        param_1[0x27] = 0x23456789;
        param_1[0x26] = 0x12345678;
        uVar14 = (uint)*param_5;
        if (*param_5 != 0) {
                    /* try { // try from 00a0c2fc to 00b0c2ff has its CatchHandler @ 00a0c368 */
          uVar8 = 0x12345678;
                    /* try { // try from 00a0c300 to 00b0c37b has its CatchHandler @ 00a0c2a4 */
          lVar10 = 0x23456789;
          do {
            param_5 = param_5 + 1;
            uVar8 = *(ulong *)(lVar4 + ((ulong)((uint)uVar8 ^ uVar14) & 0xff) * 8) ^ uVar8 >> 8;
            lVar10 = (lVar10 + (uVar8 & 0xff)) * 0x8088405 + 1;
            param_1[0x26] = uVar8;
            param_1[0x27] = lVar10;
            uVar15 = *(ulong *)(lVar4 + ((ulong)((uint)uVar15 ^ (uint)lVar10 >> 0x18) & 0xff) * 8) ^
                     uVar15 >> 8;
            param_1[0x28] = uVar15;
            uVar14 = (uint)*param_5;
          } while (uVar14 != 0);
        }
        lVar4 = (*(code *)param_1[4])
                          (param_1[7],param_1[8],
                           *(long *)(param_1[0x24] + 0x110) + *(long *)(param_1[0x24] + 0x78),0);
        if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 00a0c2fc with catch @ 00a0c368 */
          uVar15 = (*(code *)param_1[1])(param_1[7],param_1[8],local_78,0xc);
          if (0xb < uVar15) {
            uVar15 = param_1[0x28];
            lVar10 = param_1[0x29];
            uVar8 = param_1[0x26];
            lVar11 = param_1[0x27];
            lVar4 = 0;
            do {
              uVar14 = (uint)uVar15 & 0xfffd;
              uVar14 = (uint)*(byte *)((long)local_78 + lVar4) ^ (uVar14 | 2) * (uVar14 ^ 3) >> 8;
                    /* catch() { ... } // from try @ 00a0c41c with catch @ 00a0c3c8
                       catch() { ... } // from try @ 00a0c5e4 with catch @ 00a0c3c8
                       catch() { ... } // from try @ 00a0c690 with catch @ 00a0c3c8
                       catch() { ... } // from try @ 00a0c860 with catch @ 00a0c3c8
                       catch() { ... } // from try @ 00a0c968 with catch @ 00a0c3c8 */
              *(char *)((long)local_78 + lVar4) = (char)uVar14;
              lVar4 = lVar4 + 1;
              uVar8 = *(ulong *)(lVar10 + ((ulong)((uint)uVar8 ^ uVar14) & 0xff) * 8) ^ uVar8 >> 8;
              lVar11 = (lVar11 + (uVar8 & 0xff)) * 0x8088405 + 1;
              param_1[0x26] = uVar8;
              param_1[0x27] = lVar11;
              uVar15 = *(ulong *)(lVar10 + ((ulong)((uint)uVar15 ^ (uint)lVar11 >> 0x18) & 0xff) * 8
                                 ) ^ uVar15 >> 8;
              param_1[0x28] = uVar15;
            } while (lVar4 != 0xc);
            iVar2 = 0;
                    /* try { // try from 00a0c414 to 00b0c41b has its CatchHandler @ 00a0c9e8 */
                    /* try { // try from 00a0c41c to 00b0c5db has its CatchHandler @ 00a0c3c8 */
            *(long *)(param_1[0x24] + 0x78) = *(long *)(param_1[0x24] + 0x78) + 0xc;
            *(undefined4 *)(param_1 + 0x25) = 1;
            goto LAB_00a0bd38;
          }
        }
      }
      iVar2 = -0x68;
      goto LAB_00a0bd38;
    }
  }
LAB_00a0bd2c:
  iVar2 = -0x67;
LAB_00a0bd38:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

