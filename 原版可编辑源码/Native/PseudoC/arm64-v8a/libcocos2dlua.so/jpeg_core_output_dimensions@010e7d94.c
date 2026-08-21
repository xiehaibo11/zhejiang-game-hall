
void jpeg_core_output_dimensions(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar3 = *(int *)(param_1 + 0x22c) * *(int *)(param_1 + 0x44);
  if (uVar3 <= uVar1) {
    uVar4 = jdiv_round_up(*(undefined4 *)(param_1 + 0x30));
    uVar5 = (ulong)*(uint *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    lVar8 = 1;
    goto LAB_010e7ff8;
  }
  if (uVar3 <= uVar1 * 2) {
    uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 1);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    lVar8 = 2;
    uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 1;
    goto LAB_010e7ff8;
  }
  if (uVar3 < uVar1 * 3 || uVar3 + uVar1 * -3 == 0) {
    uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 3);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    lVar8 = 3;
    uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 3;
    goto LAB_010e7ff8;
  }
  if (uVar1 * 4 < uVar3) {
    if (uVar3 < uVar1 * 5 || uVar3 + uVar1 * -5 == 0) {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 5);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar8 = 5;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 5;
      goto LAB_010e7ff8;
    }
    if (uVar3 < uVar1 * 6 || uVar3 + uVar1 * -6 == 0) {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 6);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar8 = 6;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 6;
      goto LAB_010e7ff8;
    }
    if (uVar3 < uVar1 * 7 || uVar3 + uVar1 * -7 == 0) {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 7);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar8 = 7;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 7;
      goto LAB_010e7ff8;
    }
    if (uVar3 <= uVar1 * 8) {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 3);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar8 = 8;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 3;
      goto LAB_010e7ff8;
    }
    if (uVar3 < uVar1 * 9 || uVar3 + uVar1 * -9 == 0) {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 9);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar8 = 9;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 9;
      goto LAB_010e7ff8;
    }
    if (uVar3 < uVar1 * 10 || uVar3 + uVar1 * -10 == 0) {
      uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 10);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      lVar8 = 10;
      uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 10;
      goto LAB_010e7ff8;
    }
    if (uVar3 < uVar1 * 0xb || uVar3 + uVar1 * -0xb == 0) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x30);
      lVar8 = 0xb;
    }
    else {
      if (uVar3 < uVar1 * 0xc || uVar3 + uVar1 * -0xc == 0) {
        uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 0xc);
        *(undefined4 *)(param_1 + 0x88) = uVar4;
        lVar8 = 0xc;
        uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 3;
        goto LAB_010e7efc;
      }
      if (uVar3 < uVar1 * 0xd || uVar3 + uVar1 * -0xd == 0) {
        uVar5 = (ulong)*(uint *)(param_1 + 0x30);
        lVar8 = 0xd;
      }
      else {
        if (uVar1 * 0xe <= uVar3 && uVar3 + uVar1 * -0xe != 0) {
          if (uVar3 < uVar1 * 0xf || uVar3 + uVar1 * -0xf == 0) {
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) * 0xf);
            *(undefined4 *)(param_1 + 0x88) = uVar4;
            lVar8 = 0xf;
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) * 0xf;
          }
          else {
            uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 4);
            *(undefined4 *)(param_1 + 0x88) = uVar4;
            lVar8 = 0x10;
            uVar5 = (ulong)*(uint *)(param_1 + 0x34) << 4;
          }
          goto LAB_010e7ff8;
        }
        uVar5 = (ulong)*(uint *)(param_1 + 0x30);
        lVar8 = 0xe;
      }
    }
    uVar4 = jdiv_round_up(uVar5 * lVar8);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    uVar5 = (ulong)*(uint *)(param_1 + 0x34) * lVar8;
  }
  else {
    uVar4 = jdiv_round_up((ulong)*(uint *)(param_1 + 0x30) << 2);
    uVar5 = (ulong)*(uint *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    lVar8 = 4;
LAB_010e7efc:
    uVar5 = uVar5 << 2;
  }
LAB_010e7ff8:
  uVar4 = jdiv_round_up(uVar5,(long)*(int *)(param_1 + 0x22c));
  iVar2 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = (undefined4)lVar8;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  if (0 < iVar2) {
    lVar8 = *(long *)(param_1 + 0x130);
    uVar5 = (ulong)(iVar2 - 1U) + 1;
    if (uVar5 < 2) {
      uVar5 = 0;
    }
    else {
      uVar1 = ~(iVar2 - 1U) & 1;
      uVar5 = uVar5 - uVar1;
      if (uVar5 != 0) {
        puVar6 = (undefined4 *)(lVar8 + 0x88);
        uVar7 = uVar5;
        do {
          puVar6[-1] = uVar4;
          *puVar6 = uVar4;
          puVar6[-0x19] = uVar4;
          puVar6[-0x18] = uVar4;
          uVar7 = uVar7 - 2;
          puVar6 = puVar6 + 0x30;
        } while (uVar7 != 0);
        lVar8 = lVar8 + uVar5 * 0x60;
        if (uVar1 == 0) {
          return;
        }
      }
    }
    puVar6 = (undefined4 *)(lVar8 + 0x28);
    do {
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar1;
      puVar6[-1] = uVar4;
      *puVar6 = uVar4;
      puVar6 = puVar6 + 0x18;
    } while ((int)uVar1 < iVar2);
  }
  return;
}

