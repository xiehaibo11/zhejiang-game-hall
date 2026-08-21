
undefined8 * FUN_009d65d4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x50);
                    /* try { // try from 009d65ec to 00ad6703 has its CatchHandler @ 009cee70 */
  *puVar1 = &PTR_FUN_0169f980;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    puVar1[8] = 0;
  }
  else if ((long *)(param_1 + 0x20) == plVar2) {
    puVar1[8] = puVar1 + 4;
    (**(code **)(*plVar2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    puVar1[8] = uVar3;
  }
  return puVar1;
}

