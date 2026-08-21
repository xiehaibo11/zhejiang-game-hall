
undefined8 FUN_01079414(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[6] = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
                    /* try { // try from 01079424 to 01179457 has its CatchHandler @ 01079424
                       catch() { ... } // from try @ 01079424 with catch @ 01079424
                       catch() { ... } // from try @ 010794a4 with catch @ 01079424 */
  param_2[1] = *(undefined8 *)(param_1 + 0x100);
  *param_2 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  param_2[5] = *(undefined8 *)(param_1 + 0x120);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  param_2[3] = *(undefined8 *)(param_1 + 0x110);
  param_2[2] = uVar1;
  return 0;
}

