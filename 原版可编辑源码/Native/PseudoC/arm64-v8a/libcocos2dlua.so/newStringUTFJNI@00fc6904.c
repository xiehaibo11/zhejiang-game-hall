
/* cocos2d::StringUtils::newStringUTFJNI(_JNIEnv*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool*) */

undefined8
cocos2d::StringUtils::newStringUTFJNI(_JNIEnv *param_1,basic_string *param_2,bool *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong local_50;
  undefined8 local_48;
  undefined2 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = 0;
  local_40 = (undefined2 *)0x0;
  local_50 = 0;
  bVar4 = utfConvert<char,char16_t,cocos2d::StringUtils::ConvertTrait<char>,cocos2d::StringUtils::ConvertTrait<char16_t>>
                    (param_2,(basic_string *)&local_50,ConvertUTF8toUTF16);
  if (param_3 != (bool *)0x0) {
    *param_3 = bVar4;
  }
  if (!bVar4) {
    if ((local_50 & 1) == 0) {
      local_50._0_4_ = (uint)(ushort)local_50;
      local_50 = local_50 & 0xffffffffffffff00;
    }
    else {
      *local_40 = 0;
      local_48 = 0;
    }
  }
  bVar4 = (local_50 & 1) != 0;
  puVar2 = (undefined2 *)((ulong)&local_50 | 2);
  if (bVar4) {
    puVar2 = local_40;
  }
  uVar1 = (uint)((byte)local_50._0_1_ >> 1);
  if (bVar4) {
    uVar1 = (uint)local_48;
  }
  uVar5 = (**(code **)(*(long *)param_1 + 0x518))(param_1,puVar2,uVar1);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

