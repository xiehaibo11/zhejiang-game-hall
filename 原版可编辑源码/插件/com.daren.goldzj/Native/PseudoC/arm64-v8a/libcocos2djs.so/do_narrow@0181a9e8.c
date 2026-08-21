
/* std::__ndk1::ctype<char>::do_narrow(char, char) const */

char __thiscall std::__ndk1::ctype<char>::do_narrow(ctype<char> *this,char param_1,char param_2)

{
  if (param_1 < '\0') {
    param_1 = param_2;
  }
  return param_1;
}

