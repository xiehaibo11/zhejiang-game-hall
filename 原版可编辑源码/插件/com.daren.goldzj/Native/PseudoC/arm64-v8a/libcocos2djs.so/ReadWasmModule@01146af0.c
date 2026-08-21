
/* v8::internal::ValueDeserializer::ReadWasmModule() */

long __thiscall v8::internal::ValueDeserializer::ReadWasmModule(ValueDeserializer *this)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *local_78;
  ulong uStack_70;
  undefined4 local_68 [2];
  Isolate *local_60;
  char *pcStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = wasm::WasmFeatures::FromIsolate(*(Isolate **)this);
  if (((FLAG_wasm_disable_structured_cloning == '\0') || ((uVar6 >> 1 & 1) != 0)) &&
     (this[0x28] != (ValueDeserializer)0x0)) {
    pcVar2 = *(char **)(this + 0x10);
    pbVar3 = *(byte **)(this + 0x18);
    if (0 < (long)pbVar3 - (long)pcVar2) {
      pbVar14 = (byte *)(pcVar2 + 1);
      *(byte **)(this + 0x10) = pbVar14;
      if (*pcVar2 == 'y') {
        uVar12 = 0;
        uVar6 = 0;
        do {
          if (pbVar3 <= pbVar14) {
            return 0;
          }
          bVar5 = *pbVar14;
          if (uVar6 < 0x20) {
            uVar12 = (bVar5 & 0x7f) << (ulong)(uVar6 & 0x1f) | uVar12;
            uVar6 = uVar6 + 7;
          }
          pbVar14 = pbVar14 + 1;
          *(byte **)(this + 0x10) = pbVar14;
        } while ((char)bVar5 < '\0');
        if ((-1 < (int)uVar12) &&
           (uVar15 = (ulong)uVar12, (long)uVar15 <= (long)pbVar3 - (long)pbVar14)) {
          uVar12 = 0;
          uVar6 = 0;
          *(byte **)(this + 0x10) = pbVar14 + uVar15;
          pbVar13 = pbVar14;
          do {
            if (pbVar3 <= pbVar13 + uVar15) {
              return 0;
            }
            bVar5 = pbVar13[uVar15];
            if (uVar6 < 0x20) {
              uVar12 = (bVar5 & 0x7f) << (ulong)(uVar6 & 0x1f) | uVar12;
              uVar6 = uVar6 + 7;
            }
            pbVar1 = pbVar13 + uVar15 + 1;
            pbVar13 = pbVar13 + 1;
            *(byte **)(this + 0x10) = pbVar1;
          } while ((char)bVar5 < '\0');
          if (-1 < (int)uVar12) {
            uVar10 = (ulong)uVar12;
            if ((long)uVar10 <= (long)pbVar3 - (long)(pbVar13 + uVar15)) {
              *(byte **)(this + 0x10) = pbVar13 + uVar10 + uVar15;
              lVar7 = wasm::DeserializeNativeModule
                                (*(undefined8 *)this,pbVar13 + uVar15,uVar10,pbVar14,uVar15);
              if (lVar7 == 0) {
                local_60 = *(Isolate **)this;
                local_50 = 0;
                local_48 = 0;
                uStack_40 = 0;
                pcStack_58 = "ValueDeserializer::ReadWasmModule";
                local_38 = 0;
                local_68[0] = wasm::WasmFeatures::FromIsolate(local_60);
                local_78 = pbVar14;
                uStack_70 = uVar15;
                lVar7 = wasm::WasmEngine::SyncCompile
                                  (*(WasmEngine **)(*(Isolate **)this + 0xc770),*(Isolate **)this,
                                   (WasmFeatures *)local_68,(ErrorThrower *)&local_60,
                                   (ModuleWireBytes *)&local_78);
                wasm::ErrorThrower::~ErrorThrower((ErrorThrower *)&local_60);
                iVar4 = *(int *)(this + 0x24);
                *(int *)(this + 0x24) = iVar4 + 1;
                if (lVar7 == 0) {
                  return 0;
                }
              }
              else {
                iVar4 = *(int *)(this + 0x24);
                *(int *)(this + 0x24) = iVar4 + 1;
              }
              puVar8 = (ulong *)FixedArray::SetAndGrow
                                          (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar4,
                                           lVar7);
              puVar11 = *(ulong **)(this + 0x30);
              if (puVar8 != puVar11) {
                if (((puVar8 != (ulong *)0x0) && (puVar11 != (ulong *)0x0)) && (*puVar8 == *puVar11)
                   ) {
                  return lVar7;
                }
                GlobalHandles::Destroy(puVar11);
                uVar9 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar8);
                *(undefined8 *)(this + 0x30) = uVar9;
                return lVar7;
              }
              return lVar7;
            }
          }
        }
      }
    }
  }
  return 0;
}

