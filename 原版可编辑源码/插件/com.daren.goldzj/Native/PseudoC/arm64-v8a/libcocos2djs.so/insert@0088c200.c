
/* cocos2d::StringUtils::StringUTF8::insert(unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::StringUtils::StringUTF8::insert(StringUTF8 *this,ulong param_1,basic_string *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  byte *pbVar5;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = 0;
  replace((StringUTF8 *)&local_50,param_2);
  bVar4 = param_1 <= (ulong)((*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555);
  pbVar2 = local_50;
  if (bVar4) {
    std::__ndk1::
    vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
    ::insert<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8_const*>>
              ((vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
                *)this,*(long *)this + param_1 * 0x18,local_50,local_48);
    pbVar2 = local_50;
  }
  local_50 = pbVar2;
  pbVar5 = local_48;
  if (pbVar2 != (byte *)0x0) {
    while (pbVar3 = pbVar5, pbVar3 != pbVar2) {
      pbVar5 = pbVar3 + -0x18;
      if ((*pbVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
    }
    local_48 = pbVar2;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

