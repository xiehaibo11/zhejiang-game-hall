
void Java_org_cocos2dx_lua_YmnSupport_ymnCallBack
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,_jstring *param_4)

{
  void *pvVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  void *local_60;
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cocos2d::JniHelper::jstring2string(param_4);
  pvVar1 = local_60;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  if ((local_70 & 1) == 0) {
    local_90 = CONCAT71(uStack_6f,local_70);
    uStack_88 = uStack_68;
    local_80 = local_60;
    goto LAB_007c2bac;
  }
  if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_68 < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)uStack_68 << 1);
    if (uStack_68 != 0) goto LAB_007c2b98;
  }
  else {
    uVar3 = uStack_68 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_90 = uVar3 | 1;
    uStack_88 = uStack_68;
    local_80 = __dest;
LAB_007c2b98:
    memcpy(__dest,pvVar1,uStack_68);
  }
  *(undefined1 *)((long)__dest + uStack_68) = 0;
LAB_007c2bac:
  __android_log_print(3,"XhNative","----------------------");
  pvVar1 = (void *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pvVar1 = local_80;
  }
  __android_log_print(3,"XhNative","native callback %d %s",param_3,pvVar1);
  __android_log_print(3,"XhNative","----------------------");
  if (DAT_01781a10 != (long *)0x0) {
    local_58 = (void *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      local_58 = local_80;
    }
    local_4c = param_3;
    (**(code **)(*DAT_01781a10 + 0x30))(DAT_01781a10,&local_4c,&local_58);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

