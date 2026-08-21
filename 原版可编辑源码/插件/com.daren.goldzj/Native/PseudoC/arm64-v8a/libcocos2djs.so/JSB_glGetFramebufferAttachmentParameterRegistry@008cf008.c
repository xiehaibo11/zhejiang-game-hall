
/* JSB_glGetFramebufferAttachmentParameterRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetFramebufferAttachmentParameterRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  Value *pVVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  Isolate *pIVar16;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [28];
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar16);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar7,(vector *)&local_b8);
  plVar8 = (long *)se::State::args(aSStack_70);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x30) {
    uVar4 = seval_to_uint32((Value *)*plVar8,&local_74);
    uVar5 = seval_to_uint32((Value *)(*plVar8 + 0x10),&local_78);
    uVar6 = seval_to_uint32((Value *)(*plVar8 + 0x20),&local_7c);
    if ((uVar4 & uVar5 & uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0xe31,"JSB_glGetFramebufferAttachmentParameter");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      local_80 = 0;
      if (local_74 == 0x8d40) {
        if (local_7c >> 2 == 0x2334) {
          glGetFramebufferAttachmentParameteriv(0x8d40,local_78,local_7c,&local_80);
          if (local_7c == 0x8cd1) {
            glGetFramebufferAttachmentParameteriv(local_74,local_78,0x8cd0,&local_84);
            if (local_84 == 0x1702) {
              if (DAT_01d36e10 != 0) {
                uVar12 = (ulong)local_80;
                uVar13 = DAT_01d36e10 - 1;
                if ((uVar13 & DAT_01d36e10) == 0) {
                  uVar14 = uVar13 & uVar12;
                }
                else {
                  uVar14 = uVar12;
                  if (DAT_01d36e10 <= uVar12) {
                    uVar14 = 0;
                    if (DAT_01d36e10 != 0) {
                      uVar14 = uVar12 / DAT_01d36e10;
                    }
                    uVar14 = uVar12 - uVar14 * DAT_01d36e10;
                  }
                }
                plVar8 = *(long **)(DAT_01d36e08 + uVar14 * 8);
                if (plVar8 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar8 = (long *)*plVar8;
                      if (plVar8 == (long *)0x0) goto LAB_008cf44c;
                      uVar15 = plVar8[1];
                      if (uVar15 != uVar12) break;
                      if (*(uint *)(plVar8 + 2) == local_80) {
                        lVar9 = se::NativePtrToObjectMap::find((void *)plVar8[3]);
                        lVar10 = se::NativePtrToObjectMap::end();
                        pVVar11 = (Value *)se::State::rval(aSStack_70);
                        if (lVar9 == lVar10) {
                          se::Value::setNull(pVVar11);
                        }
                        else {
                          se::Value::setObject(pVVar11,*(Object **)(lVar9 + 0x18),false);
                        }
                        goto LAB_008cf2c0;
                      }
                    }
                    if ((uVar13 & DAT_01d36e10) == 0) {
                      uVar15 = uVar15 & uVar13;
                    }
                    else if (DAT_01d36e10 <= uVar15) {
                      uVar1 = 0;
                      if (DAT_01d36e10 != 0) {
                        uVar1 = uVar15 / DAT_01d36e10;
                      }
                      uVar15 = uVar15 - uVar1 * DAT_01d36e10;
                    }
                  } while (uVar15 == uVar14);
                }
              }
            }
            else {
              if (local_84 != 0x8d41) {
                pVVar11 = (Value *)se::State::rval(aSStack_70);
                se::Value::setNull(pVVar11);
                goto LAB_008cf2c0;
              }
              if (DAT_01d36e60 != 0) {
                uVar12 = (ulong)local_80;
                uVar13 = DAT_01d36e60 - 1;
                if ((uVar13 & DAT_01d36e60) == 0) {
                  uVar14 = uVar13 & uVar12;
                }
                else {
                  uVar14 = uVar12;
                  if (DAT_01d36e60 <= uVar12) {
                    uVar14 = 0;
                    if (DAT_01d36e60 != 0) {
                      uVar14 = uVar12 / DAT_01d36e60;
                    }
                    uVar14 = uVar12 - uVar14 * DAT_01d36e60;
                  }
                }
                plVar8 = *(long **)(DAT_01d36e58 + uVar14 * 8);
                if (plVar8 != (long *)0x0) {
                  do {
                    while( true ) {
                      while( true ) {
                        plVar8 = (long *)*plVar8;
                        if (plVar8 == (long *)0x0) goto LAB_008cf44c;
                        uVar15 = plVar8[1];
                        if (uVar15 != uVar12) break;
                        if (*(uint *)(plVar8 + 2) == local_80) {
                          lVar9 = se::NativePtrToObjectMap::find((void *)plVar8[3]);
                          lVar10 = se::NativePtrToObjectMap::end();
                          pVVar11 = (Value *)se::State::rval(aSStack_70);
                          if (lVar9 == lVar10) {
                            se::Value::setNull(pVVar11);
                          }
                          else {
                            se::Value::setObject(pVVar11,*(Object **)(lVar9 + 0x18),false);
                          }
                          goto LAB_008cf2c0;
                        }
                      }
                      if ((uVar13 & DAT_01d36e60) != 0) break;
                      uVar15 = uVar15 & uVar13;
LAB_008cf3e4:
                      if (uVar15 != uVar14) goto LAB_008cf44c;
                    }
                    if (uVar15 < DAT_01d36e60) goto LAB_008cf3e4;
                    uVar1 = 0;
                    if (DAT_01d36e60 != 0) {
                      uVar1 = uVar15 / DAT_01d36e60;
                    }
                  } while (uVar15 - uVar1 * DAT_01d36e60 == uVar14);
                }
              }
            }
          }
LAB_008cf44c:
          pVVar11 = (Value *)se::State::rval(aSStack_70);
          se::Value::setInt32(pVVar11,local_80);
          goto LAB_008cf2c0;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xe37,"JSB_glGetFramebufferAttachmentParameter");
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xe35,"JSB_glGetFramebufferAttachmentParameter");
      }
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe28,"JSB_glGetFramebufferAttachmentParameter");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetFramebufferAttachmentParameter",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xe62);
LAB_008cf2c0:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_b8;
  pVVar11 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar11 != pVVar3) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_b0 = pVVar3;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

