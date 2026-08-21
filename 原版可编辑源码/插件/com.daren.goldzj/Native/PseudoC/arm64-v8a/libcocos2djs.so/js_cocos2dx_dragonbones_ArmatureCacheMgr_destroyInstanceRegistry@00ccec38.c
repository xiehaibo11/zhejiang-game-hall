
/* js_cocos2dx_dragonbones_ArmatureCacheMgr_destroyInstanceRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_ArmatureCacheMgr_destroyInstanceRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>
  *pMVar3;
  Value *pVVar4;
  void *pvVar5;
  long *plVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_a0;
  Value *local_98;
  Value *local_90;
  HandleScope aHStack_88 [24];
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_88,pIVar8);
  local_a0 = operator_new(0xa0);
  local_90 = local_a0 + 0xa0;
  local_98 = local_a0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  pvVar5 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar5,(vector *)&local_a0);
  plVar6 = (long *)se::State::args(aSStack_70);
  pMVar3 = dragonBones::ArmatureCacheMgr::_instance;
  if (plVar6[1] - *plVar6 == 0) {
    if (dragonBones::ArmatureCacheMgr::_instance !=
        (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>
         *)0x0) {
      cocos2d::
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>
      ::clear(dragonBones::ArmatureCacheMgr::_instance);
      puVar2 = *(void **)(pMVar3 + 0x10);
      while (puVar2 != (void *)0x0) {
        pvVar5 = (void *)*puVar2;
        if ((*(byte *)(puVar2 + 2) & 1) != 0) {
          operator_delete((void *)puVar2[4]);
        }
        operator_delete(puVar2);
        puVar2 = pvVar5;
      }
      pvVar5 = *(void **)pMVar3;
      *(undefined8 *)pMVar3 = 0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      operator_delete(pMVar3);
      dragonBones::ArmatureCacheMgr::_instance =
           (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>
            *)0x0;
    }
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp, 8375): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - *plVar6) >> 4,0);
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_ArmatureCacheMgr_destroyInstance",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x20ba);
  }
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_a0;
  pVVar7 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar7 != pVVar4) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_98 = pVVar4;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

