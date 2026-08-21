
/* std::logic_error::logic_error(char const*) */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__out_of_range_00169e60;
  lVar1 = __strlen_chk(param_1,0xffffffffffffffff);
  plVar2 = operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,param_1,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}

