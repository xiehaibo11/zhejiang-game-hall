
undefined8 FUN_0108e73c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 0108e104 with catch @ 0108e73c */
                    /* catch() { ... } // from try @ 0108e0c0 with catch @ 0108e758 */
  puVar1 = (undefined8 *)FT_Get_Module(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
  }
                    /* catch() { ... } // from try @ 0108df84 with catch @ 0108e780 */
  return uVar2;
}

