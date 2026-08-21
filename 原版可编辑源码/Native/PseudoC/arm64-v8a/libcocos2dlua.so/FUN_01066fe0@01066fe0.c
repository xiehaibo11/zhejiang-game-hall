
undefined8 FUN_01066fe0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 01066e4c with catch @ 01066ff8 */
  if (*(int *)(param_2 + 0x90) == 0x62697473) {
    uVar2 = *param_1;
    puVar1 = param_1 + 6;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xc4);
    if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) == 0) {
      FT_Bitmap_New(puVar1);
      uVar2 = FT_Bitmap_Copy(uVar2,param_2 + 0x98,puVar1);
      return uVar2;
    }
    uVar2 = 0;
    param_1[10] = *(undefined8 *)(param_2 + 0xb8);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    param_1[9] = *(undefined8 *)(param_2 + 0xb0);
    param_1[8] = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    param_1[7] = *(undefined8 *)(param_2 + 0xa0);
    *puVar1 = uVar3;
    *(uint *)(*(long *)(param_2 + 0x128) + 8) =
         *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
  }
  else {
    uVar2 = 0x12;
  }
                    /* try { // try from 0106708c to 01167117 has its CatchHandler @ 0106708c
                       catch() { ... } // from try @ 0106708c with catch @ 0106708c
                       catch() { ... } // from try @ 01067124 with catch @ 0106708c */
  return uVar2;
}

