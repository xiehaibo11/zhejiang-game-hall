
/* std::__ndk1::collate_byname<wchar_t>::~collate_byname() */

void __thiscall std::__ndk1::collate_byname<wchar_t>::~collate_byname(collate_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__collate_byname_01cdba48;
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

