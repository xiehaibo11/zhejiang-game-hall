
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::basic_ostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::basic_ostream
               (basic_streambuf *param_1)

{
  long *in_x1;
  long in_x2;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + *(long *)(lVar1 + -0x18)) = in_x1[1];
  lVar1 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar1 + 0x18) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x10) = 6;
  *(long *)(param_1 + lVar1 + 0x28) = in_x2;
  *(uint *)(param_1 + lVar1 + 0x20) = (uint)(in_x2 == 0);
  *(undefined4 *)(param_1 + lVar1 + 0x24) = 0;
  *(undefined4 *)(param_1 + lVar1 + 8) = 0x1002;
  *(undefined8 *)(param_1 + lVar1 + 0x80) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x78) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x70) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x68) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x60) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x58) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x50) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x48) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x40) = 0;
  *(undefined8 *)(param_1 + lVar1 + 0x38) = 0;
  locale::locale((locale *)(param_1 + lVar1 + 0x30));
  *(undefined8 *)(param_1 + lVar1 + 0x88) = 0;
  *(undefined4 *)(param_1 + lVar1 + 0x90) = 0xffffffff;
  return;
}

