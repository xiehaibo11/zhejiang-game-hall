
void FUN_0092714c(undefined8 *param_1)

{
  undefined8 *puVar1;
  thread *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = puVar2;
  if (puVar3 != puVar2) {
    do {
      puVar3 = puVar3 + -1;
      this = (thread *)*puVar3;
      *puVar3 = 0;
      if (this != (thread *)0x0) {
        std::__ndk1::thread::~thread(this);
        operator_delete(this);
      }
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar2;
  operator_delete(puVar1);
  return;
}

