
/* std::__ndk1::ctype_byname<char>::~ctype_byname() */

void __thiscall std::__ndk1::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  *(undefined ***)this = &PTR__ctype_byname_0172e4b0;
  freelocale(*(__locale_t *)(this + 0x20));
  *(undefined ***)this = &PTR__ctype_0172e448;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype_byname<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

