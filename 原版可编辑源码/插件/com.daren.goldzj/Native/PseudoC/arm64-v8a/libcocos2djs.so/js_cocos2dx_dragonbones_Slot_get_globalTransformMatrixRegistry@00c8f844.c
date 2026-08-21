
/* js_cocos2dx_dragonbones_Slot_get_globalTransformMatrixRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Slot_get_globalTransformMatrixRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  Value *pVVar6;
  char *pcVar7;
  Isolate *pIVar8;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x2f,"js_cocos2dx_dragonbones_Slot_get_globalTransformMatrix");
    pcVar7 = "js_cocos2dx_dragonbones_Slot_get_globalTransformMatrix : Invalid Native Object";
LAB_00c8f988:
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      bVar2 = native_ptr_to_rooted_seval<dragonBones::Matrix>
                        ((type *)(lVar4 + 0x10),pVVar6,(bool *)0x0);
      if (bVar2) goto LAB_00c8f9c0;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,0x37,
                          "js_cocos2dx_dragonbones_Slot_get_globalTransformMatrix");
      pcVar7 = "js_cocos2dx_dragonbones_Slot_get_globalTransformMatrix : Error processing arguments"
      ;
      goto LAB_00c8f988;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_dragonbones_manual.cpp, 58): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Slot_get_globalTransformMatrix",&DAT_019268ae,0x3d);
LAB_00c8f9c0:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

