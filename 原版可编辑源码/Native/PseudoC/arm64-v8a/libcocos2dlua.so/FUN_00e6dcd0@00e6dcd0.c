
void FUN_00e6dcd0(long param_1,undefined1 *param_2,PcmData *param_3)

{
  undefined1 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  pthread_t __thread1;
  pthread_t __thread2;
  PcmData aPStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  cocos2d::experimental::PcmData::PcmData(aPStack_68,param_3);
  __thread1 = pthread_self();
  __thread2 = *(pthread_t *)(param_1 + 0x28);
  bVar3 = __thread2 == 0 && __thread1 == 0;
  if ((__thread1 != 0) && (__thread2 != 0)) {
    iVar4 = pthread_equal(__thread1,__thread2);
    bVar3 = iVar4 != 0;
  }
  *(bool *)*(undefined8 *)(param_1 + 0x50) = bVar3;
  cocos2d::experimental::PcmData::operator=(*(PcmData **)(param_1 + 0x30),aPStack_68);
  **(undefined1 **)(param_1 + 0x40) = uVar1;
  **(undefined1 **)(param_1 + 0x60) = 1;
  cocos2d::experimental::PcmData::~PcmData(aPStack_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

