
/* CleanupTask::CleanupTask() */

void __thiscall CleanupTask::CleanupTask(CleanupTask *this)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__CleanupTask_01c8e140;
  return;
}

