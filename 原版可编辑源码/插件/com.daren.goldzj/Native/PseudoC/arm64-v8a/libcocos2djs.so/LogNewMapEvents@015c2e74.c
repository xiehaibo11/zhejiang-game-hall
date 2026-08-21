
/* v8::internal::Deserializer::LogNewMapEvents() */

void __thiscall v8::internal::Deserializer::LogNewMapEvents(Deserializer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  Logger *pLVar5;
  
  puVar2 = *(undefined8 **)(this + 0x90);
  for (puVar1 = *(undefined8 **)(this + 0x88); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar4 = *puVar1;
    pLVar5 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar3 = Logger::is_logging(pLVar5);
    if ((uVar3 & 1) != 0) {
      Logger::MapCreate(pLVar5,uVar4);
    }
    pLVar5 = *(Logger **)(*(long *)(this + 0x50) + 0x9558);
    uVar3 = Logger::is_logging(pLVar5);
    if ((uVar3 & 1) != 0) {
      Logger::MapDetails(pLVar5,uVar4);
    }
  }
  return;
}

