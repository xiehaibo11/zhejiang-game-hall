
undefined8 * FUN_0097dd98(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_01c69fd8;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    puVar1[6] = 0;
                    /* try { // try from 0097ddf0 to 00a7ddf3 has its CatchHandler @ 0097de5c */
  }
  else if ((long *)(param_1 + 0x10) == plVar2) {
                    /* try { // try from 0097ddf4 to 00a7de4b has its CatchHandler @ 0097dd20 */
    puVar1[6] = puVar1 + 2;
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[6] = uVar3;
  }
  return puVar1;
}

