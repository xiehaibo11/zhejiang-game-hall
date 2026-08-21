
/* js_extension_AssetsManagerEx_loadLocalManifestRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_extension_AssetsManagerEx_loadLocalManifestRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  void *pvVar4;
  AssetsManagerEx *this;
  long *plVar5;
  Value *pVVar6;
  ulong uVar7;
  Value *pVVar8;
  Object *this_00;
  Manifest *pMVar9;
  long lVar10;
  long lVar11;
  Isolate *pIVar12;
  int iVar13;
  Value *local_b8;
  Value *local_b0;
  undefined8 local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  State aSStack_70 [40];
  long local_48;
  int iVar14;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar12);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_b8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar4,(vector *)&local_b8);
  this = (AssetsManagerEx *)se::State::nativeThisObject(aSStack_70);
  if (this == (AssetsManagerEx *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x3d6,"js_extension_AssetsManagerEx_loadLocalManifest");
    __android_log_print(6,"jswrapper",
                        "js_extension_AssetsManagerEx_loadLocalManifest : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_70);
    pVVar6 = (Value *)*plVar5;
    lVar10 = plVar5[1];
    lVar11 = lVar10 - (long)pVVar6 >> 4;
    if (lVar11 == 2) {
      if (pVVar6[8] == (Value)0x5) {
        this_00 = (Object *)se::Value::toObject(pVVar6);
        pMVar9 = (Manifest *)se::Object::getPrivateData(this_00);
        if (pMVar9 != (Manifest *)0x0) {
LAB_008acff4:
          local_80 = 0;
          local_78 = (void *)0x0;
          local_88 = 0;
          uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_88);
          if ((uVar7 & 1) == 0) {
            iVar14 = 8;
            iVar13 = 8;
          }
          else {
            bVar3 = cocos2d::extension::AssetsManagerEx::loadLocalManifest
                              (this,pMVar9,(basic_string *)&local_88);
            pVVar8 = (Value *)se::State::rval(aSStack_70);
            uVar7 = boolean_to_seval((bool)(bVar3 & 1),pVVar8);
            if ((uVar7 & 1) == 0) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                                  ,0x3ef,"js_extension_AssetsManagerEx_loadLocalManifest");
              __android_log_print(6,"jswrapper",
                                  "js_extension_AssetsManagerEx_loadLocalManifest : Error processing arguments"
                                 );
              this = (AssetsManagerEx *)0x0;
              iVar14 = 1;
              iVar13 = 1;
            }
            else {
              iVar14 = 1;
              iVar13 = 1;
              this = (AssetsManagerEx *)0x1;
            }
          }
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
            iVar13 = iVar14;
          }
          if (iVar13 != 8) goto LAB_008ad150;
        }
      }
      else if ((byte)pVVar6[8] < 2) {
        pMVar9 = (Manifest *)0x0;
        goto LAB_008acff4;
      }
    }
    else if (lVar11 == 1) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar7 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_88);
      if ((uVar7 & 1) == 0) {
        bVar2 = true;
      }
      else {
        bVar3 = cocos2d::extension::AssetsManagerEx::loadLocalManifest
                          (this,(basic_string *)&local_88);
        pVVar8 = (Value *)se::State::rval(aSStack_70);
        uVar7 = boolean_to_seval((bool)(bVar3 & 1),pVVar8);
        if ((uVar7 & 1) == 0) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                              ,0x3e0,"js_extension_AssetsManagerEx_loadLocalManifest");
          __android_log_print(6,"jswrapper",
                              "js_extension_AssetsManagerEx_loadLocalManifest : Error processing arguments"
                             );
          bVar2 = false;
          this = (AssetsManagerEx *)0x0;
        }
        else {
          bVar2 = false;
          this = (AssetsManagerEx *)0x1;
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (!bVar2) {
LAB_008ad150:
        if (((ulong)this & 1) != 0) goto LAB_008ad0b0;
        goto LAB_008ad084;
      }
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp, 1012): wrong number of arguments: %d\n"
                        ,(ulong)(lVar10 - (long)pVVar6) >> 4);
  }
LAB_008ad084:
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_extension_AssetsManagerEx_loadLocalManifest",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                      ,0x3f7);
LAB_008ad0b0:
  pVVar6 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_70);
  pVVar8 = local_b8;
  pVVar6 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar6 != pVVar8) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_b0 = pVVar8;
    operator_delete(local_b8);
  }
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

