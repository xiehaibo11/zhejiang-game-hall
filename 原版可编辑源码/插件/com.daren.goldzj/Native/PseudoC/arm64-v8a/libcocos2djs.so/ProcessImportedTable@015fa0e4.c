
/* v8::internal::wasm::InstanceBuilder::ProcessImportedTable(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, int, v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::wasm::InstanceBuilder::ProcessImportedTable
          (InstanceBuilder *this,ulong *param_2,ulong param_3,int param_4,undefined8 param_5,
          undefined8 param_6,ulong *param_7)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  
  uVar11 = *param_7;
  param_3 = param_3 & 0xffffffff;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x437)) {
    pcVar4 = "table import requires a WebAssembly.Table";
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x10) + 0xb8);
    uVar1 = *(uint *)(lVar8 + (long)param_4 * 0x10 + 4);
    uVar6 = *(int *)(uVar11 + 0xf) >> 1;
    if ((int)uVar6 < (int)uVar1) {
      ErrorThrower::LinkError
                (*(char **)(this + 0x18),"table import %d is smaller than initial %d, got %u",
                 param_3,(ulong)uVar1,(ulong)uVar6);
      return 0;
    }
    lVar10 = (long)param_4;
    if (*(char *)(lVar8 + lVar10 * 0x10 + 0xc) != '\0') {
      uVar6 = *(uint *)(uVar11 + 0x13);
      if ((uVar6 & 1) == 0) {
        dVar13 = (double)((int)uVar6 >> 1);
      }
      else {
        if (uVar6 == *(uint *)(*(long *)this + 0xa0)) goto LAB_015fa24c;
        dVar13 = *(double *)((uVar11 & 0xffffffff00000000 | (ulong)uVar6) + 3);
      }
      lVar2 = (long)dVar13;
      if (lVar2 < 0) {
LAB_015fa24c:
        ErrorThrower::LinkError
                  (*(char **)(this + 0x18),"table import %d has no maximum length, expected %d",
                   param_3,(ulong)*(uint *)(lVar8 + lVar10 * 0x10 + 8));
        return 0;
      }
      uVar7 = (ulong)*(uint *)(lVar8 + lVar10 * 0x10 + 8);
      if ((long)uVar7 < lVar2) {
        ErrorThrower::LinkError
                  (*(char **)(this + 0x18),
                   "table import %d has a larger maximum size %lx than the module\'s declared maximum %u"
                   ,param_3,lVar2,uVar7);
        return 0;
      }
    }
    uVar6 = (uint)*(byte *)(lVar8 + lVar10 * 0x10);
    if (uVar6 == (*(uint *)(uVar11 + 0x1b) >> 1 & 0xff)) {
      if (uVar6 == 7) {
        uVar11 = InitializeImportedIndirectFunctionTable(this,param_2,param_4,param_3,param_7);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        uVar11 = *param_7;
        bVar3 = (uVar11 & 1) == 0;
      }
      else {
        bVar3 = false;
      }
      uVar9 = (ulong)*(uint *)(*param_2 + 0x8f);
      uVar7 = *param_2 & 0xffffffff00000000;
      uVar12 = uVar7 | uVar9;
      lVar8 = uVar12 + (long)(param_4 << 2);
      *(int *)(lVar8 + 7) = (int)uVar11;
      if (!bVar3) {
        uVar5 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar8 = lVar8 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,lVar8,uVar11);
          uVar5 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) &&
           ((*(byte *)((uVar7 | uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar12,lVar8,uVar11);
        }
      }
      return 1;
    }
    pcVar4 = "imported table does not match the expected type";
  }
  ReportLinkError(this,pcVar4,param_3,param_5,param_6);
  return 0;
}

