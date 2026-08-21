
/* cocos2d::experimental::AudioEngine::stopAll() */

void cocos2d::experimental::AudioEngine::stopAll(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
    AudioEngineImpl::stopAll(_audioEngineImpl);
    for (puVar4 = DAT_0178f2d8; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      if (puVar4[4] != 0) {
        std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
                  ((list<int,std::__ndk1::allocator<int>> *)(puVar4[4] + 0x28),(int *)(puVar4 + 2));
      }
    }
    lVar1 = DAT_0178f278;
    puVar4 = DAT_0178f280;
    if (DAT_0178f288 != 0) {
      while (DAT_0178f278 = lVar1, puVar4 != (void *)0x0) {
        pvVar5 = (void *)*puVar4;
        if (puVar4[7] != 0) {
          lVar1 = puVar4[5];
          plVar2 = (long *)puVar4[6];
          lVar3 = *plVar2;
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
          **(long **)(lVar1 + 8) = lVar3;
          puVar4[7] = 0;
          while (plVar2 != puVar4 + 5) {
            plVar6 = (long *)plVar2[1];
            operator_delete(plVar2);
            plVar2 = plVar6;
          }
        }
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        lVar1 = DAT_0178f278;
        puVar4 = pvVar5;
      }
      DAT_0178f280 = (undefined8 *)0x0;
      if (lVar1 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(_audioPathIDMap + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
      DAT_0178f288 = 0;
    }
    puVar4 = DAT_0178f2d8;
    if (DAT_0178f2e0 != 0) {
      while (lVar1 = DAT_0178f2d0, puVar4 != (void *)0x0) {
        pvVar5 = (void *)*puVar4;
        operator_delete(puVar4);
        puVar4 = pvVar5;
      }
      DAT_0178f2d8 = (undefined8 *)0x0;
      if (DAT_0178f2d0 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(_audioIDInfoMap + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
      DAT_0178f2e0 = 0;
    }
  }
  return;
}

