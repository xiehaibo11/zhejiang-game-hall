
undefined8 * FUN_0099f180(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
                    /* try { // try from 0099f188 to 00a9f26b has its CatchHandler @ 0099efc4 */
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_01c6a6c0;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    puVar1[6] = 0;
  }
  else if ((long *)(param_1 + 0x10) == plVar2) {
    puVar1[6] = puVar1 + 2;
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[6] = uVar3;
  }
  return puVar1;
}

