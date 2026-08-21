
void FUN_00882e98(undefined8 *param_1)

{
  Value *pVVar1;
  Value *this;
  Value *pVVar2;
  
  pVVar2 = (Value *)*param_1;
  if (pVVar2 == (Value *)0x0) {
    return;
  }
  this = (Value *)param_1[1];
  pVVar1 = pVVar2;
  if (this != pVVar2) {
    do {
      this = this + -0x10;
      cocos2d::Value::clear(this);
    } while (pVVar2 != this);
    pVVar1 = (Value *)*param_1;
  }
  param_1[1] = pVVar2;
  operator_delete(pVVar1);
  return;
}

