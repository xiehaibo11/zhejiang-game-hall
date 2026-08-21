
/* js_cocos2dx_dragonbones_Slot_get_displayIndexRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Slot_get_displayIndexRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  Value *pVVar5;
  ulong uVar6;
  char *pcVar7;
  Isolate *pIVar8;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x167,"js_cocos2dx_dragonbones_Slot_get_displayIndex");
    pcVar7 = "js_cocos2dx_dragonbones_Slot_get_displayIndex : Invalid Native Object";
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x100);
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    uVar6 = int32_to_seval(iVar1,pVVar5);
    if ((uVar6 & 1) != 0) goto LAB_00c91c10;
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x16b,"js_cocos2dx_dragonbones_Slot_get_displayIndex");
    pcVar7 = "js_cocos2dx_dragonbones_Slot_get_displayIndex to se::Value failed!";
  }
  __android_log_print(6,"jswrapper",pcVar7);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Slot_get_displayIndex",&DAT_019268ae,0x16e);
LAB_00c91c10:
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

