
/* WARNING: Removing unreachable block (ram,0x00c59cfc) */
/* js_cocos2dx_spine_SkeletonBounds_intersectsSegmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonBounds_intersectsSegmentRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  SkeletonBounds *this;
  long *plVar6;
  Value *pVVar7;
  Object *this_00;
  Polygon *pPVar8;
  type *ptVar9;
  ulong uVar10;
  long lVar11;
  Isolate *pIVar12;
  ulong uVar13;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [24];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_98,pIVar12);
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_b0);
  this = (SkeletonBounds *)se::State::nativeThisObject(aSStack_70);
  if (this == (SkeletonBounds *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x2614,"js_cocos2dx_spine_SkeletonBounds_intersectsSegment");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonBounds_intersectsSegment : Invalid Native Object"
                       );
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_70);
    pVVar7 = (Value *)*plVar6;
    uVar13 = plVar6[1] - (long)pVVar7;
    lVar11 = (long)uVar13 >> 4;
    if (lVar11 == 4) {
      local_74 = 0.0;
      uVar10 = seval_to_float(pVVar7,&local_74);
      if ((uVar10 & 1) != 0) {
        local_78 = 0.0;
        uVar10 = seval_to_float((Value *)(*plVar6 + 0x10),&local_78);
        if ((uVar10 & 1) != 0) {
          local_7c = 0.0;
          uVar10 = seval_to_float((Value *)(*plVar6 + 0x20),&local_7c);
          if ((uVar10 & 1) != 0) {
            local_80 = 0.0;
            uVar10 = seval_to_float((Value *)(*plVar6 + 0x30),&local_80);
            if ((uVar10 & 1) != 0) {
              ptVar9 = (type *)spine::SkeletonBounds::intersectsSegment
                                         (this,local_74,local_78,local_7c,local_80);
              pVVar7 = (Value *)se::State::rval(aSStack_70);
              bVar3 = native_ptr_to_rooted_seval<spine::BoundingBoxAttachment>
                                (ptVar9,pVVar7,(bool *)0x0);
              if (bVar3) {
                bVar3 = true;
              }
              else {
                __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                    "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                    ,0x263f,"js_cocos2dx_spine_SkeletonBounds_intersectsSegment");
                __android_log_print(6,"jswrapper",
                                    "js_cocos2dx_spine_SkeletonBounds_intersectsSegment : Error processing arguments"
                                   );
                bVar3 = false;
              }
LAB_00c59dac:
              if (bVar3) goto LAB_00c59c6c;
              goto LAB_00c59c40;
            }
          }
        }
      }
    }
    else if (lVar11 == 5) {
      if (pVVar7[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar7);
        pPVar8 = (Polygon *)se::Object::getPrivateData(this_00);
        if (pPVar8 != (Polygon *)0x0) {
          pVVar7 = (Value *)*plVar6;
LAB_00c59b78:
          local_74 = 0.0;
          uVar10 = seval_to_float(pVVar7 + 0x10,&local_74);
          if ((uVar10 & 1) != 0) {
            local_78 = 0.0;
            uVar10 = seval_to_float((Value *)(*plVar6 + 0x20),&local_78);
            if ((uVar10 & 1) != 0) {
              local_7c = 0.0;
              uVar10 = seval_to_float((Value *)(*plVar6 + 0x30),&local_7c);
              if ((uVar10 & 1) != 0) {
                local_80 = 0.0;
                uVar10 = seval_to_float((Value *)(*plVar6 + 0x40),&local_80);
                if ((uVar10 & 1) != 0) {
                  bVar4 = spine::SkeletonBounds::intersectsSegment
                                    (this,pPVar8,local_74,local_78,local_7c,local_80);
                  pVVar7 = (Value *)se::State::rval(aSStack_70);
                  uVar13 = boolean_to_seval((bool)(bVar4 & 1),pVVar7);
                  if ((uVar13 & 1) == 0) {
                    __android_log_print(6,"jswrapper",
                                        "jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                        ,0x262a,"js_cocos2dx_spine_SkeletonBounds_intersectsSegment"
                                       );
                    __android_log_print(6,"jswrapper",
                                        "js_cocos2dx_spine_SkeletonBounds_intersectsSegment : Error processing arguments"
                                       );
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  goto LAB_00c59dac;
                }
              }
            }
          }
        }
      }
      else if ((byte)pVVar7[8] < 2) {
        pPVar8 = (Polygon *)0x0;
        goto LAB_00c59b78;
      }
    }
    __android_log_print(6,"jswrapper",&DAT_01912630,uVar13 >> 4);
  }
LAB_00c59c40:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_spine_SkeletonBounds_intersectsSegment",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x2647);
LAB_00c59c6c:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_b0;
  pVVar7 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a8 = pVVar2;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

