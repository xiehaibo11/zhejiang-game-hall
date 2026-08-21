
/* v8::internal::wasm::InstanceBuilder::SanitizeImports() */

void __thiscall v8::internal::wasm::InstanceBuilder::SanitizeImports(InstanceBuilder *this)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar6 = *(long *)(this + 0x10);
  if (*(long *)(lVar6 + 0xd8) != *(long *)(lVar6 + 0xd0)) {
    lVar11 = 0;
    uVar9 = 0;
    puVar8 = *(undefined8 **)
              (**(long **)(*(long *)((**(ulong **)(this + 0x20) & 0xffffffff00000000 |
                                     (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xb)) + 3) + 0x18)
              + 0xe0);
    uVar1 = *puVar8;
    uVar3 = puVar8[1];
    do {
      lVar10 = *(long *)(lVar6 + 0xd0);
      lVar6 = WasmModuleObject::ExtractUtf8StringFromModuleBytes
                        (*(WasmModuleObject **)this,uVar1,uVar3,*(undefined8 *)(lVar10 + lVar11));
      if (lVar6 == 0) {
        pcVar7 = *(char **)(this + 0x18);
        pcVar5 = "Could not resolve module name for import %zu";
LAB_015f7c58:
        ErrorThrower::LinkError(pcVar7,pcVar5,uVar9);
        return;
      }
      lVar10 = WasmModuleObject::ExtractUtf8StringFromModuleBytes
                         (*(WasmModuleObject **)this,uVar1,uVar3,
                          *(undefined8 *)(lVar10 + lVar11 + 8));
      if (lVar10 == 0) {
        pcVar7 = *(char **)(this + 0x18);
        pcVar5 = "Could not resolve import name for import %zu";
        goto LAB_015f7c58;
      }
      if (*(char *)(*(long *)(this + 0x10) + 0x178) == '\0') {
        lVar4 = LookupImport(this,uVar9 & 0xffffffff,lVar6,lVar10);
      }
      else {
        lVar4 = LookupImportAsm(this,uVar9 & 0xffffffff,lVar10);
      }
      pcVar7 = *(char **)(this + 0x18);
      if (*(int *)(pcVar7 + 0x10) != 0) {
        pcVar5 = "Could not find value for import %zu";
        goto LAB_015f7c58;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      plVar2 = *(long **)(this + 0x78);
      local_78 = lVar6;
      lStack_70 = lVar10;
      local_68 = lVar4;
      if (plVar2 < *(long **)(this + 0x80)) {
        plVar2[2] = lVar4;
        plVar2[1] = lVar10;
        *plVar2 = lVar6;
        *(long *)(this + 0x78) = *(long *)(this + 0x78) + 0x18;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::InstanceBuilder::SanitizedImport,std::__ndk1::allocator<v8::internal::wasm::InstanceBuilder::SanitizedImport>>
        ::__push_back_slow_path<v8::internal::wasm::InstanceBuilder::SanitizedImport>
                  ((vector<v8::internal::wasm::InstanceBuilder::SanitizedImport,std::__ndk1::allocator<v8::internal::wasm::InstanceBuilder::SanitizedImport>>
                    *)(this + 0x70),(SanitizedImport *)&local_78);
      }
      lVar6 = *(long *)(this + 0x10);
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar9 < (ulong)((*(long *)(lVar6 + 0xd8) - *(long *)(lVar6 + 0xd0) >> 3) *
                            -0x5555555555555555));
  }
  return;
}

