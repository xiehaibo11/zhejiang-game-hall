
/* js_renderer_EffectBase_setStencilRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_EffectBase_setStencilRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  EffectBase *pEVar15;
  long *plVar16;
  Value *pVVar17;
  ulong uVar18;
  Isolate *pIVar19;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  uchar local_a0 [4];
  uchar local_9c [4];
  undefined8 local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar19 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar19);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar14 = (void *)se::internal::getPrivate(pIVar19,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar14,(vector *)&local_d0);
  pEVar15 = (EffectBase *)se::State::nativeThisObject(aSStack_90);
  if (pEVar15 == (EffectBase *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x16c,"js_renderer_EffectBase_setStencil");
    __android_log_print(6,"jswrapper","js_renderer_EffectBase_setStencil : Invalid Native Object");
  }
  else {
    plVar16 = (long *)se::State::args(aSStack_90);
    pVVar17 = (Value *)*plVar16;
    switch(plVar16[1] - (long)pVVar17 >> 4) {
    case 0:
      cocos2d::renderer::EffectBase::setStencil
                (pEVar15,0x207,0,0xff,0x1e00,0x1e00,0x1e00,0xff,0xffffffff);
      goto LAB_00937d4c;
    case 1:
      local_98 = local_98 & 0xffffffff;
      uVar18 = seval_to_int32(pVVar17,(int *)((long)&local_98 + 4));
      if ((uVar18 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,local_98._4_4_,0,0xff,0x1e00,0x1e00,0x1e00,0xff,0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x177,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 2:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      if ((uVar6 & uVar7 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,0xff,0x1e00,0x1e00,0x1e00,0xff,
                   0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x180,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 3:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      uVar8 = seval_to_uint8((Value *)(*plVar16 + 0x20),local_9c);
      if ((uVar6 & uVar7 & uVar8 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,local_9c[0],0x1e00,0x1e00,0x1e00,0xff,
                   0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x18b,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 4:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      uVar8 = seval_to_uint8((Value *)(*plVar16 + 0x20),local_9c);
      local_98 = local_98 & 0xffffffff00000000;
      uVar9 = seval_to_int32((Value *)(*plVar16 + 0x30),(int *)&local_98);
      if ((uVar6 & uVar7 & uVar8 & uVar9 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,local_9c[0],local_98 & 0xffffffff,
                   0x1e00,0x1e00,0xff,0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x198,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 5:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      uVar8 = seval_to_uint8((Value *)(*plVar16 + 0x20),local_9c);
      local_98 = local_98 & 0xffffffff00000000;
      uVar9 = seval_to_int32((Value *)(*plVar16 + 0x30),(int *)&local_98);
      uVar3 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar10 = seval_to_int32((Value *)(*plVar16 + 0x40),(int *)&local_98);
      if ((uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,local_9c[0],uVar3 & 0xffffffff,
                   local_98 & 0xffffffff,0x1e00,0xff,0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x1a7,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 6:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      uVar8 = seval_to_uint8((Value *)(*plVar16 + 0x20),local_9c);
      local_98 = local_98 & 0xffffffff00000000;
      uVar9 = seval_to_int32((Value *)(*plVar16 + 0x30),(int *)&local_98);
      uVar3 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar10 = seval_to_int32((Value *)(*plVar16 + 0x40),(int *)&local_98);
      uVar4 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar11 = seval_to_int32((Value *)(*plVar16 + 0x50),(int *)&local_98);
      if ((uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,local_9c[0],uVar3 & 0xffffffff,
                   uVar4 & 0xffffffff,local_98 & 0xffffffff,0xff,0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x1b8,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 7:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      uVar8 = seval_to_uint8((Value *)(*plVar16 + 0x20),local_9c);
      local_98 = local_98 & 0xffffffff00000000;
      uVar9 = seval_to_int32((Value *)(*plVar16 + 0x30),(int *)&local_98);
      uVar3 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar10 = seval_to_int32((Value *)(*plVar16 + 0x40),(int *)&local_98);
      uVar4 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar11 = seval_to_int32((Value *)(*plVar16 + 0x50),(int *)&local_98);
      uVar5 = local_98;
      uVar12 = seval_to_uint8((Value *)(*plVar16 + 0x60),local_a0);
      if ((uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,local_9c[0],uVar3 & 0xffffffff,
                   uVar4 & 0xffffffff,uVar5 & 0xffffffff,local_a0[0],0xffffffff);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x1cb,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    case 8:
      local_98 = 0;
      uVar6 = seval_to_int32(pVVar17,(int *)&local_98);
      uVar18 = local_98;
      uVar7 = seval_to_uint32((Value *)(*plVar16 + 0x10),(uint *)((long)&local_98 + 4));
      uVar8 = seval_to_uint8((Value *)(*plVar16 + 0x20),local_9c);
      local_98 = local_98 & 0xffffffff00000000;
      uVar9 = seval_to_int32((Value *)(*plVar16 + 0x30),(int *)&local_98);
      uVar3 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar10 = seval_to_int32((Value *)(*plVar16 + 0x40),(int *)&local_98);
      uVar4 = local_98;
      local_98 = local_98 & 0xffffffff00000000;
      uVar11 = seval_to_int32((Value *)(*plVar16 + 0x50),(int *)&local_98);
      uVar5 = local_98;
      uVar12 = seval_to_uint8((Value *)(*plVar16 + 0x60),local_a0);
      local_98 = local_98 & 0xffffffff00000000;
      uVar13 = seval_to_int32((Value *)(*plVar16 + 0x70),(int *)&local_98);
      if ((uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & 1) != 0) {
        cocos2d::renderer::EffectBase::setStencil
                  (pEVar15,uVar18 & 0xffffffff,local_98._4_4_,local_9c[0],uVar3 & 0xffffffff,
                   uVar4 & 0xffffffff,uVar5 & 0xffffffff,local_a0[0],(int)local_98);
        goto LAB_00937d4c;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0x1e0,"js_renderer_EffectBase_setStencil");
      __android_log_print(6,"jswrapper",
                          "js_renderer_EffectBase_setStencil : Error processing arguments");
      break;
    default:
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 484): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar16[1] - (long)pVVar17) >> 4,8);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_EffectBase_setStencil",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0x1e7);
LAB_00937d4c:
  pVVar17 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar17,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d0;
  pVVar17 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar17 != pVVar2) {
      se::Value::~Value(pVVar17 + -0x10);
      pVVar17 = pVVar17 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

