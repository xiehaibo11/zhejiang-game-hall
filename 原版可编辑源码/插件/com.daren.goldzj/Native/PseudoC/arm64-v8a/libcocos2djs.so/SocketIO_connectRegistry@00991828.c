
/* SocketIO_connectRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void SocketIO_connectRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  Ref *this;
  Ref *this_00;
  Object *this_01;
  Value *pVVar7;
  SIODelegate *pSVar8;
  Isolate *pIVar9;
  int iVar10;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar9);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_c0);
  plVar5 = (long *)se::State::args(aSStack_60);
  iVar10 = (int)((ulong)(plVar5[1] - *plVar5) >> 4);
  if (iVar10 - 1U < 3) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_78);
    if ((uVar6 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                          ,0x133,"SocketIO_connect");
      __android_log_print(6,"jswrapper",&DAT_0190552e);
LAB_00991b20:
      bVar2 = false;
    }
    else {
      if (iVar10 == 3) {
        if ((*(char *)(*plVar5 + 0x28) != '\x04') ||
           (uVar6 = seval_to_std_string((Value *)(*plVar5 + 0x20),(basic_string *)&local_90),
           (uVar6 & 1) != 0)) goto LAB_009919f4;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                            ,0x14b,"SocketIO_connect");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_00991b20;
      }
      if (((iVar10 == 2) && (*(char *)(*plVar5 + 0x18) == '\x04')) &&
         (uVar6 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_90),
         (uVar6 & 1) == 0)) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                            ,0x13f,"SocketIO_connect");
        __android_log_print(6,"jswrapper",&DAT_0190552e);
        goto LAB_00991b20;
      }
LAB_009919f4:
      this = operator_new(0x40,(nothrow_t *)&std::nothrow);
      if (this == (Ref *)0x0) {
        pSVar8 = (SIODelegate *)0x10;
      }
      else {
        cocos2d::Ref::Ref(this);
        pSVar8 = (SIODelegate *)(this + 0x10);
        *(undefined ***)pSVar8 = &PTR__JSB_SocketIODelegate_01c6a4e0;
        *(undefined ***)this = &PTR__JSB_SocketIODelegate_01c6a498;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined4 *)(this + 0x38) = 0x3f800000;
      }
      this_00 = (Ref *)cocos2d::network::SocketIO::connect
                                 ((basic_string *)&local_78,pSVar8,(basic_string *)&local_90);
      if (this_00 == (Ref *)0x0) {
        cocos2d::Ref::release(this);
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp, 355): SocketIO.connect return nullptr!\n"
                           );
        goto LAB_00991b20;
      }
      cocos2d::Ref::retain(this_00);
      cocos2d::Ref::retain(this);
      this_01 = (Object *)se::Object::createObjectWithClass(__jsb_SocketIO_class);
      se::Object::setPrivateData(this_01,this_00);
      pVVar7 = (Value *)se::State::rval(aSStack_60);
      se::Value::setObject(pVVar7,this_01,false);
      se::Object::root(this_01);
      bVar2 = true;
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (bVar2) goto LAB_00991b7c;
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp, 359): JSB SocketIO.connect: Wrong number of arguments\n"
                       );
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "SocketIO_connect",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_socketio.cpp"
                      ,0x16a);
LAB_00991b7c:
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar7 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

