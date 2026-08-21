
void FUN_0100757c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(lVar4 + 8);
  puVar2 = *(undefined8 **)(lVar4 + 0x10);
                    /* try { // try from 01007598 to 011075a3 has its CatchHandler @ 01007614 */
  *(undefined4 *)(lVar4 + 0x60) = uVar3;
  if (puVar1 != puVar2) {
                    /* try { // try from 010075a4 to 0110762f has its CatchHandler @ 01007494 */
    cpConstraintSetMaxForce(uVar3,*puVar1);
    while (puVar1 = puVar1 + 1, puVar1 != puVar2) {
      cpConstraintSetMaxForce(*(undefined4 *)(param_1 + 0x10),*puVar1);
    }
  }
  return;
}

