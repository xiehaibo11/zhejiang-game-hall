
/* JSB_glGetVertexAttribRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetVertexAttribRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  Value *pVVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  Isolate *pIVar16;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  uint local_78;
  uint local_74;
  State aSStack_70 [40];
  ulong local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar16);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar6,(vector *)&local_a8);
  plVar7 = (long *)se::State::args(aSStack_70);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) == 0x20) {
    uVar4 = seval_to_uint32((Value *)*plVar7,&local_74);
    uVar5 = seval_to_uint32((Value *)(*plVar7 + 0x10),&local_78);
    if ((uVar4 & uVar5 & 1) != 0) {
      if (local_78 == 0x8626) {
        local_48 = 0;
        uStack_40 = 0;
        glGetVertexAttribfv(local_74,0x8626,&local_48);
        pOVar8 = (Object *)se::Object::createTypedArray(8,&local_48,0x10);
        pVVar11 = (Value *)se::State::rval(aSStack_70);
        se::Value::setObject(pVVar11,pOVar8,false);
      }
      else if (local_78 == 0x889f) {
        glGetVertexAttribiv(local_74,0x889f,&local_48);
        if (DAT_01d36e38 != 0) {
          uVar12 = local_48 & 0xffffffff;
          uVar13 = DAT_01d36e38 - 1;
          if ((uVar13 & DAT_01d36e38) == 0) {
            uVar14 = uVar13 & uVar12;
          }
          else {
            uVar14 = uVar12;
            if (DAT_01d36e38 <= uVar12) {
              uVar14 = 0;
              if (DAT_01d36e38 != 0) {
                uVar14 = uVar12 / DAT_01d36e38;
              }
              uVar14 = uVar12 - uVar14 * DAT_01d36e38;
            }
          }
          plVar7 = *(long **)(DAT_01d36e30 + uVar14 * 8);
          if (plVar7 != (long *)0x0) {
            do {
              while( true ) {
                while( true ) {
                  plVar7 = (long *)*plVar7;
                  if (plVar7 == (long *)0x0) goto LAB_008c9ff8;
                  uVar15 = plVar7[1];
                  if (uVar15 != uVar12) break;
                  if (*(int *)(plVar7 + 2) == (int)local_48) {
                    lVar9 = se::NativePtrToObjectMap::find((void *)plVar7[3]);
                    lVar10 = se::NativePtrToObjectMap::end();
                    pVVar11 = (Value *)se::State::rval(aSStack_70);
                    if (lVar9 == lVar10) {
                      se::Value::setNull(pVVar11);
                    }
                    else {
                      se::Value::setObject(pVVar11,*(Object **)(lVar9 + 0x18),false);
                    }
                    goto LAB_008c9e74;
                  }
                }
                if ((uVar13 & DAT_01d36e38) == 0) break;
                if (DAT_01d36e38 <= uVar15) {
                  uVar1 = 0;
                  if (DAT_01d36e38 != 0) {
                    uVar1 = uVar15 / DAT_01d36e38;
                  }
                  uVar15 = uVar15 - uVar1 * DAT_01d36e38;
                }
                if (uVar15 != uVar14) goto LAB_008c9ff8;
              }
            } while ((uVar15 & uVar13) == uVar14);
          }
        }
LAB_008c9ff8:
        pVVar11 = (Value *)se::State::rval(aSStack_70);
        se::Value::setNull(pVVar11);
      }
      else {
        glGetVertexAttribiv(local_74,local_78,&local_48);
        if ((local_78 == 0x886a) || (local_78 == 0x8622)) {
          pVVar11 = (Value *)se::State::rval(aSStack_70);
          se::Value::setBoolean(pVVar11,(int)local_48 != 0);
        }
        else {
          pVVar11 = (Value *)se::State::rval(aSStack_70);
          se::Value::setNumber(pVVar11,(double)(long)(int)local_48);
        }
      }
      goto LAB_008c9e74;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xb76,"JSB_glGetVertexAttrib");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xb70,"JSB_glGetVertexAttrib");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glGetVertexAttrib",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0xba0);
LAB_008c9e74:
  pVVar11 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_70);
  pVVar3 = local_a8;
  pVVar11 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar11 != pVVar3) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

