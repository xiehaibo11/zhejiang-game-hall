
/* se::ScriptEngine::cleanup() */

void __thiscall se::ScriptEngine::cleanup(ScriptEngine *this)

{
  long lVar1;
  Isolate *pIVar2;
  long *plVar3;
  Context *this_00;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x20c] != (ScriptEngine)0x0) {
    __android_log_print(3,"jswrapper","ScriptEngine::cleanup begin ...\n");
    this[0x20e] = (ScriptEngine)0x1;
    pIVar2 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_50,pIVar2);
    plVar5 = *(long **)(this + 0x50);
    plVar6 = *(long **)(this + 0x58);
    if (plVar5 != plVar6) {
      do {
        if ((long *)plVar5[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*(long *)plVar5[4] + 0x30))();
        plVar5 = plVar5 + 6;
      } while (plVar6 != plVar5);
      plVar5 = *(long **)(this + 0x50);
      plVar6 = *(long **)(this + 0x58);
joined_r0x0090a970:
      if (plVar6 != plVar5) {
        plVar3 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 != plVar3) goto code_r0x0090a984;
        pcVar4 = *(code **)(*plVar3 + 0x20);
        goto LAB_0090a99c;
      }
    }
    *(long **)(this + 0x58) = plVar5;
    if (*(RefCounter **)(this + 0xa0) != (RefCounter *)0x0) {
      RefCounter::decRef(*(RefCounter **)(this + 0xa0));
      *(undefined8 *)(this + 0xa0) = 0;
    }
    Object::cleanup();
    Class::cleanup();
    garbageCollect(this);
    se::Value::setUndefined((Value *)&DAT_01d371c0);
    se::Value::setUndefined((Value *)&DAT_01d371d0);
    se::Value::setUndefined((Value *)&DAT_01d371e0);
    se::Value::setUndefined((Value *)&DAT_01d371f0);
    se::Value::setUndefined((Value *)&DAT_01d37200);
    se::Value::setUndefined((Value *)&DAT_01d37210);
    if (*(ulong **)(this + 0x80) == (ulong *)0x0) {
      this_00 = (Context *)0x0;
    }
    else {
      this_00 = (Context *)
                v8::HandleScope::CreateHandle(*(Isolate **)(this + 0x90),**(ulong **)(this + 0x80));
    }
    v8::Context::Exit(this_00);
    if (*(ulong **)(this + 0x80) != (ulong *)0x0) {
      v8::V8::DisposeGlobal(*(ulong **)(this + 0x80));
      *(undefined8 *)(this + 0x80) = 0;
    }
    v8::Isolate::Exit();
    v8::HandleScope::~HandleScope(aHStack_50);
    v8::Isolate::Dispose(*(Isolate **)(this + 0x90));
    plVar5 = *(long **)(this + 0x68);
    plVar6 = *(long **)(this + 0x70);
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    this[0x20c] = (ScriptEngine)0x0;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
    if (plVar5 != plVar6) {
      do {
        if ((long *)plVar5[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*(long *)plVar5[4] + 0x30))();
        plVar5 = plVar5 + 6;
      } while (plVar6 != plVar5);
      plVar5 = *(long **)(this + 0x68);
      plVar6 = *(long **)(this + 0x70);
joined_r0x0090aaa4:
      if (plVar6 != plVar5) {
        plVar3 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 != plVar3) goto code_r0x0090aab8;
        pcVar4 = *(code **)(*plVar3 + 0x20);
        goto LAB_0090aad0;
      }
    }
    *(long **)(this + 0x70) = plVar5;
    this[0x20e] = (ScriptEngine)0x0;
    NativePtrToObjectMap::destroy();
    NonRefNativePtrCreatedByCtorMap::destroy();
    *(undefined8 *)(this + 0xb8) = 0;
    __android_log_print(3,"jswrapper","ScriptEngine::cleanup end ...\n");
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0090a984:
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
LAB_0090a99c:
    (*pcVar4)();
  }
  goto joined_r0x0090a970;
code_r0x0090aab8:
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x28);
LAB_0090aad0:
    (*pcVar4)();
  }
  goto joined_r0x0090aaa4;
}

