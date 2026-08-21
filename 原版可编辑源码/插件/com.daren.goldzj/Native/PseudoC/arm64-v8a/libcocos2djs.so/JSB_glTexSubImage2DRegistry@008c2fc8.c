
/* WARNING: Removing unreachable block (ram,0x008c34c8) */
/* WARNING: Removing unreachable block (ram,0x008c335c) */
/* WARNING: Removing unreachable block (ram,0x008c32d4) */
/* JSB_glTexSubImage2DRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glTexSubImage2DRegistry(FunctionCallbackInfo *param_1)

{
  int iVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  long *plVar15;
  Value *pVVar16;
  void *in_x5;
  int iVar17;
  Isolate *pIVar18;
  Value *local_f8;
  Value *local_f0;
  undefined8 local_e8;
  HandleScope aHStack_e0 [24];
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  uint uStack_9c;
  State aSStack_98 [40];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar18);
  local_f8 = (Value *)0x0;
  local_f0 = (Value *)0x0;
  local_e8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar14 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar14,(vector *)&local_f8);
  plVar15 = (long *)se::State::args(aSStack_98);
  if ((plVar15[1] - *plVar15 & 0xffffffff0U) == 0xa0) {
    uVar4 = seval_to_uint32((Value *)*plVar15,&uStack_9c);
    uVar5 = seval_to_int32((Value *)(*plVar15 + 0x10),&local_a0);
    uVar6 = seval_to_int32((Value *)(*plVar15 + 0x20),&iStack_a4);
    uVar7 = seval_to_int32((Value *)(*plVar15 + 0x30),&local_a8);
    uVar8 = seval_to_int32((Value *)(*plVar15 + 0x40),(int *)&local_ac);
    uVar9 = seval_to_int32((Value *)(*plVar15 + 0x50),&local_b0);
    uVar10 = seval_to_uint32((Value *)(*plVar15 + 0x60),&local_b4);
    uVar11 = seval_to_uint32((Value *)(*plVar15 + 0x70),&local_b8);
    uVar12 = FUN_008d33a4(*plVar15 + 0x80,&local_c8,&local_c0);
    uVar13 = seval_to_uint32((Value *)(*plVar15 + 0x90),&local_c4);
    if ((uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & 1) == 0
       ) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                          ,0x8c8,"JSB_glTexSubImage2D");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
    }
    else {
      if (local_b4 - 0x1906 < 5) {
        if (((local_b8 - 0x8033 < 2) || (local_b8 == 0x1401)) || (local_b8 == 0x8363)) {
          if (1 < *(byte *)(*plVar15 + 0x88)) {
            iVar17 = 4;
            if (local_b4 != 0x1908) {
              iVar17 = 1;
            }
            iVar1 = 3;
            if (local_b4 != 0x1907) {
              iVar1 = iVar17;
            }
            if (local_b8 != 0x1401) {
              iVar1 = 2;
            }
            if (local_c8 < (int)(local_ac * iVar1 * local_b0)) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                                  ,0x8de,"JSB_glTexSubImage2D");
              DAT_01d36f40 = 0x502;
              goto LAB_008c3214;
            }
          }
          cocos2d::ccFlipYOrPremultiptyAlphaIfNeeded
                    ((cocos2d *)(ulong)local_b4,local_ac,local_b0,local_c8,(uint)local_c0,in_x5);
          if (local_c4 == 0) {
            if (local_b4 == 0x190a) {
              iVar17 = 2;
LAB_008c3470:
              uVar4 = iVar17 * local_ac;
            }
            else {
              if (local_b4 == 0x1908) {
                iVar17 = 4;
                goto LAB_008c3470;
              }
              uVar4 = local_ac;
              if (local_b4 == 0x1907) {
                iVar17 = 3;
                goto LAB_008c3470;
              }
            }
            if ((uVar4 & 7) == 0) {
              iVar17 = 8;
            }
            else if ((uVar4 & 3) == 0) {
              iVar17 = 4;
            }
            else {
              iVar17 = 1;
              if ((uVar4 & 1) == 0) {
                iVar17 = 2;
              }
            }
            cocos2d::ccPixelStorei(0xcf5,iVar17);
          }
          else {
            cocos2d::ccPixelStorei(0xcf5,local_c4);
          }
          glTexSubImage2D(uStack_9c,local_a0,iStack_a4,local_a8,local_ac,local_b0,local_b4,local_b8,
                          local_c0);
          goto LAB_008c3240;
        }
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x8cd,"JSB_glTexSubImage2D");
      }
      else {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                            ,0x8cb,"JSB_glTexSubImage2D");
      }
      DAT_01d36f40 = 0x500;
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0x8b9,"JSB_glTexSubImage2D");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
  }
LAB_008c3214:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "JSB_glTexSubImage2D",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                      ,0x8eb);
LAB_008c3240:
  pVVar16 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar16,param_1);
  se::State::~State(aSStack_98);
  pVVar3 = local_f8;
  pVVar16 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar16 != pVVar3) {
      se::Value::~Value(pVVar16 + -0x10);
      pVVar16 = pVVar16 + -0x10;
    }
    local_f0 = pVVar3;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

