
/* std::__ndk1::locale::locale(std::__ndk1::locale const&) */

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1)

{
  __shared_count *this_00;
  
  this_00 = *(__shared_count **)param_1;
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}

