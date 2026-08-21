
/* JSB_glBindTextureRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glBindTextureRegistry(FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  Value *pVVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  Object *this;
  long lVar7;
  Value *pVVar8;
  uint uVar9;
  Isolate *pIVar10;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar10);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_98);
  plVar6 = (long *)se::State::args(aSStack_60);
  if ((plVar6[1] - *plVar6 & 0xffffffff0U) == 0x20) {
    bVar4 = seval_to_uint32((Value *)*plVar6,&local_64);
    bVar1 = *(byte *)(*plVar6 + 0x18);
    if (bVar1 == 5) {
      this = (Object *)se::Value::toObject((Value *)(*plVar6 + 0x10));
      lVar7 = se::Object::getPrivateData(this);
      if (lVar7 != 0) {
        bVar4 = bVar4 & 1;
        goto joined_r0x008b619c;
      }
    }
    else {
      lVar7 = 0;
      bVar4 = bVar4 & bVar1 < 2;
joined_r0x008b619c:
      if (bVar4 != 0) {
        if ((local_64 == 0xde1) || (local_64 == 0x8513)) {
          if (lVar7 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(uint *)(lVar7 + 0xc);
          }
          cocos2d::ccBindTexture(local_64,uVar9);
          goto LAB_008b6144;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x286,"JSB_glBindTexture");
        DAT_01d36f40 = 0x500;
        goto LAB_008b6118;
      }
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x284,"JSB_glBindTexture");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x27d,"JSB_glBindTexture");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008b6118:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glBindTexture",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x28c);
LAB_008b6144:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_98;
  pVVar8 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_90 = pVVar3;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

