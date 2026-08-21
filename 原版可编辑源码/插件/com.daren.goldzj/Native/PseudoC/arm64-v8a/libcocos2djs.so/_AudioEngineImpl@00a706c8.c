
/* cocos2d::AudioEngineImpl::~AudioEngineImpl() */

void __thiscall cocos2d::AudioEngineImpl::~AudioEngineImpl(AudioEngineImpl *this)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  void *pvVar4;
  
                    /* try { // try from 00a706d0 to 00b706eb has its CatchHandler @ 00a70eb0 */
                    /* try { // try from 00a706ec to 00b707ef has its CatchHandler @ 00a70324 */
  *(undefined ***)this = &PTR__AudioEngineImpl_01c6eba0;
  if (*(long **)(this + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
    *(undefined8 *)(this + 0xa0) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x30))();
  }
  DAT_01d38d10 = 0;
  puVar1 = *(void **)(this + 0x88);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  puVar1 = *(void **)(this + 0x60);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar4 = *(void **)(this + 0x50);
      *(undefined8 *)(this + 0x50) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      puVar1 = *(void **)(this + 0x38);
      while (puVar1 != (void *)0x0) {
        pvVar4 = (void *)*puVar1;
        operator_delete(puVar1);
        puVar1 = pvVar4;
      }
      pvVar4 = *(void **)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      Ref::~Ref((Ref *)this);
      return;
    }
    plVar2 = (long *)puVar1[8];
    pvVar4 = (void *)*puVar1;
    if (puVar1 + 4 == plVar2) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00a70794:
      (*pcVar3)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      goto LAB_00a70794;
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  } while( true );
}

