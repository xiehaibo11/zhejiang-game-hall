
/* cocos2d::ui::UICCTextField::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

TextFieldTTF *
cocos2d::ui::UICCTextField::create(basic_string *param_1,basic_string *param_2,float param_3)

{
  long lVar1;
  TextFieldTTF *this;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x750,(nothrow_t *)&std::nothrow);
  if (this != (TextFieldTTF *)0x0) {
    TextFieldTTF::TextFieldTTF(this);
                    /* try { // try from 00dce074 to 00ece087 has its CatchHandler @ 00dced98 */
    *(undefined ***)this = &PTR__UICCTextField_016e0e30;
    *(undefined ***)(this + 0x300) = &PTR__UICCTextField_016e1538;
    *(undefined ***)(this + 0x2f8) = &PTR__UICCTextField_016e1508;
                    /* try { // try from 00dce08c to 00ece0a3 has its CatchHandler @ 00dce94c */
    *(undefined ***)(this + 0x6a0) = &PTR__UICCTextField_016e1568;
    *(undefined ***)(this + 0x738) = &PTR__UICCTextField_016e15f8;
    this[0x740] = (TextFieldTTF)0x0;
    *(undefined8 *)(this + 0x744) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"");
                    /* try { // try from 00dce0a4 to 00ece0b7 has its CatchHandler @ 00dce8b8 */
    uVar2 = TextFieldTTF::initWithPlaceHolder(this,(basic_string *)local_60,param_2,param_3);
                    /* try { // try from 00dce0bc to 00ece0eb has its CatchHandler @ 00dcec40 */
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 00dce114 to 00ece13b has its CatchHandler @ 00dce938 */
      (**(code **)(*(long *)this + 8))(this);
      this = (TextFieldTTF *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
      uVar2 = (ulong)((byte)*param_1 >> 1);
      if (((byte)*param_1 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      if (uVar2 != 0) {
                    /* try { // try from 00dce0fc to 00ece10f has its CatchHandler @ 00dce8a8 */
        (**(code **)(*(long *)this + 0x640))(this,param_1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

