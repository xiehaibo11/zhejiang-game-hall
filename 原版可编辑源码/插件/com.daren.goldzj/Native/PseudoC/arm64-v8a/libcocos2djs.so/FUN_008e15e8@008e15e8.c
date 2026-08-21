
void FUN_008e15e8(undefined8 param_1,long param_2)

{
  byte bVar1;
  Value *pVVar2;
  Value *this;
  Value *pVVar3;
  
  pVVar3 = *(Value **)(param_2 + 0x50);
  if (pVVar3 != (Value *)0x0) {
    this = *(Value **)(param_2 + 0x58);
    pVVar2 = pVVar3;
    if (this != pVVar3) {
      do {
        this = this + -0x10;
        cocos2d::Value::~Value(this);
      } while (pVVar3 != this);
      pVVar2 = *(Value **)(param_2 + 0x50);
    }
    *(Value **)(param_2 + 0x58) = pVVar3;
    operator_delete(pVVar2);
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x48));
    bVar1 = *(byte *)(param_2 + 0x20);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 8);
  }
  else {
    operator_delete(*(void **)(param_2 + 0x30));
    bVar1 = *(byte *)(param_2 + 8);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 0x18));
    return;
  }
  return;
}

