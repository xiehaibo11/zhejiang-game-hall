
/* std::runtime_error::runtime_error(char const*) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  size_t sVar1;
  size_t *psVar2;
  
  *(undefined ***)this = &PTR__overflow_error_017355a0;
  sVar1 = strlen(param_1);
  psVar2 = operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_1,sVar1 + 1);
  *(size_t **)(this + 8) = psVar2 + 3;
  return;
}

