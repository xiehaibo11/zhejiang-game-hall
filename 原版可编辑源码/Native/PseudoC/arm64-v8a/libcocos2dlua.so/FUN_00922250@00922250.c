
void FUN_00922250(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)((long)param_1 + 0x10);
                    /* catch() { ... } // from try @ 00922210 with catch @ 00922268 */
  puVar2 = *(undefined8 **)((long)param_1 + 0x18);
  if (puVar1 != puVar2) {
    do {
                    /* try { // try from 0092227c to 00a22333 has its CatchHandler @ 0092227c
                       catch() { ... } // from try @ 0092227c with catch @ 0092227c
                       catch() { ... } // from try @ 009223b4 with catch @ 0092227c */
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)((long)param_1 + 0x10);
  }
  *(undefined8 **)((long)param_1 + 0x18) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)((long)param_1 + 0x18) = puVar1;
    operator_delete(puVar1);
  }
  operator_delete(param_1);
  return;
}

