
undefined4 FUN_0107ff20(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* try { // try from 0107ff44 to 0117ff63 has its CatchHandler @ 0107ff78 */
  iVar1 = strcmp(param_2,"darkening-parameters");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x40);
    param_3[1] = *(undefined4 *)(param_1 + 0x44);
    param_3[2] = *(undefined4 *)(param_1 + 0x48);
    param_3[3] = *(undefined4 *)(param_1 + 0x4c);
    param_3[4] = *(undefined4 *)(param_1 + 0x50);
    param_3[5] = *(undefined4 *)(param_1 + 0x54);
    param_3[6] = *(undefined4 *)(param_1 + 0x58);
    param_3[7] = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_2,"hinting-engine");
    if (iVar1 == 0) {
      *param_3 = *(undefined4 *)(param_1 + 0x38);
      uVar2 = 0;
    }
    else {
                    /* try { // try from 0107ff64 to 0117ff93 has its CatchHandler @ 0107fe04 */
      iVar1 = strcmp(param_2,"no-stem-darkening");
      if (iVar1 == 0) {
        *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x3c);
        uVar2 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 0107ff44 with catch @ 0107ff78 */
        uVar2 = 0xc;
      }
    }
  }
  return uVar2;
}

