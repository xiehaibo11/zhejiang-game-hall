
/* v8::internal::ValueDeserializer::ReadWasmMemory() */

undefined8 __thiscall v8::internal::ValueDeserializer::ReadWasmMemory(ValueDeserializer *this)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong *puVar9;
  uint uVar10;
  
  iVar1 = *(int *)(this + 0x24);
  *(int *)(this + 0x24) = iVar1 + 1;
  uVar3 = wasm::WasmFeatures::FromIsolate(*(Isolate **)this);
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar8 = *(byte **)(this + 0x10);
    uVar10 = 0;
    uVar3 = 0;
    do {
      if (*(byte **)(this + 0x18) <= pbVar8) {
        return 0;
      }
      bVar2 = *pbVar8;
      if (uVar3 < 0x20) {
        uVar10 = (bVar2 & 0x7f) << (ulong)(uVar3 & 0x1f) | uVar10;
        uVar3 = uVar3 + 7;
      }
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 0x10) = pbVar8;
    } while ((char)bVar2 < '\0');
    do {
      if (*(byte **)(this + 0x18) <= pbVar8) {
        return 0;
      }
      bVar2 = *pbVar8;
      *(byte **)(this + 0x10) = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar2 == 0);
    if ((bVar2 == 0x75) && (lVar4 = ReadJSArrayBuffer(this,true), lVar4 != 0)) {
      uVar5 = WasmMemoryObject::New(*(undefined8 *)this,lVar4,-(uVar10 & 1) ^ uVar10 >> 1);
      puVar6 = (ulong *)FixedArray::SetAndGrow
                                  (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar1,uVar5);
      puVar9 = *(ulong **)(this + 0x30);
      if (puVar6 == puVar9) {
        return uVar5;
      }
      if (((puVar6 != (ulong *)0x0) && (puVar9 != (ulong *)0x0)) && (*puVar6 == *puVar9)) {
        return uVar5;
      }
      GlobalHandles::Destroy(puVar9);
      uVar7 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar6);
      *(undefined8 *)(this + 0x30) = uVar7;
      return uVar5;
    }
  }
  return 0;
}

