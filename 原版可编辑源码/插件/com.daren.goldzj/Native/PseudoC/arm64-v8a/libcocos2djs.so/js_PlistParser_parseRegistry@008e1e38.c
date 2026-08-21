
/* WARNING: Type propagation algorithm not settling */
/* js_PlistParser_parseRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_PlistParser_parseRegistry(FunctionCallbackInfo *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  Value *pVVar6;
  void *pvVar7;
  long *plVar8;
  basic_string *pbVar9;
  ulong uVar10;
  Object *pOVar11;
  Value *pVVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  Isolate *pIVar17;
  undefined8 uVar18;
  Value *local_f8;
  Value *local_f0;
  undefined8 local_e8;
  HandleScope aHStack_e0 [24];
  HandleObject aHStack_c8 [8];
  basic_string local_c0 [8];
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  State aSStack_90 [40];
  Value aVStack_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar17 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar17);
  local_f8 = (Value *)0x0;
  local_f0 = (Value *)0x0;
  local_e8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar17,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar7,(vector *)&local_f8);
  plVar8 = (long *)se::State::args(aSStack_90);
  lVar2 = *plVar8;
  lVar3 = plVar8[1];
  pbVar9 = __JSPlistDelegator::getInstance()::pInstance;
  if ((__JSPlistDelegator::getInstance()::pInstance == (basic_string *)0x0) &&
     (pbVar9 = operator_new(0x48,(nothrow_t *)&std::nothrow), pbVar9 != (basic_string *)0x0)) {
    *(undefined8 *)(pbVar9 + 0x40) = 0;
    *(undefined8 *)(pbVar9 + 0x28) = 0;
    *(undefined8 *)(pbVar9 + 0x20) = 0;
    *(undefined8 *)(pbVar9 + 0x38) = 0;
    *(undefined8 *)(pbVar9 + 0x30) = 0;
    *(undefined8 *)(pbVar9 + 8) = 0;
    *(undefined8 *)pbVar9 = 0;
    *(undefined8 *)(pbVar9 + 0x18) = 0;
    *(undefined8 *)(pbVar9 + 0x10) = 0;
    *(undefined ***)pbVar9 = &PTR____JSPlistDelegator_01c678d8;
    cocos2d::SAXParser::SAXParser((SAXParser *)(pbVar9 + 8));
    *(undefined8 *)(pbVar9 + 0x10) = 0;
    *(undefined8 *)(pbVar9 + 0x18) = 0;
    *(undefined8 *)(pbVar9 + 0x20) = 0;
    *(undefined8 *)(pbVar9 + 0x38) = 0;
    *(undefined8 *)(pbVar9 + 0x40) = 0;
    *(undefined8 *)(pbVar9 + 0x30) = 0;
  }
  __JSPlistDelegator::getInstance()::pInstance = pbVar9;
  pbVar9 = __JSPlistDelegator::getInstance()::pInstance;
  if (lVar3 - lVar2 == 0x10) {
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0;
    uVar10 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_a8);
    if ((uVar10 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                          ,0x66,"js_PlistParser_parse");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
      bVar5 = false;
    }
    else {
      __JSPlistDelegator::parseText(pbVar9);
      pcVar1 = (char *)((ulong)local_c0 | 1);
      uVar10 = (ulong)((byte)local_c0[0] >> 1);
      if (((byte)local_c0[0] & 1) != 0) {
        pcVar1 = local_b0;
        uVar10 = local_b8;
      }
      if (uVar10 != 0) {
        pcVar13 = pcVar1;
        if (7 < uVar10) {
          uVar14 = uVar10 & 0xfffffffffffffff8;
          pcVar15 = pcVar1 + 3;
          pcVar13 = pcVar1 + uVar14;
          uVar16 = uVar14;
          do {
            uVar18 = *(undefined8 *)(pcVar15 + -3);
            if ((char)uVar18 == '\n') {
              pcVar15[-3] = ' ';
            }
            if ((char)((ulong)uVar18 >> 8) == '\n') {
              pcVar15[-2] = ' ';
            }
            if ((char)((ulong)uVar18 >> 0x10) == '\n') {
              pcVar15[-1] = ' ';
            }
            if ((char)((ulong)uVar18 >> 0x18) == '\n') {
              *pcVar15 = ' ';
            }
            if ((char)((ulong)uVar18 >> 0x20) == '\n') {
              pcVar15[1] = ' ';
            }
            if ((char)((ulong)uVar18 >> 0x28) == '\n') {
              pcVar15[2] = ' ';
            }
            if ((char)((ulong)uVar18 >> 0x30) == '\n') {
              pcVar15[3] = ' ';
            }
            if ((char)((ulong)uVar18 >> 0x38) == '\n') {
              pcVar15[4] = ' ';
            }
            uVar16 = uVar16 - 8;
            pcVar15 = pcVar15 + 8;
          } while (uVar16 != 0);
          if (uVar10 == uVar14) goto LAB_008e2098;
        }
        do {
          if (*pcVar13 == '\n') {
            *pcVar13 = ' ';
          }
          pcVar13 = pcVar13 + 1;
        } while (pcVar1 + uVar10 != pcVar13);
      }
LAB_008e2098:
      se::Value::Value(aVStack_68);
      std_string_to_seval(local_c0,aVStack_68);
      pbVar9 = (basic_string *)se::Value::toString(aVStack_68);
      pOVar11 = (Object *)se::Object::createJSONObject(pbVar9);
      se::HandleObject::HandleObject(aHStack_c8,pOVar11);
      pVVar12 = (Value *)se::State::rval(aSStack_90);
      se::Value::setObject(pVVar12,aHStack_c8,false);
      se::HandleObject::~HandleObject(aHStack_c8);
      se::Value::~Value(aVStack_68);
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      bVar5 = true;
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (bVar5) goto LAB_008e21b4;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp, 114): js_PlistParser_parse : wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(lVar3 - lVar2) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_PlistParser_parse",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                      ,0x75);
LAB_008e21b4:
  pVVar12 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_90);
  pVVar6 = local_f8;
  pVVar12 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar12 != pVVar6) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_f0 = pVVar6;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

