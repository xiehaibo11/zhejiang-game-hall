
undefined8 tls12_get_psigalgs(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x148);
  uVar1 = *(uint *)(lVar2 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    puVar3 = &DAT_018a5306;
  }
  else {
    if (uVar1 != 0x20000) {
      if (uVar1 == 0x30000) {
                    /* catch() { ... } // from try @ 00adbcf0 with catch @ 00adbd38 */
        *param_2 = (long)&DAT_018a5306;
        return 4;
      }
      if ((*(int *)(param_1 + 0x38) != 0) && (*(long *)(lVar2 + 0x158) != 0)) {
        *param_2 = *(long *)(lVar2 + 0x158);
                    /* try { // try from 00adbd80 to 00bdbddf has its CatchHandler @ 00adbd80
                       catch() { ... } // from try @ 00adbd80 with catch @ 00adbd80
                       catch() { ... } // from try @ 00adbdf4 with catch @ 00adbd80 */
        return *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x160);
      }
      if (*(long *)(lVar2 + 0x148) != 0) {
        *param_2 = *(long *)(lVar2 + 0x148);
        return *(undefined8 *)(*(long *)(param_1 + 0x148) + 0x150);
      }
      *param_2 = (long)&DAT_018a530a;
      return 0x24;
    }
    puVar3 = &DAT_018a5308;
  }
  *param_2 = (long)puVar3;
  return 2;
}

