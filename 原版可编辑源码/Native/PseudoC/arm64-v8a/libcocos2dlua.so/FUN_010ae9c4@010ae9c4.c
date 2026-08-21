
undefined8 FUN_010ae9c4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar8 = *(int *)(param_1 + 0xa8);
  if (iVar8 == 2) {
    lVar13 = *(long *)(param_1 + 0x70);
    if (lVar13 < param_3) {
      uVar11 = *(ulong *)(param_1 + 0x90);
      uVar9 = *(ulong *)(param_1 + 0x38);
      lVar12 = uVar9 - *(long *)(uVar11 + 0x10);
      if (-1 < lVar12) {
        iVar8 = *(int *)(param_1 + 8);
        lVar13 = ((lVar13 + *(int *)(param_1 + 4)) - 1U & -(long)*(int *)(param_1 + 4)) - lVar13;
        if (lVar12 != 0) {
          *(long *)(uVar11 + 0x20) = lVar12 >> 3;
          if (iVar8 <= lVar13) {
            *(uint *)(uVar11 + 0x18) =
                 ((*(uint *)(uVar11 + 0x18) << 1 ^ 0xffffffff) & 0x10) + 0x10 |
                 *(uint *)(uVar11 + 0x18);
          }
          uVar10 = uVar9 + 0x40;
          *(ulong *)(param_1 + 0x90) = uVar9;
          *(ulong *)(param_1 + 0x38) = uVar10;
          *(undefined8 *)(uVar9 + 0x20) = 0;
          *(ulong *)(uVar9 + 0x10) = uVar10;
          *(ulong *)(uVar11 + 0x38) = uVar9;
          *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + 1;
          uVar11 = uVar9;
          uVar9 = uVar10;
        }
        if (uVar9 < *(ulong *)(param_1 + 0x30)) {
          *(undefined1 *)(param_1 + 0x8b) = 0;
          if (*(long *)(param_1 + 0x98) == 0) {
            uVar11 = *(ulong *)(param_1 + 0x38);
            uVar9 = uVar11 + 0x40;
            *(ulong *)(param_1 + 0x90) = uVar11;
            *(ulong *)(param_1 + 0x98) = uVar11;
            *(ulong *)(param_1 + 0x38) = uVar9;
          }
          if (uVar9 < *(ulong *)(param_1 + 0x30)) {
            *(undefined8 *)(uVar11 + 0x20) = 0;
            *(undefined8 *)(uVar11 + 0x28) = 0;
            *(undefined8 *)(uVar11 + 8) = 0;
            *(ulong *)(uVar11 + 0x10) = uVar9;
            *(undefined8 *)(uVar11 + 0x38) = 0;
                    /* try { // try from 010aec70 to 011aef47 has its CatchHandler @ 010aec70
                       catch() { ... } // from try @ 010aec70 with catch @ 010aec70
                       catch() { ... } // from try @ 010aef50 with catch @ 010aec70
                       catch() { ... } // from try @ 010af034 with catch @ 010aec70
                       catch() { ... } // from try @ 010af104 with catch @ 010aec70
                       catch() { ... } // from try @ 010af15c with catch @ 010aec70
                       catch() { ... } // from try @ 010af178 with catch @ 010aec70 */
            uVar6 = 8;
            if (iVar8 <= lVar13) {
              uVar6 = 0x28;
            }
            *(uint *)(uVar11 + 0x18) = uVar6 | *(byte *)(param_1 + 0x138);
            if (*(long *)(param_1 + 0xa0) == 0) {
              *(ulong *)(param_1 + 0xa0) = uVar11;
            }
            goto LAB_010aec94;
          }
        }
        goto LAB_010aecf4;
      }
LAB_010aeb50:
      uVar7 = 99;
LAB_010aecf8:
      *(undefined4 *)(param_1 + 0x40) = uVar7;
    }
    else {
LAB_010aed2c:
      cVar3 = *(char *)(param_1 + 0x8a);
      cVar4 = FUN_010af4e8(param_1,*(undefined8 *)(param_1 + 0x68),-lVar13,param_2,-param_3,
                           -*(long *)(param_1 + 0x80),-*(long *)(param_1 + 0x78));
      if ((cVar3 == '\0') || (*(char *)(param_1 + 0x8a) != '\0')) goto LAB_010aedb0;
      *(long *)(*(long *)(param_1 + 0x90) + 0x28) = -*(long *)(*(long *)(param_1 + 0x90) + 0x28);
      if (cVar4 == '\0') goto LAB_010aedc0;
    }
LAB_010aedb8:
    uVar5 = 1;
  }
  else {
                    /* try { // try from 010ae9f4 to 011ae9f7 has its CatchHandler @ 010aeb8c */
    if (iVar8 == 1) {
      uVar9 = *(ulong *)(param_1 + 0x70);
      if (param_3 < (long)uVar9) {
        uVar10 = *(ulong *)(param_1 + 0x90);
        uVar11 = *(ulong *)(param_1 + 0x38);
        lVar13 = uVar11 - *(long *)(uVar10 + 0x10);
        if (lVar13 < 0) goto LAB_010aeb50;
        iVar8 = *(int *)(param_1 + 8);
        uVar9 = uVar9 & (-(long)*(int *)(param_1 + 4) ^ 0xffffffffffffffffU);
        if (lVar13 != 0) {
          *(long *)(uVar10 + 0x20) = lVar13 >> 3;
          if ((long)iVar8 <= (long)uVar9) {
            *(uint *)(uVar10 + 0x18) =
                 ((*(uint *)(uVar10 + 0x18) << 1 ^ 0xffffffff) & 0x10) + 0x10 |
                 *(uint *)(uVar10 + 0x18);
          }
          uVar1 = uVar11 + 0x40;
          *(ulong *)(param_1 + 0x90) = uVar11;
          *(ulong *)(param_1 + 0x38) = uVar1;
          *(undefined8 *)(uVar11 + 0x20) = 0;
          *(ulong *)(uVar11 + 0x10) = uVar1;
          *(ulong *)(uVar10 + 0x38) = uVar11;
                    /* try { // try from 010aeb24 to 011aeb2b has its CatchHandler @ 010aeb6c */
                    /* try { // try from 010aeb2c to 011aeb63 has its CatchHandler @ 010ae890 */
          *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x88) + 1;
          uVar10 = uVar11;
          uVar11 = uVar1;
        }
        if (uVar11 < *(ulong *)(param_1 + 0x30)) {
          *(undefined1 *)(param_1 + 0x8b) = 0;
                    /* catch() { ... } // from try @ 010ae8e8 with catch @ 010aebdc */
          if (*(long *)(param_1 + 0x98) == 0) {
                    /* catch() { ... } // from try @ 010ae8f8 with catch @ 010aebe0 */
            uVar10 = *(ulong *)(param_1 + 0x38);
            uVar11 = uVar10 + 0x40;
            *(ulong *)(param_1 + 0x90) = uVar10;
            *(ulong *)(param_1 + 0x98) = uVar10;
            *(ulong *)(param_1 + 0x38) = uVar11;
          }
          if (uVar11 < *(ulong *)(param_1 + 0x30)) {
            *(undefined8 *)(uVar10 + 0x20) = 0;
            *(undefined8 *)(uVar10 + 0x28) = 0;
            *(undefined8 *)(uVar10 + 8) = 0;
            *(ulong *)(uVar10 + 0x10) = uVar11;
            *(undefined8 *)(uVar10 + 0x38) = 0;
            uVar6 = (uint)*(byte *)(param_1 + 0x138);
            if ((long)iVar8 <= (long)uVar9) {
              uVar6 = *(byte *)(param_1 + 0x138) | 0x10;
            }
            *(uint *)(uVar10 + 0x18) = uVar6;
            if (*(long *)(param_1 + 0xa0) != 0) goto LAB_010aecec;
            *(ulong *)(param_1 + 0xa0) = uVar10;
            iVar8 = 2;
            goto LAB_010aed08;
          }
        }
        goto LAB_010aecf4;
      }
LAB_010aed94:
      cVar4 = FUN_010af4e8(param_1,*(undefined8 *)(param_1 + 0x68),uVar9,param_2,param_3,
                           *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
LAB_010aedb0:
      if (cVar4 != '\0') goto LAB_010aedb8;
    }
    else if (iVar8 == 0) {
      uVar9 = *(ulong *)(param_1 + 0x70);
      if ((long)uVar9 < param_3) {
        iVar8 = *(int *)(param_1 + 4);
        iVar2 = *(int *)(param_1 + 8);
        if (*(long *)(param_1 + 0x98) == 0) {
          lVar13 = *(long *)(param_1 + 0x38);
          *(long *)(param_1 + 0x90) = lVar13;
          *(long *)(param_1 + 0x98) = lVar13;
          uVar11 = lVar13 + 0x40;
                    /* try { // try from 010aeb64 to 011aeb6b has its CatchHandler @ 010aeb6c */
          *(ulong *)(param_1 + 0x38) = uVar11;
        }
        else {
          uVar11 = *(ulong *)(param_1 + 0x38);
        }
                    /* catch() { ... } // from try @ 010aeb24 with catch @ 010aeb6c
                       catch() { ... } // from try @ 010aeb64 with catch @ 010aeb6c
                       try { // try from 010aeb6c to 011aec6f has its CatchHandler @ 010ae890 */
        if (*(ulong *)(param_1 + 0x30) <= uVar11) {
LAB_010aecf4:
          uVar7 = 0x62;
          goto LAB_010aecf8;
        }
        lVar13 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 010ae9f4 with catch @ 010aeb8c */
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(undefined8 *)(lVar13 + 8) = 0;
        *(ulong *)(lVar13 + 0x10) = uVar11;
        *(undefined8 *)(lVar13 + 0x38) = 0;
                    /* catch() { ... } // from try @ 010ae974 with catch @ 010aeba4 */
                    /* catch() { ... } // from try @ 010ae9b4 with catch @ 010aeba8 */
        uVar6 = 8;
        if ((long)iVar2 <= (long)(((uVar9 + (long)iVar8) - 1 & -(long)iVar8) - uVar9)) {
          uVar6 = 0x28;
        }
                    /* catch() { ... } // from try @ 010ae92c with catch @ 010aebac */
        *(uint *)(lVar13 + 0x18) = uVar6 | *(byte *)(param_1 + 0x138);
        if (*(long *)(param_1 + 0xa0) == 0) {
          *(long *)(param_1 + 0xa0) = lVar13;
        }
LAB_010aec94:
        iVar8 = 1;
LAB_010aed08:
        *(int *)(param_1 + 0xa8) = iVar8;
        *(undefined2 *)(param_1 + 0x8a) = 1;
        goto LAB_010aed14;
      }
      if (param_3 < (long)uVar9) {
        iVar8 = *(int *)(param_1 + 4);
        iVar2 = *(int *)(param_1 + 8);
        if (*(long *)(param_1 + 0x98) == 0) {
          lVar13 = *(long *)(param_1 + 0x38);
          *(long *)(param_1 + 0x90) = lVar13;
          *(long *)(param_1 + 0x98) = lVar13;
          uVar11 = lVar13 + 0x40;
          *(ulong *)(param_1 + 0x38) = uVar11;
        }
        else {
          uVar11 = *(ulong *)(param_1 + 0x38);
        }
        if (*(ulong *)(param_1 + 0x30) <= uVar11) goto LAB_010aecf4;
        lVar13 = *(long *)(param_1 + 0x90);
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(undefined8 *)(lVar13 + 8) = 0;
        *(ulong *)(lVar13 + 0x10) = uVar11;
        *(undefined8 *)(lVar13 + 0x38) = 0;
        uVar6 = (uint)*(byte *)(param_1 + 0x138);
        if ((long)iVar2 <= (long)(uVar9 & (-(long)iVar8 ^ 0xffffffffffffffffU))) {
          uVar6 = *(byte *)(param_1 + 0x138) | 0x10;
        }
        *(uint *)(lVar13 + 0x18) = uVar6;
        if (*(long *)(param_1 + 0xa0) == 0) {
          *(long *)(param_1 + 0xa0) = lVar13;
          iVar8 = 2;
        }
        else {
LAB_010aecec:
          iVar8 = 2;
        }
        goto LAB_010aed08;
      }
    }
    else {
LAB_010aed14:
      if (iVar8 == 1) {
        uVar9 = *(ulong *)(param_1 + 0x70);
        goto LAB_010aed94;
      }
      if (iVar8 == 2) {
        lVar13 = *(long *)(param_1 + 0x70);
        goto LAB_010aed2c;
      }
    }
LAB_010aedc0:
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(long *)(param_1 + 0x70) = param_3;
  }
  return uVar5;
}

