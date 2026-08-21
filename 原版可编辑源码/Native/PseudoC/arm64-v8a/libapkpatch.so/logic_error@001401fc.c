
/* std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string *__src;
  
  *(undefined ***)this = &PTR__out_of_range_00169e60;
  __src = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
  }
  lVar1 = __strlen_chk(__src,0xffffffffffffffff);
  plVar2 = operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,__src,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}

