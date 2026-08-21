
void FUN_009221cc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar1;
                    /* try { // try from 00922210 to 00a22213 has its CatchHandler @ 00922268 */
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00922214 to 00a2227b has its CatchHandler @ 009221c4 */
    *(undefined8 **)(param_1 + 0x18) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}

