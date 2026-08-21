
/* js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasDataRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasDataRegistry
               (FunctionCallbackInfo *param_1)

{
  byte bVar1;
  long lVar2;
  Value *pVVar3;
  byte bVar4;
  bool bVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  Object *pOVar9;
  ulong uVar10;
  ulong uVar11;
  type *ptVar12;
  Value *pVVar13;
  undefined8 uVar14;
  long lVar15;
  Isolate *pIVar16;
  Value *local_e8;
  Value *local_e0;
  Value *local_d8;
  HandleScope aHStack_d0 [28];
  float local_b4;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_d0,pIVar16);
  local_e8 = operator_new(0xa0);
  local_d8 = local_e8 + 0xa0;
  local_e0 = local_e8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_e8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar6,(vector *)&local_e8);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",&DAT_019268ae,
                        0x18a,"js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasData");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasData : Invalid Native Object"
                       );
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    lVar15 = plVar8[1] - *plVar8 >> 4;
    if (lVar15 == 4) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_b4 = 0.0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      bVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_b0);
      bVar1 = *(byte *)(*plVar8 + 0x18);
      pvVar6 = (void *)((ulong)&local_b0 | 1);
      if ((local_b0 & 1) != 0) {
        pvVar6 = local_a0;
      }
      if (bVar1 == 5) {
        pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x10));
        lVar15 = se::Object::getPrivateData(pOVar9);
        if ((bVar4 & lVar15 != 0) == 0) goto LAB_00c9216c;
LAB_00c92248:
        uVar10 = seval_to_std_string((Value *)(*plVar8 + 0x20),(basic_string *)&local_98);
        uVar11 = seval_to_float((Value *)(*plVar8 + 0x30),&local_b4);
        if (((uVar10 & 1) == 0) || ((uVar11 & 1) == 0)) {
          uVar14 = 0x1b1;
          goto LAB_00c9248c;
        }
        ptVar12 = (type *)(**(code **)(*plVar7 + 0x68))(local_b4,plVar7,pvVar6,lVar15,&local_98);
        pVVar13 = (Value *)se::State::rval(aSStack_80);
        bVar5 = native_ptr_to_rooted_seval<dragonBones::TextureAtlasData>
                          (ptVar12,pVVar13,(bool *)0x0);
        if (!bVar5) {
          uVar14 = 0x1b4;
          goto LAB_00c9248c;
        }
        bVar5 = true;
      }
      else {
        lVar15 = 0;
        if ((bVar4 & bVar1 < 2) != 0) goto LAB_00c92248;
LAB_00c9216c:
        uVar14 = 0x1ae;
LAB_00c9248c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            &DAT_019268ae,uVar14,
                            "js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasData");
        __android_log_print(6,"jswrapper",&DAT_01927778);
        bVar5 = false;
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
joined_r0x00c924c0:
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
        if (bVar5) goto LAB_00c924f4;
        goto LAB_00c924c8;
      }
    }
    else {
      if (lVar15 == 3) {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = (void *)0x0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        bVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_b0);
        bVar1 = *(byte *)(*plVar8 + 0x18);
        pvVar6 = (void *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          pvVar6 = local_a0;
        }
        if (bVar1 == 5) {
          pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x10));
          lVar15 = se::Object::getPrivateData(pOVar9);
          if ((bVar4 & lVar15 != 0) == 0) goto LAB_00c920d4;
LAB_00c921d0:
          uVar10 = seval_to_std_string((Value *)(*plVar8 + 0x20),(basic_string *)&local_98);
          if ((uVar10 & 1) == 0) {
            uVar14 = 0x1a1;
            goto LAB_00c9241c;
          }
          ptVar12 = (type *)(**(code **)(*plVar7 + 0x68))(0x3f800000,plVar7,pvVar6,lVar15,&local_98)
          ;
          pVVar13 = (Value *)se::State::rval(aSStack_80);
          bVar5 = native_ptr_to_rooted_seval<dragonBones::TextureAtlasData>
                            (ptVar12,pVVar13,(bool *)0x0);
          if (!bVar5) {
            uVar14 = 0x1a4;
            goto LAB_00c9241c;
          }
          bVar5 = true;
        }
        else {
          lVar15 = 0;
          if ((bVar4 & bVar1 < 2) != 0) goto LAB_00c921d0;
LAB_00c920d4:
          uVar14 = 0x19f;
LAB_00c9241c:
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              &DAT_019268ae,uVar14,
                              "js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasData");
          __android_log_print(6,"jswrapper",&DAT_01927778);
          bVar5 = false;
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        goto joined_r0x00c924c0;
      }
      if (lVar15 != 2) {
        __android_log_print(6,"jswrapper",&DAT_019277cf,(ulong)(plVar8[1] - *plVar8) >> 4,4);
        goto LAB_00c924c8;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      bVar4 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
      bVar1 = *(byte *)(*plVar8 + 0x18);
      pvVar6 = (void *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        pvVar6 = local_88;
      }
      if (bVar1 == 5) {
        pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x10));
        lVar15 = se::Object::getPrivateData(pOVar9);
        if ((bVar4 & lVar15 != 0) == 0) goto LAB_00c91ff8;
LAB_00c922d8:
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = (void *)0x0;
        ptVar12 = (type *)(**(code **)(*plVar7 + 0x68))(0x3f800000,plVar7,pvVar6,lVar15,&local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        pVVar13 = (Value *)se::State::rval(aSStack_80);
        bVar5 = native_ptr_to_rooted_seval<dragonBones::TextureAtlasData>
                          (ptVar12,pVVar13,(bool *)0x0);
        if (!bVar5) {
          uVar14 = 0x196;
          goto LAB_00c923bc;
        }
        bVar5 = true;
      }
      else {
        lVar15 = 0;
        if ((bVar4 & bVar1 < 2) != 0) goto LAB_00c922d8;
LAB_00c91ff8:
        uVar14 = 0x193;
LAB_00c923bc:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            &DAT_019268ae,uVar14,
                            "js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasData");
        __android_log_print(6,"jswrapper",&DAT_01927778);
        bVar5 = false;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
        if (bVar5) goto LAB_00c924f4;
        goto LAB_00c924c8;
      }
    }
    if (bVar5) goto LAB_00c924f4;
  }
LAB_00c924c8:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_BaseFactory_parseTextureAtlasData",&DAT_019268ae,
                      0x1ba);
LAB_00c924f4:
  pVVar13 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_80);
  pVVar3 = local_e8;
  pVVar13 = local_e0;
  if (local_e8 != (Value *)0x0) {
    while (pVVar13 != pVVar3) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_e0 = pVVar3;
    operator_delete(local_e8);
  }
  v8::HandleScope::~HandleScope(aHStack_d0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

