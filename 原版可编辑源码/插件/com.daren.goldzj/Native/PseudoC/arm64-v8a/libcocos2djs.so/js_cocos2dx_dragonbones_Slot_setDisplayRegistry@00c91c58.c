
/* js_cocos2dx_dragonbones_Slot_setDisplayRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Slot_setDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  Slot *pSVar5;
  Object *this;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [28];
  int local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar10);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a8);
  plVar4 = (long *)se::State::args(aSStack_70);
  uVar8 = (ulong)(plVar4[1] - *plVar4) >> 4;
  if ((int)uVar8 == 2) {
    pSVar5 = (Slot *)se::State::nativeThisObject(aSStack_70);
    pVVar9 = (Value *)*plVar4;
    if (pVVar9[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar9);
      lVar6 = se::Object::getPrivateData(this);
      if (lVar6 == 0) goto LAB_00c91d90;
      pVVar9 = (Value *)*plVar4;
LAB_00c91d6c:
      uVar8 = seval_to_int32(pVVar9 + 0x10,&local_74);
      if ((uVar8 & 1) != 0) {
        dragonBones::Slot::setDisplay(pSVar5,lVar6,local_74);
        goto LAB_00c91e3c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,0x17d,"js_cocos2dx_dragonbones_Slot_setDisplay");
      pcVar7 = "Convert se::Value to dragonBones::DisplayType failed!";
    }
    else {
      if ((byte)pVVar9[8] < 2) {
        lVar6 = 0;
        goto LAB_00c91d6c;
      }
LAB_00c91d90:
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,0x17a,"js_cocos2dx_dragonbones_Slot_setDisplay");
      pcVar7 = "Convert se::Value to dragonBones::DBCCSprite failed!";
    }
    __android_log_print(6,"jswrapper",pcVar7);
  }
  else {
    __android_log_print(6,"jswrapper",&DAT_01927670,uVar8,2);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_Slot_setDisplay",&DAT_019268ae,0x185);
LAB_00c91e3c:
  pVVar9 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar9 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

