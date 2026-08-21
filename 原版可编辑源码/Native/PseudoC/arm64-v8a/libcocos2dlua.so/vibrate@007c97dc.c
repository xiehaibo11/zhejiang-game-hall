
/* cocos2d::Device::vibrate(float) */

void cocos2d::Device::vibrate(float param_1)

{
  long lVar1;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[1] = 0;
  local_30 = (void *)0x0;
  local_40[0] = 0x657461726269760e;
  JniHelper::callStaticVoidMethod<float>
            ((basic_string *)&DAT_01781a98,(basic_string *)local_40,param_1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

