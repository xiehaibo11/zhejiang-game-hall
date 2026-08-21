
/* std::__ndk1::numpunct<char>::~numpunct() */

void __thiscall std::__ndk1::numpunct<char>::~numpunct(numpunct<char> *this)

{
  *(undefined ***)this = &PTR__numpunct_01cdbc40;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

