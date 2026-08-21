
void jitter_buffer_update_delay(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  
  param_1[0x714] = 0;
  sVar4 = FUN_0010d7e0();
  iVar2 = (int)sVar4;
  if (iVar2 < 0) {
    puVar7 = *(uint **)(param_1 + 2000);
    iVar3 = (int)(short)-iVar2;
    uVar1 = *puVar7;
    uVar5 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      if (uVar1 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar3);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar3);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar3);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar3,
                        (int)*(undefined8 *)puVar9 + iVar3);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010dc48;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar3;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010dc48:
    puVar7 = *(uint **)(param_1 + 0x7d2);
    uVar1 = *puVar7;
    uVar5 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      if (uVar1 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar3);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar3);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar3);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar3,
                        (int)*(undefined8 *)puVar9 + iVar3);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010dd30;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar3;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010dd30:
    puVar7 = *(uint **)(param_1 + 0x7d4);
    uVar1 = *puVar7;
    uVar5 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      if (uVar1 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffffffffffff8;
        puVar9 = puVar7 + 6;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(ulong *)(puVar9 + -2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + -2) + iVar3);
          *(ulong *)(puVar9 + -4) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + -4) + iVar3);
          *(ulong *)(puVar9 + 2) =
               CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar3,
                        (int)*(undefined8 *)(puVar9 + 2) + iVar3);
          *(ulong *)puVar9 =
               CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar3,
                        (int)*(undefined8 *)puVar9 + iVar3);
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar8 == uVar5) goto LAB_0010de08;
      }
      lVar6 = uVar5 - uVar8;
      puVar7 = puVar7 + uVar8 + 2;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar7 + iVar3;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_0010de08:
    param_1[0x713] = -iVar2;
    *param_1 = *param_1 + iVar2;
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  puVar7 = *(uint **)(param_1 + 2000);
  iVar3 = (int)-sVar4;
  uVar1 = *puVar7;
  uVar5 = (ulong)(int)uVar1;
  if (0 < (int)uVar1) {
    if (uVar1 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar5 & 0xfffffffffffffff8;
      puVar9 = puVar7 + 6;
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 8;
        *(ulong *)(puVar9 + -2) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + -2) + iVar3);
        *(ulong *)(puVar9 + -4) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + -4) + iVar3);
        *(ulong *)(puVar9 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + 2) + iVar3);
        *(ulong *)puVar9 =
             CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar3,
                      (int)*(undefined8 *)puVar9 + iVar3);
        puVar9 = puVar9 + 8;
      } while (uVar10 != 0);
      if (uVar8 == uVar5) goto LAB_0010dbd4;
    }
    lVar6 = uVar5 - uVar8;
    puVar7 = puVar7 + uVar8 + 2;
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar7 + iVar3;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0010dbd4:
  puVar7 = *(uint **)(param_1 + 0x7d2);
  uVar1 = *puVar7;
  uVar5 = (ulong)(int)uVar1;
  if (0 < (int)uVar1) {
    if (uVar1 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar5 & 0xfffffffffffffff8;
      puVar9 = puVar7 + 6;
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 8;
        *(ulong *)(puVar9 + -2) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + -2) + iVar3);
        *(ulong *)(puVar9 + -4) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + -4) + iVar3);
        *(ulong *)(puVar9 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + 2) + iVar3);
        *(ulong *)puVar9 =
             CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar3,
                      (int)*(undefined8 *)puVar9 + iVar3);
        puVar9 = puVar9 + 8;
      } while (uVar10 != 0);
      if (uVar8 == uVar5) goto LAB_0010dcbc;
    }
    lVar6 = uVar5 - uVar8;
    puVar7 = puVar7 + uVar8 + 2;
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar7 + iVar3;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0010dcbc:
  puVar7 = *(uint **)(param_1 + 0x7d4);
  uVar1 = *puVar7;
  uVar5 = (ulong)(int)uVar1;
  if (0 < (int)uVar1) {
    if (uVar1 < 8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar5 & 0xfffffffffffffff8;
      puVar9 = puVar7 + 6;
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 8;
        *(ulong *)(puVar9 + -2) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -2) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + -2) + iVar3);
        *(ulong *)(puVar9 + -4) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + -4) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + -4) + iVar3);
        *(ulong *)(puVar9 + 2) =
             CONCAT44((int)((ulong)*(undefined8 *)(puVar9 + 2) >> 0x20) + iVar3,
                      (int)*(undefined8 *)(puVar9 + 2) + iVar3);
        *(ulong *)puVar9 =
             CONCAT44((int)((ulong)*(undefined8 *)puVar9 >> 0x20) + iVar3,
                      (int)*(undefined8 *)puVar9 + iVar3);
        puVar9 = puVar9 + 8;
      } while (uVar10 != 0);
      if (uVar8 == uVar5) goto LAB_0010dda4;
    }
    lVar6 = uVar5 - uVar8;
    puVar7 = puVar7 + uVar8 + 2;
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar7 + iVar3;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0010dda4:
  *param_1 = *param_1 + iVar2;
  return;
}

