
/* js_audioengine_AudioEngine_preloadRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_audioengine_AudioEngine_preloadRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Value *pVVar4;
  ulong *puVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  Object *pOVar9;
  Value *pVVar10;
  long lVar11;
  code *pcVar12;
  int iVar13;
  Isolate *pIVar15;
  Value *local_1c0;
  Value *local_1b8;
  undefined8 local_1b0;
  HandleScope aHStack_1a8 [24];
  ulong local_190;
  undefined8 local_188;
  void *local_180;
  State aSStack_178 [40];
  Value aVStack_150 [16];
  Value aVStack_140 [16];
  Value aVStack_130 [16];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  long alStack_f0 [4];
  long *local_d0;
  ulong local_c0;
  undefined8 local_b8;
  void *local_b0;
  ulong *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  int iVar14;
  
                    /* try { // try from 0098c230 to 00a8c23b has its CatchHandler @ 0098c334 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
                    /* try { // try from 0098c278 to 00a8c27f has its CatchHandler @ 0098c2f8 */
  v8::HandleScope::HandleScope(aHStack_1a8,pIVar15);
                    /* try { // try from 0098c280 to 00a8c387 has its CatchHandler @ 0098c200 */
  local_1c0 = (Value *)0x0;
  local_1b8 = (Value *)0x0;
  local_1b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_1c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_1c0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar15,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_178,pvVar6,(vector *)&local_1c0);
  plVar7 = (long *)se::State::args(aSStack_178);
  lVar1 = *plVar7;
  lVar2 = plVar7[1];
  lVar11 = lVar2 - lVar1 >> 4;
  if (lVar11 == 1) {
    local_b8 = 0;
    local_b0 = (void *)0x0;
    local_c0 = 0;
    uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_c0);
    if ((uVar8 & 1) != 0) {
      local_70 = (long *)0x0;
      cocos2d::AudioEngine::preload(&local_c0,alStack_90);
      if (alStack_90 == local_70) {
        pcVar12 = *(code **)(*local_70 + 0x20);
LAB_0098c55c:
        (*pcVar12)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar12 = *(code **)(*local_70 + 0x28);
        goto LAB_0098c55c;
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      goto LAB_0098c4c0;
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  else {
    if (lVar11 != 2) goto LAB_0098c478;
    local_188 = 0;
    local_180 = (void *)0x0;
    local_190 = 0;
                    /* catch() { ... } // from try @ 0098c278 with catch @ 0098c2f8 */
    uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_190);
    if ((uVar8 & 1) == 0) {
      iVar14 = 2;
      iVar13 = 2;
    }
    else {
      local_a0 = (ulong *)0x0;
      if (*(char *)(*plVar7 + 0x18) == '\x05') {
        pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar7 + 0x10));
        uVar8 = se::Object::isFunction(pOVar9);
        puVar5 = local_a0;
        if ((uVar8 & 1) == 0) {
          local_a0 = (ulong *)0x0;
          if (&local_c0 == puVar5) {
            pcVar12 = *(code **)(*puVar5 + 0x20);
LAB_0098c5a0:
            (*pcVar12)();
            goto joined_r0x0098c5a8;
          }
          if (puVar5 != (ulong *)0x0) {
            pcVar12 = *(code **)(*puVar5 + 0x28);
            goto LAB_0098c5a0;
          }
        }
        else {
          pOVar9 = (Object *)se::State::thisObject(aSStack_178);
                    /* catch() { ... } // from try @ 0098c230 with catch @ 0098c334 */
          se::Value::Value(aVStack_120,pOVar9,false);
          se::Value::Value(aVStack_130,(Value *)(*plVar7 + 0x10));
          pOVar9 = (Object *)se::Value::toObject(aVStack_130);
          se::Object::root(pOVar9);
          se::Value::Value(aVStack_150,aVStack_120);
          se::Value::Value(aVStack_140,aVStack_130);
          se::Value::Value(aVStack_110,aVStack_150);
          se::Value::Value(aVStack_100,aVStack_140);
          local_70 = (long *)0x0;
          plVar7 = operator_new(0x28);
          *plVar7 = (long)&PTR_FUN_01c6a388;
          se::Value::Value((Value *)(plVar7 + 1),aVStack_110);
          se::Value::Value((Value *)(plVar7 + 3),aVStack_100);
                    /* try { // try from 0098c3d8 to 00a8c51f has its CatchHandler @ 0098c3d8
                       catch() { ... } // from try @ 0098c3d8 with catch @ 0098c3d8
                       catch() { ... } // from try @ 0098c528 with catch @ 0098c3d8
                       catch() { ... } // from try @ 0098c844 with catch @ 0098c3d8 */
          local_70 = plVar7;
          FUN_0098f2b0(alStack_90,&local_c0);
          if (alStack_90 == local_70) {
            pcVar12 = *(code **)(*local_70 + 0x20);
LAB_0098c5bc:
            (*pcVar12)();
          }
          else if (local_70 != (long *)0x0) {
            pcVar12 = *(code **)(*local_70 + 0x28);
            goto LAB_0098c5bc;
          }
          se::Value::~Value(aVStack_100);
          se::Value::~Value(aVStack_110);
          se::Value::~Value(aVStack_140);
          se::Value::~Value(aVStack_150);
          se::Value::~Value(aVStack_130);
          se::Value::~Value(aVStack_120);
joined_r0x0098c5a8:
          if (local_a0 != (ulong *)0x0) {
            if (&local_c0 == local_a0) {
              local_d0 = alStack_f0;
              (**(code **)(*local_a0 + 0x18))(local_a0,alStack_f0);
            }
            else {
              local_d0 = (long *)(**(code **)(*local_a0 + 0x10))();
            }
            goto LAB_0098c630;
          }
        }
        local_d0 = (long *)0x0;
      }
      else {
        local_a0 = (ulong *)0x0;
        local_d0 = (long *)0x0;
      }
LAB_0098c630:
      cocos2d::AudioEngine::preload(&local_190,alStack_f0);
      if (alStack_f0 == local_d0) {
        pcVar12 = *(code **)(*local_d0 + 0x20);
LAB_0098c664:
        (*pcVar12)();
      }
      else if (local_d0 != (long *)0x0) {
        pcVar12 = *(code **)(*local_d0 + 0x28);
        goto LAB_0098c664;
      }
      if (&local_c0 == local_a0) {
        pcVar12 = *(code **)(*local_a0 + 0x20);
LAB_0098c690:
        (*pcVar12)();
      }
      else if (local_a0 != (ulong *)0x0) {
        pcVar12 = *(code **)(*local_a0 + 0x28);
        goto LAB_0098c690;
      }
      iVar14 = 1;
      iVar13 = 1;
    }
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
      iVar13 = iVar14;
    }
    if (iVar13 != 2) goto LAB_0098c4c0;
  }
LAB_0098c478:
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp, 480): wrong number of arguments: %d\n"
                      ,(ulong)(lVar2 - lVar1) >> 4);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_audioengine_AudioEngine_preload",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_audioengine_auto.cpp"
                      ,0x1e3);
LAB_0098c4c0:
  pVVar10 = (Value *)se::State::rval(aSStack_178);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_178);
  pVVar4 = local_1c0;
  pVVar10 = local_1b8;
  if (local_1c0 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_1b8 = pVVar4;
    operator_delete(local_1c0);
  }
  v8::HandleScope::~HandleScope(aHStack_1a8);
                    /* try { // try from 0098c520 to 00a8c527 has its CatchHandler @ 0098c858 */
                    /* try { // try from 0098c528 to 00a8c83b has its CatchHandler @ 0098c3d8 */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

