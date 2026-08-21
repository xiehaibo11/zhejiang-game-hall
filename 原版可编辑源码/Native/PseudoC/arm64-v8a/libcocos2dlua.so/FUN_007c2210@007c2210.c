
void FUN_007c2210(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_007c2260(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::length_error::typeinfo,std::invalid_argument::~invalid_argument);
}

