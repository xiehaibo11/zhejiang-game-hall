
/* js_cocos2dx_dragonbones_Armature_getBonesRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_cocos2dx_dragonbones_Armature_getBonesRegistry(FunctionCallbackInfo *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  Object *pOVar7;
  Value *pVVar8;
  uint uVar9;
  Isolate *pIVar10;
  undefined8 *puVar11;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  Object *local_88;
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar10);
  local_b8 = operator_new(0xa0);
  local_a8 = local_b8 + 0xa0;
  local_b0 = local_b8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar5,(vector *)&local_b8);
  lVar6 = se::State::nativeThisObject(aSStack_80);
  pOVar7 = (Object *)
           se::Object::createArrayObject(*(long *)(lVar6 + 0x68) - *(long *)(lVar6 + 0x60) >> 3);
  se::HandleObject::HandleObject((HandleObject *)&local_88,pOVar7);
  se::Value::Value(aVStack_58);
  puVar11 = *(undefined8 **)(lVar6 + 0x60);
  puVar1 = *(undefined8 **)(lVar6 + 0x68);
  if (puVar11 != puVar1) {
    uVar9 = 0;
    do {
      bVar4 = native_ptr_to_rooted_seval<dragonBones::Bone>((type *)*puVar11,aVStack_58,(bool *)0x0)
      ;
      if (!bVar4) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            &DAT_019268ae,0x9c,&DAT_019269aa);
        __android_log_print(6,"jswrapper","Convert getBones to se::Value failed!");
        se::Value::~Value(aVStack_58);
        se::HandleObject::~HandleObject((HandleObject *)&local_88);
        __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                            &DAT_019269aa,&DAT_019268ae,0x9f);
        goto LAB_00c90244;
      }
      se::Object::setArrayElement(local_88,uVar9,aVStack_58);
      puVar11 = puVar11 + 1;
      uVar9 = uVar9 + 1;
    } while (puVar1 != puVar11);
  }
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::Value::setObject(pVVar8,(HandleObject *)&local_88,false);
  se::Value::~Value(aVStack_58);
  se::HandleObject::~HandleObject((HandleObject *)&local_88);
LAB_00c90244:
  pVVar8 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_b8;
  pVVar8 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar8 != pVVar3) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_b0 = pVVar3;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

