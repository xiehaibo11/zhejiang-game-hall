
/* js_cocos2dx_spine_SkeletonCacheAnimation_setAttachmentRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonCacheAnimation_setAttachmentRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Value *pVVar5;
  byte bVar6;
  uint uVar7;
  void *pvVar8;
  SkeletonCacheAnimation *this;
  long *plVar9;
  ulong uVar10;
  Value *pVVar11;
  Isolate *pIVar12;
  ulong *unaff_x22;
  uint uVar13;
  int iVar14;
  Value *local_e0;
  Value *local_d8;
  Value *local_d0;
  HandleScope aHStack_c8 [24];
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar12);
  local_e0 = operator_new(0xa0);
  local_d0 = local_e0 + 0xa0;
  local_d8 = local_e0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar8,(vector *)&local_e0);
  this = (SkeletonCacheAnimation *)se::State::nativeThisObject(aSStack_80);
  if (this == (SkeletonCacheAnimation *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3c71,&DAT_018efafd);
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_spine_SkeletonCacheAnimation_setAttachment : Invalid Native Object"
                       );
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_80);
    lVar2 = *plVar9;
    lVar3 = plVar9[1];
    if (lVar3 - lVar2 == 0x20) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      uVar10 = seval_to_std_string((Value *)*plVar9,(basic_string *)&local_98);
      if ((uVar10 & 1) == 0) {
        uVar13 = 1;
        iVar14 = 4;
      }
      else {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (char *)0x0;
        unaff_x22 = &local_b0;
        uVar10 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_b0);
        if ((uVar10 & 1) == 0) {
          iVar14 = 4;
joined_r0x00c7f940:
          uVar13 = 1;
        }
        else {
          pcVar1 = (char *)((ulong)unaff_x22 | 1);
          if ((local_b0 & 1) != 0) {
            pcVar1 = local_a0;
          }
          bVar6 = spine::SkeletonCacheAnimation::setAttachment
                            (this,(basic_string *)&local_98,pcVar1);
          pVVar11 = (Value *)se::State::rval(aSStack_80);
          uVar10 = boolean_to_seval((bool)(bVar6 & 1),pVVar11);
          if ((uVar10 & 1) != 0) {
            iVar14 = 1;
            unaff_x22 = (ulong *)0x1;
            goto joined_r0x00c7f940;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                              ,0x3c7e,&DAT_018efafd);
          __android_log_print(6,"jswrapper",
                              "js_cocos2dx_spine_SkeletonCacheAnimation_setAttachment : Error processing arguments"
                             );
          uVar13 = 0;
          unaff_x22 = (ulong *)0x0;
          iVar14 = 1;
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (iVar14 == 4) {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = (void *)0x0;
        uVar7 = seval_to_std_string((Value *)*plVar9,(basic_string *)&local_98);
        if ((uVar13 & uVar7) == 1) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = (char *)0x0;
          uVar10 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_b0);
          if ((uVar10 & 1) == 0) {
            iVar14 = 8;
          }
          else {
            bVar6 = spine::SkeletonCacheAnimation::setAttachment
                              (this,(basic_string *)&local_98,(basic_string *)&local_b0);
            pVVar11 = (Value *)se::State::rval(aSStack_80);
            uVar10 = boolean_to_seval((bool)(bVar6 & 1),pVVar11);
            if ((uVar10 & 1) == 0) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                                  ,0x3c8d,&DAT_018efafd);
              __android_log_print(6,"jswrapper",
                                  "js_cocos2dx_spine_SkeletonCacheAnimation_setAttachment : Error processing arguments"
                                 );
              unaff_x22 = (ulong *)0x0;
              iVar14 = 1;
            }
            else {
              iVar14 = 1;
              unaff_x22 = (ulong *)0x1;
            }
          }
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        else {
          iVar14 = 8;
        }
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if (iVar14 == 8) goto LAB_00c7fa7c;
      }
      if (((ulong)unaff_x22 & 1) != 0) goto LAB_00c7fadc;
    }
    else {
LAB_00c7fa7c:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp, 15506): wrong number of arguments: %d\n"
                          ,(ulong)(lVar3 - lVar2) >> 4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",&DAT_018efafd,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                      ,0x3c95);
LAB_00c7fadc:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar5 = local_e0;
  pVVar11 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar11 != pVVar5) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_d8 = pVVar5;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

