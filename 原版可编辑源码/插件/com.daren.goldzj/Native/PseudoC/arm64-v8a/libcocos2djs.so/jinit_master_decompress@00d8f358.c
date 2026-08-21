
void jinit_master_decompress(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  void *__s;
  uint uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  
  puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x48] = (long)puVar5;
  puVar5[1] = FUN_00d8f938;
  *puVar5 = FUN_00d8f770;
  *(undefined4 *)(puVar5 + 2) = 0;
  lVar8 = param_1[0x25];
  if ((int)lVar8 != 8) {
    puVar10 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar10 + 5) = 0x10;
    *(int *)((long)puVar10 + 0x2c) = (int)lVar8;
    (*(code *)*puVar10)(param_1);
  }
  jpeg_calc_output_dimensions(param_1);
  __s = (void *)(**(code **)param_1[1])(param_1,1,0x500);
  memset(__s,0,0x200);
  param_1[0x37] = (long)__s + 0x200;
  *(undefined8 *)((long)__s + 0x208) = 0xf0e0d0c0b0a0908;
  *(undefined8 *)((long)__s + 0x200) = 0x706050403020100;
  *(undefined8 *)((long)__s + 0x218) = 0x1f1e1d1c1b1a1918;
  *(undefined8 *)((long)__s + 0x210) = 0x1716151413121110;
  *(undefined8 *)((long)__s + 0x228) = 0x2f2e2d2c2b2a2928;
  *(undefined8 *)((long)__s + 0x220) = 0x2726252423222120;
  *(undefined8 *)((long)__s + 0x238) = 0x3f3e3d3c3b3a3938;
  *(undefined8 *)((long)__s + 0x230) = 0x3736353433323130;
  *(undefined8 *)((long)__s + 0x248) = 0x4f4e4d4c4b4a4948;
  *(undefined8 *)((long)__s + 0x240) = 0x4746454443424140;
  *(undefined8 *)((long)__s + 600) = 0x5f5e5d5c5b5a5958;
  *(undefined8 *)((long)__s + 0x250) = 0x5756555453525150;
  *(undefined8 *)((long)__s + 0x2a8) = 0xafaeadacabaaa9a8;
  *(undefined8 *)((long)__s + 0x2a0) = 0xa7a6a5a4a3a2a1a0;
  *(undefined8 *)((long)__s + 0x2b8) = 0xbfbebdbcbbbab9b8;
  *(undefined8 *)((long)__s + 0x2b0) = 0xb7b6b5b4b3b2b1b0;
  *(undefined8 *)((long)__s + 0x268) = 0x6f6e6d6c6b6a6968;
  *(undefined8 *)((long)__s + 0x260) = 0x6766656463626160;
  *(undefined8 *)((long)__s + 0x278) = 0x7f7e7d7c7b7a7978;
  *(undefined8 *)((long)__s + 0x270) = 0x7776757473727170;
  *(undefined8 *)((long)__s + 0x288) = 0x8f8e8d8c8b8a8988;
  *(undefined8 *)((long)__s + 0x280) = 0x8786858483828180;
  *(undefined8 *)((long)__s + 0x298) = 0x9f9e9d9c9b9a9998;
  *(undefined8 *)((long)__s + 0x290) = 0x9796959493929190;
  *(undefined8 *)((long)__s + 0x2c8) = 0xcfcecdcccbcac9c8;
  *(undefined8 *)((long)__s + 0x2c0) = 0xc7c6c5c4c3c2c1c0;
  *(undefined8 *)((long)__s + 0x2d8) = 0xdfdedddcdbdad9d8;
  *(undefined8 *)((long)__s + 0x2d0) = 0xd7d6d5d4d3d2d1d0;
  *(undefined8 *)((long)__s + 0x2e8) = 0xefeeedecebeae9e8;
  *(undefined8 *)((long)__s + 0x2e0) = 0xe7e6e5e4e3e2e1e0;
  *(undefined8 *)((long)__s + 0x2f8) = 0xfffefdfcfbfaf9f8;
  *(undefined8 *)((long)__s + 0x2f0) = 0xf7f6f5f4f3f2f1f0;
  memset((void *)((long)__s + 0x300),0xff,0x200);
  if (((*(int *)((long)param_1 + 0x8c) == 0) || (uVar6 = *(uint *)(param_1 + 0x11), uVar6 == 0)) ||
     (iVar9 = (int)param_1[0x12], iVar9 < 1)) {
    puVar10 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar10 + 5) = 0x21;
    (*(code *)*puVar10)(param_1);
    iVar9 = (int)param_1[0x12];
    uVar6 = *(uint *)(param_1 + 0x11);
  }
  if (((ulong)uVar6 * (long)iVar9 & 0xffffffff00000000) != 0) {
    puVar10 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar10 + 5) = 0x48;
    (*(code *)*puVar10)(param_1);
  }
  *(undefined4 *)(puVar5 + 3) = 0;
  uVar4 = FUN_00d8f1d8(param_1);
  puVar5[4] = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = uVar4;
  puVar5[5] = 0;
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    *(undefined8 *)((long)param_1 + 0x7c) = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
    iVar9 = *(int *)((long)param_1 + 0x5c);
  }
  else {
    if ((int)param_1[0xb] == 0) {
      *(undefined8 *)((long)param_1 + 0x7c) = 0;
      *(undefined4 *)((long)param_1 + 0x84) = 0;
    }
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      puVar10 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar10 + 5) = 0x30;
      (*(code *)*puVar10)(param_1);
    }
    if ((int)param_1[0x12] == 3) {
      if (param_1[0x14] == 0) {
        piVar7 = (int *)((long)param_1 + 0x84);
        if (*(int *)((long)param_1 + 0x74) == 0) {
          piVar7 = (int *)((long)param_1 + 0x7c);
        }
        *piVar7 = 1;
        iVar9 = *(int *)((long)param_1 + 0x7c);
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 1;
        iVar9 = *(int *)((long)param_1 + 0x7c);
      }
    }
    else {
      piVar7 = (int *)((long)param_1 + 0x7c);
      piVar7[0] = 1;
      piVar7[1] = 0;
      *(undefined4 *)((long)param_1 + 0x84) = 0;
      param_1[0x14] = 0;
      iVar9 = *piVar7;
    }
    if (iVar9 != 0) {
      jinit_1pass_quantizer(param_1);
      puVar5[4] = param_1[0x52];
    }
    if ((*(int *)((long)param_1 + 0x84) != 0) || ((int)param_1[0x10] != 0)) {
      jinit_2pass_quantizer(param_1);
      puVar5[5] = param_1[0x52];
    }
    iVar9 = *(int *)((long)param_1 + 0x5c);
  }
  if (iVar9 == 0) {
    if (*(int *)((long)puVar5 + 0x1c) == 0) {
      jinit_color_deconverter(param_1);
      jinit_upsampler(param_1);
    }
    else {
      jinit_merged_upsampler(param_1);
    }
    jinit_d_post_controller(param_1,*(undefined4 *)((long)param_1 + 0x84));
  }
  jinit_inverse_dct(param_1);
  if ((int)param_1[0x28] == 0) {
    jinit_huff_decoder(param_1);
  }
  else {
    jinit_arith_decoder(param_1);
  }
  if (*(int *)(param_1[0x4c] + 0x20) == 0) {
    bVar3 = (int)param_1[0xb] != 0;
  }
  else {
    bVar3 = true;
  }
  jinit_d_coef_controller(param_1,bVar3);
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    jinit_d_main_controller(param_1,0);
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x4c] + 0x10))(param_1);
  lVar8 = param_1[2];
  if (((lVar8 != 0) && ((int)param_1[0xb] == 0)) && (*(int *)(param_1[0x4c] + 0x20) != 0)) {
    iVar1 = *(int *)((long)param_1 + 0x13c);
    lVar2 = param_1[7];
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar6 = *(uint *)(param_1 + 0x36);
    iVar9 = (int)lVar2;
    if (iVar1 != 0) {
      iVar9 = (int)lVar2 * 3 + 2;
    }
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(ulong *)(lVar8 + 0x10) = (long)iVar9 * (ulong)uVar6;
    uVar4 = 2;
    if (*(int *)((long)param_1 + 0x84) != 0) {
      uVar4 = 3;
    }
    *(undefined4 *)(lVar8 + 0x1c) = uVar4;
    *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1;
  }
  return;
}

