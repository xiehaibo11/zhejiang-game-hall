
/* js_cocos2dx_dragonbones_Armature_getReplacedTextureRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Armature_getReplacedTextureRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Class *pCVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  Value *pVVar8;
  char *pcVar9;
  Isolate *pIVar10;
  type *ptVar11;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar10);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_90);
  lVar6 = se::State::nativeThisObject(aSStack_60);
  if (lVar6 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0xe1,"js_cocos2dx_dragonbones_Armature_getReplacedTexture");
    pcVar9 = "js_cocos2dx_dragonbones_Armature_getReplacedTexture : Invalid Native Object";
LAB_00c90bac:
    __android_log_print(6,"jswrapper",pcVar9);
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    pCVar2 = __jsb_cocos2d_middleware_Texture2D_class;
    if (plVar7[1] - *plVar7 == 0) {
      ptVar11 = *(type **)(lVar6 + 200);
      pVVar8 = (Value *)se::State::rval(aSStack_60);
      bVar4 = native_ptr_to_seval<cocos2d::middleware::Texture2D>(ptVar11,pCVar2,pVVar8,(bool *)0x0)
      ;
      if (bVar4) goto LAB_00c90be4;
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,0xe8,"js_cocos2dx_dragonbones_Armature_getReplacedTexture");
      pcVar9 = "js_cocos2dx_dragonbones_Armature_getReplacedTexture : Error processing arguments";
      goto LAB_00c90bac;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_dragonbones_manual.cpp, 235): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar7[1] - *plVar7) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Armature_getReplacedTexture",&DAT_019268ae,0xee);
LAB_00c90be4:
  pVVar8 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_90;
  pVVar8 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_88 = pVVar3;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

