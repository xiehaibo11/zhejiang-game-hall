
/* JSB_glCreateShaderRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glCreateShaderRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  Value *pVVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Object *this;
  Value *pVVar10;
  Ref *this_00;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  Isolate *pIVar15;
  Ref *pRVar16;
  ulong uVar17;
  ulong unaff_x28;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [28];
  uint local_a4;
  State aSStack_a0 [40];
  Value aVStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar15 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar15);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar7 = (void *)se::internal::getPrivate(pIVar15,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar7,(vector *)&local_d8);
  puVar8 = (undefined8 *)se::State::args(aSStack_a0);
  if ((puVar8[1] - (long)*puVar8 & 0xffffffff0U) == 0x10) {
    uVar9 = seval_to_uint32((Value *)*puVar8,&local_a4);
    if ((uVar9 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x44f,"JSB_glCreateShader");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      if ((local_a4 | 1) == 0x8b31) {
        uVar6 = glCreateShader();
        this = (Object *)se::Object::createObjectWithClass(DAT_01d36f30);
        pVVar10 = (Value *)se::State::rval(aSStack_a0);
        se::Value::setObject(pVVar10,this,true);
        se::Value::Value(aVStack_78,uVar6);
        se::Object::setProperty(this,"_id",aVStack_78);
        se::Value::~Value(aVStack_78);
        this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
        if (this_00 == (Ref *)0x0) {
          pRVar16 = (Ref *)0x0;
        }
        else {
          cocos2d::Ref::Ref(this_00);
          uVar9 = DAT_01d36ed8;
          *(uint *)(this_00 + 0xc) = uVar6;
          *(undefined4 *)(this_00 + 0x10) = 5;
          uVar17 = (ulong)uVar6;
          *(undefined ***)this_00 = &PTR_FUN_01c676d0;
          pRVar16 = this_00;
          if (uVar9 != 0) {
            uVar11 = uVar9 - 1;
            if ((uVar11 & uVar9) == 0) {
              unaff_x28 = uVar11 & uVar17;
            }
            else {
              unaff_x28 = uVar17;
              if (uVar9 <= uVar17) {
                uVar14 = 0;
                if (uVar9 != 0) {
                  uVar14 = uVar17 / uVar9;
                }
                unaff_x28 = uVar17 - uVar14 * uVar9;
              }
            }
            plVar13 = *(long **)(DAT_01d36ed0 + unaff_x28 * 8);
            if (plVar13 != (long *)0x0) {
              do {
                plVar13 = (long *)*plVar13;
                if (plVar13 == (long *)0x0) goto LAB_008ba100;
                uVar14 = plVar13[1];
                if (uVar14 != uVar17) {
                  if ((uVar11 & uVar9) == 0) {
                    uVar14 = uVar14 & uVar11;
                  }
                  else if (uVar9 <= uVar14) {
                    uVar1 = 0;
                    if (uVar9 != 0) {
                      uVar1 = uVar14 / uVar9;
                    }
                    if (uVar14 - uVar1 * uVar9 == unaff_x28) goto LAB_008ba0f0;
                    goto LAB_008ba100;
                  }
                  if (uVar14 != unaff_x28) goto LAB_008ba100;
                }
LAB_008ba0f0:
              } while (*(uint *)(plVar13 + 2) != uVar6);
              goto LAB_008ba238;
            }
          }
LAB_008ba100:
          plVar13 = operator_new(0x20);
          fVar4 = DAT_01d36ef0;
          lVar3 = DAT_01d36ee8;
          *(uint *)(plVar13 + 2) = uVar6;
          plVar13[3] = (long)this_00;
          *plVar13 = 0;
          plVar13[1] = uVar17;
          if ((uVar9 == 0) || (fVar4 * (float)uVar9 < (float)(lVar3 + 1))) {
            if (uVar9 < 3) {
              uVar11 = 1;
            }
            else {
              uVar11 = (ulong)((uVar9 - 1 & uVar9) != 0);
            }
            uVar11 = uVar11 | uVar9 << 1;
            uVar9 = (ulong)((float)(lVar3 + 1) / fVar4);
            if (uVar9 <= uVar11) {
              uVar9 = uVar11;
            }
            FUN_008d3530(&DAT_01d36ed0,uVar9);
            uVar9 = DAT_01d36ed8;
            if ((DAT_01d36ed8 - 1 & DAT_01d36ed8) == 0) {
              unaff_x28 = DAT_01d36ed8 - 1 & uVar17;
            }
            else {
              unaff_x28 = uVar17;
              if (DAT_01d36ed8 <= uVar17) {
                uVar11 = 0;
                if (DAT_01d36ed8 != 0) {
                  uVar11 = uVar17 / DAT_01d36ed8;
                }
                unaff_x28 = uVar17 - uVar11 * DAT_01d36ed8;
              }
            }
          }
          lVar3 = DAT_01d36ed0;
          plVar12 = *(long **)(DAT_01d36ed0 + unaff_x28 * 8);
          if (plVar12 == (long *)0x0) {
            plVar12 = plVar13;
            *plVar13 = (long)DAT_01d36ee0;
            DAT_01d36ee0 = plVar12;
            *(long ***)(lVar3 + unaff_x28 * 8) = &DAT_01d36ee0;
            if (*plVar13 != 0) {
              uVar17 = *(ulong *)(*plVar13 + 8);
              if ((uVar9 - 1 & uVar9) == 0) {
                uVar17 = uVar17 & uVar9 - 1;
              }
              else if (uVar9 <= uVar17) {
                uVar11 = 0;
                if (uVar9 != 0) {
                  uVar11 = uVar17 / uVar9;
                }
                uVar17 = uVar17 - uVar11 * uVar9;
              }
              plVar12 = (long *)(DAT_01d36ed0 + uVar17 * 8);
              goto LAB_008ba220;
            }
          }
          else {
            *plVar13 = *plVar12;
LAB_008ba220:
            *plVar12 = (long)plVar13;
          }
          DAT_01d36ee8 = DAT_01d36ee8 + 1;
        }
LAB_008ba238:
        se::Object::setPrivateData(this,this_00);
        pVVar10 = (Value *)se::State::rval(aSStack_a0);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,se::Value>>>
        ::__emplace_unique_key_args<unsigned_int,unsigned_int&,se::Value&>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,se::Value>>>
                    *)&DAT_01d36de0,(uint *)(pRVar16 + 0xc),(uint *)(pRVar16 + 0xc),pVVar10);
        goto LAB_008ba004;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x451,"JSB_glCreateShader");
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x44a,"JSB_glCreateShader");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glCreateShader",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x45d);
LAB_008ba004:
  pVVar10 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_a0);
  pVVar5 = local_d8;
  pVVar10 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar10 != pVVar5) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_d0 = pVVar5;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

