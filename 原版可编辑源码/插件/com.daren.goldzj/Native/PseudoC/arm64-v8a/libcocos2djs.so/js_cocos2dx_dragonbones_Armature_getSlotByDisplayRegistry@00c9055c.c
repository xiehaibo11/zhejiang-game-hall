
/* js_cocos2dx_dragonbones_Armature_getSlotByDisplayRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_Armature_getSlotByDisplayRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  void *pvVar4;
  Armature *this;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this_00;
  type *ptVar7;
  undefined *puVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
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
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_90);
  this = (Armature *)se::State::nativeThisObject(aSStack_60);
  if (this == (Armature *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0xb9,&DAT_01926a06);
    puVar8 = &DAT_01927096;
LAB_00c90730:
    __android_log_print(6,"jswrapper",puVar8);
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar6);
        pvVar4 = (void *)se::Object::getPrivateData(this_00);
        if (pvVar4 != (void *)0x0) goto LAB_00c906a4;
LAB_00c906f8:
        uVar9 = 0xc0;
      }
      else {
        if (1 < (byte)pVVar6[8]) goto LAB_00c906f8;
        pvVar4 = (void *)0x0;
LAB_00c906a4:
        ptVar7 = (type *)dragonBones::Armature::getSlotByDisplay(this,pvVar4);
        pVVar6 = (Value *)se::State::rval(aSStack_60);
        bVar3 = native_ptr_to_rooted_seval<dragonBones::Slot>(ptVar7,pVVar6,(bool *)0x0);
        if (bVar3) goto LAB_00c90768;
        uVar9 = 0xc3;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,uVar9,&DAT_01926a06);
      puVar8 = &DAT_019270e0;
      goto LAB_00c90730;
    }
    __android_log_print(6,"jswrapper",&DAT_0192712f,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_01926a06,
                      &DAT_019268ae,0xc9);
LAB_00c90768:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
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

