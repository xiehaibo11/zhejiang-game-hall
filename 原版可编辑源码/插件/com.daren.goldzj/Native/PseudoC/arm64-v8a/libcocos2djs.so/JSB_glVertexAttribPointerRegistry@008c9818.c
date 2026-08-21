
/* JSB_glVertexAttribPointerRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glVertexAttribPointerRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long *plVar10;
  Value *pVVar11;
  Isolate *pIVar12;
  Value *local_c8;
  Value *local_c0;
  undefined8 local_b8;
  HandleScope aHStack_b0 [24];
  uint local_98;
  uint local_94;
  uchar local_90 [4];
  uint local_8c;
  int local_88;
  uint uStack_84;
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b0,pIVar12);
  local_c8 = (Value *)0x0;
  local_c0 = (Value *)0x0;
  local_b8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c8);
  pvVar9 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar9,(vector *)&local_c8);
  plVar10 = (long *)se::State::args(aSStack_80);
  if ((plVar10[1] - *plVar10 & 0xffffffff0U) == 0x60) {
    uVar3 = seval_to_uint32((Value *)*plVar10,&uStack_84);
    uVar4 = seval_to_int32((Value *)(*plVar10 + 0x10),&local_88);
    uVar5 = seval_to_uint32((Value *)(*plVar10 + 0x20),&local_8c);
    uVar6 = seval_to_uint16((Value *)(*plVar10 + 0x30),(ushort *)local_90);
    uVar7 = seval_to_int32((Value *)(*plVar10 + 0x40),(int *)&local_94);
    uVar8 = seval_to_int32((Value *)(*plVar10 + 0x50),(int *)&local_98);
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xb4e,"JSB_glVertexAttribPointer");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else if ((local_8c - 0x1400 < 4) || (local_8c == 0x1406)) {
      if (local_94 < 0x100) {
        if (-1 < (int)local_98) {
          if (local_8c - 0x1402 < 2) {
            if (((local_98 | local_94) & 1) == 0) {
LAB_008c9c04:
              cocos2d::ccVertexAttribPointer
                        (uStack_84,local_88,local_8c,local_90[0],local_94,
                         (void *)(long)(int)local_98);
              goto LAB_008c9b2c;
            }
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                ,0xb5e,"JSB_glVertexAttribPointer");
          }
          else {
            if ((local_8c != 0x1406) || (((local_98 | local_94) & 3) == 0)) goto LAB_008c9c04;
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                ,0xb61,"JSB_glVertexAttribPointer");
          }
          DAT_01d36f40 = 0x502;
          goto LAB_008c9b00;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xb55,"JSB_glVertexAttribPointer");
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xb53,"JSB_glVertexAttribPointer");
      }
      DAT_01d36f40 = 0x501;
    }
    else {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xb51,"JSB_glVertexAttribPointer");
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xb44,"JSB_glVertexAttribPointer");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008c9b00:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glVertexAttribPointer",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xb69);
LAB_008c9b2c:
  pVVar11 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c8;
  pVVar11 = local_c0;
  if (local_c8 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_c0 = pVVar2;
    operator_delete(local_c8);
  }
  v8::HandleScope::~HandleScope(aHStack_b0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

