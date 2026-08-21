
/* cocos2d::StringUtils::StringUTF8::insert(unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::StringUtils::StringUTF8::insert(StringUTF8 *this,ulong param_1,basic_string *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_50;
  byte *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = (byte *)0x0;
  uStack_40 = 0;
  local_50 = (byte *)0x0;
  replace((StringUTF8 *)&local_50,param_2);
  bVar7 = param_1 <= (ulong)((*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555);
  pbVar5 = local_50;
  if (bVar7) {
    std::__ndk1::
    vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
    ::insert<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8_const*>>
              ((vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
                *)this,*(long *)this + param_1 * 0x18,local_50,local_48);
    pbVar5 = local_50;
  }
  local_50 = pbVar5;
  if (pbVar5 != (byte *)0x0) {
    if (local_48 != pbVar5) {
      bVar1 = local_48[-0x18];
      pbVar6 = local_48 + -0x18;
      pbVar4 = local_48;
      while( true ) {
        pbVar3 = pbVar6;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar5 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar6 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_48 = pbVar5;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

