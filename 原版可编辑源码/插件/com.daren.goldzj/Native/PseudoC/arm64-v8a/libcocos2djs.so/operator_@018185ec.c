
/* std::__ndk1::locale::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::locale const&) */

locale * __thiscall std::__ndk1::locale::operator=(locale *this,locale *param_1)

{
  __shared_count::__add_shared(*(__shared_count **)param_1);
  __shared_count::__release_shared(*(__shared_count **)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

