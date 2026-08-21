
/* cocos2d::FileUtilsAndroid::getWritablePath() const */

void cocos2d::FileUtilsAndroid::getWritablePath(void)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  basic_string *in_x2;
  ulong *in_x8;
  basic_string local_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  byte local_58 [8];
  ulong local_50;
  char *local_48;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (void *)0x0;
  local_60 = operator_new(0x20);
  builtin_strncpy(local_60,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
  local_88 = (basic_string)0x1e;
  uStack_7f = 0x68746150656c62;
  uStack_87 = 0x74697257746567;
  local_80 = 0x61;
  uStack_68 = 0x1f;
  local_70 = 0x21;
  local_78 = (void *)0x0;
  JniHelper::callStaticStringMethod<>((JniHelper *)&local_70,&local_88,in_x2);
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uVar1 = (ulong)(local_58[0] >> 1);
  if ((local_58[0] & 1) != 0) {
    uVar1 = local_50;
  }
  if (uVar1 == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    pcVar2 = (char *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      pcVar2 = local_48;
    }
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_40,pcVar2,uVar1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(this,"/",1);
    pvVar5 = local_30;
    uVar4 = uStack_38;
    uVar1 = local_40;
    uStack_38 = 0;
    local_30 = (void *)0x0;
    local_40 = 0;
    in_x8[2] = (ulong)pvVar5;
    in_x8[1] = uVar4;
    *in_x8 = uVar1;
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

