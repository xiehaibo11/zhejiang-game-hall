
/* v8::internal::V8HeapExplorer::ExtractSharedFunctionInfoReferences(v8::internal::HeapEntry*,
   v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractSharedFunctionInfoReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  char *pcVar9;
  ulong local_38;
  
  local_38 = param_3;
  iVar1 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_38);
  if (iVar1 == *(int *)(*(long *)(this + 8) + -0x8788)) {
    uVar2 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_38);
    pcVar9 = *(char **)(this + 0x18);
    lVar3 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_38);
    uVar4 = Code::Kind2String(*(uint *)(lVar3 + 0x17) >> 1 & 0x1f);
    pcVar5 = "(%s code)";
  }
  else {
    uVar4 = StringsStorage::GetName(*(StringsStorage **)(this + 0x18));
    uVar2 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_38);
    pcVar9 = *(char **)(this + 0x18);
    pcVar5 = "(code for %s)";
  }
  uVar4 = StringsStorage::GetFormatted(pcVar9,pcVar5,uVar4);
  TagObject(this,uVar2,uVar4);
  uVar7 = local_38 & 0xffffffff00000000;
  puVar8 = (uint *)(local_38 + 7);
  if (((*puVar8 & 1) != 0) &&
     (uVar6 = uVar7 | *puVar8, *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x83)) {
    TagObject(this,uVar6,"(function scope info)");
    uVar7 = local_38 & 0xffffffff00000000;
    puVar8 = (uint *)(local_38 + 7);
  }
  SetInternalReference(this,param_1,"name_or_scope_info",uVar7 | *puVar8,8);
  SetInternalReference
            (this,param_1,"script_or_debug_info",
             local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xf),0x10);
  SetInternalReference
            (this,param_1,"function_data",
             local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3),4);
  SetInternalReference
            (this,param_1,"raw_outer_scope_info_or_feedback_metadata",
             local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xb),0xc);
  return;
}

