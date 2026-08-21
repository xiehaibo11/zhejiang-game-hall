
/* cocos2d::FileUtilsAndroid::getWritablePath() const */

void cocos2d::FileUtilsAndroid::getWritablePath(void)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  byte local_58 [8];
  ulong local_50;
  char *local_48;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uStack_38 = 0;
  local_30 = (void *)0x0;
  local_40 = 0;
  local_60 = operator_new(0x20);
  builtin_strncpy(local_60,"org.cocos2dx.lib.Cocos2dxHelper",0x20);
  uStack_68 = 0x1f;
  local_70 = 0x21;
  local_80 = operator_new(0x20);
  builtin_strncpy(local_80,"getCocos2dxWritablePath",0x18);
  uStack_88 = 0x17;
  local_90 = 0x21;
  JniHelper::callStaticStringMethod<>((JniHelper *)&local_70,(basic_string *)&local_90,in_x2);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uVar1 = (ulong)(local_58[0] >> 1);
  if ((local_58[0] & 1) != 0) {
    uVar1 = local_50;
  }
  if (uVar1 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
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
    *(undefined8 *)(in_x8 + 8) = uVar4;
    *(ulong *)in_x8 = uVar1;
    *(void **)(in_x8 + 0x10) = pvVar5;
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

