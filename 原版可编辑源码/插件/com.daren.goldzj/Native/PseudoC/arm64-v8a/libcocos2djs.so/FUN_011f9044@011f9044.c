
void FUN_011f9044(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  *(undefined ***)(param_1 + -4) = &PTR_FUN_01cbbe28;
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01cbbe58;
  if (param_1 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_011f9098;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_011f9098:
  v8::internal::Cancelable::~Cancelable((Cancelable *)(param_1 + -4));
  return;
}

