
/* js_renderer_BaseRenderer_prop_getProgramLibRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_renderer_BaseRenderer_prop_getProgramLibRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  Value *pVVar5;
  Isolate *pIVar6;
  type *ptVar7;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar6);
  pvVar2 = (void *)se::internal::getPrivate(pIVar6,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_60);
  if (lVar3 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x162,"js_renderer_BaseRenderer_prop_getProgramLib");
    __android_log_print(6,"jswrapper",
                        "js_renderer_BaseRenderer_prop_getProgramLib: Invalid Native Object.");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_60);
    if (plVar4[1] - *plVar4 == 0) {
      ptVar7 = *(type **)(lVar3 + 0x18);
      pVVar5 = (Value *)se::State::rval(aSStack_60);
      native_ptr_to_seval<cocos2d::renderer::ProgramLib>(ptVar7,pVVar5,(bool *)0x0);
      goto LAB_0095f354;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp, 364): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar4[1] - *plVar4) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_BaseRenderer_prop_getProgramLib",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                      ,0x16f);
LAB_0095f354:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

