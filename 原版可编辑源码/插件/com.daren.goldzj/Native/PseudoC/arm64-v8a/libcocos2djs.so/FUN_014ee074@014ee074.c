
undefined8
FUN_014ee074(undefined8 param_1,undefined8 param_2,Object *param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  Value *pVVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = v8::String::NewFromUtf8(param_1,param_4,0,0xffffffff);
  if (lVar1 == 0) {
    v8::V8::ToLocalEmpty();
  }
  pVVar2 = (Value *)v8::Object::Get(param_3,param_2,lVar1);
  uVar4 = 0;
  if (pVVar2 != (Value *)0x0) {
    lVar1 = v8::String::NewFromUtf8(param_1,param_5,0,0xffffffff);
    if (lVar1 == 0) {
      v8::V8::ToLocalEmpty();
    }
    uVar3 = v8::Value::StrictEquals(pVVar2,lVar1);
    uVar4 = 0x101;
    if ((uVar3 & 1) == 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

