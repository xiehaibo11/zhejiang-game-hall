
void FUN_00921f6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_0169cc38;
  puVar1 = (undefined8 *)param_1[2];
  puVar2 = (undefined8 *)param_1[3];
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = (undefined8 *)param_1[2];
  }
  param_1[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    param_1[3] = puVar1;
                    /* try { // try from 00921fc8 to 00a21ffb has its CatchHandler @ 009220c8 */
    operator_delete(puVar1);
    return;
  }
  return;
}

