
/* v8::internal::Deserializer::LogScriptEvents(v8::internal::Script) */

void __thiscall v8::internal::Deserializer::LogScriptEvents(Deserializer *this,long param_2)

{
  ulong uVar1;
  Logger *pLVar2;
  
  pLVar2 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
  uVar1 = Logger::is_logging(pLVar2);
  if ((uVar1 & 1) != 0) {
    Logger::ScriptEvent(pLVar2,2,*(int *)(param_2 + 0x1f) >> 1);
  }
  pLVar2 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
  uVar1 = Logger::is_logging(pLVar2);
  if ((uVar1 & 1) != 0) {
    Logger::ScriptDetails(pLVar2,param_2);
    return;
  }
  return;
}

