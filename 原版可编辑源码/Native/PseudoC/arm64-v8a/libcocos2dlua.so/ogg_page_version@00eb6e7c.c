
ulong ogg_page_version(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  lVar2 = param_1[2];
  if (4 < lVar2) {
    return (ulong)*(byte *)(*(long *)*param_1 + param_1[1] + 4);
  }
  lVar1 = 0;
  do {
    param_1 = (undefined8 *)param_1[3];
    lVar1 = lVar1 + lVar2;
    lVar2 = param_1[2];
  } while (lVar2 + lVar1 < 5);
  return (ulong)*(byte *)(*(long *)*param_1 + param_1[1] + (4 - lVar1));
}

