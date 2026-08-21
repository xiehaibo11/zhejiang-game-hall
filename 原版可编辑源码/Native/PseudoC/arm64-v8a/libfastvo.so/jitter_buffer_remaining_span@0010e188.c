
int * jitter_buffer_remaining_span(int *param_1,int param_2)

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
  if (param_1[0x714] != 0) {
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
          if (uVar8 == uVar5) goto LAB_0010e2d0;
        }
        lVar6 = uVar5 - uVar8;
        puVar7 = puVar7 + uVar8 + 2;
        do {
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar7 + iVar2;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_0010e2d0:
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
          if (uVar8 == uVar5) goto LAB_0010e3b8;
        }
        lVar6 = uVar5 - uVar8;
        puVar7 = puVar7 + uVar8 + 2;
        do {
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar7 + iVar2;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_0010e3b8:
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
          if (uVar8 == uVar5) goto LAB_0010e4cc;
        }
        lVar6 = uVar5 - uVar8;
        puVar7 = puVar7 + uVar8 + 2;
        do {
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar7 + iVar2;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_0010e4cc:
      param_1[0x713] = -iVar1;
      *param_1 = *param_1 + iVar1;
      iVar1 = param_1[3];
      goto joined_r0x0010e43c;
    }
    if (iVar1 != 0) {
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
          if (uVar8 == uVar5) goto LAB_0010e25c;
        }
        lVar6 = uVar5 - uVar8;
        puVar7 = puVar7 + uVar8 + 2;
        do {
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar7 + iVar2;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_0010e25c:
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
          if (uVar8 == uVar5) goto LAB_0010e344;
        }
        lVar6 = uVar5 - uVar8;
        puVar7 = puVar7 + uVar8 + 2;
        do {
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar7 + iVar2;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_0010e344:
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
          if (uVar8 == uVar5) goto LAB_0010e42c;
        }
        lVar6 = uVar5 - uVar8;
        puVar7 = puVar7 + uVar8 + 2;
        do {
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar7 + iVar2;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_0010e42c:
      *param_1 = *param_1 + iVar1;
    }
  }
  iVar1 = param_1[3];
joined_r0x0010e43c:
  if (iVar1 < 0) {
    uVar3 = fprintf((FILE *)0x14d168,"warning: %s %d\n",
                    "jitter buffer sees negative buffering, your code might be broken. Value is ");
    piVar4 = (int *)(ulong)uVar3;
  }
  param_1[2] = *param_1 - param_2;
  return piVar4;
}

