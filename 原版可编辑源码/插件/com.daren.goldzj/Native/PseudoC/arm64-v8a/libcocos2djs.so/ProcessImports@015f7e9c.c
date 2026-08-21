
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::wasm::InstanceBuilder::ProcessImports(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

int __thiscall
v8::internal::wasm::InstanceBuilder::ProcessImports(InstanceBuilder *this,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong local_68;
  
  CompileImportWrappers();
  lVar7 = *(long *)(this + 0x10);
  uVar8 = (*(long *)(lVar7 + 0xd8) - *(long *)(lVar7 + 0xd0) >> 3) * -0x5555555555555555;
  if ((int)uVar8 < 1) {
    return 0;
  }
  lVar18 = 0;
  iVar13 = 0;
  iVar17 = 0;
  lVar19 = (uVar8 & 0xffffffff) * 0x18 + -0x18;
  do {
    lVar9 = *(long *)(lVar7 + 0xd0);
    bVar5 = *(byte *)(lVar9 + lVar18 + 0x10);
    if (4 < bVar5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar1 = (undefined8 *)(*(long *)(this + 0x70) + lVar18);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    puVar14 = (ulong *)puVar1[2];
    switch(bVar5) {
    case 0:
      uVar8 = ProcessImportedFunction
                        (this,param_2,iVar13,*(undefined4 *)(lVar9 + lVar18 + 0x14),uVar2,uVar3,
                         puVar14);
      if ((uVar8 & 1) == 0) {
        return -1;
      }
      iVar17 = iVar17 + 1;
      if (lVar19 == lVar18) {
        return iVar17;
      }
      goto LAB_015f80a0;
    case 1:
      uVar8 = ProcessImportedTable
                        (this,param_2,iVar13,*(undefined4 *)(lVar9 + lVar18 + 0x14),uVar2,uVar3,
                         puVar14);
      break;
    case 2:
      uVar8 = ProcessImportedMemory(this,param_2,iVar13,uVar2,uVar3,puVar14);
      break;
    case 3:
      uVar8 = ProcessImportedGlobal
                        (this,param_2,iVar13,*(undefined4 *)(lVar9 + lVar18 + 0x14),uVar2,uVar3,
                         puVar14);
      break;
    case 4:
      uVar8 = *puVar14;
      if (((uVar8 & 1) == 0) ||
         (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x432)) {
        pcVar6 = "exception import requires a WebAssembly.Exception";
LAB_015f8124:
        ReportLinkError(this,pcVar6,iVar13,uVar2,uVar3);
        return -1;
      }
      lVar9 = lVar9 + lVar18;
      local_68 = uVar8;
      uVar8 = WasmExceptionObject::IsSignatureEqual
                        ((WasmExceptionObject *)&local_68,
                         *(Signature **)
                          (*(long *)(lVar7 + 0x100) + (ulong)*(uint *)(lVar9 + 0x14) * 8));
      if ((uVar8 & 1) == 0) {
        pcVar6 = "imported exception does not match the expected type";
        goto LAB_015f8124;
      }
      uVar10 = *puVar14;
      uVar12 = (ulong)*(uint *)(*param_2 + 0x9b);
      uVar4 = *(uint *)(uVar10 + 0xf);
      uVar8 = *param_2 & 0xffffffff00000000;
      uVar15 = uVar8 | uVar12;
      lVar7 = uVar15 + (long)(*(int *)(lVar9 + 0x14) << 2);
      *(uint *)(lVar7 + 7) = uVar4;
      if ((uVar4 & 1) != 0) {
        uVar10 = uVar10 & 0xffffffff00000000;
        uVar16 = uVar10 | uVar4;
        uVar10 = uVar10 | (ulong)uVar4 & 0xfffffffffffc0000;
        uVar11 = *(ulong *)(uVar10 + 8);
        lVar7 = lVar7 + 7;
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar15,lVar7,uVar16);
          uVar11 = *(ulong *)(uVar10 | 8);
        }
        if (((uVar11 & 0x18) != 0) &&
           ((*(byte *)((uVar8 | uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar15,lVar7,uVar16);
        }
      }
      *(ulong **)(*(long *)(this + 0x50) + (ulong)*(uint *)(lVar9 + 0x14) * 8) = puVar14;
      goto joined_r0x015f8070;
    }
    if ((uVar8 & 1) == 0) {
      return -1;
    }
joined_r0x015f8070:
    if (lVar19 == lVar18) {
      return iVar17;
    }
LAB_015f80a0:
    lVar7 = *(long *)(this + 0x10);
    iVar13 = iVar13 + 1;
    lVar18 = lVar18 + 0x18;
  } while( true );
}

