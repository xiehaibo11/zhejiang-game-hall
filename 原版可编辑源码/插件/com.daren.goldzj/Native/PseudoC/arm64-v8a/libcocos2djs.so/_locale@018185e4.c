
/* std::__ndk1::locale::~locale() */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  __shared_count::__release_shared(*(__shared_count **)this);
  return;
}

