
void FUN_00ea9db4(void)

{
  regex_error *prVar1;
  
  prVar1 = (regex_error *)__cxa_allocate_exception(0x18);
  std::__ndk1::regex_error::regex_error(prVar1,6);
                    /* try { // try from 00ea9ddc to 00fa9e0f has its CatchHandler @ 00ea9ddc
                       catch() { ... } // from try @ 00ea9ddc with catch @ 00ea9ddc
                       catch() { ... } // from try @ 00ea9e54 with catch @ 00ea9ddc */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(prVar1,&std::__ndk1::regex_error::typeinfo,std::__ndk1::regex_error::~regex_error);
}

