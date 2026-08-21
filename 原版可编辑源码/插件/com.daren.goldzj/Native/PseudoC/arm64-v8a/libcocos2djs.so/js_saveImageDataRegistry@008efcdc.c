
/* js_saveImageDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_saveImageDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  Image *this;
  uchar *puVar10;
  long lVar11;
  Value *pVVar12;
  Isolate *pIVar13;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  uint local_88;
  uint uStack_84;
  Data aDStack_80 [16];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar13);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_d0);
  plVar9 = (long *)se::State::args(aSStack_70);
  if (plVar9[1] - *plVar9 == 0x40) {
    cocos2d::Data::Data(aDStack_80);
    uVar4 = seval_to_Data((Value *)*plVar9,aDStack_80);
    uVar5 = seval_to_uint32((Value *)(*plVar9 + 0x10),&uStack_84);
    uVar6 = seval_to_uint32((Value *)(*plVar9 + 0x20),&local_88);
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    uVar7 = seval_to_std_string((Value *)(*plVar9 + 0x30),(basic_string *)&local_a0);
    if ((uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                          ,0x3eb,"js_saveImageData");
      __android_log_print(6,"jswrapper","js_saveImageData : Error processing arguments");
      bVar3 = 0;
    }
    else {
      this = operator_new(0x150);
      cocos2d::Image::Image(this);
      puVar10 = (uchar *)cocos2d::Data::getBytes(aDStack_80);
      lVar11 = cocos2d::Data::getSize(aDStack_80);
      cocos2d::Image::initWithRawData(this,puVar10,lVar11,uStack_84,local_88,8,false);
      bVar3 = cocos2d::Image::saveToFile(this,(basic_string *)&local_a0,false);
      pVVar12 = (Value *)se::State::rval(aSStack_70);
      se::Value::setBoolean(pVVar12,(bool)(bVar3 & 1));
      cocos2d::Ref::release((Ref *)this);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    cocos2d::Data::~Data(aDStack_80);
    if ((bVar3 & 1) != 0) goto LAB_008efec8;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 1014): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_saveImageData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                      ,0x3f9);
LAB_008efec8:
  pVVar12 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_d0;
  pVVar12 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

