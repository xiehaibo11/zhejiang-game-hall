
void FUN_0087bffc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_0087c04c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::out_of_range::typeinfo,std::invalid_argument::~invalid_argument);
}

