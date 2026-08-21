
ulong FUN_00dcd65c(long param_1,ulong param_2,void *param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  param_2 = param_2 & 0xffffffff;
  iVar1 = _TIFFFillStriles();
  if (iVar1 == 0) {
    return 0xffffffffffffffff;
  }
  if ((*(byte *)(param_1 + 0x11) >> 3 & 1) == 0) {
    lVar2 = (**(code **)(param_1 + 0x3d0))
                      (*(undefined8 *)(param_1 + 0x3b8),
                       *(undefined8 *)(*(long *)(param_1 + 0xe8) + param_2 * 8),0);
    if (lVar2 != *(long *)(*(long *)(param_1 + 0xe8) + param_2 * 8)) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_5,
                   "Seek error at row %lu, col %lu, tile %lu",*(undefined4 *)(param_1 + 0x27c),
                   *(undefined4 *)(param_1 + 0x2a8),param_2);
      return 0xffffffffffffffff;
    }
    uVar3 = (**(code **)(param_1 + 0x3c0))(*(undefined8 *)(param_1 + 0x3b8),param_3,param_4);
    if (uVar3 != param_4) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_5,
                   "Read error at row %lu, col %lu; got %llu bytes, expected %llu",
                   *(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x2a8),uVar3,param_4);
      return 0xffffffffffffffff;
    }
    return param_4;
  }
  lVar2 = *(long *)(param_1 + 0x3a0);
  uVar4 = *(ulong *)(*(long *)(param_1 + 0xe8) + param_2 * 8);
  uVar3 = lVar2 - uVar4;
  if (lVar2 < (long)uVar4) {
    uVar3 = 0;
  }
  else if ((-1 < (long)(uVar4 | param_4)) && ((long)(uVar4 + param_4) <= lVar2)) goto LAB_00dcd798;
  if (uVar3 != param_4) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_5,
                 "Read error at row %lu, col %lu, tile %lu; got %llu bytes, expected %llu",
                 *(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x2a8),param_2,uVar3,
                 param_4);
    return 0xffffffffffffffff;
  }
LAB_00dcd798:
  _TIFFmemcpy(param_3,(void *)(*(long *)(param_1 + 0x398) + uVar4),param_4);
  return param_4;
}

