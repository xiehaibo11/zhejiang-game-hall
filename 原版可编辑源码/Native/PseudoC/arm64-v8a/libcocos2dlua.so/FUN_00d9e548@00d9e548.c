
undefined8 * FUN_00d9e548(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_016d7d20;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    puVar1[6] = 0;
  }
  else {
                    /* try { // try from 00d9e584 to 00e9e5c7 has its CatchHandler @ 00d9f35c */
    if ((long *)(param_1 + 0x10) == plVar2) {
      puVar1[6] = puVar1 + 2;
      (**(code **)(*plVar2 + 0x18))();
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      puVar1[6] = uVar3;
    }
  }
  return puVar1;
}

