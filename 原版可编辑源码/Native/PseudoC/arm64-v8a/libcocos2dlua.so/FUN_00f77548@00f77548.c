
void FUN_00f77548(void *param_1)

{
  Value *pVVar1;
  long *plVar2;
  code *pcVar3;
  Value *this;
  Value *pVVar4;
  
  pVVar4 = *(Value **)((long)param_1 + 0x70);
  if (pVVar4 != (Value *)0x0) {
    this = *(Value **)((long)param_1 + 0x78);
    pVVar1 = pVVar4;
    if (this != pVVar4) {
      do {
        this = this + -0x10;
        cocos2d::Value::~Value(this);
      } while (pVVar4 != this);
      pVVar1 = *(Value **)((long)param_1 + 0x70);
    }
    *(Value **)((long)param_1 + 0x78) = pVVar4;
    operator_delete(pVVar1);
  }
  plVar2 = *(long **)((long)param_1 + 0x60);
  if ((long *)((long)param_1 + 0x40) == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00f775c4;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00f775c4:
  if ((*(byte *)((long)param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x30));
  }
  operator_delete(param_1);
  return;
}

