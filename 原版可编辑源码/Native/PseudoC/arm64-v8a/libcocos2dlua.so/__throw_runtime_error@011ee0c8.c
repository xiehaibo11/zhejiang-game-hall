
/* std::__ndk1::__throw_runtime_error(char const*) */

void std::__ndk1::__throw_runtime_error(char *param_1)

{
  runtime_error *this;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
  runtime_error::runtime_error(this,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&runtime_error::typeinfo,overflow_error::~overflow_error);
}

