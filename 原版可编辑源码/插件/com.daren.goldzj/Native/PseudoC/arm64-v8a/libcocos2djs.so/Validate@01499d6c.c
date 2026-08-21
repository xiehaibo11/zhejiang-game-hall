
/* v8::internal::SourceTextModuleDescriptor::Validate(v8::internal::ModuleScope*,
   v8::internal::PendingCompilationErrorHandler*, v8::internal::Zone*) */

undefined8 __thiscall
v8::internal::SourceTextModuleDescriptor::Validate
          (SourceTextModuleDescriptor *this,ModuleScope *param_1,
          PendingCompilationErrorHandler *param_2,Zone *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  SourceTextModuleDescriptor *pSVar7;
  SourceTextModuleDescriptor *pSVar8;
  SourceTextModuleDescriptor *pSVar9;
  
  puVar3 = (undefined4 *)FindDuplicateExport(this,param_3);
  if (puVar3 == (undefined4 *)0x0) {
    if (*(SourceTextModuleDescriptor **)(this + 0x60) != this + 0x68) {
      pSVar9 = *(SourceTextModuleDescriptor **)(this + 0x60);
      do {
        puVar3 = *(undefined4 **)(pSVar9 + 0x28);
        lVar4 = VariableMap::Lookup((VariableMap *)(param_1 + 0x20),*(AstRawString **)(puVar3 + 4));
        if (lVar4 == 0) {
          uVar1 = *puVar3;
          uVar2 = puVar3[1];
          uVar6 = *(undefined8 *)(puVar3 + 4);
          uVar5 = 0x112;
          goto LAB_01499dac;
        }
        pSVar7 = *(SourceTextModuleDescriptor **)(pSVar9 + 8);
        if (*(SourceTextModuleDescriptor **)(pSVar9 + 8) == (SourceTextModuleDescriptor *)0x0) {
          pSVar7 = pSVar9 + 0x10;
          pSVar8 = *(SourceTextModuleDescriptor **)pSVar7;
          if (*(SourceTextModuleDescriptor **)pSVar8 != pSVar9) {
            do {
              lVar4 = *(long *)pSVar7;
              pSVar7 = (SourceTextModuleDescriptor *)(lVar4 + 0x10);
              pSVar8 = *(SourceTextModuleDescriptor **)pSVar7;
            } while (*(long *)pSVar8 != lVar4);
          }
        }
        else {
          do {
            pSVar8 = pSVar7;
            pSVar7 = *(SourceTextModuleDescriptor **)pSVar8;
          } while (*(SourceTextModuleDescriptor **)pSVar8 != (SourceTextModuleDescriptor *)0x0);
        }
        pSVar9 = pSVar8;
      } while (pSVar8 != this + 0x68);
    }
    MakeIndirectExportsExplicit((Zone *)this);
    AssignCellIndices(this);
    uVar5 = 1;
  }
  else {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    uVar6 = *(undefined8 *)(puVar3 + 2);
    uVar5 = 0xe9;
LAB_01499dac:
    PendingCompilationErrorHandler::ReportMessageAt(param_2,uVar1,uVar2,uVar5,uVar6);
    uVar5 = 0;
  }
  return uVar5;
}

