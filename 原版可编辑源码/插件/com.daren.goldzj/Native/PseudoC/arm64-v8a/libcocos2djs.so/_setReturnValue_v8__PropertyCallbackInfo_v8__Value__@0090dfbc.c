
/* void se::internal::_setReturnValue<v8::PropertyCallbackInfo<v8::Value> >(se::Value const&,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void se::internal::_setReturnValue<v8::PropertyCallbackInfo<v8::Value>>
               (Value *param_1,PropertyCallbackInfo *param_2)

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
    puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0xa0);
    break;
  case (Value)0x1:
    lVar7 = *(long *)param_2;
    puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0xb0);
    break;
  case (Value)0x2:
    lVar7 = *(long *)param_2;
    pIVar6 = *(Isolate **)(lVar7 + 0x10);
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    dVar11 = (double)se::Value::toNumber(param_1);
    puVar4 = (undefined8 *)v8::Number::New(pIVar6,dVar11);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(lVar7 + 0x18);
    }
    goto LAB_0090e0cc;
  case (Value)0x3:
    lVar7 = *(long *)param_2;
    lVar10 = *(long *)(lVar7 + 0x10);
    uVar2 = se::Value::toBoolean(param_1);
    lVar1 = 0xb8;
    if ((uVar2 & 1) == 0) {
      lVar1 = 0xc0;
    }
    puVar4 = (undefined8 *)(lVar1 + lVar10);
    goto joined_r0x0090e0c8;
  case (Value)0x4:
    uVar8 = *(undefined8 *)(*(long *)param_2 + 0x10);
    pbVar3 = (byte *)se::Value::toString(param_1);
    pbVar5 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar5 = pbVar3 + 1;
    }
    puVar4 = (undefined8 *)v8::String::NewFromUtf8(uVar8,pbVar5,0,0xffffffff);
    lVar7 = *(long *)param_2;
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    if (puVar4 != (undefined8 *)0x0) goto LAB_0090e0cc;
    v8::V8::ToLocalEmpty();
    goto LAB_0090e0e4;
  case (Value)0x5:
    lVar7 = *(long *)param_2;
    this = (Object *)se::Value::toObject(param_1);
    puVar4 = (undefined8 *)Object::_getJSObject(this);
joined_r0x0090e0c8:
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    if (puVar4 == (undefined8 *)0x0) {
LAB_0090e0e4:
      puVar4 = (undefined8 *)(lVar7 + 0x18);
    }
    goto LAB_0090e0cc;
  default:
    goto switchD_0090dff0_default;
  }
  puVar9 = (undefined8 *)(lVar7 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(lVar7 + 0x18);
  }
LAB_0090e0cc:
  *puVar9 = *puVar4;
switchD_0090dff0_default:
  return;
}

