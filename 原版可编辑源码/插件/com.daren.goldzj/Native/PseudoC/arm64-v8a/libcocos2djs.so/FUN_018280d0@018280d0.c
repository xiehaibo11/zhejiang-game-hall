
/* WARNING: Type propagation algorithm not settling */

void FUN_018280d0(__shared_weak_count *param_1)

{
  __shared_weak_count _Var1;
  
  *(undefined ***)param_1 = &PTR_FUN_01cdd700;
  if (((byte)param_1[0x60] & 1) == 0) {
    _Var1 = param_1[0x48];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    _Var1 = param_1[0x48];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    _Var1 = param_1[0x30];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    _Var1 = param_1[0x18];
  }
  if (((byte)_Var1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}

