
undefined8 FUN_00a35d18(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = strlen(param_2);
                    /* try { // try from 00a35d38 to 00b35d6b has its CatchHandler @ 00a35ea0 */
  puVar3 = *(undefined8 **)(*param_1 + 0x3b8);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_00a4a220(*puVar3,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar3 = (undefined8 *)puVar3[1];
  }
                    /* try { // try from 00a35d6c to 00b35eaf has its CatchHandler @ 00a35c24 */
  return *puVar3;
}

