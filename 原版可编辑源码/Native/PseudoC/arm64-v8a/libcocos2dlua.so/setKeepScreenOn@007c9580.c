
/* cocos2d::Device::setKeepScreenOn(bool) */

void cocos2d::Device::setKeepScreenOn(bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined7 uStack_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_37 = 0x6e4f6e65657263;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1e;
  uStack_3f = 0x7065654b746573;
  local_38 = 0x53;
  JniHelper::callStaticVoidMethod<bool>((basic_string *)&DAT_01781a98,&local_40,param_1);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

