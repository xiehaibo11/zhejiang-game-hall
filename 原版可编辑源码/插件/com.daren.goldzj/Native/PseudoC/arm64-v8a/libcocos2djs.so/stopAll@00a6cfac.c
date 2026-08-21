
/* cocos2d::AudioEngine::stopAll() */

void cocos2d::AudioEngine::stopAll(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 00a6cbd0 with catch @ 00a6cfac */
                    /* catch() { ... } // from try @ 00a6cbc4 with catch @ 00a6cfb0 */
                    /* catch() { ... } // from try @ 00a6cba4 with catch @ 00a6cfb4 */
                    /* catch() { ... } // from try @ 00a6cbdc with catch @ 00a6cfc4
                       catch() { ... } // from try @ 00a6cd14 with catch @ 00a6cfc4 */
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
    AudioEngineImpl::stopAll(_audioEngineImpl);
    for (plVar4 = DAT_01d38cc8; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4[4] != 0) {
        std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
                  ((list<int,std::__ndk1::allocator<int>> *)(plVar4[4] + 0x28),(int *)(plVar4 + 2));
      }
    }
    puVar2 = DAT_01d38c70;
    if (DAT_01d38c78 != 0) {
      while (lVar1 = DAT_01d38c68, puVar2 != (void *)0x0) {
                    /* try { // try from 00a6d01c to 00b6d06f has its CatchHandler @ 00a6d01c
                       catch() { ... } // from try @ 00a6d01c with catch @ 00a6d01c
                       catch() { ... } // from try @ 00a6d1e0 with catch @ 00a6d01c */
        pvVar5 = (void *)*puVar2;
        if (puVar2[7] != 0) {
          lVar1 = puVar2[5];
          plVar4 = (long *)puVar2[6];
          lVar3 = *plVar4;
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
          **(long **)(lVar1 + 8) = lVar3;
          puVar2[7] = 0;
          while (plVar4 != puVar2 + 5) {
            plVar6 = (long *)plVar4[1];
            operator_delete(plVar4);
            plVar4 = plVar6;
          }
        }
        if ((*(byte *)(puVar2 + 2) & 1) != 0) {
          operator_delete((void *)puVar2[4]);
        }
                    /* try { // try from 00a6d070 to 00b6d087 has its CatchHandler @ 00a6d25c */
        operator_delete(puVar2);
        puVar2 = pvVar5;
      }
      DAT_01d38c70 = (undefined8 *)0x0;
      if (DAT_01d38c68 != 0) {
        lVar3 = 0;
        do {
                    /* try { // try from 00a6d090 to 00b6d09b has its CatchHandler @ 00a6d258 */
          *(undefined8 *)(_audioPathIDMap + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
                    /* try { // try from 00a6d09c to 00b6d0a7 has its CatchHandler @ 00a6d254 */
        } while (lVar1 != lVar3);
      }
      DAT_01d38c78 = 0;
    }
                    /* try { // try from 00a6d0a8 to 00b6d1df has its CatchHandler @ 00a6d26c */
    puVar2 = DAT_01d38cc8;
    if (DAT_01d38cd0 != 0) {
      while (lVar1 = DAT_01d38cc0, puVar2 != (void *)0x0) {
        pvVar5 = (void *)*puVar2;
        operator_delete(puVar2);
        puVar2 = pvVar5;
      }
      DAT_01d38cc8 = (undefined8 *)0x0;
      if (DAT_01d38cc0 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(_audioIDInfoMap + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
      DAT_01d38cd0 = 0;
    }
  }
  return;
}

