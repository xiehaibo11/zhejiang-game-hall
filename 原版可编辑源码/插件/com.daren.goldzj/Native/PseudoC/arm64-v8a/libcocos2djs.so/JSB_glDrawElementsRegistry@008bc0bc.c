
/* JSB_glDrawElementsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glDrawElementsRegistry(FunctionCallbackInfo *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  long lVar12;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_b8);
  plVar9 = (long *)se::State::args(aSStack_70);
  if ((plVar9[1] - *plVar9 & 0xffffffff0U) == 0x40) {
    uVar5 = seval_to_uint32((Value *)*plVar9,&local_74);
    uVar6 = seval_to_int32((Value *)(*plVar9 + 0x10),(int *)&local_78);
    uVar7 = seval_to_uint32((Value *)(*plVar9 + 0x20),&local_7c);
    local_80 = 0;
    uVar7 = uVar5 & uVar6 & uVar7;
    if (*(char *)(*plVar9 + 0x38) == '\x02') {
      uVar5 = seval_to_int32((Value *)(*plVar9 + 0x30),(int *)&local_80);
      if ((uVar7 & uVar5 & 1) == 0) {
LAB_008bc2b0:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x557,"JSB_glDrawElements");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008bc368;
      }
      lVar12 = (long)(int)local_80;
    }
    else {
      if ((uVar7 & 1) == 0) goto LAB_008bc2b0;
      lVar12 = 0;
    }
    if ((local_7c | 2) == 0x1403) {
      if ((int)(local_78 | local_80) < 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x55b,"JSB_glDrawElements");
        DAT_01d36f40 = 0x501;
      }
      else {
        iVar1 = (uint)(local_7c == 0x1403) << 1;
        if (local_7c == 0x1401) {
          iVar1 = 1;
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (int)local_80 / iVar1;
        }
        if (local_80 == iVar2 * iVar1) {
          local_84 = 0;
          glGetIntegerv(0x8b8d,&local_84);
          if (local_84 < 1) {
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                ,0x56d,"JSB_glDrawElements");
          }
          else {
            glGetIntegerv(0x8895,&local_84);
            if (local_84 < 1) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                  ,0x570,"JSB_glDrawElements");
            }
            else {
              local_88 = 0;
              glGetBufferParameteriv(0x8893,0x8764,&local_88);
              if (local_78 == 0) {
LAB_008bc514:
                glDrawElements(local_74,local_78,local_7c,lVar12);
                goto LAB_008bc394;
              }
              if (local_88 - local_80 != 0 && (int)local_80 <= local_88) {
                iVar2 = 0;
                if (iVar1 != 0) {
                  iVar2 = (int)(local_88 - local_80) / iVar1;
                }
                if ((int)local_78 <= iVar2) goto LAB_008bc514;
              }
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                  ,0x574,"JSB_glDrawElements");
            }
          }
        }
        else {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                              ,0x569,"JSB_glDrawElements");
        }
        DAT_01d36f40 = 0x502;
      }
    }
    else {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x559,"JSB_glDrawElements");
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x546,"JSB_glDrawElements");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008bc368:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glDrawElements",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x57a);
LAB_008bc394:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_b8;
  pVVar10 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_b0 = pVVar4;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

