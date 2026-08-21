
void FUN_00a5b54c(void)

{
  bad_cast *this;
  
  this = (bad_cast *)__cxa_allocate_exception(8);
  std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a5b57c to 00b5b583 has its CatchHandler @ 00a5b5e8 */
  __cxa_throw(this,&std::bad_cast::typeinfo,std::bad_cast::~bad_cast);
}

