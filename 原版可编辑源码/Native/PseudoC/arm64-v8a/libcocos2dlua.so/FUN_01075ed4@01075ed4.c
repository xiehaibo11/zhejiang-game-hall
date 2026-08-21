
void FUN_01075ed4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*param_1 + 0xb8);
  if ((char)param_1[0x40] != '\0') {
    param_1[0x41] = 0;
                    /* try { // try from 01075efc to 01175eff has its CatchHandler @ 01075f1c */
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
                    /* try { // try from 01075f00 to 01175f5b has its CatchHandler @ 01075e7c */
  ft_mem_free(uVar1,param_1[0x35]);
                    /* catch() { ... } // from try @ 01075ecc with catch @ 01075f14 */
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  ft_mem_free(uVar1,param_1[0x37]);
                    /* catch() { ... } // from try @ 01075efc with catch @ 01075f1c */
  lVar2 = param_1[0x38];
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  if (lVar2 != 0) {
    ft_mem_free(lVar2,param_1[0x3e]);
    param_1[0x3e] = 0;
    ft_mem_free(lVar2,param_1[0x3d]);
    param_1[0x3d] = 0;
    ft_mem_free(lVar2,param_1[0x3b]);
                    /* try { // try from 01075f5c to 01175fd7 has its CatchHandler @ 01075f5c
                       catch() { ... } // from try @ 01075f5c with catch @ 01075f5c
                       catch() { ... } // from try @ 01075fdc with catch @ 01075f5c */
    param_1[0x3b] = 0;
    ft_mem_free(lVar2,param_1[0x3a]);
    param_1[0x3a] = 0;
    ft_mem_free(lVar2,param_1[0x3c]);
    param_1[0x3c] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
  }
  ft_mem_free(uVar1,param_1[0x1e]);
  param_1[0x1e] = 0;
  ft_mem_free(uVar1,param_1[0x20]);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x214) = 0xffffffff;
  return;
}

