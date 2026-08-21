
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_alloc() */

void std::__throw_bad_alloc(void)

{
  bad_alloc *this;
  
  this = (bad_alloc *)__cxa_allocate_exception(8);
  bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&bad_alloc::typeinfo,bad_alloc::~bad_alloc);
}

