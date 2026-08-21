
/* cocos2d::experimental::AudioEngineImpl::~AudioEngineImpl() */

void __thiscall cocos2d::experimental::AudioEngineImpl::~AudioEngineImpl(AudioEngineImpl *this)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__AudioEngineImpl_016f3768;
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x30))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x30))();
  }
  if (*(long *)(this + 0xc0) != 0) {
    lVar2 = Director::getInstance();
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0xc0));
  }
  if (*(long *)(this + 200) != 0) {
    lVar2 = Director::getInstance();
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 200));
  }
  DAT_0178f240 = 0;
  puVar1 = *(void **)(this + 0xa0);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x90);
  *(undefined8 *)(this + 0x90) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  puVar1 = *(void **)(this + 0x78);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar5 = *(void **)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      puVar1 = *(void **)(this + 0x50);
      while (puVar1 != (void *)0x0) {
        pvVar5 = (void *)*puVar1;
        operator_delete(puVar1);
        puVar1 = pvVar5;
      }
      pvVar5 = *(void **)(this + 0x40);
      *(undefined8 *)(this + 0x40) = 0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      Ref::~Ref((Ref *)this);
      return;
    }
    plVar3 = (long *)puVar1[8];
    pvVar5 = (void *)*puVar1;
    if (puVar1 + 4 == plVar3) {
      pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_00e64fa0:
      (*pcVar4)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x28);
      goto LAB_00e64fa0;
    }
    operator_delete(puVar1);
    puVar1 = pvVar5;
  } while( true );
}

