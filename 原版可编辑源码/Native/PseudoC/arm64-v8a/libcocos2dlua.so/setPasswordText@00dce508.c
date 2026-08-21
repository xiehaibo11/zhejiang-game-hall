
/* cocos2d::ui::UICCTextField::setPasswordText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::UICCTextField::setPasswordText(UICCTextField *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  UICCTextField *pUVar3;
  long lVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00dce518 to 00ece51f has its CatchHandler @ 00dced98 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"");
  lVar4 = StringUtils::getCharacterCountInUTF8String(param_1);
  lVar5 = lVar4;
  if ((this[0x740] != (UICCTextField)0x0) &&
     (lVar5 = (long)*(int *)(this + 0x744), lVar4 <= *(int *)(this + 0x744))) {
    lVar5 = lVar4;
  }
  if (0 < lVar5) {
    do {
      uVar1 = (ulong)((byte)this[0x6f8] >> 1);
      pUVar3 = this + 0x6f9;
      if (((byte)this[0x6f8] & 1) != 0) {
        uVar1 = *(ulong *)(this + 0x700);
        pUVar3 = *(UICCTextField **)(this + 0x708);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(local_50,(char *)pUVar3,uVar1);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  Label::setString((Label *)this,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
                    /* try { // try from 00dce5b4 to 00ece5bb has its CatchHandler @ 00dced94 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

