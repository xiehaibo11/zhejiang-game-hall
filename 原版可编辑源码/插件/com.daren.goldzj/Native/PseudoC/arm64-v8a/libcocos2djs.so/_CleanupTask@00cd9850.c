
/* CleanupTask::~CleanupTask() */

void __thiscall CleanupTask::~CleanupTask(CleanupTask *this)

{
  CleanupTask *pCVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__CleanupTask_01c8e140;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x30))();
    pCVar1 = *(CleanupTask **)(this + 0x30);
    if (this + 0x10 == pCVar1) {
      pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
    }
    else {
      if (pCVar1 == (CleanupTask *)0x0) goto LAB_00cd98b0;
      pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00cd98b0:
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

