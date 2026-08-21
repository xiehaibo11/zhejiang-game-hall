
/* std::runtime_error::runtime_error(char const*) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__underflow_error_00169e88;
  lVar1 = __strlen_chk(param_1,0xffffffffffffffff);
  plVar2 = operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,param_1,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}

