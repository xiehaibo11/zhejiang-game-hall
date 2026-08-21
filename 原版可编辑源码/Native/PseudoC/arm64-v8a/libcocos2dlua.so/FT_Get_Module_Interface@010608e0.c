
undefined8 FT_Get_Module_Interface(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar5;
  long *plVar6;
  undefined8 *puVar4;
  
  if (((param_1 != 0) && (param_2 != (char *)0x0)) &&
     (uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0)) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar4 = puVar3 + 1;
      plVar6 = (long *)*puVar3;
                    /* catch() { ... } // from try @ 0106095c with catch @ 01060924 */
      lVar5 = *plVar6;
      iVar2 = strcmp(*(char **)(lVar5 + 0x10),param_2);
      if (iVar2 == 0) {
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        return *(undefined8 *)(lVar5 + 0x28);
      }
      puVar3 = puVar4;
    } while (puVar4 < (undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x18));
  }
                    /* try { // try from 01060954 to 0116095b has its CatchHandler @ 010609c0 */
                    /* try { // try from 0106095c to 011609db has its CatchHandler @ 01060924 */
  return 0;
}

