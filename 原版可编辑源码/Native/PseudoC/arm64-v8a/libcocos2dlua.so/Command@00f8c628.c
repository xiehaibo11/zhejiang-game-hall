
/* cocos2d::Console::Command::Command(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&) */

void __thiscall
cocos2d::Console::Command::Command
          (Command *this,basic_string *param_1,basic_string *param_2,function *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               this,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),param_2);
  plVar1 = *(long **)(param_3 + 0x20);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(this + 0x50) = 0;
  }
  else if ((long *)param_3 == plVar1) {
    *(Command **)(this + 0x50) = this + 0x30;
    (**(code **)(**(long **)(param_3 + 0x20) + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(this + 0x50) = uVar2;
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  return;
}

