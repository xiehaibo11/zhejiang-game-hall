
/* JSB_glCreateFramebufferRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glCreateFramebufferRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  Value *pVVar5;
  void *pvVar6;
  long *plVar7;
  Object *this;
  Ref *this_00;
  Value *pVVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  Isolate *pIVar13;
  ulong uVar14;
  ulong unaff_x27;
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
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar13);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar6 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar6,(vector *)&local_d8);
  plVar7 = (long *)se::State::args(aSStack_a0);
  if ((plVar7[1] - *plVar7 & 0xffffffff0U) != 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xc27,"JSB_glCreateFramebuffer");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glCreateFramebuffer",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xc32);
    goto LAB_008cba7c;
  }
  glGenFramebuffers(1,&local_a4);
  this = (Object *)se::Object::createObjectWithClass(DAT_01d36f28);
  pVVar8 = (Value *)se::State::rval(aSStack_a0);
  se::Value::setObject(pVVar8,this,true);
  se::Value::Value(aVStack_78,local_a4);
  se::Object::setProperty(this,"_id",aVStack_78);
  se::Value::~Value(aVStack_78);
  this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    uVar14 = (ulong)local_a4;
    cocos2d::Ref::Ref(this_00);
    uVar10 = DAT_01d36e88;
    *(uint *)(this_00 + 0xc) = local_a4;
    *(undefined4 *)(this_00 + 0x10) = 3;
    *(undefined ***)this_00 = &PTR_FUN_01c677c8;
    if (uVar10 != 0) {
      uVar9 = uVar10 - 1;
      if ((uVar9 & uVar10) == 0) {
        unaff_x27 = uVar9 & uVar14;
      }
      else {
        unaff_x27 = uVar14;
        if (uVar10 <= uVar14) {
          uVar12 = 0;
          if (uVar10 != 0) {
            uVar12 = uVar14 / uVar10;
          }
          unaff_x27 = uVar14 - uVar12 * uVar10;
        }
      }
      plVar7 = *(long **)(DAT_01d36e80 + unaff_x27 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_008cb93c;
          uVar12 = plVar7[1];
          if (uVar12 != uVar14) {
            if ((uVar9 & uVar10) == 0) {
              uVar12 = uVar12 & uVar9;
            }
            else if (uVar10 <= uVar12) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar12 / uVar10;
              }
              if (uVar12 - uVar1 * uVar10 == unaff_x27) goto LAB_008cb92c;
              goto LAB_008cb93c;
            }
            if (uVar12 != unaff_x27) goto LAB_008cb93c;
          }
LAB_008cb92c:
        } while (*(uint *)(plVar7 + 2) != local_a4);
        goto LAB_008cba70;
      }
    }
LAB_008cb93c:
    plVar7 = operator_new(0x20);
    fVar4 = DAT_01d36ea0;
    lVar3 = DAT_01d36e98;
    *(uint *)(plVar7 + 2) = local_a4;
    plVar7[3] = (long)this_00;
    *plVar7 = 0;
    plVar7[1] = uVar14;
    if ((uVar10 == 0) || (fVar4 * (float)uVar10 < (float)(lVar3 + 1))) {
      if (uVar10 < 3) {
        uVar9 = 1;
      }
      else {
        uVar9 = (ulong)((uVar10 - 1 & uVar10) != 0);
      }
      uVar9 = uVar9 | uVar10 << 1;
      uVar10 = (ulong)((float)(lVar3 + 1) / fVar4);
      if (uVar10 <= uVar9) {
        uVar10 = uVar9;
      }
      FUN_008d3530(&DAT_01d36e80,uVar10);
      uVar10 = DAT_01d36e88;
      if ((DAT_01d36e88 - 1 & DAT_01d36e88) == 0) {
        unaff_x27 = DAT_01d36e88 - 1 & uVar14;
      }
      else {
        unaff_x27 = uVar14;
        if (DAT_01d36e88 <= uVar14) {
          uVar9 = 0;
          if (DAT_01d36e88 != 0) {
            uVar9 = uVar14 / DAT_01d36e88;
          }
          unaff_x27 = uVar14 - uVar9 * DAT_01d36e88;
        }
      }
    }
    lVar3 = DAT_01d36e80;
    plVar11 = *(long **)(DAT_01d36e80 + unaff_x27 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = plVar7;
      *plVar7 = (long)DAT_01d36e90;
      DAT_01d36e90 = plVar11;
      *(long ***)(lVar3 + unaff_x27 * 8) = &DAT_01d36e90;
      if (*plVar7 != 0) {
        uVar14 = *(ulong *)(*plVar7 + 8);
        if ((uVar10 - 1 & uVar10) == 0) {
          uVar14 = uVar14 & uVar10 - 1;
        }
        else if (uVar10 <= uVar14) {
          uVar9 = 0;
          if (uVar10 != 0) {
            uVar9 = uVar14 / uVar10;
          }
          uVar14 = uVar14 - uVar9 * uVar10;
        }
        plVar11 = (long *)(DAT_01d36e80 + uVar14 * 8);
        goto LAB_008cba5c;
      }
    }
    else {
      *plVar7 = *plVar11;
LAB_008cba5c:
      *plVar11 = (long)plVar7;
    }
    DAT_01d36e98 = DAT_01d36e98 + 1;
  }
LAB_008cba70:
  se::Object::setPrivateData(this,this_00);
LAB_008cba7c:
  pVVar8 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_a0);
  pVVar5 = local_d8;
  pVVar8 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar8 != pVVar5) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
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

