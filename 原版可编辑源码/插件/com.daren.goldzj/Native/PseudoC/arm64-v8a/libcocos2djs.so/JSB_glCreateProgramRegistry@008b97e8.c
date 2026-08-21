
/* JSB_glCreateProgramRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glCreateProgramRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  Value *pVVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  Object *this;
  Ref *this_00;
  Value *pVVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  Isolate *pIVar14;
  ulong uVar15;
  ulong unaff_x28;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  State aSStack_a0 [40];
  Value aVStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar14);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar7,(vector *)&local_d0);
  plVar8 = (long *)se::State::args(aSStack_a0);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) != 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x42d,"JSB_glCreateProgram");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glCreateProgram",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x437);
    goto LAB_008b9b70;
  }
  uVar6 = glCreateProgram();
  this = (Object *)se::Object::createObjectWithClass(DAT_01d36f10);
  pVVar9 = (Value *)se::State::rval(aSStack_a0);
  se::Value::setObject(pVVar9,this,true);
  se::Value::Value(aVStack_78,uVar6);
  se::Object::setProperty(this,"_id",aVStack_78);
  se::Value::~Value(aVStack_78);
  this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::Ref(this_00);
    uVar11 = DAT_01d36eb0;
    *(uint *)(this_00 + 0xc) = uVar6;
    *(undefined4 *)(this_00 + 0x10) = 4;
    uVar15 = (ulong)uVar6;
    *(undefined ***)this_00 = &PTR_FUN_01c67680;
    if (uVar11 != 0) {
      uVar10 = uVar11 - 1;
      if ((uVar10 & uVar11) == 0) {
        unaff_x28 = uVar10 & uVar15;
      }
      else {
        unaff_x28 = uVar15;
        if (uVar11 <= uVar15) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar15 / uVar11;
          }
          unaff_x28 = uVar15 - uVar13 * uVar11;
        }
      }
      plVar8 = *(long **)(DAT_01d36ea8 + unaff_x28 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_008b9a30;
          uVar13 = plVar8[1];
          if (uVar13 != uVar15) {
            if ((uVar10 & uVar11) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar11 <= uVar13) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar13 / uVar11;
              }
              if (uVar13 - uVar1 * uVar11 == unaff_x28) goto LAB_008b9a20;
              goto LAB_008b9a30;
            }
            if (uVar13 != unaff_x28) goto LAB_008b9a30;
          }
LAB_008b9a20:
        } while (*(uint *)(plVar8 + 2) != uVar6);
        goto LAB_008b9b64;
      }
    }
LAB_008b9a30:
    plVar8 = operator_new(0x20);
    fVar4 = DAT_01d36ec8;
    lVar3 = DAT_01d36ec0;
    *(uint *)(plVar8 + 2) = uVar6;
    plVar8[3] = (long)this_00;
    *plVar8 = 0;
    plVar8[1] = uVar15;
    if ((uVar11 == 0) || (fVar4 * (float)uVar11 < (float)(lVar3 + 1))) {
      if (uVar11 < 3) {
        uVar10 = 1;
      }
      else {
        uVar10 = (ulong)((uVar11 - 1 & uVar11) != 0);
      }
      uVar10 = uVar10 | uVar11 << 1;
      uVar11 = (ulong)((float)(lVar3 + 1) / fVar4);
      if (uVar11 <= uVar10) {
        uVar11 = uVar10;
      }
      FUN_008d3530(&DAT_01d36ea8,uVar11);
      uVar11 = DAT_01d36eb0;
      if ((DAT_01d36eb0 - 1 & DAT_01d36eb0) == 0) {
        unaff_x28 = DAT_01d36eb0 - 1 & uVar15;
      }
      else {
        unaff_x28 = uVar15;
        if (DAT_01d36eb0 <= uVar15) {
          uVar10 = 0;
          if (DAT_01d36eb0 != 0) {
            uVar10 = uVar15 / DAT_01d36eb0;
          }
          unaff_x28 = uVar15 - uVar10 * DAT_01d36eb0;
        }
      }
    }
    lVar3 = DAT_01d36ea8;
    plVar12 = *(long **)(DAT_01d36ea8 + unaff_x28 * 8);
    if (plVar12 == (long *)0x0) {
      plVar12 = plVar8;
      *plVar8 = (long)DAT_01d36eb8;
      DAT_01d36eb8 = plVar12;
      *(long ***)(lVar3 + unaff_x28 * 8) = &DAT_01d36eb8;
      if (*plVar8 != 0) {
        uVar15 = *(ulong *)(*plVar8 + 8);
        if ((uVar11 - 1 & uVar11) == 0) {
          uVar15 = uVar15 & uVar11 - 1;
        }
        else if (uVar11 <= uVar15) {
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = uVar15 / uVar11;
          }
          uVar15 = uVar15 - uVar10 * uVar11;
        }
        plVar12 = (long *)(DAT_01d36ea8 + uVar15 * 8);
        goto LAB_008b9b50;
      }
    }
    else {
      *plVar8 = *plVar12;
LAB_008b9b50:
      *plVar12 = (long)plVar8;
    }
    DAT_01d36ec0 = DAT_01d36ec0 + 1;
  }
LAB_008b9b64:
  se::Object::setPrivateData(this,this_00);
LAB_008b9b70:
  pVVar9 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_a0);
  pVVar5 = local_d0;
  pVVar9 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar9 != pVVar5) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_c8 = pVVar5;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

