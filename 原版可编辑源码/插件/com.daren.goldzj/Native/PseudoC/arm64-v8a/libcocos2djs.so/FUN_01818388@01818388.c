
void FUN_01818388(long param_1,ulong param_2)

{
  bad_cast *this;
  
  if ((param_2 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + param_2 * 8) != 0)) {
    return;
  }
  this = (bad_cast *)__cxa_allocate_exception(8);
  std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_cast::typeinfo,std::bad_cast::~bad_cast);
}

