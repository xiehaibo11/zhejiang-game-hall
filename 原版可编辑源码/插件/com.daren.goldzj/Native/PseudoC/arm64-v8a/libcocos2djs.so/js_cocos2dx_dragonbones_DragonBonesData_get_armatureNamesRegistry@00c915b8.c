
/* js_cocos2dx_dragonbones_DragonBonesData_get_armatureNamesRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_DragonBonesData_get_armatureNamesRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  Value *pVVar4;
  ulong uVar5;
  Isolate *pIVar6;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_88,pIVar6);
  pvVar2 = (void *)se::internal::getPrivate(pIVar6,*(long *)param_2 + 0x30);
  se::State::State(aSStack_70,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_70);
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  uVar5 = std_vector_string_to_seval((vector *)(lVar3 + 0x78),pVVar4);
  if ((uVar5 & 1) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x146,"js_cocos2dx_dragonbones_DragonBonesData_get_armatureNames");
    __android_log_print(6,"jswrapper","Convert ArmatureNames to se::Value failed!");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_DragonBonesData_get_armatureNames",&DAT_019268ae,
                        0x149);
  }
  pVVar4 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_70);
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

