
undefined8 FUN_0112b928(long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + (ulong)param_2 * 8);
  uVar8 = (ulong)param_2;
  if ((lVar5 == 0) || (uVar7 = *(ulong *)(param_1 + 0x288), uVar7 == 0)) {
    uVar7 = *(ulong *)(*(long *)(param_1 + 0xf0) + uVar8 * 8);
    if ((uVar7 == 0) || ((uVar7 < param_4 || (lVar5 == 0)))) {
      lVar5 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),0,2);
      *(long *)(*(long *)(param_1 + 0xe8) + uVar8 * 8) = lVar5;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
    }
    else {
      lVar5 = (**(code **)(param_1 + 0x3d0))(*(undefined8 *)(param_1 + 0x3b8),lVar5,0);
      if (lVar5 != *(long *)(*(long *)(param_1 + 0xe8) + uVar8 * 8)) {
        uVar4 = *(undefined8 *)(param_1 + 0x3b8);
        uVar3 = *(undefined4 *)(param_1 + 0x27c);
        pcVar6 = "Seek error at scanline %lu";
        goto LAB_0112baa0;
      }
    }
    *(long *)(param_1 + 0x288) = lVar5;
    lVar5 = *(long *)(*(long *)(param_1 + 0xf0) + uVar8 * 8);
    *(undefined8 *)(*(long *)(param_1 + 0xf0) + uVar8 * 8) = 0;
    uVar7 = *(ulong *)(param_1 + 0x288);
  }
  else {
    lVar5 = -1;
  }
  uVar2 = uVar7 + param_4 & 0xffffffff;
  if ((*(byte *)(param_1 + 0x12) & 8) != 0) {
    uVar2 = uVar7 + param_4;
  }
  if ((uVar2 < uVar7) || (uVar2 < param_4)) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFAppendToStrip",
                 "Maximum TIFF file size exceeded");
    return 0;
  }
  uVar7 = (**(code **)(param_1 + 0x3c8))(*(undefined8 *)(param_1 + 0x3b8),param_3,param_4);
  if (uVar7 == param_4) {
    *(ulong *)(param_1 + 0x288) = uVar2;
    lVar1 = *(long *)(*(long *)(param_1 + 0xf0) + uVar8 * 8) + param_4;
    *(long *)(*(long *)(param_1 + 0xf0) + uVar8 * 8) = lVar1;
    if (lVar1 != lVar5) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
    }
    return 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x3b8);
  uVar3 = *(undefined4 *)(param_1 + 0x27c);
  pcVar6 = "Write error at scanline %lu";
LAB_0112baa0:
  TIFFErrorExt(uVar4,"TIFFAppendToStrip",pcVar6,uVar3);
  return 0;
}

