
undefined8 tls12_get_psigalgs(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x148);
  uVar1 = *(uint *)(lVar2 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
                    /* try { // try from 00aeabf4 to 00beabff has its CatchHandler @ 00aeae18 */
    puVar3 = &DAT_013d3786;
  }
  else {
    if (uVar1 != 0x20000) {
      if (uVar1 == 0x30000) {
        *param_2 = (long)&DAT_013d3786;
        return 4;
      }
      if ((*(int *)(param_1 + 0x38) != 0) && (*(long *)(lVar2 + 0x158) != 0)) {
        *param_2 = *(long *)(lVar2 + 0x158);
        return *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x160);
      }
      if (*(long *)(lVar2 + 0x148) != 0) {
        *param_2 = *(long *)(lVar2 + 0x148);
        return *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x150);
      }
      *param_2 = (long)&DAT_013d378a;
      return 0x24;
    }
    puVar3 = &DAT_013d3788;
  }
  *param_2 = (long)puVar3;
  return 2;
}

