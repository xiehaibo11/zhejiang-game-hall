
void Java_org_cocos2dx_javascript_YmnSupport_ymnCallBack
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,_jstring *param_4)

{
  long lVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  byte local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::JniHelper::jstring2string(param_4);
  __src = local_50;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  if ((local_60 & 1) == 0) {
    local_80 = CONCAT71(uStack_5f,local_60);
    local_70 = local_50;
    uStack_78 = uStack_58;
    goto LAB_00858030;
  }
  if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_58 < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = (ulong)(byte)((int)uStack_58 << 1);
    if (uStack_58 != 0) goto LAB_0085801c;
  }
  else {
    uVar2 = uStack_58 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_80 = uVar2 | 1;
    uStack_78 = uStack_58;
    local_70 = __dest;
LAB_0085801c:
    memcpy(__dest,__src,uStack_58);
  }
  *(undefined1 *)((long)__dest + uStack_58) = 0;
LAB_00858030:
  xh::XhSdk::callBack(param_3,&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

