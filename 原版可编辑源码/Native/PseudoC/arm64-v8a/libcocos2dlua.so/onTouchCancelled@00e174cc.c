
/* cocos2d::extension::ScrollView::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ScrollView::onTouchCancelled(Touch *param_1,Event *param_2)

{
  undefined8 *puVar1;
  size_t __n;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *__dest;
  
                    /* catch() { ... } // from try @ 00e16ec8 with catch @ 00e174d8 */
                    /* catch() { ... } // from try @ 00e16ef8 with catch @ 00e174e4 */
  uVar2 = (**(code **)(*(long *)param_1 + 0x178))();
  if ((uVar2 & 1) != 0) {
    __dest = *(undefined8 **)(param_1 + 0x378);
    puVar3 = *(undefined8 **)(param_1 + 0x380);
                    /* catch() { ... } // from try @ 00e173c8 with catch @ 00e1750c */
    if ((__dest != puVar3) && ((Event *)*__dest != param_2)) {
                    /* catch() { ... } // from try @ 00e17474 with catch @ 00e17510 */
      do {
        if (puVar3 + -1 == __dest) {
          return;
        }
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((Event *)*puVar1 != param_2);
    }
    if (__dest != puVar3) {
      __n = (long)puVar3 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(param_1 + 0x380) = __dest + ((long)__n >> 3);
      if (*(undefined8 **)(param_1 + 0x378) == __dest + ((long)__n >> 3)) {
        param_1[0x334] = (Touch)0x0;
        param_1[0x348] = (Touch)0x0;
      }
    }
  }
  return;
}

