
/* cocos2d::Device::setAccelerometerInterval(float) */

void cocos2d::Device::setAccelerometerInterval(float param_1)

{
  long lVar1;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  builtin_strncpy(local_30,"setAccelerometerInterval",0x19);
  local_40[1] = 0x18;
  local_40[0] = 0x21;
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

