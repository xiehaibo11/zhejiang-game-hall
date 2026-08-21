
/* std::__ndk1::collate<char>::do_compare(char const*, char const*, char const*, char const*) const
    */

ulong __thiscall
std::__ndk1::collate<char>::do_compare
          (collate<char> *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  while( true ) {
    if (param_3 == param_4) {
      return (ulong)(param_1 != param_2);
    }
    if (param_2 == param_1) {
      return 0xffffffff;
    }
    if ((byte)*param_1 < (byte)*param_3) {
      return 0xffffffff;
    }
    if ((byte)*param_3 < (byte)*param_1) break;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  return 1;
}

