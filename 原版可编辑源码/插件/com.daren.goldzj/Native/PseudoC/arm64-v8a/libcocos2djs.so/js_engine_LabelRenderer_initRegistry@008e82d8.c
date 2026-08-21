
/* js_engine_LabelRenderer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_LabelRenderer_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uchar *puVar4;
  Value *pVVar5;
  void *pvVar6;
  LabelRenderer *this;
  long *plVar7;
  Object *this_00;
  Object *this_01;
  Object *this_02;
  Value *pVVar8;
  Isolate *pIVar9;
  Value *local_110;
  Value *local_108;
  undefined8 local_100;
  HandleScope aHStack_f8 [24];
  uchar *local_e0;
  uchar *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  Color4B aCStack_a8 [4];
  Color4B aCStack_a4 [4];
  Color4B aCStack_a0 [4];
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  State aSStack_90 [40];
  Value aVStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_f8,pIVar9);
  local_110 = (Value *)0x0;
  local_108 = (Value *)0x0;
  local_100 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_110,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_110);
  pvVar6 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar6,(vector *)&local_110);
  this = (LabelRenderer *)se::State::nativeThisObject(aSStack_90);
  if (this == (LabelRenderer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                        ,0x27a,"js_engine_LabelRenderer_init");
    __android_log_print(6,"jswrapper","js_engine_LabelRenderer_init : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_90);
    lVar1 = *plVar7;
    lVar2 = plVar7[1];
    this_00 = (Object *)se::State::thisObject(aSStack_90);
    if (lVar2 - lVar1 == 0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b4 = 0;
      local_bc = 0x3f0000003f000000;
      local_ac = 0xffffffff;
      cocos2d::Color4B::Color4B(aCStack_a8);
      cocos2d::Color4B::Color4B(aCStack_a4);
      cocos2d::Color4B::Color4B(aCStack_a0);
      local_9c = 0;
      local_98 = 0x101;
      local_96 = 0;
      this_01 = (Object *)se::Object::createArrayBufferObject((void *)0x0,0xc);
      this_02 = (Object *)se::Object::createArrayBufferObject((void *)0x0,0x3c);
      se::Value::Value(aVStack_68,this_01,false);
      se::Object::setProperty(this_00,"_cfg",aVStack_68);
      se::Value::~Value(aVStack_68);
      se::Value::Value(aVStack_68,this_02,false);
      se::Object::setProperty(this_00,"_layout",aVStack_68);
      se::Value::~Value(aVStack_68);
      local_e0 = (uchar *)0x0;
      local_d8 = (uchar *)0x0;
      se::Object::getArrayBufferData(this_01,&local_d8,(ulong *)aVStack_68);
      se::Object::getArrayBufferData(this_02,&local_e0,(ulong *)aVStack_68);
      puVar4 = local_e0;
      local_d8[0] = 0xff;
      local_d8[1] = 0xff;
      local_d8[2] = 0xff;
      local_d8[3] = 0xff;
      local_d8[4] = '\0';
      local_d8[5] = '\0';
      local_d8[6] = 0xa0;
      local_d8[7] = 'A';
      local_d8[8] = '\0';
      local_d8[9] = '\0';
      local_d8[10] = '\0';
      local_d8[0xb] = '\0';
      puVar4[0x18] = '\0';
      puVar4[0x19] = '\0';
      puVar4[0x1a] = '\0';
      puVar4[0x1b] = '\0';
      puVar4[0x1c] = '\0';
      puVar4[0x1d] = '\0';
      puVar4[0x1e] = '\0';
      puVar4[0x1f] = '\0';
      puVar4[0x10] = '\0';
      puVar4[0x11] = '\0';
      puVar4[0x12] = '\0';
      puVar4[0x13] = '\0';
      puVar4[0x14] = '\0';
      puVar4[0x15] = '\0';
      puVar4[0x16] = '\0';
      puVar4[0x17] = '\0';
      puVar4[0x28] = '\0';
      puVar4[0x29] = '\0';
      puVar4[0x2a] = '\0';
      puVar4[0x2b] = '\0';
      puVar4[0x2c] = '\0';
      puVar4[0x2d] = '\0';
      puVar4[0x2e] = '\0';
      puVar4[0x2f] = '\0';
      puVar4[0x20] = '\0';
      puVar4[0x21] = '\0';
      puVar4[0x22] = '\0';
      puVar4[0x23] = '\0';
      puVar4[0x24] = '\0';
      puVar4[0x25] = '\0';
      puVar4[0x26] = '\0';
      puVar4[0x27] = '\0';
      puVar4[8] = '\0';
      puVar4[9] = '\0';
      puVar4[10] = '\0';
      puVar4[0xb] = '\0';
      puVar4[0xc] = '\0';
      puVar4[0xd] = '\0';
      puVar4[0xe] = '\0';
      puVar4[0xf] = '\0';
      puVar4[0] = '\0';
      puVar4[1] = '\0';
      puVar4[2] = '\0';
      puVar4[3] = '\0';
      puVar4[4] = '\0';
      puVar4[5] = '\0';
      puVar4[6] = '\0';
      puVar4[7] = '\0';
      puVar4[0x34] = '\0';
      puVar4[0x35] = '\0';
      puVar4[0x36] = '\0';
      puVar4[0x37] = '\0';
      puVar4[0x38] = '\0';
      puVar4[0x39] = '\0';
      puVar4[0x3a] = '\0';
      puVar4[0x3b] = '\0';
      puVar4[0x2c] = '\0';
      puVar4[0x2d] = '\0';
      puVar4[0x2e] = '\0';
      puVar4[0x2f] = '\0';
      puVar4[0x30] = '\0';
      puVar4[0x31] = '\0';
      puVar4[0x32] = '\0';
      puVar4[0x33] = '\0';
      puVar4[0x24] = 0xff;
      puVar4[0x25] = 0xff;
      puVar4[0x26] = 0xff;
      puVar4[0x27] = 0xff;
      puVar4[0x1c] = '\0';
      puVar4[0x1d] = '\0';
      puVar4[0x1e] = '\0';
      puVar4[0x1f] = '\0';
      puVar4[0x20] = '\0';
      puVar4[0x21] = '\0';
      puVar4[0x22] = '\0';
      puVar4[0x23] = '\0';
      puVar4[0x14] = '\0';
      puVar4[0x15] = '\0';
      puVar4[0x16] = '\0';
      puVar4[0x17] = '?';
      puVar4[0x18] = '\0';
      puVar4[0x19] = '\0';
      puVar4[0x1a] = '\0';
      puVar4[0x1b] = '?';
      cocos2d::Color4B::Color4B((Color4B *)(local_e0 + 0x28));
      cocos2d::Color4B::Color4B((Color4B *)(puVar4 + 0x2c));
      cocos2d::Color4B::Color4B((Color4B *)(puVar4 + 0x30));
      puVar4[0x34] = '\0';
      puVar4[0x35] = '\0';
      puVar4[0x36] = '\0';
      puVar4[0x37] = '\0';
      puVar4[0x3a] = '\0';
      puVar4[0x38] = '\x01';
      puVar4[0x39] = '\x01';
      cocos2d::LabelRenderer::bindSharedBlock(this,this_00,local_d8,local_e0);
      goto LAB_008e8590;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp, 664): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(lVar2 - lVar1) >> 4,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_LabelRenderer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                      ,0x29b);
LAB_008e8590:
  pVVar8 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_90);
  pVVar5 = local_110;
  pVVar8 = local_108;
  if (local_110 != (Value *)0x0) {
    while (pVVar8 != pVVar5) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_108 = pVVar5;
    operator_delete(local_110);
  }
  v8::HandleScope::~HandleScope(aHStack_f8);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

