
/* JSB_glBindFramebufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glBindFramebufferRegistry(FunctionCallbackInfo *param_1)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  Value *pVVar4;
  byte bVar5;
  void *pvVar6;
  long *plVar7;
  Object *this;
  long lVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [28];
  uint local_64;
  State aSStack_60 [40];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_80,pIVar10);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_98);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar6,(vector *)&local_98);
  plVar7 = (long *)se::State::args(aSStack_60);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x20) {
    bVar5 = seval_to_uint32((Value *)*plVar7,&local_64);
    bVar2 = *(byte *)(*plVar7 + 0x18);
    if (bVar2 == 5) {
      this = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x10));
      lVar8 = se::Object::getPrivateData(this);
      if (lVar8 != 0) {
        bVar5 = bVar5 & 1;
        goto joined_r0x008b5bc0;
      }
    }
    else {
      lVar8 = 0;
      bVar5 = bVar5 & bVar2 < 2;
joined_r0x008b5bc0:
      if (bVar5 != 0) {
        if (local_64 == 0x8d40) {
          puVar1 = &DAT_01d36ef8;
          if (lVar8 != 0) {
            puVar1 = (uint *)(lVar8 + 0xc);
          }
          cocos2d::ccBindFramebuffer(0x8d40,*puVar1);
          goto LAB_008b5b68;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x25e,"JSB_glBindFramebuffer");
        DAT_01d36f40 = 0x500;
        goto LAB_008b5b3c;
      }
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x25b,"JSB_glBindFramebuffer");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x255,"JSB_glBindFramebuffer");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008b5b3c:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glBindFramebuffer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x263);
LAB_008b5b68:
  pVVar9 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_60);
  pVVar4 = local_98;
  pVVar9 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar9 != pVVar4) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_90 = pVVar4;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

