
void FUN_00921d20(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00921c90 with catch @ 00921d28 */
                    /* catch() { ... } // from try @ 00921ca8 with catch @ 00921d2c */
  puVar1 = *(undefined8 **)((long)param_1 + 0x10);
  puVar2 = *(undefined8 **)((long)param_1 + 0x18);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
                    /* catch() { ... } // from try @ 00921c5c with catch @ 00921d5c */
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

