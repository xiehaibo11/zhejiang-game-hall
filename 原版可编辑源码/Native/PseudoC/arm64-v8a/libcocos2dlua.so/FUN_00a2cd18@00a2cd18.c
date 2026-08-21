
undefined4 FUN_00a2cd18(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  
                    /* try { // try from 00a2cd18 to 00b2cd4b has its CatchHandler @ 00a2cd9c */
  plVar4 = *(long **)(param_2 + 0x478);
  lVar1 = *plVar4;
  iVar2 = FUN_00a4a9ac(plVar4,plVar4[1],param_1);
  uVar3 = 0x1b;
                    /* try { // try from 00a2cd4c to 00b2cde7 has its CatchHandler @ 00a2cc18 */
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  if ((plVar4 == *(long **)(param_2 + 0x478)) && (lVar1 != *plVar4)) {
    *(undefined1 *)(param_2 + 0x471) = 0;
    FUN_00a27148(*(undefined8 *)**(long **)(param_2 + 0x478),0);
  }
  return uVar3;
}

