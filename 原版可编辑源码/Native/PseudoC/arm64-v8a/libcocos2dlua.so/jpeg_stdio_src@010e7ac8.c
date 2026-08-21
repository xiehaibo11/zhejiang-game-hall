
void jpeg_stdio_src(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 010e7b58 with catch @ 010e7aec */
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x50);
    *(long *)(param_1 + 0x28) = lVar1;
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x1000);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  }
                    /* try { // try from 010e7b2c to 011e7b33 has its CatchHandler @ 010e7c3c */
                    /* try { // try from 010e7b48 to 011e7b57 has its CatchHandler @ 010e7c2c */
  puVar3[2] = FUN_010e7b70;
  puVar3[3] = FUN_010e7b80;
  puVar3[4] = FUN_010e7c20;
  puVar3[5] = jpeg_resync_to_restart;
                    /* try { // try from 010e7b58 to 011e7c57 has its CatchHandler @ 010e7aec */
  puVar3[6] = FUN_010e7c8c;
  puVar3[7] = param_2;
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}

