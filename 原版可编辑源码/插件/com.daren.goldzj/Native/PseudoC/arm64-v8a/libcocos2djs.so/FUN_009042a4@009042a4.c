
void FUN_009042a4(undefined8 *param_1)

{
  Value *pVVar1;
  Value *pVVar2;
  
  pVVar2 = (Value *)*param_1;
  if (pVVar2 != (Value *)0x0) {
    pVVar1 = (Value *)param_1[1];
    while (pVVar2 != pVVar1) {
      pVVar1 = pVVar1 + -0x10;
      se::Value::reset(pVVar1,0);
    }
    param_1[1] = pVVar2;
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

