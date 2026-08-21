
void FUN_011f90a8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  Cancelable *this;
  
  this = (Cancelable *)(param_1 + -4);
  *(undefined ***)this = &PTR_FUN_01cbbe28;
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01cbbe58;
  if (param_1 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_011f90fc;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_011f90fc:
  v8::internal::Cancelable::~Cancelable(this);
  operator_delete(this);
  return;
}

