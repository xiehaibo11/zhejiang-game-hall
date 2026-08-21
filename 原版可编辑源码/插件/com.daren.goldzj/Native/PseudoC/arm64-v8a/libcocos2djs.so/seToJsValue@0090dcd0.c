
/* se::internal::seToJsValue(v8::Isolate*, se::Value const&, v8::Local<v8::Value>*) */

void se::internal::seToJsValue(Isolate *param_1,Value *param_2,Local *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  Object *this;
  undefined8 uVar4;
  Isolate *pIVar5;
  byte *pbVar6;
  double dVar7;
  
  switch(param_2[8]) {
  case (Value)0x0:
    pIVar5 = param_1 + 0xa0;
    goto LAB_0090dd4c;
  case (Value)0x1:
    pIVar5 = param_1 + 0xb0;
    goto LAB_0090dd4c;
  case (Value)0x2:
    dVar7 = (double)se::Value::toNumber(param_2);
    uVar4 = v8::Number::New(param_1,dVar7);
    *(undefined8 *)param_3 = uVar4;
    break;
  case (Value)0x3:
    uVar1 = se::Value::toBoolean(param_2);
    lVar3 = 0xb8;
    if ((uVar1 & 1) == 0) {
      lVar3 = 0xc0;
    }
    pIVar5 = param_1 + lVar3;
LAB_0090dd4c:
    *(Isolate **)param_3 = pIVar5;
    break;
  case (Value)0x4:
    pbVar2 = (byte *)se::Value::toString(param_2);
    pbVar6 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      pbVar6 = pbVar2 + 1;
    }
    lVar3 = v8::String::NewFromUtf8(param_1,pbVar6,0,0xffffffff);
    if (lVar3 == 0) {
      *(undefined8 *)param_3 = 0;
    }
    else {
      *(long *)param_3 = lVar3;
    }
    break;
  case (Value)0x5:
    this = (Object *)se::Value::toObject(param_2);
    uVar4 = Object::_getJSObject(this);
    *(undefined8 *)param_3 = uVar4;
  }
  return;
}

