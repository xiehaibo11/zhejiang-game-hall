
void FUN_00921acc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_0169cba8;
                    /* try { // try from 00921aec to 00a21b37 has its CatchHandler @ 00921aec
                       catch() { ... } // from try @ 00921aec with catch @ 00921aec
                       catch() { ... } // from try @ 00921b3c with catch @ 00921aec */
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
    operator_delete(puVar1);
  }
                    /* try { // try from 00921b38 to 00a21b3b has its CatchHandler @ 00921b90 */
                    /* try { // try from 00921b3c to 00a21ba3 has its CatchHandler @ 00921aec */
  operator_delete(param_1);
  return;
}

