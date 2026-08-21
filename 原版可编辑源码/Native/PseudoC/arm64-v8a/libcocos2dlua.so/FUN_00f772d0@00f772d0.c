
void FUN_00f772d0(undefined8 *param_1)

{
  Value *pVVar1;
  long *plVar2;
  code *pcVar3;
  Value *this;
  Value *pVVar4;
  
  pVVar4 = (Value *)param_1[0xe];
  *param_1 = &PTR_FUN_01720cc0;
  if (pVVar4 != (Value *)0x0) {
    this = (Value *)param_1[0xf];
    pVVar1 = pVVar4;
    if (this != pVVar4) {
      do {
        this = this + -0x10;
        cocos2d::Value::~Value(this);
      } while (pVVar4 != this);
      pVVar1 = (Value *)param_1[0xe];
    }
    param_1[0xf] = pVVar4;
    operator_delete(pVVar1);
  }
  plVar2 = (long *)param_1[0xc];
  if (param_1 + 8 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00f77358;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00f77358:
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
    return;
  }
  return;
}

