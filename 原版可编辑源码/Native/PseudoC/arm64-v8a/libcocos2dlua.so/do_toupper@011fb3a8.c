
/* std::__ndk1::ctype_byname<char>::do_toupper(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype_byname<char>::do_toupper(ctype_byname<char> *this,char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    iVar2 = toupper((uint)(byte)*param_1);
    *param_1 = (byte)iVar2;
    pcVar1 = param_2;
  }
  return pcVar1;
}

