
/* cocos2d::ccCArrayNew(long) */

undefined8 * cocos2d::ccCArrayNew(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  lVar1 = 7;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  puVar2 = malloc(0x18);
  *puVar2 = 0;
  pvVar3 = malloc(lVar1 << 3);
  puVar2[1] = lVar1;
  puVar2[2] = pvVar3;
  return puVar2;
}

