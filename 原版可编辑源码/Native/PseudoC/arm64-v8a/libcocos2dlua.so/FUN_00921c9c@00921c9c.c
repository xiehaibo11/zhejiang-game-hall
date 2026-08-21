
void FUN_00921c9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00921ca8 to 00a21cdb has its CatchHandler @ 00921d2c */
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
                    /* try { // try from 00921cdc to 00a21d77 has its CatchHandler @ 00921ba4 */
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x18) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}

