
/* js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndicesRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndicesRegistry
               (FunctionCallbackInfo *param_1)

{
  type *ptVar1;
  long lVar2;
  Value *pVVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  Value *pVVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  Value *local_a8;
  Value *local_a0;
  Value *local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar12);
  local_a8 = operator_new(0xa0);
  local_98 = local_a8 + 0xa0;
  local_a0 = local_a8;
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar5,(vector *)&local_a8);
  lVar6 = se::State::nativeThisObject(aSStack_60);
  if (lVar6 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0xc10,"js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndices");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndices : Invalid Native Object"
                       );
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_60);
    if (plVar7[1] - *plVar7 == 0x10) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = (void *)0x0;
      uVar8 = seval_to_std_string((Value *)*plVar7,(basic_string *)&local_78);
      if ((uVar8 & 1) == 0) {
        uVar11 = 0xc17;
LAB_00ca9770:
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                            ,uVar11,
                            "js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndices");
        __android_log_print(6,"jswrapper",&DAT_01934665);
        bVar4 = false;
      }
      else {
        lVar9 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                            *)(lVar6 + 0xb0),(basic_string *)&local_78);
        ptVar1 = (type *)0x0;
        if (lVar6 + 0xb8 != lVar9) {
          ptVar1 = (type *)(lVar9 + 0x38);
        }
        pVVar10 = (Value *)se::State::rval(aSStack_60);
        bVar4 = native_ptr_to_seval<std::__ndk1::vector<int,std::__ndk1::allocator<int>>>
                          (ptVar1,pVVar10,(bool *)0x0);
        if (!bVar4) {
          uVar11 = 0xc1a;
          goto LAB_00ca9770;
        }
        bVar4 = true;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      if (bVar4) goto LAB_00ca97d0;
    }
    else {
      __android_log_print(6,"jswrapper",&DAT_019346c2,(ulong)(plVar7[1] - *plVar7) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_cocos2dx_dragonbones_AnimationData_getBoneCachedFrameIndices",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                      ,0xc20);
LAB_00ca97d0:
  pVVar10 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar10 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar10 != pVVar3) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
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

