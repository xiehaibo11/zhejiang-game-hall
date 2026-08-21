
/* std::__ndk1::codecvt<char, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

undefined4 __thiscall
std::__ndk1::codecvt<char,char,mbstate_t>::do_length
          (codecvt<char,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  undefined4 uVar1;
  
  uVar1 = (int)((long)param_3 - (long)param_2);
  if (param_4 <= (ulong)((long)param_3 - (long)param_2)) {
    uVar1 = (int)param_4;
  }
  return uVar1;
}

