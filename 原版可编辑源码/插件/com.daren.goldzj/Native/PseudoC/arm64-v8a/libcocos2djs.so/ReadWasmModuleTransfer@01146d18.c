
/* v8::internal::ValueDeserializer::ReadWasmModuleTransfer() */

long __thiscall v8::internal::ValueDeserializer::ReadWasmModuleTransfer(ValueDeserializer *this)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  Isolate *this_00;
  uint uVar8;
  byte *pbVar9;
  ulong *puVar10;
  
  uVar3 = wasm::WasmFeatures::FromIsolate(*(Isolate **)this);
  if (((FLAG_wasm_disable_structured_cloning == '\0') || ((uVar3 >> 1 & 1) != 0)) &&
     (this[0x28] == (ValueDeserializer)0x0)) {
    pbVar9 = *(byte **)(this + 0x10);
    uVar8 = 0;
    uVar3 = 0;
    do {
      if (*(byte **)(this + 0x18) <= pbVar9) goto LAB_01146e30;
      bVar2 = *pbVar9;
      if (uVar3 < 0x20) {
        uVar8 = (bVar2 & 0x7f) << (ulong)(uVar3 & 0x1f) | uVar8;
        uVar3 = uVar3 + 7;
      }
      pbVar9 = pbVar9 + 1;
      *(byte **)(this + 0x10) = pbVar9;
    } while ((char)bVar2 < '\0');
    plVar4 = *(long **)(this + 8);
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)this,uVar8), lVar5 != 0)) {
      iVar1 = *(int *)(this + 0x24);
      *(int *)(this + 0x24) = iVar1 + 1;
      puVar6 = (ulong *)FixedArray::SetAndGrow
                                  (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar1,lVar5);
      puVar10 = *(ulong **)(this + 0x30);
      if (puVar6 == puVar10) {
        return lVar5;
      }
      if (((puVar6 != (ulong *)0x0) && (puVar10 != (ulong *)0x0)) && (*puVar6 == *puVar10)) {
        return lVar5;
      }
      GlobalHandles::Destroy(puVar10);
      uVar7 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar6);
      *(undefined8 *)(this + 0x30) = uVar7;
      return lVar5;
    }
LAB_01146e30:
    this_00 = *(Isolate **)this;
    if (*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) {
      Isolate::PromoteScheduledException(this_00);
    }
  }
  return 0;
}

