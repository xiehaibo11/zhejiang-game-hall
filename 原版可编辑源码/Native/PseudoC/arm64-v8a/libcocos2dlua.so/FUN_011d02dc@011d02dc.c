
void FUN_011d02dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_011d032c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::overflow_error::typeinfo,std::overflow_error::~overflow_error);
}

