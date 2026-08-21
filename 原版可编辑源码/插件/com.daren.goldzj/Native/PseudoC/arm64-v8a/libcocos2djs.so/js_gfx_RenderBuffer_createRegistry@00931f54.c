
/* js_gfx_RenderBuffer_createRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_RenderBuffer_createRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  void *pvVar10;
  long *plVar11;
  Value *pVVar12;
  Object *pOVar13;
  long lVar14;
  RenderBuffer *this;
  ulong uVar15;
  Isolate *pIVar16;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [28];
  int local_8c;
  ushort local_88 [2];
  ushort local_84 [2];
  State aSStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar16 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar16);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar10 = (void *)se::internal::getPrivate(pIVar16,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_80,pvVar10,(vector *)&local_c0);
  plVar11 = (long *)se::State::args(aSStack_80);
  pVVar12 = (Value *)*plVar11;
  if (plVar11[1] - (long)pVVar12 == 0x40) {
    local_84[0] = 0;
    local_88[0] = 0;
    if (pVVar12[8] == (Value)0x5) {
      pOVar13 = (Object *)se::Value::toObject(pVVar12);
      lVar14 = se::Object::getPrivateData(pOVar13);
      pVVar12 = (Value *)*plVar11;
      bVar6 = lVar14 == 0;
    }
    else {
      bVar6 = 1 < (byte)pVVar12[8];
      lVar14 = 0;
    }
    local_8c = 0;
    bVar7 = seval_to_int32(pVVar12 + 0x10,&local_8c);
    iVar3 = local_8c;
    bVar8 = seval_to_uint16((Value *)(*plVar11 + 0x20),local_84);
    bVar9 = seval_to_uint16((Value *)(*plVar11 + 0x30),local_88);
    uVar5 = local_84[0];
    uVar4 = local_88[0];
    if ((!bVar6 & bVar7 & bVar8 & bVar9) != 0) {
      this = operator_new(0x20,(nothrow_t *)&std::nothrow);
      if (this != (RenderBuffer *)0x0) {
        cocos2d::renderer::RenderBuffer::RenderBuffer(this);
        uVar15 = cocos2d::renderer::RenderBuffer::init(this,lVar14,iVar3,uVar5,uVar4);
        if ((uVar15 & 1) == 0) {
          (**(code **)(*(long *)this + 8))(this);
          this = (RenderBuffer *)0x0;
        }
        else {
          cocos2d::Ref::autorelease((Ref *)this);
        }
      }
      cocos2d::Ref::retain((Ref *)this);
      pOVar13 = (Object *)
                se::Object::createObjectWithClass(__jsb_cocos2d_renderer_RenderBuffer_class);
      se::Object::setPrivateData(pOVar13,this);
      pVVar12 = (Value *)se::State::rval(aSStack_80);
      se::Value::setObject(pVVar12,pOVar13,false);
      goto LAB_009321c4;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x509,"js_gfx_RenderBuffer_create");
    __android_log_print(6,"jswrapper","js_gfx_RenderBuffer_create : Error processing arguments");
  }
  else {
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1297): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar11[1] - (long)pVVar12) >> 4,4);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_RenderBuffer_create",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x514);
LAB_009321c4:
  pVVar12 = (Value *)se::State::rval(aSStack_80);
  se::internal::setReturnValue(pVVar12,param_1);
  se::State::~State(aSStack_80);
  pVVar2 = local_c0;
  pVVar12 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar12 != pVVar2) {
      se::Value::~Value(pVVar12 + -0x10);
      pVVar12 = pVVar12 + -0x10;
    }
    local_b8 = pVVar2;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

