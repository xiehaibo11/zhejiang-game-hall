
/* js_cocos2dx_dragonbones_Slot_getDisplayRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Slot_getDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Class *pCVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  type *ptVar9;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a0);
  lVar6 = se::State::nativeThisObject(aSStack_70);
  pCVar2 = __jsb_dragonBones_CCArmatureDisplay_class;
  ptVar9 = *(type **)(lVar6 + 0x170);
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  bVar4 = native_ptr_to_seval<dragonBones::CCArmatureDisplay>(ptVar9,pCVar2,pVVar7,(bool *)0x0);
  if (!bVar4) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x150,"js_cocos2dx_dragonbones_Slot_getDisplay");
    __android_log_print(6,"jswrapper","Convert dragonBones::DBCCSprite to se::Value failed!");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_Slot_getDisplay",&DAT_019268ae,0x153);
  }
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_a0;
  pVVar7 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

