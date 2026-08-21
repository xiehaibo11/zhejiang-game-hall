
/* std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall std::__ndk1::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
  bad_exception::~bad_exception((bad_exception *)this);
  operator_delete(this);
  return;
}

