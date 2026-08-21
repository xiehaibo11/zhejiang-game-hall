
/* cocos2d::BMFontConfiguration::purgeKerningDictionary() */

void __thiscall cocos2d::BMFontConfiguration::purgeKerningDictionary(BMFontConfiguration *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
                    /* try { // try from 00f024ac to 01002753 has its CatchHandler @ 00f023a4 */
  if (*(long *)(this + 0x98) != 0) {
    puVar1 = *(void **)(this + 0x90);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x88);
    *(undefined8 *)(this + 0x90) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x80) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  return;
}

