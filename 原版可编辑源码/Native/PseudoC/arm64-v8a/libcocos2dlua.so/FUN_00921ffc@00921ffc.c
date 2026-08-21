
void FUN_00921ffc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00921ffc to 00a2200f has its CatchHandler @ 00922094 */
                    /* try { // try from 00922014 to 00a22047 has its CatchHandler @ 00922098 */
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
                    /* try { // try from 00922048 to 00a220e3 has its CatchHandler @ 00921f10 */
  param_1[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    param_1[3] = puVar1;
    operator_delete(puVar1);
  }
  operator_delete(param_1);
  return;
}

