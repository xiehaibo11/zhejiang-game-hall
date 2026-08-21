
long ov_read(long param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 < 2) {
    lVar2 = -0x83;
  }
  else {
    while( true ) {
      if (iVar1 == 5) {
        lVar3 = (long)*(int *)(param_1 + 0x54);
        lVar2 = 0;
        if (lVar3 != 0) {
          lVar2 = ((param_3 << 0x20) >> 0x21) / lVar3;
        }
        iVar1 = vorbis_dsp_pcmout(*(undefined8 *)(param_1 + 0xd8),param_2,lVar2);
        if (iVar1 != 0) {
          lVar2 = (long)iVar1;
          if (iVar1 < 1) {
            return lVar2;
          }
          vorbis_dsp_read(*(undefined8 *)(param_1 + 0xd8));
          *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + lVar2;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = *(undefined4 *)(param_1 + 0xb8);
          }
          return lVar3 * lVar2 * 2;
        }
      }
      iVar1 = FUN_00eb5514(param_1);
      if (iVar1 == -2) {
        return 0;
      }
      if (iVar1 < 1) break;
      iVar1 = *(int *)(param_1 + 0xb0);
    }
    lVar2 = (long)iVar1;
  }
  return lVar2;
}

