
/* cocos2d::experimental::AudioEngineImpl::onEnterForeground(cocos2d::EventCustom*) */

void cocos2d::experimental::AudioEngineImpl::onEnterForeground(EventCustom *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  if (*(AudioPlayerProvider **)(param_1 + 0xb8) != (AudioPlayerProvider *)0x0) {
    AudioPlayerProvider::resume(*(AudioPlayerProvider **)(param_1 + 0xb8));
  }
  for (plVar4 = *(long **)(param_1 + 0xa0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*(long *)plVar4[3] + 0x40))();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    puVar1 = *(void **)(param_1 + 0xa0);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

