
undefined8 * FUN_009f76a0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009f76ac to 00af76f3 has its CatchHandler @ 009f73bc */
  puVar1 = operator_new(0x50);
  *puVar1 = &PTR_FUN_01c6c478;
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
                    /* try { // try from 009f76f4 to 00af770b has its CatchHandler @ 009f7828 */
  }
  return puVar1;
}

