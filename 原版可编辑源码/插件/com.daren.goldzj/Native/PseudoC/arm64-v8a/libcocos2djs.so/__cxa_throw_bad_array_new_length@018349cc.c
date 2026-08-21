
void __cxa_throw_bad_array_new_length(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_array_new_length::typeinfo,std::bad_exception::~bad_exception);
}

