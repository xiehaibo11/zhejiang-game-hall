
undefined8 _vorbis_unpack_info(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xc);
  if (plVar5 == (long *)0x0) {
    uVar3 = 0xffffff7f;
  }
  else {
    iVar1 = oggpack_read(param_2,0x20);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      iVar1 = oggpack_read(param_2,8);
      param_1[1] = iVar1;
      uVar3 = oggpack_read(param_2,0x20);
      *(undefined8 *)(param_1 + 2) = uVar3;
      uVar3 = oggpack_read(param_2,0x20);
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar3 = oggpack_read(param_2,0x20);
      *(undefined8 *)(param_1 + 6) = uVar3;
      uVar3 = oggpack_read(param_2,0x20);
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar2 = oggpack_read(param_2,4);
      *plVar5 = (long)(1 << (ulong)(uVar2 & 0x1f));
      uVar2 = oggpack_read(param_2,4);
      iVar1 = 1 << (ulong)(uVar2 & 0x1f);
      plVar5[1] = (long)iVar1;
      if ((((*(long *)(param_1 + 2) < 1) || (*(long *)(param_1 + 2) < 64000 && 0x1000 < iVar1)) ||
          (param_1[1] < 1)) ||
         (((*plVar5 < 0x40 || (0x2000 < iVar1)) ||
          (((long)iVar1 < *plVar5 || (lVar4 = oggpack_read(param_2,1), lVar4 != 1)))))) {
        vorbis_info_clear(param_1);
        uVar3 = 0xffffff7b;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffff7a;
    }
  }
  return uVar3;
}

