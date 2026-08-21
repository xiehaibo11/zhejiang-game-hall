
undefined8 png_get_pHYs_dpi(long param_1,long param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (-1 < *(char *)(param_2 + 8)) {
      return 0;
    }
    if (param_3 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80;
      *param_3 = *(uint *)(param_2 + 0xe0);
    }
    if (param_4 != (uint *)0x0) {
      uVar2 = 0x80;
      *param_4 = *(uint *)(param_2 + 0xe4);
    }
    if (param_5 != (uint *)0x0) {
      bVar1 = *(byte *)(param_2 + 0xe8);
      *param_5 = (uint)bVar1;
      if (bVar1 == 1) {
        if (param_3 != (uint *)0x0) {
          dVar3 = (double)NEON_ucvtf((ulong)*param_3);
          *param_3 = (int)(dVar3 * 0.0254 + 0.5);
        }
        if (param_4 != (uint *)0x0) {
          dVar3 = (double)NEON_ucvtf((ulong)*param_4);
          *param_4 = (int)(dVar3 * 0.0254 + 0.5);
        }
      }
      uVar2 = 0x80;
    }
  }
  return uVar2;
}

