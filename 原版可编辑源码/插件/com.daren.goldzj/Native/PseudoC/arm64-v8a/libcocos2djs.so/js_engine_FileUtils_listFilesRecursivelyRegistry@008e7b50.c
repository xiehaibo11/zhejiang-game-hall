
/* js_engine_FileUtils_listFilesRecursivelyRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_engine_FileUtils_listFilesRecursivelyRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  Object *this;
  Value *pVVar10;
  ulong uVar11;
  Isolate *pIVar12;
  byte *pbVar13;
  long lVar14;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  byte *local_b0;
  byte *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  State aSStack_80 [40];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar12);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar6 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar6,(vector *)&local_e0);
  plVar7 = (long *)se::State::nativeThisObject(aSStack_80);
  if (plVar7 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                        ,0x234,"js_engine_FileUtils_listFilesRecursively");
    __android_log_print(6,"jswrapper",
                        "js_engine_FileUtils_listFilesRecursively : Invalid Native Object");
  }
  else {
    plVar8 = (long *)se::State::args(aSStack_80);
    if (plVar8[1] - *plVar8 == 0x20) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      local_a8 = (byte *)0x0;
      uStack_a0 = 0;
      local_b0 = (byte *)0x0;
      uVar9 = seval_to_std_string((Value *)*plVar8,(basic_string *)&local_98);
      if ((uVar9 & 1) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                            ,0x23c,"js_engine_FileUtils_listFilesRecursively");
        __android_log_print(6,"jswrapper",
                            "js_engine_FileUtils_listFilesRecursively : Error processing arguments")
        ;
LAB_008e7d78:
        bVar2 = false;
        pbVar3 = local_b0;
      }
      else {
        (**(code **)(*plVar7 + 0x120))(plVar7,&local_98,&local_b0);
        this = (Object *)se::Value::toObject((Value *)(*plVar8 + 0x10));
        if ((*(char *)(*plVar8 + 0x18) != '\x05') ||
           (uVar9 = se::Object::isArray(this), (uVar9 & 1) == 0)) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                              ,0x23f,"js_engine_FileUtils_listFilesRecursively");
          __android_log_print(6,"jswrapper",
                              "js_engine_FileUtils_listFilesRecursively : 2nd argument should be an Array"
                             );
          goto LAB_008e7d78;
        }
        if (local_a8 == local_b0) {
          uVar11 = 0;
        }
        else {
          lVar14 = 0;
          uVar9 = 0;
          do {
            se::Value::Value(aVStack_58,(basic_string *)(local_b0 + lVar14));
            se::Object::setArrayElement(this,(uint)uVar9,aVStack_58);
            se::Value::~Value(aVStack_58);
            uVar9 = uVar9 + 1;
            lVar14 = lVar14 + 0x18;
            uVar11 = ((long)local_a8 - (long)local_b0 >> 3) * -0x5555555555555555;
          } while (uVar9 <= uVar11 && uVar11 - uVar9 != 0);
        }
        se::Value::Value(aVStack_58,uVar11);
        se::Object::setProperty(this,"length",aVStack_58);
        se::Value::~Value(aVStack_58);
        bVar2 = true;
        pbVar3 = local_b0;
      }
      local_b0 = pbVar3;
      pbVar13 = local_a8;
      if (pbVar3 != (byte *)0x0) {
        while (pbVar4 = pbVar13, pbVar4 != pbVar3) {
          pbVar13 = pbVar4 + -0x18;
          if ((*pbVar13 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
        }
        local_a8 = pbVar3;
        operator_delete(local_b0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar2) goto LAB_008e7e04;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp, 582): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar8[1] - *plVar8) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_engine_FileUtils_listFilesRecursively",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_cocos2dx_manual.cpp"
                      ,0x249);
LAB_008e7e04:
  pVVar10 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_80);
  pVVar5 = local_e0;
  pVVar10 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar10 != pVVar5) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_d8 = pVVar5;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

