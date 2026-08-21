
undefined8 FUN_00df9354(undefined8 *param_1)

{
  long lVar1;
  pthread_key_t *ppVar2;
  ulong uVar3;
  long lVar4;
  void *__pointer;
  code *pcVar5;
  AssetsManager *this;
  __thread_struct *this_00;
  undefined **local_70;
  AssetsManager *pAStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ppVar2 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pthread_setspecific(*ppVar2,__pointer);
  this = (AssetsManager *)param_1[1];
  uVar3 = cocos2d::extension::AssetsManager::uncompress(this);
  lVar4 = cocos2d::Director::getInstance();
  pAStack_68 = this;
  if ((uVar3 & 1) == 0) {
    local_70 = &PTR_FUN_016e7e10;
    local_50 = (long *)&local_70;
    cocos2d::Scheduler::performFunctionInCocosThread(*(Scheduler **)(lVar4 + 0xa0),&local_70);
  }
  else {
    local_70 = &PTR_FUN_016e7e90;
    local_50 = (long *)&local_70;
    cocos2d::Scheduler::performFunctionInCocosThread(*(Scheduler **)(lVar4 + 0xa0),&local_70);
  }
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00df940c;
    pcVar5 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar5)();
LAB_00df940c:
  this[0x388] = (AssetsManager)0x0;
  this_00 = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this_00 != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this_00);
    operator_delete(this_00);
  }
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

