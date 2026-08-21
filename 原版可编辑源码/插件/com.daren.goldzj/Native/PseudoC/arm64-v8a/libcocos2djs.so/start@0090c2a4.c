
/* se::ScriptEngine::start() */

undefined4 __thiscall se::ScriptEngine::start(ScriptEngine *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = init(this);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_50,pIVar4);
    uVar5 = std::__ndk1::chrono::steady_clock::now();
    puVar7 = *(undefined8 **)(this + 8);
    puVar1 = *(undefined8 **)(this + 0x10);
    *(undefined8 *)this = uVar5;
    if (puVar7 == puVar1) {
      uVar6 = 0;
    }
    else {
      do {
        uVar3 = (*(code *)*puVar7)(*(undefined8 *)(this + 0xa0));
        if ((uVar3 & 1) == 0) {
          uVar6 = 0;
          goto LAB_0090c32c;
        }
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      uVar6 = 1;
LAB_0090c32c:
      puVar7 = *(undefined8 **)(this + 8);
    }
    *(undefined8 **)(this + 0x10) = puVar7;
    v8::HandleScope::~HandleScope(aHStack_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

