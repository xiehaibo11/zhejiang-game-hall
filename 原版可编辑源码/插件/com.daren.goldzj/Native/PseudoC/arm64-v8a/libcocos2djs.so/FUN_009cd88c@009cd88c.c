
void FUN_009cd88c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = puVar2;
  if (puVar3 != puVar2) {
    do {
      puVar3 = puVar3 + -4;
      if ((Ref *)*puVar3 != (Ref *)0x0) {
        cocos2d::Ref::release((Ref *)*puVar3);
      }
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar2;
  operator_delete(puVar1);
  return;
}

