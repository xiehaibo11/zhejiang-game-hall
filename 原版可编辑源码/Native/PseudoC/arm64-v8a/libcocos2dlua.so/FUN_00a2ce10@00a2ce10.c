
undefined8 FUN_00a2ce10(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (plVar2 = (long *)FUN_00a2af08(), plVar2 != (long *)0x0))
  {
    for (puVar3 = (undefined8 *)*plVar2; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[2]) {
                    /* try { // try from 00a2ce40 to 00b2ce43 has its CatchHandler @ 00a2ce84 */
      puVar4 = (undefined8 *)*puVar3;
                    /* try { // try from 00a2ce44 to 00b2ce9f has its CatchHandler @ 00a2cde8 */
      iVar1 = FUN_00a4a0f8(*puVar4,*(undefined8 *)(param_2 + 0xc0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0x1a0) == (uint)*(ushort *)(puVar4 + 1))) {
                    /* catch() { ... } // from try @ 00a2ce40 with catch @ 00a2ce84 */
        FUN_00a38740(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xc0))
        ;
        return 1;
      }
    }
  }
  return 0;
}

