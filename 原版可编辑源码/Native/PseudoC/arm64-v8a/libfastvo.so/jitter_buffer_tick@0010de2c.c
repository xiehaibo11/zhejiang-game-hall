
int * jitter_buffer_tick(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  
  piVar4 = param_1;
  if (param_1[0x714] == 0) goto LAB_0010e13c;
  piVar4 = (int *)FUN_0010d7e0(param_1);
  iVar1 = (int)(short)piVar4;
  if (iVar1 < 0) {
    puVar7 = *(uint **)(param_1 + 2000);
    iVar2 = (int)(short)-iVar1;
    uVar3 = *puVar7;
    uVar5 = (ulong)(int)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar2);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar2);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar2);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar2,
                        (int)*(undefined8 *)puVar9 + iVar2);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010df70;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar2;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010df70:
    puVar7 = *(uint **)(param_1 + 0x7d2);
    uVar3 = *puVar7;
    uVar5 = (ulong)(int)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar2);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar2);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar2);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar2,
                        (int)*(undefined8 *)puVar9 + iVar2);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010e058;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar2;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010e058:
    puVar7 = *(uint **)(param_1 + 0x7d4);
    uVar3 = *puVar7;
    uVar5 = (ulong)(int)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar2);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar2);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar2);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar2,
                        (int)*(undefined8 *)puVar9 + iVar2);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010e12c;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar2;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010e12c:
    iVar2 = *param_1;
    param_1[0x713] = -iVar1;
  }
  else {
    if (iVar1 == 0) goto LAB_0010e13c;
    puVar7 = *(uint **)(param_1 + 2000);
    iVar2 = (int)(short)-(short)piVar4;
    uVar3 = *puVar7;
    uVar5 = (ulong)(int)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar2);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar2);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar2);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar2,
                        (int)*(undefined8 *)puVar9 + iVar2);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010defc;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar2;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010defc:
    puVar7 = *(uint **)(param_1 + 0x7d2);
    uVar3 = *puVar7;
    uVar5 = (ulong)(int)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar2);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar2);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar2);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar2,
                        (int)*(undefined8 *)puVar9 + iVar2);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010dfe4;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar2;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010dfe4:
    puVar7 = *(uint **)(param_1 + 0x7d4);
    uVar3 = *puVar7;
    uVar5 = (ulong)(int)uVar3;
    if (0 < (int)uVar3) {
      if (uVar3 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar2);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar2);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar2,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar2);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar2,
                        (int)*(undefined8 *)puVar9 + iVar2);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010e0cc;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar2;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010e0cc:
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + iVar1;
LAB_0010e13c:
  if (param_1[3] < 0) {
    param_1[2] = *param_1;
    uVar3 = fprintf((FILE *)0x14d168,"warning: %s %d\n",
                    "jitter buffer sees negative buffering, your code might be broken. Value is ");
    piVar4 = (int *)(ulong)uVar3;
  }
  else {
    param_1[2] = *param_1 - param_1[3];
  }
  param_1[3] = 0;
  return piVar4;
}

