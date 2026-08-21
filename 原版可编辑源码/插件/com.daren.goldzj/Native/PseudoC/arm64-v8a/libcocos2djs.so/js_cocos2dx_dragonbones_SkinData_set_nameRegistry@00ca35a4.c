
/* js_cocos2dx_dragonbones_SkinData_set_nameRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void js_cocos2dx_dragonbones_SkinData_set_nameRegistry
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  Value *pVVar4;
  Value *pVVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  Isolate *pIVar10;
  Value *local_b8;
  Value *local_b0;
  Value *local_a8;
  HandleScope aHStack_a0 [24];
  ulong local_88;
  ulong local_80;
  char *local_78;
  State aSStack_70 [40];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_a0,pIVar10);
  pvVar6 = (void *)se::internal::getPrivate(pIVar10,*param_3 + 0x30);
  se::Value::Value(aVStack_48);
  se::internal::jsToSeValue(pIVar10,param_2,aVStack_48);
  local_b8 = operator_new(0xa0);
  local_a8 = local_b8 + 0xa0;
  local_b0 = local_b8;
  se::Value::Value(local_b8,aVStack_48);
  local_b0 = local_b0 + 0x10;
  se::State::State(aSStack_70,pvVar6,(vector *)&local_b8);
  puVar7 = (undefined8 *)se::State::args(aSStack_70);
  lVar8 = se::State::nativeThisObject(aSStack_70);
  if (lVar8 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x84f,"js_cocos2dx_dragonbones_SkinData_set_name");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_SkinData_set_name : Invalid Native Object");
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_78 = (char *)0x0;
    uVar9 = seval_to_std_string((Value *)*puVar7,(basic_string *)&local_88);
    if ((uVar9 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                          ,0x854,"js_cocos2dx_dragonbones_SkinData_set_name");
      __android_log_print(6,"jswrapper",
                          "js_cocos2dx_dragonbones_SkinData_set_name : Error processing new value");
      bVar3 = false;
    }
    else {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_88 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar8 + 0x10)) {
        uVar9 = local_88 >> 1 & 0x7f;
        pcVar2 = (char *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          uVar9 = local_80;
          pcVar2 = local_78;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar8 + 0x10),pcVar2,uVar9);
      }
      bVar3 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar3) goto LAB_00ca37a0;
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_SkinData_set_name",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0x858);
LAB_00ca37a0:
  se::State::~State(aSStack_70);
  pVVar5 = local_b8;
  pVVar4 = local_b0;
  if (local_b8 != (Value *)0x0) {
    while (pVVar4 != pVVar5) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_b0 = pVVar5;
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

