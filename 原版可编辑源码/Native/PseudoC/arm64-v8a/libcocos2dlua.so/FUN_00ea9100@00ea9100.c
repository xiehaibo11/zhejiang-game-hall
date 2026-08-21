
void FUN_00ea9100(void)

{
  regex_error *prVar1;
  
  prVar1 = (regex_error *)__cxa_allocate_exception(0x18);
  std::__ndk1::regex_error::regex_error(prVar1,0xe);
                    /* try { // try from 00ea912c to 00fa913b has its CatchHandler @ 00ea914c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(prVar1,&std::__ndk1::regex_error::typeinfo,std::__ndk1::regex_error::~regex_error);
}

