
undefined8
FUN_00dd5308(long param_1,uint *param_2,ushort *param_3,ushort param_4,ushort param_5,uint param_6,
            uint param_7,undefined4 *param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  size_t __n;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong *__dest;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_44;
  
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  uVar6 = 0;
  puVar7 = param_3;
  if (uVar1 != 0) {
    do {
      if (param_4 < *puVar7) break;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar6 < uVar1);
  }
  if (uVar6 < uVar1) {
    puVar7 = param_3 + uVar5 * 0xc;
    puVar8 = param_3 + (ulong)(uVar1 - 1) * 0xc;
    do {
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
      *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar8 + 8);
      uVar3 = *(undefined8 *)puVar8;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
      *(undefined8 *)puVar7 = uVar3;
      puVar7 = puVar7 + -0xc;
      puVar8 = puVar8 + -0xc;
    } while (uVar6 < uVar1);
  }
  param_3 = param_3 + (ulong)uVar6 * 0xc;
  *param_3 = param_4;
  param_3[1] = param_5;
  *(ulong *)(param_3 + 4) = (ulong)param_6;
  __dest = (ulong *)(param_3 + 8);
  *__dest = 0;
  uVar6 = *(uint *)(param_1 + 0x10) & 0x80000;
  if ((uVar6 >> 0x11) + 4 < param_7) {
    uVar9 = *(ulong *)(param_1 + 0x290);
    uVar10 = (ulong)param_7;
    uVar5 = uVar9 + uVar10 & 0xffffffff;
    if (uVar6 != 0) {
      uVar5 = uVar9 + uVar10;
    }
    if ((uVar5 < uVar9) || (uVar5 < uVar10)) {
      uVar3 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar4 = "Maximum TIFF file size exceeded";
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),uVar9,0);
      if ((uVar2 == uVar9) &&
         (uVar2 = (**(code **)(param_1 + 0x3c8))(*(undefined8 *)(param_1 + 0x3b8),param_8,uVar10),
         uVar2 == uVar10)) {
        uVar6 = *(uint *)(param_1 + 0x10);
        *(ulong *)(param_1 + 0x290) = (uVar5 & 1) + uVar5;
        if ((uVar6 >> 0x13 & 1) == 0) {
          local_44 = (undefined4)uVar9;
          if ((uVar6 >> 7 & 1) != 0) {
            TIFFSwabLong(&local_44);
          }
          param_8 = &local_44;
          __n = 4;
          goto LAB_00dd5460;
        }
        *__dest = uVar9;
        if ((uVar6 >> 7 & 1) != 0) {
          TIFFSwabLong8(__dest);
        }
        goto LAB_00dd5464;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar4 = "IO error writing tag data";
    }
    TIFFErrorExt(uVar3,"TIFFWriteDirectoryTagData",pcVar4);
    uVar3 = 0;
  }
  else {
    __n = (size_t)param_7;
LAB_00dd5460:
    _TIFFmemcpy(__dest,param_8,__n);
LAB_00dd5464:
    uVar3 = 1;
    *param_2 = *param_2 + 1;
  }
  return uVar3;
}

