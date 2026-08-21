
/* js_cocos2dx_dragonbones_Armature_setReplacedTextureRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Armature_setReplacedTextureRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  Armature *this;
  undefined8 *puVar4;
  Value *pVVar5;
  Object *this_00;
  char *pcVar6;
  Isolate *pIVar7;
  Value *local_90;
  Value *local_88;
  Value *local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  local_90 = operator_new(0xa0);
  local_80 = local_90 + 0xa0;
  local_88 = local_90;
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  this = (Armature *)se::State::nativeThisObject(aSStack_60);
  if (this == (Armature *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0xce,&DAT_01926a38);
    pcVar6 = "js_cocos2dx_dragonbones_Armature_setReplacedTexture : Invalid Native Object";
LAB_00c90978:
    __android_log_print(6,"jswrapper",pcVar6);
  }
  else {
    puVar4 = (undefined8 *)se::State::args(aSStack_60);
    pVVar5 = (Value *)*puVar4;
    if (puVar4[1] - (long)pVVar5 == 0x10) {
      if (pVVar5[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar5);
        pvVar3 = (void *)se::Object::getPrivateData(this_00);
        if (pvVar3 != (void *)0x0) {
LAB_00c90934:
          dragonBones::Armature::setReplacedTexture(this,pvVar3);
          goto LAB_00c909b0;
        }
      }
      else if ((byte)pVVar5[8] < 2) {
        pvVar3 = (void *)0x0;
        goto LAB_00c90934;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,0xd5,&DAT_01926a38);
      pcVar6 = "js_cocos2dx_dragonbones_Armature_setReplacedTexture : Error processing arguments";
      goto LAB_00c90978;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/manual/jsb_dragonbones_manual.cpp, 217): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(puVar4[1] - (long)pVVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_01926a38,
                      &DAT_019268ae,0xdc);
LAB_00c909b0:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar5 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar5 != pVVar2) {
      se::Value::~Value(pVVar5 + -0x10);
      pVVar5 = pVVar5 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

