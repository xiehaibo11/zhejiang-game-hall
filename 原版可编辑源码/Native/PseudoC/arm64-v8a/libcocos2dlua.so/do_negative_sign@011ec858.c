
/* std::__ndk1::moneypunct<wchar_t, false>::do_negative_sign() const */

void __thiscall
std::__ndk1::moneypunct<wchar_t,false>::do_negative_sign(moneypunct<wchar_t,false> *this)

{
  undefined8 *in_x8;
  
  in_x8[2] = 0;
  *in_x8 = 2;
  in_x8[1] = 0;
  wmemset((wchar_t *)((long)in_x8 + 4),L'-',1);
  *(undefined4 *)(in_x8 + 1) = 0;
  return;
}

