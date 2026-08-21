
/* std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname() */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname(numpunct_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__numpunct_01cdbc90;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}

