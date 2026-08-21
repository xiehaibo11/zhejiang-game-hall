
/* xh::XhSdk::callBack(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void xh::XhSdk::callBack(undefined4 param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __android_log_print(3,"XhNative","----------------------");
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x10);
  }
  __android_log_print(3,"XhNative","native callback %d %s",param_1,pbVar2);
  __android_log_print(3,"XhNative","----------------------");
  if (DAT_01781a10 != (long *)0x0) {
    if ((*param_2 & 1) == 0) {
      local_48 = param_2 + 1;
    }
    else {
      local_48 = *(byte **)(param_2 + 0x10);
    }
    local_3c = param_1;
    (**(code **)(*DAT_01781a10 + 0x30))(DAT_01781a10,&local_3c,&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

