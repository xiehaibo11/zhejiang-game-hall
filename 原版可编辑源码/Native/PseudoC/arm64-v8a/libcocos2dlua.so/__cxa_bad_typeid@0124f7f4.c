
void __cxa_bad_typeid(void)

{
  bad_typeid *this;
  
  this = (bad_typeid *)__cxa_allocate_exception(8);
  std::bad_typeid::bad_typeid(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::bad_typeid::typeinfo,std::bad_typeid::~bad_typeid);
}

