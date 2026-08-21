
undefined8 FUN_01091e24(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (iVar1 < 1) {
    uVar4 = 6;
  }
  else {
    lVar6 = 1;
                    /* catch() { ... } // from try @ 01091d7c with catch @ 01091e54 */
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x200) + -8);
    do {
      puVar5 = puVar2;
                    /* catch() { ... } // from try @ 01091d34 with catch @ 01091e58 */
                    /* try { // try from 01091e5c to 01191e5f has its CatchHandler @ 01091e64 */
                    /* try { // try from 01091e60 to 01191ed7 has its CatchHandler @ 01091648 */
      iVar3 = strcmp((char *)puVar5[1],param_2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01091e5c with catch @ 01091e64
                        */
                    /* catch() { ... } // from try @ 01091da0 with catch @ 01091e68 */
      puVar2 = puVar5 + 3;
      if (iVar1 <= lVar6) break;
      lVar6 = lVar6 + 1;
    } while (iVar3 != 0);
    uVar4 = 6;
    if ((puVar2 != (undefined8 *)&DAT_00000010) && (iVar3 == 0)) {
      if (*(char *)(puVar5 + 2) == '\0') {
        *param_3 = 2;
        uVar4 = 0;
        param_3[2] = (int)*puVar2;
      }
      else {
        *param_3 = 1;
        uVar4 = 0;
        *(undefined8 *)(param_3 + 2) = *puVar2;
      }
    }
  }
  return uVar4;
}

