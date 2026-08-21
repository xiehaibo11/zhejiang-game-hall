
/* XMLHttpRequest_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void XMLHttpRequest_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Object *this;
  XMLHttpRequest *this_00;
  Object *pOVar3;
  Value *pVVar4;
  ulong uVar5;
  code *pcVar6;
  Value *local_168;
  Value *local_160;
  undefined8 local_158;
  HandleScope aHStack_150 [24];
  State aSStack_138 [40];
  XMLHttpRequest *local_110;
  Value aVStack_108 [16];
  Value aVStack_f8 [16];
  Value aVStack_e8 [16];
  Value aVStack_d8 [16];
  XMLHttpRequest *local_c8;
  Value aVStack_c0 [16];
  Value aVStack_b0 [16];
  Value aVStack_a0 [32];
  Value *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_150,*(Isolate **)(*(long *)param_1 + 8));
  local_168 = (Value *)0x0;
  local_160 = (Value *)0x0;
  local_158 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_168,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_168);
  this = (Object *)
         se::Object::_createJSObject(__jsb_XMLHttpRequest_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,XMLHttpRequest_finalizeRegistry);
  se::State::State(aSStack_138,this,(vector *)&local_168);
  this_00 = operator_new(0x270);
  XMLHttpRequest::XMLHttpRequest(this_00);
  pOVar3 = (Object *)se::State::thisObject(aSStack_138);
  se::Object::setPrivateData(pOVar3,this_00);
  pOVar3 = (Object *)se::State::thisObject(aSStack_138);
  se::Value::Value(aVStack_d8,pOVar3,false);
  se::Value::Value(aVStack_e8,aVStack_d8);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_d8);
  se::Value::Value(aVStack_f8,aVStack_e8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  se::Value::Value(aVStack_b0,aVStack_f8);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x30);
  *(undefined ***)pVVar4 = &PTR_FUN_01c68430;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  se::Value::Value(pVVar4 + 0x20,aVStack_b0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0x10);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
LAB_008fb574:
    (*pcVar6)();
  }
  else if (local_80 != (Value *)0x0) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_008fb574;
  }
  se::Value::~Value(aVStack_b0);
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_f8);
  se::Value::~Value(aVStack_108);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_e8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x20);
  *(undefined ***)pVVar4 = &PTR_FUN_01c684b0;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0x40);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
LAB_008fb62c:
    (*pcVar6)();
  }
  else if (local_80 != (Value *)0x0) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_008fb62c;
  }
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_108);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_e8);
  se::Value::Value(aVStack_f8,aVStack_d8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  se::Value::Value(aVStack_b0,aVStack_f8);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x30);
  *(undefined ***)pVVar4 = &PTR_FUN_01c68530;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  se::Value::Value(pVVar4 + 0x20,aVStack_b0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0x70);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
LAB_008fb708:
    (*pcVar6)();
  }
  else if (local_80 != (Value *)0x0) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_008fb708;
  }
  se::Value::~Value(aVStack_b0);
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_f8);
  se::Value::~Value(aVStack_108);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_e8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x20);
  *(undefined ***)pVVar4 = &PTR_FUN_01c685b0;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0xa0);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
LAB_008fb7c0:
    (*pcVar6)();
  }
  else if (local_80 != (Value *)0x0) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_008fb7c0;
  }
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_108);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_e8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x20);
  *(undefined ***)pVVar4 = &PTR_FUN_01c68630;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0xd0);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
LAB_008fb868:
    (*pcVar6)();
  }
  else if (local_80 != (Value *)0x0) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_008fb868;
  }
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_108);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_e8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x20);
  *(undefined ***)pVVar4 = &PTR_FUN_01c686b0;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0x100);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
LAB_008fb910:
    (*pcVar6)();
  }
  else if (local_80 != (Value *)0x0) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_008fb910;
  }
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_108);
  local_110 = this_00;
  se::Value::Value(aVStack_108,aVStack_e8);
  local_c8 = local_110;
  se::Value::Value(aVStack_c0,aVStack_108);
  local_80 = (Value *)0x0;
  pVVar4 = operator_new(0x20);
  *(undefined ***)pVVar4 = &PTR_FUN_01c68730;
  *(XMLHttpRequest **)(pVVar4 + 8) = local_c8;
  se::Value::Value(pVVar4 + 0x10,aVStack_c0);
  local_80 = pVVar4;
  FUN_008feca4(aVStack_a0,this_00 + 0x130);
  if (aVStack_a0 == local_80) {
    pcVar6 = *(code **)(*(long *)local_80 + 0x20);
  }
  else {
    if (local_80 == (Value *)0x0) goto LAB_008fb9bc;
    pcVar6 = *(code **)(*(long *)local_80 + 0x28);
  }
  (*pcVar6)();
LAB_008fb9bc:
  se::Value::~Value(aVStack_c0);
  se::Value::~Value(aVStack_108);
  se::Value::~Value(aVStack_e8);
  se::Value::~Value(aVStack_d8);
  se::Value::Value(aVStack_a0);
  uVar5 = se::Object::getProperty(this,"_ctor",aVStack_a0);
  if ((uVar5 & 1) != 0) {
    pOVar3 = (Object *)se::Value::toObject(aVStack_a0);
    se::Object::call(pOVar3,(vector *)&local_168,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_a0);
  se::State::~State(aSStack_138);
  pVVar2 = local_168;
  pVVar4 = local_160;
  if (local_168 != (Value *)0x0) {
    while (pVVar4 != pVVar2) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_160 = pVVar2;
    operator_delete(local_168);
  }
  v8::HandleScope::~HandleScope(aHStack_150);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

