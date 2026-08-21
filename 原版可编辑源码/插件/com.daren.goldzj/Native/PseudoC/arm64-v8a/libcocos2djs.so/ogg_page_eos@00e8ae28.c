
uint ogg_page_eos(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = param_1[2];
    if (lVar2 < 6) {
      lVar1 = 0;
      do {
        param_1 = (undefined8 *)param_1[3];
        lVar1 = lVar1 + lVar2;
        lVar2 = param_1[2];
      } while (lVar2 + lVar1 < 6);
      lVar1 = 5 - lVar1;
      lVar2 = *(long *)*param_1 + param_1[1];
    }
    else {
      lVar2 = *(long *)*param_1 + param_1[1];
      lVar1 = 5;
    }
    return *(byte *)(lVar2 + lVar1) & 4;
  }
  return 0xffffffff;
}

