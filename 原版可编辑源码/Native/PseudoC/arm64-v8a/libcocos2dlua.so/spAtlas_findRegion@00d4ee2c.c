
undefined8 * spAtlas_findRegion(long param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00d4ec74 with catch @ 00d4ee2c */
  puVar2 = *(undefined8 **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00d4ecd8 with catch @ 00d4ee48 */
  while ((puVar2 != (undefined8 *)0x0 && (iVar1 = strcmp((char *)*puVar2,param_2), iVar1 != 0))) {
    puVar2 = (undefined8 *)puVar2[0xc];
  }
                    /* catch() { ... } // from try @ 00d4eea8 with catch @ 00d4ee5c */
  return puVar2;
}

