
void FUN_011f98b4(basic_string *param_1)

{
  runtime_error *this;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
  std::runtime_error::runtime_error(this,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::runtime_error::typeinfo,std::overflow_error::~overflow_error);
}

