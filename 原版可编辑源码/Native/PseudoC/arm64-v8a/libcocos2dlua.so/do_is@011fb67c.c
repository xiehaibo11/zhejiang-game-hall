
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::ctype_byname<wchar_t>::do_is(unsigned long, wchar_t) const */

bool __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_is(ctype_byname<wchar_t> *this,ulong param_1,wchar_t param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    uVar1 = false;
  }
  else {
    iVar2 = iswspace(param_2);
    uVar1 = iVar2 != 0;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    iVar2 = iswprint(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    iVar2 = iswcntrl(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    iVar2 = iswupper(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    iVar2 = iswlower(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    iVar2 = iswalpha(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    iVar2 = iswdigit(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    iVar2 = iswpunct(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    iVar2 = iswxdigit(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    iVar2 = iswblank(param_2);
    uVar1 = uVar1 | iVar2 != 0;
  }
  return (bool)uVar1;
}

