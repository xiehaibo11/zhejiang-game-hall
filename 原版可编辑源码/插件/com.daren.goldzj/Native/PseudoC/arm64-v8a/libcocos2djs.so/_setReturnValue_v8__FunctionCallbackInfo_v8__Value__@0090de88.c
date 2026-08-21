
/* void se::internal::_setReturnValue<v8::FunctionCallbackInfo<v8::Value> >(se::Value const&,
   v8::FunctionCallbackInfo<v8::Value> const&) */

void se::internal::_setReturnValue<v8::FunctionCallbackInfo<v8::Value>>
               (Value *param_1,FunctionCallbackInfo *param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  Object *this;
  undefined8 *puVar4;
  byte *pbVar5;
  Isolate *pIVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  
  switch(param_1[8]) {
  case (Value)0x0:
    lVar7 = *(long *)param_2;
    puVar4 = (undefined8 *)(*(long *)(lVar7 + 8) + 0xa0);
    break;
  case (Value)0x1:
    lVar7 = *(long *)param_2;
    puVar4 = (undefined8 *)(*(long *)(lVar7 + 8) + 0xb0);
    break;
  case (Value)0x2:
    lVar7 = *(long *)param_2;
    pIVar6 = *(Isolate **)(lVar7 + 8);
    puVar9 = (undefined8 *)(lVar7 + 0x18);
    dVar11 = (double)se::Value::toNumber(param_1);
    puVar4 = (undefined8 *)v8::Number::New(pIVar6,dVar11);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(lVar7 + 0x10);
    }
    goto LAB_0090df98;
  case (Value)0x3:
    lVar7 = *(long *)param_2;
    lVar10 = *(long *)(lVar7 + 8);
    uVar2 = se::Value::toBoolean(param_1);
    lVar1 = 0xb8;
    if ((uVar2 & 1) == 0) {
      lVar1 = 0xc0;
    }
    puVar4 = (undefined8 *)(lVar1 + lVar10);
    goto joined_r0x0090df94;
  case (Value)0x4:
    uVar8 = *(undefined8 *)(*(long *)param_2 + 8);
    pbVar3 = (byte *)se::Value::toString(param_1);
    pbVar5 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar5 = pbVar3 + 1;
    }
    puVar4 = (undefined8 *)v8::String::NewFromUtf8(uVar8,pbVar5,0,0xffffffff);
    lVar7 = *(long *)param_2;
    puVar9 = (undefined8 *)(lVar7 + 0x18);
    if (puVar4 != (undefined8 *)0x0) goto LAB_0090df98;
    v8::V8::ToLocalEmpty();
    goto LAB_0090dfb0;
  case (Value)0x5:
    lVar7 = *(long *)param_2;
    this = (Object *)se::Value::toObject(param_1);
    puVar4 = (undefined8 *)Object::_getJSObject(this);
joined_r0x0090df94:
    puVar9 = (undefined8 *)(lVar7 + 0x18);
    if (puVar4 == (undefined8 *)0x0) {
LAB_0090dfb0:
      puVar4 = (undefined8 *)(lVar7 + 0x10);
    }
    goto LAB_0090df98;
  default:
    goto switchD_0090debc_default;
  }
  puVar9 = (undefined8 *)(lVar7 + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(lVar7 + 0x10);
  }
LAB_0090df98:
  *puVar9 = *puVar4;
switchD_0090debc_default:
  return;
}

