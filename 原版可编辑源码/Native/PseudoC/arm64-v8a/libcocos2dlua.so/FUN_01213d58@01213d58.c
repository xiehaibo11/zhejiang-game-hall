
void FUN_01213d58(logic_error *param_1)

{
  logic_error *this;
  undefined8 uVar1;
  
  this = (logic_error *)__cxa_allocate_exception(0x20);
  std::logic_error::logic_error(this,param_1);
  *(undefined ***)this = &PTR__future_error_017313a8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::__ndk1::future_error::typeinfo,std::__ndk1::future_error::~future_error);
}

