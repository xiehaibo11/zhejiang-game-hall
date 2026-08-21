
/* v8::internal::Deserializer::LogNewObjectEvents() */

void __thiscall v8::internal::Deserializer::LogNewObjectEvents(Deserializer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Logger *pLVar4;
  undefined8 uVar5;
  
  pLVar4 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
  uVar3 = (**(code **)(*(long *)pLVar4 + 0x88))(pLVar4);
  if ((uVar3 & 1) != 0) {
    Logger::LogCodeObjects(pLVar4);
  }
  pLVar4 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
  uVar3 = (**(code **)(*(long *)pLVar4 + 0x88))(pLVar4);
  if ((uVar3 & 1) != 0) {
    Logger::LogCompiledFunctions(pLVar4);
  }
  puVar2 = *(undefined8 **)(this + 0x90);
  for (puVar1 = *(undefined8 **)(this + 0x88); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar5 = *puVar1;
    pLVar4 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar3 = Logger::is_logging(pLVar4);
    if ((uVar3 & 1) != 0) {
      Logger::MapCreate(pLVar4,uVar5);
    }
    pLVar4 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar3 = Logger::is_logging(pLVar4);
    if ((uVar3 & 1) != 0) {
      Logger::MapDetails(pLVar4,uVar5);
    }
  }
  return;
}

