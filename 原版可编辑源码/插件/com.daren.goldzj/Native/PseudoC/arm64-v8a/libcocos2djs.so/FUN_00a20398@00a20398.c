
undefined8 FUN_00a20398(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a20160 with catch @ 00a2039c
                        */
  sVar2 = strlen(param_2);
  lVar3 = *param_1;
                    /* try { // try from 00a203c0 to 00b203c3 has its CatchHandler @ 00a203c4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a203c0 with catch @ 00a203c4
                        */
                    /* try { // try from 00a203c8 to 00b203cb has its CatchHandler @ 00a203d4 */
                    /* try { // try from 00a203cc to 00b203d7 has its CatchHandler @ 00a200c4 */
  if ((*(char *)((long)param_1 + 0x3bd) == '\0') || (*(char *)(lVar3 + 0x3d0) == '\0')) {
    puVar4 = *(undefined8 **)(lVar3 + 0x3b8);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a203c8 with catch @ 00a203d4
                        */
    puVar4 = *(undefined8 **)(lVar3 + 0x3c0);
  }
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_00a33838(*puVar4,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar4 = (undefined8 *)puVar4[1];
  }
  return *puVar4;
}

