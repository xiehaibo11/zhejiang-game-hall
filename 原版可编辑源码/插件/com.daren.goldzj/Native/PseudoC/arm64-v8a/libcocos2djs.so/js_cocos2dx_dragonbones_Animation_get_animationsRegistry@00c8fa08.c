
/* js_cocos2dx_dragonbones_Animation_get_animationsRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Animation_get_animationsRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  Object *pOVar6;
  Value *pVVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  Isolate *pIVar11;
  long *plVar12;
  HandleScope aHStack_a0 [24];
  Object *local_88;
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  pvVar4 = (void *)se::internal::getPrivate(pIVar11,*(long *)param_2 + 0x30);
  se::State::State(aSStack_80,pvVar4);
  lVar5 = se::State::nativeThisObject(aSStack_80);
  pOVar6 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_88,pOVar6);
  se::Value::Value(aVStack_58);
  plVar12 = *(long **)(lVar5 + 0x50);
joined_r0x00c8faa4:
  do {
    if (plVar12 == (long *)(lVar5 + 0x58)) {
      pVVar7 = (Value *)se::State::rval(aSStack_80);
      se::Value::setObject(pVVar7,(HandleObject *)&local_88,false);
      se::Value::~Value(aVStack_58);
      se::HandleObject::~HandleObject((HandleObject *)&local_88);
LAB_00c8fc10:
      pVVar7 = (Value *)se::State::rval(aSStack_80);
      se::internal::setReturnValue(pVVar7,param_2);
      se::State::~State(aSStack_80);
      v8::HandleScope::~HandleScope(aHStack_a0);
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    bVar1 = *(byte *)(plVar12 + 4);
    if ((bVar1 & 1) != 0) {
      if (plVar12[5] != 0) goto LAB_00c8fad8;
LAB_00c8fac4:
      plVar9 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) goto LAB_00c8fb28;
LAB_00c8fb18:
      do {
        plVar12 = plVar9;
        plVar9 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
      goto joined_r0x00c8faa4;
    }
    if (bVar1 >> 1 == 0) goto LAB_00c8fac4;
LAB_00c8fad8:
    bVar3 = native_ptr_to_rooted_seval<dragonBones::AnimationData>
                      ((type *)plVar12[7],__jsb_dragonBones_AnimationData_class,aVStack_58,
                       (bool *)0x0);
    if (!bVar3) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          &DAT_019268ae,0x4b,&DAT_01926923);
      __android_log_print(6,"jswrapper","Convert dragonBones::AnimationData to se::Value failed!");
      se::Value::~Value(aVStack_58);
      se::HandleObject::~HandleObject((HandleObject *)&local_88);
      __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                          &DAT_01926923,&DAT_019268ae,0x52);
      goto LAB_00c8fc10;
    }
    if ((*(byte *)(plVar12 + 4) & 1) == 0) {
      pcVar8 = (char *)((long)plVar12 + 0x21);
    }
    else {
      pcVar8 = (char *)plVar12[6];
    }
    se::Object::setProperty(local_88,pcVar8,aVStack_58);
    plVar9 = (long *)plVar12[1];
    if ((long *)plVar12[1] != (long *)0x0) goto LAB_00c8fb18;
LAB_00c8fb28:
    plVar9 = plVar12 + 2;
    bVar3 = *(long **)*plVar9 != plVar12;
    plVar12 = (long *)*plVar9;
    if (bVar3) {
      do {
        lVar10 = *plVar9;
        plVar9 = (long *)(lVar10 + 0x10);
        plVar12 = (long *)*plVar9;
      } while (*plVar12 != lVar10);
    }
  } while( true );
}

