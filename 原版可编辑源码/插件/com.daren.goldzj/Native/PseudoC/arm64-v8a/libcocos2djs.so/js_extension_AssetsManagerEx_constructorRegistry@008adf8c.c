
/* js_extension_AssetsManagerEx_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_extension_AssetsManagerEx_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Value *pVVar4;
  Value *pVVar5;
  Object *this;
  long *plVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  ulong *puVar10;
  AssetsManagerEx *pAVar11;
  long lVar12;
  code *pcVar13;
  int iVar14;
  Value *local_1a8;
  Value *local_1a0;
  undefined8 local_198;
  HandleScope aHStack_190 [24];
  ulong local_178;
  undefined8 local_170;
  void *local_168;
  ulong local_160;
  undefined8 local_158;
  void *local_150;
  State aSStack_148 [40];
  Value aVStack_120 [16];
  Value aVStack_110 [16];
  Value aVStack_100 [16];
  Value aVStack_f0 [16];
  Value aVStack_e0 [16];
  Value aVStack_d0 [16];
  ulong local_c0;
  undefined8 local_b8;
  void *local_b0;
  ulong *local_a0;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_190,*(Isolate **)(*(long *)param_1 + 8));
  local_1a8 = (Value *)0x0;
  local_1a0 = (Value *)0x0;
  local_198 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_1a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_1a8);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_extension_AssetsManagerEx_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_extension_AssetsManagerEx_finalizeRegistry);
  se::State::State(aSStack_148,this,(vector *)&local_1a8);
  plVar6 = (long *)se::State::args(aSStack_148);
  lVar1 = *plVar6;
  lVar2 = plVar6[1];
  lVar12 = lVar2 - lVar1 >> 4;
  if (lVar12 == 2) {
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_90);
    if ((uVar7 & 1) == 0) {
      iVar14 = 6;
    }
    else {
      local_b8 = 0;
      local_b0 = (void *)0x0;
      local_c0 = 0;
      uVar7 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_c0);
      if ((uVar7 & 1) == 0) {
        iVar14 = 6;
      }
      else {
        pAVar11 = operator_new(0x270,(nothrow_t *)&std::nothrow);
        if (pAVar11 != (AssetsManagerEx *)0x0) {
          cocos2d::extension::AssetsManagerEx::AssetsManagerEx
                    (pAVar11,(basic_string *)&local_90,(basic_string *)&local_c0);
        }
        pOVar8 = (Object *)se::State::thisObject(aSStack_148);
        se::Object::setPrivateData(pOVar8,pAVar11);
        iVar14 = 1;
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (iVar14 != 6) goto LAB_008ae2e4;
  }
  else if (lVar12 == 3) {
    local_158 = 0;
    local_150 = (void *)0x0;
    local_160 = 0;
    uVar7 = seval_to_std_string((Value *)*plVar6,(basic_string *)&local_160);
    if ((uVar7 & 1) == 0) {
      iVar14 = 2;
    }
    else {
      local_170 = 0;
      local_168 = (void *)0x0;
      local_178 = 0;
      uVar7 = seval_to_std_string((Value *)(*plVar6 + 0x10),(basic_string *)&local_178);
      if ((uVar7 & 1) == 0) {
        iVar14 = 2;
      }
      else {
        local_a0 = (ulong *)0x0;
        if (*(char *)(*plVar6 + 0x28) == '\x05') {
          pOVar8 = (Object *)se::Value::toObject((Value *)(*plVar6 + 0x20));
          uVar7 = se::Object::isFunction(pOVar8);
          puVar10 = local_a0;
          if ((uVar7 & 1) == 0) {
            local_a0 = (ulong *)0x0;
            if (&local_c0 == puVar10) {
              pcVar13 = *(code **)(*puVar10 + 0x20);
            }
            else {
              if (puVar10 == (ulong *)0x0) goto LAB_008ae414;
              pcVar13 = *(code **)(*puVar10 + 0x28);
            }
            (*pcVar13)();
          }
          else {
            pOVar8 = (Object *)se::State::thisObject(aSStack_148);
            se::Value::Value(aVStack_f0,pOVar8,false);
            se::Value::Value(aVStack_100,(Value *)(*plVar6 + 0x20));
            pOVar8 = (Object *)se::Value::toObject(aVStack_f0);
            pOVar9 = (Object *)se::Value::toObject(aVStack_100);
            se::Object::attachObject(pOVar8,pOVar9);
            se::Value::Value(aVStack_120,aVStack_f0);
            se::Value::Value(aVStack_110,aVStack_100);
            se::Value::Value(aVStack_e0,aVStack_120);
            se::Value::Value(aVStack_d0,aVStack_110);
            local_70 = (ulong *)0x0;
            puVar10 = operator_new(0x28);
            *puVar10 = (ulong)&PTR_FUN_01c67498;
            se::Value::Value((Value *)(puVar10 + 1),aVStack_e0);
            se::Value::Value((Value *)(puVar10 + 3),aVStack_d0);
            local_70 = puVar10;
            FUN_008b0fd0(&local_90,&local_c0);
            if (&local_90 == local_70) {
              pcVar13 = *(code **)(*local_70 + 0x20);
LAB_008ae3e0:
              (*pcVar13)();
            }
            else if (local_70 != (ulong *)0x0) {
              pcVar13 = *(code **)(*local_70 + 0x28);
              goto LAB_008ae3e0;
            }
            se::Value::~Value(aVStack_d0);
            se::Value::~Value(aVStack_e0);
            se::Value::~Value(aVStack_110);
            se::Value::~Value(aVStack_120);
            se::Value::~Value(aVStack_100);
            se::Value::~Value(aVStack_f0);
          }
        }
        else {
          local_a0 = (ulong *)0x0;
        }
LAB_008ae414:
        pAVar11 = operator_new(0x270,(nothrow_t *)&std::nothrow);
        if (pAVar11 != (AssetsManagerEx *)0x0) {
          cocos2d::extension::AssetsManagerEx::AssetsManagerEx
                    (pAVar11,(basic_string *)&local_160,(basic_string *)&local_178,
                     (function *)&local_c0);
        }
        pOVar8 = (Object *)se::State::thisObject(aSStack_148);
        se::Object::setPrivateData(pOVar8,pAVar11);
        if (&local_c0 == local_a0) {
          pcVar13 = *(code **)(*local_a0 + 0x20);
LAB_008ae478:
          (*pcVar13)();
        }
        else if (local_a0 != (ulong *)0x0) {
          pcVar13 = *(code **)(*local_a0 + 0x28);
          goto LAB_008ae478;
        }
        iVar14 = 1;
      }
      if ((local_178 & 1) != 0) {
        operator_delete(local_168);
      }
    }
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    if (iVar14 != 2) goto LAB_008ae2e4;
  }
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 1176): wrong number of arguments: %d\n"
                      ,(ulong)(lVar2 - lVar1) >> 4);
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_AssetsManagerEx_constructor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x49b);
LAB_008ae2e4:
  se::Value::Value((Value *)&local_90);
  uVar7 = se::Object::getProperty(this,"_ctor",(Value *)&local_90);
  if ((uVar7 & 1) != 0) {
    pOVar8 = (Object *)se::Value::toObject((Value *)&local_90);
    se::Object::call(pOVar8,(vector *)&local_1a8,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_90);
  se::State::~State(aSStack_148);
  pVVar5 = local_1a8;
  pVVar4 = local_1a0;
  if (local_1a8 != (Value *)0x0) {
    while (pVVar4 != pVVar5) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_1a0 = pVVar5;
    operator_delete(local_1a8);
  }
  v8::HandleScope::~HandleScope(aHStack_190);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

