
/* XMLHttpRequest_setResponseTypeRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void XMLHttpRequest_setResponseTypeRegistry(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  Value *pVVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uVar10;
  Isolate *pIVar11;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  ulong local_80;
  long *local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar11);
  pvVar6 = (void *)se::internal::getPrivate(pIVar11,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar11,param_2,aVStack_48);
  local_b8 = (Value *)0x0;
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,10);
  if (local_b0 < local_a8) {
    se::Value::Value(local_b0,aVStack_48);
    local_b0 = local_b0 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b8,aVStack_48);
  }
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  plVar7 = (long *)se::State::args(aSStack_70);
  if (plVar7[1] == *plVar7) {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp, 1102): wrong number of arguments: %d, was expecting > 0\n"
                        ,0);
  }
  else {
    local_80 = 0;
    local_78 = (long *)0x0;
    local_88 = 0;
    uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_88);
    if ((uVar8 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                          ,0x433,"XMLHttpRequest_setResponseType");
      __android_log_print(6,"jswrapper","args[0] couldn\'t be converted to string!");
LAB_008fdf1c:
      bVar2 = false;
    }
    else {
      lVar9 = se::State::nativeThisObject(aSStack_70);
      uVar8 = local_88 >> 1 & 0x7f;
      if ((local_88 & 1) != 0) {
        uVar8 = local_80;
      }
      if (uVar8 != 0xb) {
        if (uVar8 == 8) {
          plVar7 = (long *)((ulong)&local_88 | 1);
          if ((local_88 & 1) != 0) {
            plVar7 = local_78;
          }
          if (*plVar7 == 0x746e656d75636f64) {
            uVar10 = 3;
LAB_008fdea0:
            *(undefined1 *)(lVar9 + 0x262) = uVar10;
LAB_008fdff0:
            bVar2 = true;
            goto joined_r0x008fdf24;
          }
        }
        else if (uVar8 == 4) {
          plVar7 = (long *)((ulong)&local_88 | 1);
          if ((local_88 & 1) != 0) {
            plVar7 = local_78;
          }
          if ((int)*plVar7 == 0x74786574) {
            *(undefined1 *)(lVar9 + 0x262) = 0;
            goto LAB_008fdff0;
          }
          if ((int)*plVar7 == 0x6e6f736a) {
            uVar10 = 4;
            goto LAB_008fdea0;
          }
        }
LAB_008fded0:
        *(undefined1 *)(lVar9 + 0x262) = 1;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                            ,0x449,"XMLHttpRequest_setResponseType");
        __android_log_print(6,"jswrapper","The response type isn\'t supported!");
        goto LAB_008fdf1c;
      }
      plVar7 = (long *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        plVar7 = local_78;
      }
      iVar5 = memcmp(plVar7,"arraybuffer",0xb);
      if (iVar5 != 0) goto LAB_008fded0;
      bVar2 = true;
      *(undefined1 *)(lVar9 + 0x262) = 1;
    }
joined_r0x008fdf24:
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar2) goto LAB_008fdf60;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "XMLHttpRequest_setResponseType",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_xmlhttprequest.cpp"
                      ,0x451);
LAB_008fdf60:
  se::State::~State(aSStack_70);
  pVVar4 = local_b8;
  pVVar3 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_b0 = pVVar4;
    operator_delete(local_b8);
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_a0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

