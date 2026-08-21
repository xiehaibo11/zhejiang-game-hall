
/* std::__ndk1::locale::locale() */

void __thiscall std::__ndk1::locale::locale(locale *this)

{
  undefined8 *puVar1;
  __shared_count *this_00;
  
  puVar1 = (undefined8 *)__global();
  this_00 = (__shared_count *)*puVar1;
  *(__shared_count **)this = this_00;
  __shared_count::__add_shared(this_00);
  return;
}

