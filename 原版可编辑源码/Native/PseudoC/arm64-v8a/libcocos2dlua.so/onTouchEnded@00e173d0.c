
/* cocos2d::extension::ScrollView::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ScrollView::onTouchEnded(Touch *param_1,Event *param_2)

{
  undefined8 *puVar1;
  size_t __n;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x178))();
  if ((uVar2 & 1) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x378);
    puVar4 = *(undefined8 **)(param_1 + 0x380);
    __dest = puVar3;
    if ((puVar3 != puVar4) && ((Event *)*puVar3 != param_2)) {
      do {
        if (puVar4 + -1 == __dest) goto LAB_00e174ac;
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((Event *)*puVar1 != param_2);
    }
    if (__dest != puVar4) {
      if (((long)puVar4 - (long)puVar3 == 8) && (param_1[0x348] != (Touch)0x0)) {
                    /* try { // try from 00e17474 to 00f17487 has its CatchHandler @ 00e17510 */
        Node::schedule((_func_void_float *)param_1);
        puVar4 = *(undefined8 **)(param_1 + 0x380);
      }
                    /* try { // try from 00e17488 to 00f17523 has its CatchHandler @ 00e16e64 */
      __n = (long)puVar4 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x378);
      puVar4 = __dest + ((long)__n >> 3);
      *(undefined8 **)(param_1 + 0x380) = puVar4;
    }
LAB_00e174ac:
    if (puVar4 == puVar3) {
      param_1[0x334] = (Touch)0x0;
      param_1[0x348] = (Touch)0x0;
    }
  }
  return;
}

