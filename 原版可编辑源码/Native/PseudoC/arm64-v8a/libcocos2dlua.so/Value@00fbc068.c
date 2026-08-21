
/* cocos2d::Value::Value(std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   >&&) */

void __thiscall cocos2d::Value::Value(Value *this,vector *param_1)

{
  undefined8 *puVar1;
  Value *pVVar2;
  Value *this_00;
  undefined8 *puVar3;
  Value *pVVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(this + 8) = 8;
  puVar1 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar3 = puVar1;
  }
  *(undefined8 **)this = puVar1;
  pVVar4 = (Value *)*puVar3;
  if (pVVar4 != (Value *)0x0) {
    this_00 = (Value *)puVar3[1];
    pVVar2 = pVVar4;
    if (this_00 != pVVar4) {
      do {
        this_00 = this_00 + -0x10;
        clear(this_00);
      } while (pVVar4 != this_00);
      pVVar2 = (Value *)*puVar3;
    }
    puVar3[1] = pVVar4;
    operator_delete(pVVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  uVar5 = *(undefined8 *)param_1;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  *puVar3 = uVar5;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

