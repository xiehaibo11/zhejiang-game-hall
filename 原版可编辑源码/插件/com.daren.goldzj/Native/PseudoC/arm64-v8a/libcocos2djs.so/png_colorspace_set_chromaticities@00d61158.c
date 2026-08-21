
undefined8
png_colorspace_set_chromaticities(undefined8 param_1,long param_2,undefined8 *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  iVar3 = FUN_00d61298(&local_68,param_3);
  if (iVar3 == 1) {
    uVar2 = *(ushort *)(param_2 + 0x4a);
    pcVar4 = "invalid chromaticities";
LAB_00d6123c:
    *(ushort *)(param_2 + 0x4a) = uVar2 | 0x8000;
    png_benign_error(param_1,pcVar4);
    return 0;
  }
  if (iVar3 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error checking chromaticities");
  }
  uVar2 = *(ushort *)(param_2 + 0x4a);
  if ((short)uVar2 < 0) {
    return 0;
  }
  if ((param_4 < 2) && ((uVar2 >> 1 & 1) != 0)) {
    iVar3 = FUN_00d62510(param_3,(undefined8 *)(param_2 + 4),100);
    if (iVar3 == 0) {
      pcVar4 = "inconsistent chromaticities";
      goto LAB_00d6123c;
    }
    if (param_4 == 0) {
      return 1;
    }
  }
  uVar5 = param_3[2];
  *(undefined8 *)(param_2 + 0x1c) = param_3[3];
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  uVar5 = *param_3;
  *(undefined8 *)(param_2 + 0xc) = param_3[1];
  *(undefined8 *)(param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 0x44) = local_48;
  *(undefined8 *)(param_2 + 0x3c) = uStack_50;
  *(undefined8 *)(param_2 + 0x34) = local_58;
  *(undefined8 *)(param_2 + 0x2c) = uStack_60;
  *(undefined8 *)(param_2 + 0x24) = local_68;
  iVar3 = FUN_00d62510(param_3,&DAT_0194a814,1000);
  uVar1 = uVar2 | 0x42;
  if (iVar3 == 0) {
    uVar1 = uVar2 & 0xffbf | 2;
  }
  *(ushort *)(param_2 + 0x4a) = uVar1;
  return 2;
}

