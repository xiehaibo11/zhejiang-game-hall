
/* JSB_showInputBoxRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_showInputBoxRegistry(FunctionCallbackInfo *param_1)

{
  byte *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  bool bVar4;
  Value *pVVar5;
  byte bVar6;
  undefined4 uVar7;
  void *pvVar8;
  long *plVar9;
  Object *this;
  ulong uVar10;
  ulong *puVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  Value *pVVar13;
  Isolate *pIVar14;
  Value *local_118;
  Value *local_110;
  undefined8 local_108;
  HandleScope aHStack_100 [24];
  State aSStack_e8 [40];
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 local_68;
  byte local_64;
  byte local_63;
  Value aVStack_58 [8];
  char local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_100,pIVar14);
  local_118 = (Value *)0x0;
  local_110 = (Value *)0x0;
  local_108 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_118,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_118);
  pvVar8 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_e8,pvVar8,(vector *)&local_118);
  plVar9 = (long *)se::State::args(aSStack_e8);
  if (plVar9[1] - *plVar9 == 0x10) {
    se::Value::Value(aVStack_58);
    this = (Object *)se::Value::toObject((Value *)*plVar9);
    local_b0 = (void *)0x0;
    local_98 = (void *)0x0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_90 = 0;
    local_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    local_68 = 0;
    local_64 = 0;
    local_63 = 0;
    uVar10 = se::Object::getProperty(this,"defaultValue",aVStack_58);
    if (((uVar10 & 1) == 0) || (local_50 != '\x04')) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                          ,0x46b,"JSB_showInputBox");
      __android_log_print(6,"jswrapper","defaultValue is invalid!");
LAB_008f11a0:
      bVar4 = false;
    }
    else {
      puVar11 = (ulong *)se::Value::toString(aVStack_58);
      if (&local_c0 != puVar11) {
        uVar10 = puVar11[1];
        pbVar1 = (byte *)puVar11[2];
        if (((byte)*puVar11 & 1) == 0) {
          pbVar1 = (byte *)((long)puVar11 + 1);
          uVar10 = (ulong)(byte)((byte)*puVar11 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,(char *)pbVar1,uVar10);
      }
      bVar6 = se::Object::getProperty(this,"maxLength",aVStack_58);
      if ((bVar6 & local_50 == '\x02') == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                            ,0x470,"JSB_showInputBox");
        __android_log_print(6,"jswrapper","maxLength is invalid!");
        goto LAB_008f11a0;
      }
      uVar7 = se::Value::toInt32(aVStack_58);
      local_78 = CONCAT44(local_78._4_4_,uVar7);
      bVar6 = se::Object::getProperty(this,"multiple",aVStack_58);
      if ((bVar6 & local_50 == '\x03') == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                            ,0x474,"JSB_showInputBox");
        __android_log_print(6,"jswrapper","multiple is invalid!");
        goto LAB_008f11a0;
      }
      local_63 = se::Value::toBoolean(aVStack_58);
      local_63 = local_63 & 1;
      uVar10 = se::Object::getProperty(this,"confirmHold",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x03') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x479,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","confirmHold is invalid!");
          goto LAB_008f11a0;
        }
        local_64 = se::Value::toBoolean(aVStack_58);
        local_64 = local_64 & 1;
      }
      uVar10 = se::Object::getProperty(this,"confirmType",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x04') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x481,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","confirmType is invalid!");
          goto LAB_008f11a0;
        }
        pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  se::Value::toString(aVStack_58);
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &uStack_a8 != pbVar12) {
          uVar10 = *(ulong *)(pbVar12 + 8);
          pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar12 + 0x10);
          if (((byte)*pbVar12 & 1) == 0) {
            pbVar2 = pbVar12 + 1;
            uVar10 = (ulong)((byte)*pbVar12 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&uStack_a8,(char *)pbVar2,uVar10);
        }
      }
      uVar10 = se::Object::getProperty(this,"inputType",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x04') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x488,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","inputType is invalid!");
          goto LAB_008f11a0;
        }
        pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  se::Value::toString(aVStack_58);
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_90 != pbVar12) {
          uVar10 = *(ulong *)(pbVar12 + 8);
          pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar12 + 0x10);
          if (((byte)*pbVar12 & 1) == 0) {
            pbVar2 = pbVar12 + 1;
            uVar10 = (ulong)((byte)*pbVar12 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_90,(char *)pbVar2,uVar10);
        }
      }
      uVar10 = se::Object::getProperty(this,"originX",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x02') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x490,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","originX is invalid!");
          goto LAB_008f11a0;
        }
        uVar7 = se::Value::toInt32(aVStack_58);
        local_78 = CONCAT44(uVar7,(undefined4)local_78);
      }
      uVar10 = se::Object::getProperty(this,"originY",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x02') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x497,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","originY is invalid!");
          goto LAB_008f11a0;
        }
        local_70 = se::Value::toInt32(aVStack_58);
      }
      uVar10 = se::Object::getProperty(this,"width",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x02') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x49e,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","width is invalid!");
          goto LAB_008f11a0;
        }
        uVar7 = se::Value::toInt32(aVStack_58);
        uStack_6c = (undefined2)uVar7;
        uStack_6a = (undefined2)((uint)uVar7 >> 0x10);
      }
      uVar10 = se::Object::getProperty(this,"height",aVStack_58);
      if ((uVar10 & 1) != 0) {
        if (local_50 != '\x02') {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                              ,0x4a5,"JSB_showInputBox");
          __android_log_print(6,"jswrapper","height is invalid!");
          goto LAB_008f11a0;
        }
        local_68 = se::Value::toInt32(aVStack_58);
      }
      cocos2d::EditBox::show((ShowInfo *)&local_c0);
      bVar4 = true;
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((uStack_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    se::Value::~Value(aVStack_58);
    if (bVar4) goto LAB_008f1204;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 1199): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar9[1] - *plVar9) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_showInputBox",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp"
                      ,0x4b2);
LAB_008f1204:
  pVVar13 = (Value *)se::State::rval(aSStack_e8);
  se::internal::setReturnValue(pVVar13,param_1);
  se::State::~State(aSStack_e8);
  pVVar5 = local_118;
  pVVar13 = local_110;
  if (local_118 != (Value *)0x0) {
    while (pVVar13 != pVVar5) {
      se::Value::~Value(pVVar13 + -0x10);
      pVVar13 = pVVar13 + -0x10;
    }
    local_110 = pVVar5;
    operator_delete(local_118);
  }
  v8::HandleScope::~HandleScope(aHStack_100);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

