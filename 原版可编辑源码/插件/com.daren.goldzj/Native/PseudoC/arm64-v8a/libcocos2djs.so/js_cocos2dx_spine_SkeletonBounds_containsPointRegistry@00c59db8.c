
/* js_cocos2dx_spine_SkeletonBounds_containsPointRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonBounds_containsPointRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  SkeletonBounds *this;
  long *plVar6;
  Value *pVVar7;
  ulong uVar8;
  type *ptVar9;
  Object *this_00;
  Polygon *pPVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  Isolate *pIVar14;
  ulong uVar15;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  float local_78;
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar14);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a8);
  this = (SkeletonBounds *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonBounds *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x264d,"js_cocos2dx_spine_SkeletonBounds_containsPoint");
    pcVar11 = "js_cocos2dx_spine_SkeletonBounds_containsPoint : Invalid Native Object";
LAB_00c59f3c:
    __android_log_print(6,"jswrapper",pcVar11);
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    pVVar7 = (Value *)*plVar6;
    uVar15 = plVar6[1] - (long)pVVar7;
    lVar13 = (long)uVar15 >> 4;
    if (lVar13 == 3) {
      if (pVVar7[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar7);
        pPVar10 = (Polygon *)se::Object::getPrivateData(this_00);
        if (pPVar10 != (Polygon *)0x0) {
          pVVar7 = (Value *)*plVar6;
LAB_00c59f7c:
          local_74 = 0.0;
          uVar8 = seval_to_float(pVVar7 + 0x10,&local_74);
          if ((uVar8 & 1) != 0) {
            local_78 = 0.0;
            uVar8 = seval_to_float((Value *)(*plVar6 + 0x20),&local_78);
            if ((uVar8 & 1) != 0) {
              bVar4 = spine::SkeletonBounds::containsPoint(this,pPVar10,local_74,local_78);
              pVVar7 = (Value *)se::State::rval(aSStack_70);
              uVar15 = boolean_to_seval((bool)(bVar4 & 1),pVVar7);
              if ((uVar15 & 1) != 0) goto LAB_00c5a058;
              uVar12 = 0x266c;
              goto LAB_00c59ffc;
            }
          }
        }
      }
      else if ((byte)pVVar7[8] < 2) {
        pPVar10 = (Polygon *)0x0;
        goto LAB_00c59f7c;
      }
    }
    else if (lVar13 == 2) {
      local_74 = 0.0;
      uVar8 = seval_to_float(pVVar7,&local_74);
      if ((uVar8 & 1) != 0) {
        local_78 = 0.0;
        uVar8 = seval_to_float((Value *)(*plVar6 + 0x10),&local_78);
        if ((uVar8 & 1) != 0) {
          ptVar9 = (type *)spine::SkeletonBounds::containsPoint(this,local_74,local_78);
          pVVar7 = (Value *)se::State::rval(aSStack_70);
          bVar3 = native_ptr_to_rooted_seval<spine::BoundingBoxAttachment>
                            (ptVar9,pVVar7,(bool *)0x0);
          if (bVar3) goto LAB_00c5a058;
          uVar12 = 0x265a;
LAB_00c59ffc:
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,uVar12,"js_cocos2dx_spine_SkeletonBounds_containsPoint");
          pcVar11 = "js_cocos2dx_spine_SkeletonBounds_containsPoint : Error processing arguments";
          goto LAB_00c59f3c;
        }
      }
    }
    __android_log_print(6,"jswrapper",&DAT_01912767,uVar15 >> 4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonBounds_containsPoint",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2674);
LAB_00c5a058:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

