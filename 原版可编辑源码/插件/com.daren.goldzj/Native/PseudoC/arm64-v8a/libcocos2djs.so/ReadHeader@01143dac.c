
/* v8::internal::ValueDeserializer::ReadHeader() */

undefined8 __thiscall v8::internal::ValueDeserializer::ReadHeader(ValueDeserializer *this)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  Factory *pFVar8;
  
  pbVar3 = *(byte **)(this + 0x10);
  pbVar5 = *(byte **)(this + 0x18);
  if ((pbVar3 < pbVar5) && (*pbVar3 == 0xff)) {
    do {
      if (pbVar5 <= pbVar3) {
        v8::V8::FromJustIsNothing();
        pbVar4 = *(byte **)(this + 0x10);
        pbVar5 = *(byte **)(this + 0x18);
        break;
      }
      pbVar4 = pbVar3 + 1;
      bVar1 = *pbVar3;
      *(byte **)(this + 0x10) = pbVar4;
      pbVar3 = pbVar4;
    } while (bVar1 == 0);
    uVar6 = 0;
    uVar7 = 0;
    do {
      if (pbVar5 <= pbVar4) goto LAB_01143e4c;
      bVar1 = *pbVar4;
      if (uVar7 < 0x20) {
        uVar6 = (bVar1 & 0x7f) << (ulong)(uVar7 & 0x1f) | uVar6;
        uVar7 = uVar7 + 7;
      }
      pbVar4 = pbVar4 + 1;
      *(byte **)(this + 0x10) = pbVar4;
    } while ((char)bVar1 < '\0');
    *(uint *)(this + 0x20) = uVar6;
    if (0xd < uVar6) {
LAB_01143e4c:
      pFVar8 = *(Factory **)this;
      puVar2 = (undefined8 *)Factory::NewError(pFVar8,0x16d,0,0,0);
      Isolate::Throw((Isolate *)pFVar8,*puVar2,0);
      return 0;
    }
  }
  return 0x101;
}

