
/* JSB_glGetAttachedShadersRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetAttachedShadersRegistry(FunctionCallbackInfo *param_1)

{
  uint uVar1;
  Value VVar2;
  ulong uVar3;
  long lVar4;
  Value *pVVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Object *pOVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  Isolate *pIVar18;
  undefined4 uVar19;
  uint uVar20;
  size_t __n;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  Object *local_90;
  undefined4 local_88;
  int local_84;
  State aSStack_80 [40];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar18);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar7,(vector *)&local_c0);
  plVar8 = (long *)se::State::args(aSStack_80);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) == 0x10) {
    pVVar9 = (Value *)se::State::rval(aSStack_80);
    se::Value::setNull(pVVar9);
    VVar2 = ((Value *)*plVar8)[8];
    if (VVar2 == (Value)0x5) {
      pOVar10 = (Object *)se::Value::toObject((Value *)*plVar8);
      lVar11 = se::Object::getPrivateData(pOVar10);
      if (lVar11 == 0) {
LAB_008ce54c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0xdac,"JSB_glGetAttachedShaders");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008ce590;
      }
      uVar19 = *(undefined4 *)(lVar11 + 0xc);
      uVar17 = 0;
    }
    else {
      if (1 < (byte)VVar2) goto LAB_008ce54c;
      uVar19 = 0;
      uVar17 = 0x501;
    }
    glGetProgramiv(uVar19,0x8b85,&local_84);
    iVar6 = glGetError();
    iVar12 = local_84;
    if (iVar6 == 0) {
      __n = (long)local_84 << 2;
      uVar13 = __n;
      if ((ulong)(long)local_84 >> 0x3e != 0) {
        uVar13 = 0xffffffffffffffff;
      }
      pvVar7 = operator_new__(uVar13,(nothrow_t *)&std::nothrow);
      memset(pvVar7,0,__n);
      local_88 = 0;
      glGetAttachedShaders(uVar19,iVar12,&local_88,pvVar7);
      pOVar10 = (Object *)se::Object::createArrayObject((long)local_84);
      se::HandleObject::HandleObject((HandleObject *)&local_90,pOVar10);
      if (0 < local_84) {
        lVar11 = 0;
        uVar20 = 0;
        iVar12 = local_84;
        do {
          if (DAT_01d36de8 != 0) {
            uVar1 = *(uint *)((long)pvVar7 + lVar11 * 4);
            uVar13 = (ulong)uVar1;
            uVar14 = DAT_01d36de8 - 1;
            if ((uVar14 & DAT_01d36de8) == 0) {
              uVar15 = uVar14 & uVar13;
            }
            else {
              uVar15 = uVar13;
              if (DAT_01d36de8 <= uVar13) {
                uVar15 = 0;
                if (DAT_01d36de8 != 0) {
                  uVar15 = uVar13 / DAT_01d36de8;
                }
                uVar15 = uVar13 - uVar15 * DAT_01d36de8;
              }
            }
            plVar8 = *(long **)(DAT_01d36de0 + uVar15 * 8);
            if (plVar8 != (long *)0x0) {
              do {
                while( true ) {
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_008ce75c;
                  uVar16 = plVar8[1];
                  if (uVar16 != uVar13) break;
                  if (*(uint *)(plVar8 + 2) == uVar1) {
                    se::Object::setArrayElement(local_90,uVar20,(Value *)(plVar8 + 3));
                    uVar20 = uVar20 + 1;
                    iVar12 = local_84;
                    goto LAB_008ce75c;
                  }
                }
                if ((uVar14 & DAT_01d36de8) == 0) {
                  uVar16 = uVar16 & uVar14;
                }
                else if (DAT_01d36de8 <= uVar16) {
                  uVar3 = 0;
                  if (DAT_01d36de8 != 0) {
                    uVar3 = uVar16 / DAT_01d36de8;
                  }
                  uVar16 = uVar16 - uVar3 * DAT_01d36de8;
                }
              } while (uVar16 == uVar15);
            }
          }
LAB_008ce75c:
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar12);
      }
      pVVar9 = (Value *)se::State::rval(aSStack_80);
      se::Value::setObject(pVVar9,local_90,false);
      if (pvVar7 != (void *)0x0) {
        operator_delete__(pvVar7);
      }
      se::HandleObject::~HandleObject((HandleObject *)&local_90);
      goto LAB_008ce5bc;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xdb2,"JSB_glGetAttachedShaders");
    DAT_01d36f40 = uVar17;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xda5,"JSB_glGetAttachedShaders");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008ce590:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetAttachedShaders",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xdcb);
LAB_008ce5bc:
  pVVar9 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_80);
  pVVar5 = local_c0;
  pVVar9 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar9 != pVVar5) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_b8 = pVVar5;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

