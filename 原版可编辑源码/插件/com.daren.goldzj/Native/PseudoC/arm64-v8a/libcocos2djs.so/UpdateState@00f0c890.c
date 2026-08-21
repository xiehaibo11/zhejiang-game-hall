
/* v8::internal::Debug::UpdateState() */

void __thiscall v8::internal::Debug::UpdateState(Debug *this)

{
  Debug DVar1;
  
  if (this[8] == (Debug)(*(long *)this != 0)) {
    return;
  }
  if (*(long *)this == 0) {
    CompilationCache::EnableScriptAndEval(*(CompilationCache **)(*(long *)(this + 0x88) + 0x9518));
    Unload(this);
    DVar1 = (Debug)0x0;
  }
  else {
    CompilationCache::DisableScriptAndEval(*(CompilationCache **)(*(long *)(this + 0x88) + 0x9518));
    if (((byte)this[0x38] >> 1 & 1) == 0) {
      DVar1 = (Debug)0x1;
      Histogram::AddSample((int)*(undefined8 *)(*(long *)(this + 0x30) + 0x9520) + 0xf8);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
    }
    else {
      DVar1 = (Debug)0x1;
    }
  }
  this[8] = DVar1;
  Isolate::PromiseHookStateUpdated(*(Isolate **)(this + 0x88));
  return;
}

