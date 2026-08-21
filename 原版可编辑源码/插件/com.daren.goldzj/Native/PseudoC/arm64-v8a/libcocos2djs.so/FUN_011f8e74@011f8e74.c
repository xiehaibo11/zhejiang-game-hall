
void FUN_011f8e74(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  *(undefined ***)(param_1 + -4) = &PTR_FUN_01cbbdd0;
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01cbbe00;
  if (param_1 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_011f8ec8;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_011f8ec8:
  v8::internal::Cancelable::~Cancelable((Cancelable *)(param_1 + -4));
  return;
}

