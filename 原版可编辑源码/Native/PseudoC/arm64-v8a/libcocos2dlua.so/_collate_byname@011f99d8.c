
/* std::__ndk1::collate_byname<char>::~collate_byname() */

void __thiscall std::__ndk1::collate_byname<char>::~collate_byname(collate_byname<char> *this)

{
  *(undefined ***)this = &PTR__collate_byname_0172e3c8;
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

