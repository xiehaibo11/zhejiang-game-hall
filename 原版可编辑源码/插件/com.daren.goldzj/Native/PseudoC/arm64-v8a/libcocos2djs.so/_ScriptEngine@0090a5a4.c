
/* se::ScriptEngine::~ScriptEngine() */

void __thiscall se::ScriptEngine::~ScriptEngine(ScriptEngine *this)

{
  ScriptEngine *pSVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  
  cleanup(this);
  v8::V8::Dispose();
  v8::V8::ShutdownPlatform();
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  if (((byte)this[0x1e8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1f8));
  }
  pSVar1 = *(ScriptEngine **)(this + 0x1d0);
  if (this + 0x1b0 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_0090a610:
    (*pcVar4)();
  }
  else if (pSVar1 != (ScriptEngine *)0x0) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_0090a610;
  }
  pSVar1 = *(ScriptEngine **)(this + 0x1a0);
  if (this + 0x180 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_0090a63c:
    (*pcVar4)();
  }
  else if (pSVar1 != (ScriptEngine *)0x0) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_0090a63c;
  }
  pSVar1 = *(ScriptEngine **)(this + 0x170);
  if (this + 0x150 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_0090a668:
    (*pcVar4)();
  }
  else if (pSVar1 != (ScriptEngine *)0x0) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_0090a668;
  }
  pSVar1 = *(ScriptEngine **)(this + 0x140);
  if (this + 0x120 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_0090a694:
    (*pcVar4)();
  }
  else if (pSVar1 != (ScriptEngine *)0x0) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_0090a694;
  }
  pSVar1 = *(ScriptEngine **)(this + 0x110);
  if (this + 0xf0 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
LAB_0090a6c0:
    (*pcVar4)();
  }
  else if (pSVar1 != (ScriptEngine *)0x0) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
    goto LAB_0090a6c0;
  }
  pSVar1 = *(ScriptEngine **)(this + 0xe0);
  if (this + 0xc0 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (ScriptEngine *)0x0) goto LAB_0090a6f0;
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar4)();
LAB_0090a6f0:
  se::Value::~Value((Value *)(this + 0xa8));
  plVar5 = *(long **)(this + 0x68);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(this + 0x70);
    plVar2 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_0090a738:
          (*pcVar4)();
        }
        else if (plVar2 != (long *)0x0) {
          pcVar4 = *(code **)(*plVar2 + 0x28);
          goto LAB_0090a738;
        }
      } while (plVar5 != plVar6);
      plVar2 = *(long **)(this + 0x68);
    }
    *(long **)(this + 0x70) = plVar5;
    operator_delete(plVar2);
  }
  plVar5 = *(long **)(this + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(this + 0x58);
    plVar2 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_0090a790:
          (*pcVar4)();
        }
        else if (plVar2 != (long *)0x0) {
          pcVar4 = *(code **)(*plVar2 + 0x28);
          goto LAB_0090a790;
        }
      } while (plVar5 != plVar6);
      plVar2 = *(long **)(this + 0x50);
    }
    *(long **)(this + 0x58) = plVar5;
    operator_delete(plVar2);
  }
  plVar5 = *(long **)(this + 0x38);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(this + 0x40);
    plVar2 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_0090a7e8:
          (*pcVar4)();
        }
        else if (plVar2 != (long *)0x0) {
          pcVar4 = *(code **)(*plVar2 + 0x28);
          goto LAB_0090a7e8;
        }
      } while (plVar5 != plVar6);
      plVar2 = *(long **)(this + 0x38);
    }
    *(long **)(this + 0x40) = plVar5;
    operator_delete(plVar2);
  }
  plVar5 = *(long **)(this + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(this + 0x28);
    plVar2 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_0090a840:
          (*pcVar4)();
        }
        else if (plVar2 != (long *)0x0) {
          pcVar4 = *(code **)(*plVar2 + 0x28);
          goto LAB_0090a840;
        }
      } while (plVar5 != plVar6);
      plVar2 = *(long **)(this + 0x20);
    }
    *(long **)(this + 0x28) = plVar5;
    operator_delete(plVar2);
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  return;
}

