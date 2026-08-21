
void FUN_00114cfc(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar2 = (~((x_104 + -0x4461cbcd) * x_104) | 0xfffffffeU) == 0xffffffff;
  if ((y_105 < 10 == bVar2) && (9 < y_105 || !bVar2)) goto LAB_00114db4;
  while( true ) {
    uVar3 = __cxa_allocate_exception(0x10);
    uVar1 = (x_104 + -1) * x_104;
    bVar2 = ((uVar1 ^ 0xfffffffe) & uVar1) == 0;
    if ((y_105 < 10 && bVar2) || (y_105 < 10 != bVar2)) break;
LAB_00114db4:
    __cxa_allocate_exception(0x10);
  }
  FUN_00114df8(uVar3,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar3,&std::length_error::typeinfo,std::invalid_argument::~invalid_argument);
}

