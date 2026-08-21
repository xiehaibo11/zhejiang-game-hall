
/* js_universe_Downloader_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_Downloader_constructorRegistry(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  Object *this;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  ulong uVar9;
  ulong uVar10;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject(__jsb_universe_Downloader_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_universe_Downloader_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  puVar5 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR__Downloader_01c6ca18;
    puVar5[6] = 0;
    lVar6 = universe::core::Service::getInstance();
    puVar7 = (undefined8 *)puVar5[6];
    uVar10 = *(long *)(lVar6 + 0xe8) - *(long *)(lVar6 + 0xe0);
    if (puVar7 == (undefined8 *)0x0) {
      uVar1 = (long)(uVar10 * 0x20000000) >> 0x20;
      uVar9 = uVar1 << 3;
      if (uVar1 >> 0x3d != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      puVar7 = operator_new__(uVar9);
      puVar5[6] = puVar7;
    }
    if (0 < (int)(uVar10 >> 3)) {
      uVar10 = uVar10 >> 3 & 0xffffffff;
      *puVar7 = 0;
      if (uVar10 != 1) {
        uVar9 = 1;
        do {
          *(undefined8 *)(puVar5[6] + uVar9 * 8) = 0;
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
    }
    puVar5[0xc] = 0;
    puVar5[0x12] = 0;
    *(undefined1 *)(puVar5 + 0x14) = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x15] = 0;
    *(undefined4 *)(puVar5 + 0x18) = 0;
  }
  pOVar8 = (Object *)se::State::thisObject(aSStack_60);
  se::Object::setPrivateData(pOVar8,puVar5);
  se::NonRefNativePtrCreatedByCtorMap::emplace(puVar5);
  se::Value::Value(aVStack_70);
  uVar10 = se::Object::getProperty(this,"_ctor",aVStack_70);
  if ((uVar10 & 1) != 0) {
    pOVar8 = (Object *)se::Value::toObject(aVStack_70);
    se::Object::call(pOVar8,(vector *)&local_a0,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_70);
  se::State::~State(aSStack_60);
  pVVar4 = local_a0;
  pVVar3 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_98 = pVVar4;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

