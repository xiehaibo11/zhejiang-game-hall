
void FUN_008aff08(long param_1,basic_string *param_2,ulong *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Isolate *pIVar7;
  Object *pOVar8;
  Object *this;
  ulong uVar9;
  long lVar10;
  bool local_d4 [4];
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong uStack_70;
  undefined4 local_68;
  Value aVStack_58 [24];
  
  lVar1 = tpidr_el0;
  lVar10 = *(long *)(lVar1 + 0x28);
  local_90 = (void *)param_3[2];
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  local_78 = (void *)param_3[5];
  uStack_70 = param_3[6];
  uStack_80 = param_3[4];
  local_88 = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  local_68 = (undefined4)param_3[7];
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[3] = 0;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar7 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_b8,pIVar7);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,2);
  uVar4 = std_string_to_seval(param_2,local_d0);
  uVar5 = ManifestAsset_to_seval((ManifestAsset *)&local_a0,local_d0 + 0x10);
  se::Value::Value(aVStack_58);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar8 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar8 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar9 = se::Object::call(this,(vector *)&local_d0,pOVar8,aVStack_58);
  if ((uVar9 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  uVar6 = seval_to_boolean(aVStack_58,local_d4);
  if ((uVar4 & uVar5 & uVar6 & 1) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_extension_auto.cpp"
                        ,0x301,"operator()");
    __android_log_print(6,"jswrapper",
                        "lambda function : Error processing return value with type bool");
  }
  se::Value::~Value(aVStack_58);
  pVVar3 = local_d0;
  pVVar2 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_c8 = pVVar3;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_d4[0] != false);
  }
  return;
}

