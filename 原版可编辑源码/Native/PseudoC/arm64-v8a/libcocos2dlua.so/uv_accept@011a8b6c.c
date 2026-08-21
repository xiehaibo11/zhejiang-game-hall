
int uv_accept(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 == -1) {
    return -0xb;
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 7) {
LAB_011a8bb0:
    if ((*(int *)(param_2 + 0xb8) != -1) && (*(int *)(param_2 + 0xb8) != iVar1)) {
      iVar3 = -0x10;
      FUN_011a2d5c(iVar1);
      lVar4 = *(long *)(param_1 + 0xf0);
      goto joined_r0x011a8c98;
    }
    puVar7 = (uint *)(param_2 + 0x58);
    uVar2 = *puVar7;
    uVar6 = uVar2 | 0xc000;
    *puVar7 = uVar6;
    if (iVar3 == 0xc) {
      if ((uVar2 >> 0x18 & 1) == 0) {
LAB_011a8c60:
        if (((uVar6 >> 0x19 & 1) == 0) || (iVar3 = FUN_011a9fc0(iVar1,1,0x3c), iVar3 == 0))
        goto LAB_011a8ca0;
      }
      else {
        iVar3 = FUN_011a9f80(iVar1,1);
        if (iVar3 == 0) {
          uVar6 = *puVar7;
          goto LAB_011a8c60;
        }
      }
      piVar5 = (int *)__errno();
      if (*piVar5 != 0) {
        iVar3 = -*piVar5;
        FUN_011a2d5c(*(undefined4 *)(param_1 + 0xec));
        lVar4 = *(long *)(param_1 + 0xf0);
        goto joined_r0x011a8c98;
      }
    }
    else {
LAB_011a8ca0:
      *(int *)(param_2 + 0xb8) = iVar1;
    }
  }
  else {
    if (iVar3 != 0xf) {
      if (iVar3 != 0xc) {
        return -0x16;
      }
      goto LAB_011a8bb0;
    }
    iVar3 = uv_udp_open(param_2,iVar1);
    if (iVar3 != 0) {
      FUN_011a2d5c(*(undefined4 *)(param_1 + 0xec));
      lVar4 = *(long *)(param_1 + 0xf0);
      goto joined_r0x011a8c98;
    }
  }
  iVar3 = 0;
  *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x2000;
  lVar4 = *(long *)(param_1 + 0xf0);
joined_r0x011a8c98:
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
    if (iVar3 == 0) {
      FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar4 + 8);
    uVar6 = *(int *)(lVar4 + 4) - 1;
    *(uint *)(lVar4 + 4) = uVar6;
    if (uVar6 == 0) {
      FUN_0119f27c();
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    else {
      memmove((undefined4 *)(lVar4 + 8),(void *)(lVar4 + 0xc),(ulong)uVar6 << 2);
    }
  }
  return iVar3;
}

