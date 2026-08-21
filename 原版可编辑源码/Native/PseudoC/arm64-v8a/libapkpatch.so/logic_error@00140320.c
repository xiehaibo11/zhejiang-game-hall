
/* std::logic_error::logic_error(std::logic_error const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,logic_error *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined ***)this = &PTR__out_of_range_00169e60;
  *(long *)(this + 8) = lVar1;
  FUN_001655c0(1,lVar1 + -8);
  return;
}

