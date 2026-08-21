
/* js_gfx_DeviceGraphics_clearRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_DeviceGraphics_clearRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  DeviceGraphics *this;
  long *plVar6;
  Object *this_00;
  ulong uVar7;
  Object *pOVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  byte bVar11;
  undefined4 uVar12;
  double dVar13;
  Value *local_f8;
  Value *local_f0;
  undefined8 local_e8;
  HandleScope aHStack_e0 [28];
  uint local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  State aSStack_b0 [40];
  Value aVStack_88 [8];
  char local_80;
  Value aVStack_78 [8];
  char local_70;
  Value aVStack_68 [8];
  char local_60;
  Value aVStack_58 [8];
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_e0,pIVar10);
  local_f8 = (Value *)0x0;
  local_f0 = (Value *)0x0;
  local_e8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_f8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_f8);
  pvVar5 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_b0,pvVar5,(vector *)&local_f8);
  this = (DeviceGraphics *)se::State::nativeThisObject(aSStack_b0);
  if (this == (DeviceGraphics *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x26,"js_gfx_DeviceGraphics_clear");
    __android_log_print(6,"jswrapper","js_gfx_DeviceGraphics_clear : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_b0);
    if (plVar6[1] - *plVar6 == 0x10) {
      _uStack_b8 = cocos2d::Color4F::BLACK._8_8_;
      _local_c0 = cocos2d::Color4F::BLACK._0_8_;
      this_00 = (Object *)se::Value::toObject((Value *)*plVar6);
      se::Value::Value(aVStack_58);
      se::Value::Value(aVStack_68);
      se::Value::Value(aVStack_78);
      uVar7 = se::Object::getProperty(this_00,"color",aVStack_58);
      if ((uVar7 & 1) == 0) {
        bVar11 = 0;
      }
      else {
        if (local_50 == '\x05') {
          pOVar8 = (Object *)se::Value::toObject(aVStack_58);
          uVar7 = se::Object::isArray(pOVar8);
          if ((uVar7 & 1) == 0) goto LAB_0096032c;
          pOVar8 = (Object *)se::Value::toObject(aVStack_58);
          local_c4 = 0;
          uVar3 = se::Object::getArrayLength(pOVar8,&local_c4);
          if (local_c4 == 4 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
            se::Value::Value(aVStack_88);
            uVar7 = se::Object::getArrayElement(pOVar8,0,aVStack_88);
            if (((uVar7 & 1) != 0) && (local_80 == '\x02')) {
              uVar12 = se::Value::toFloat(aVStack_88);
              local_c0 = uVar12;
            }
            uVar7 = se::Object::getArrayElement(pOVar8,1,aVStack_88);
            if (((uVar7 & 1) != 0) && (local_80 == '\x02')) {
              uVar12 = se::Value::toFloat(aVStack_88);
              uStack_bc = uVar12;
            }
            uVar7 = se::Object::getArrayElement(pOVar8,2,aVStack_88);
            if (((uVar7 & 1) != 0) && (local_80 == '\x02')) {
              uVar12 = se::Value::toFloat(aVStack_88);
              uStack_b8 = uVar12;
            }
            uVar7 = se::Object::getArrayElement(pOVar8,3,aVStack_88);
            if (((uVar7 & 1) != 0) && (local_80 == '\x02')) {
              uVar12 = se::Value::toFloat(aVStack_88);
              uStack_b4 = uVar12;
            }
            se::Value::~Value(aVStack_88);
          }
        }
        else {
LAB_0096032c:
          __android_log_print(6,"jswrapper","Invalid clear color flag!\n");
        }
        bVar11 = 1;
      }
      uVar7 = se::Object::getProperty(this_00,"depth",aVStack_68);
      dVar13 = 1.0;
      if (((uVar7 & 1) != 0) && (bVar11 = bVar11 | 2, local_60 == '\x02')) {
        dVar13 = (double)se::Value::toNumber(aVStack_68);
      }
      uVar7 = se::Object::getProperty(this_00,"stencil",aVStack_78);
      if (((uVar7 & 1) == 0) || (bVar11 = bVar11 | 4, local_70 != '\x02')) {
        iVar4 = 0;
      }
      else {
        iVar4 = se::Value::toInt32(aVStack_78);
      }
      cocos2d::renderer::DeviceGraphics::clear(this,bVar11,(Color4F *)&local_c0,dVar13,iVar4);
      se::Value::~Value(aVStack_78);
      se::Value::~Value(aVStack_68);
      se::Value::~Value(aVStack_58);
      goto LAB_009603e8;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 109): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - *plVar6) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_DeviceGraphics_clear",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x70);
LAB_009603e8:
  pVVar9 = (Value *)se::State::rval(aSStack_b0);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_b0);
  pVVar2 = local_f8;
  pVVar9 = local_f0;
  if (local_f8 != (Value *)0x0) {
    while (pVVar9 != pVVar2) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_f0 = pVVar2;
    operator_delete(local_f8);
  }
  v8::HandleScope::~HandleScope(aHStack_e0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

