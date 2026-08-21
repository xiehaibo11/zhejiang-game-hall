
/* std::__ndk1::locale::__install_ctor(std::__ndk1::locale const&, std::__ndk1::locale::facet*,
   long) */

void __thiscall
std::__ndk1::locale::__install_ctor(locale *this,locale *param_1,facet *param_2,long param_3)

{
  __shared_count *this_00;
  
  if (param_2 == (facet *)0x0) {
    this_00 = *(__shared_count **)param_1;
  }
  else {
    this_00 = operator_new(0x140);
    FUN_011f88f8(this_00,*(undefined8 *)param_1,param_2,param_3);
  }
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}

