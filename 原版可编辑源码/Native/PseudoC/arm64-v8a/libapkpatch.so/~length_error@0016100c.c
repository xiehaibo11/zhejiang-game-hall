
/* std::length_error::~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  *(undefined ***)this = &PTR__out_of_range_00169e60;
  iVar1 = FUN_001655c0(0xffffffff,lVar2 + -8);
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar2 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}

