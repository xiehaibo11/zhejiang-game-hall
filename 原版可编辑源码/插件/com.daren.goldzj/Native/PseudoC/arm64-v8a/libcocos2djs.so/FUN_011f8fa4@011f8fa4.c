
void FUN_011f8fa4(Cancelable *param_1)

{
  Cancelable *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(Cancelable **)(param_1 + 0x50);
  *(undefined ***)param_1 = &PTR_FUN_01cbbe28;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_01cbbe58;
  if (param_1 + 0x30 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (Cancelable *)0x0) goto LAB_011f8ff4;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_011f8ff4:
  v8::internal::Cancelable::~Cancelable(param_1);
  operator_delete(param_1);
  return;
}

