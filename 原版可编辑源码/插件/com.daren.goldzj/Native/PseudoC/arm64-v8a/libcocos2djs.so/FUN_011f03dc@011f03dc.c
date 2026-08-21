
undefined4 FUN_011f03dc(Isolate *param_1,Context *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  CachedData *this;
  long lVar2;
  Script *pSVar3;
  ulong uVar4;
  undefined4 uVar5;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  CachedData *local_80;
  TryCatch aTStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  v8::Context::Enter(param_2);
  v8::TryCatch::TryCatch(aTStack_78,param_1);
  lVar2 = v8::String::NewFromUtf8(param_1,param_3,0,0xffffffff);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lStack_b0 = v8::String::NewFromUtf8(param_1,param_4,0,0xffffffff);
    if (lStack_b0 == 0) {
      v8::V8::ToLocalEmpty();
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (CachedData *)0x0;
    local_b8 = lVar2;
    pSVar3 = (Script *)v8::ScriptCompiler::Compile(param_2,&local_b8,0,0);
    if ((pSVar3 == (Script *)0x0) || (lVar2 = v8::Script::Run(pSVar3,param_2), lVar2 == 0)) {
      uVar5 = 0;
      this = local_80;
    }
    else {
      uVar4 = v8::TryCatch::HasCaught(aTStack_78);
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!try_catch.HasCaught()");
      }
      uVar5 = 1;
      this = local_80;
    }
    local_80 = this;
    if (this != (CachedData *)0x0) {
      v8::ScriptCompiler::CachedData::~CachedData(this);
      operator_delete(this);
    }
  }
  v8::TryCatch::~TryCatch(aTStack_78);
  v8::Context::Exit(param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

