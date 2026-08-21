
/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  return;
}

