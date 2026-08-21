
void FUN_015af958(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  Value *pVVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((int)param_1[2] < 1) {
    lVar4 = *param_1;
    pVVar5 = (Value *)(*(long *)(lVar4 + 8) + 0xa0);
  }
  else {
    lVar4 = *param_1;
    pVVar5 = (Value *)param_1[1];
  }
  uVar2 = v8::Isolate::GetCurrentContext(*(Isolate **)(lVar4 + 8));
  auVar6 = v8::Value::NumberValue(pVVar5,uVar2);
  if ((auVar6._0_8_ & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  if ((int)param_1[2] < 2) {
    lVar4 = *param_1;
    pVVar5 = (Value *)(*(long *)(lVar4 + 8) + 0xa0);
  }
  else {
    lVar4 = *param_1;
    pVVar5 = (Value *)(param_1[1] + -8);
  }
  uVar2 = v8::Isolate::GetCurrentContext(*(Isolate **)(lVar4 + 8));
  auVar7 = v8::Value::NumberValue(pVVar5,uVar2);
  if ((auVar7._0_8_ & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)v8::Number::New(*(Isolate **)(lVar4 + 8),auVar6._8_8_ - auVar7._8_8_);
  puVar1 = (undefined8 *)(lVar4 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  *(undefined8 *)(lVar4 + 0x18) = *puVar1;
  return;
}

