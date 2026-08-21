
/* JSB_glDeleteShaderRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glDeleteShaderRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  Isolate *pIVar13;
  ulong uVar14;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  State aSStack_78 [40];
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar13);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_78,pvVar4,(vector *)&local_a8);
  puVar5 = (undefined8 *)se::State::args(aSStack_78);
  pVVar6 = (Value *)*puVar5;
  if ((puVar5[1] - (long)pVVar6 & 0xffffffff0U) == 0x10) {
    if (pVVar6[8] == (Value)0x5) {
      this = (Object *)se::Value::toObject(pVVar6);
      lVar7 = se::Object::getPrivateData(this);
      if (lVar7 == 0) {
LAB_008bab5c:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x49d,"JSB_glDeleteShader");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_008baba0;
      }
      uVar12 = *(uint *)(lVar7 + 0xc);
      glDeleteShader(uVar12);
      *(undefined4 *)(lVar7 + 0xc) = 0;
    }
    else {
      if (1 < (byte)pVVar6[8]) goto LAB_008bab5c;
      glDeleteShader(0);
      uVar12 = 0;
    }
    uVar14 = (ulong)uVar12;
    if (DAT_01d36de8 != 0) {
      uVar8 = DAT_01d36de8 - 1;
      if ((uVar8 & DAT_01d36de8) == 0) {
        uVar9 = uVar8 & uVar14;
      }
      else {
        uVar9 = uVar14;
        if (DAT_01d36de8 <= uVar14) {
          uVar9 = 0;
          if (DAT_01d36de8 != 0) {
            uVar9 = uVar14 / DAT_01d36de8;
          }
          uVar9 = uVar14 - uVar9 * DAT_01d36de8;
        }
      }
      plVar10 = *(long **)(DAT_01d36de0 + uVar9 * 8);
      if (plVar10 != (long *)0x0) {
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          uVar11 = plVar10[1];
          if (uVar11 == uVar14) {
            if (*(uint *)(plVar10 + 2) == uVar12) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,se::Value>>>
              ::remove(local_50,&DAT_01d36de0);
              pvVar4 = local_50[0];
              local_50[0] = (void *)0x0;
              if (pvVar4 != (void *)0x0) {
                if (local_40 != '\0') {
                  se::Value::~Value((Value *)((long)pvVar4 + 0x18));
                }
                operator_delete(pvVar4);
              }
              break;
            }
          }
          else {
            if ((uVar8 & DAT_01d36de8) == 0) {
              uVar11 = uVar11 & uVar8;
            }
            else if (DAT_01d36de8 <= uVar11) {
              uVar1 = 0;
              if (DAT_01d36de8 != 0) {
                uVar1 = uVar11 / DAT_01d36de8;
              }
              uVar11 = uVar11 - uVar1 * DAT_01d36de8;
            }
            if (uVar11 != uVar9) break;
          }
        }
      }
    }
    FUN_008d3790(&DAT_01d36ed0,uVar14);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x499,"JSB_glDeleteShader");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
LAB_008baba0:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glDeleteShader",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x4aa);
  }
  pVVar6 = (Value *)se::State::rval(aSStack_78);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_78);
  pVVar3 = local_a8;
  pVVar6 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar6 != pVVar3) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

