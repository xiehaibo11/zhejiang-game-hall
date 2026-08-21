
void FUN_00a756dc(long param_1,undefined1 *param_2,PcmData *param_3)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  pthread_t __thread1;
  PcmData aPStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  cocos2d::PcmData::PcmData(aPStack_68,param_3);
  __thread1 = pthread_self();
  iVar3 = pthread_equal(__thread1,*(pthread_t *)(param_1 + 0x28));
  *(bool *)*(undefined8 *)(param_1 + 0x50) = iVar3 != 0;
  cocos2d::PcmData::operator=(*(PcmData **)(param_1 + 0x30),aPStack_68);
  **(undefined1 **)(param_1 + 0x40) = uVar1;
  **(undefined1 **)(param_1 + 0x60) = 1;
  cocos2d::PcmData::~PcmData(aPStack_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a75770 to 00b757cf has its CatchHandler @ 00a757d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

