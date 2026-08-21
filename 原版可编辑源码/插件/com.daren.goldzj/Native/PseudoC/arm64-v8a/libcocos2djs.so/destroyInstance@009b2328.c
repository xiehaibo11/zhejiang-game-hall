
/* cocos2d::TTFLabelAtlasCache::destroyInstance() */

void cocos2d::TTFLabelAtlasCache::destroyInstance(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
                    /* catch() { ... } // from try @ 009b2258 with catch @ 009b2328 */
  puVar2 = DAT_01d38070;
  if (DAT_01d38070 != (undefined8 *)0x0) {
                    /* try { // try from 009b2344 to 00ab236b has its CatchHandler @ 009b2344
                       catch() { ... } // from try @ 009b2344 with catch @ 009b2344
                       catch() { ... } // from try @ 009b23cc with catch @ 009b2344 */
    puVar1 = (void *)DAT_01d38070[2];
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      if ((__shared_weak_count *)puVar1[6] != (__shared_weak_count *)0x0) {
        std::__ndk1::__shared_weak_count::__release_weak((__shared_weak_count *)puVar1[6]);
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
                    /* try { // try from 009b236c to 00ab237f has its CatchHandler @ 009b2410 */
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    pvVar3 = (void *)*puVar2;
    *puVar2 = 0;
                    /* try { // try from 009b2384 to 00ab2393 has its CatchHandler @ 009b240c */
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(puVar2);
  }
                    /* try { // try from 009b2394 to 00ab23b7 has its CatchHandler @ 009b23fc */
  DAT_01d38070 = (undefined8 *)0x0;
  return;
}

