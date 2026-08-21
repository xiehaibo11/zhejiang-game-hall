
/* cocos2d::TTFLabelAtlasCache::reset() */

void __thiscall cocos2d::TTFLabelAtlasCache::reset(TTFLabelAtlasCache *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 009b23c0 to 00ab23cb has its CatchHandler @ 009b2414 */
    puVar1 = *(void **)(this + 0x10);
    while (puVar1 != (void *)0x0) {
                    /* try { // try from 009b23cc to 00ab2427 has its CatchHandler @ 009b2344 */
      pvVar4 = (void *)*puVar1;
      if ((__shared_weak_count *)puVar1[6] != (__shared_weak_count *)0x0) {
        std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)puVar1[6]);
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
                    /* catch() { ... } // from try @ 009b2394 with catch @ 009b23fc */
    lVar2 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
                    /* catch() { ... } // from try @ 009b2384 with catch @ 009b240c */
                    /* catch() { ... } // from try @ 009b236c with catch @ 009b2410 */
        *(undefined8 *)(*(long *)this + lVar3 * 8) = 0;
                    /* catch() { ... } // from try @ 009b23c0 with catch @ 009b2414 */
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

