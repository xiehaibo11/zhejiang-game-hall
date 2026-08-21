
/* cocos2d::BMFontConfiguration::purgeFontDefDictionary() */

void __thiscall cocos2d::BMFontConfiguration::purgeFontDefDictionary(BMFontConfiguration *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = *(void **)(this + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
                    /* try { // try from 00f02470 to 010024ab has its CatchHandler @ 00f026d0 */
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}

