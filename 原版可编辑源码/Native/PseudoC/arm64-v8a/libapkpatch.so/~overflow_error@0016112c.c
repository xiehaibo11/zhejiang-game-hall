
/* std::overflow_error::~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  *(undefined ***)this = &PTR__underflow_error_00169e88;
  iVar1 = FUN_001655c0(0xffffffff,lVar2 + -8);
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar2 + -0x18));
  }
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}

