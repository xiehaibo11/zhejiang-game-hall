
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualFunctionTemplateInfoDetails(v8::internal::FunctionTemplateInfo)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualFunctionTemplateInfoDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  
  uVar1 = *(uint *)(param_2 + 0x17);
  uVar5 = param_2 & 0xffffffff00000000;
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(*(long *)this + -0x87b0))) {
    uVar3 = uVar5 | uVar1;
    local_38 = uVar3;
    iVar2 = HeapObject::SizeFromMap((HeapObject *)&local_38,uVar5 | *(uint *)(uVar3 - 1));
    RecordVirtualObjectStats(this,param_2,uVar3,0x25,(long)iVar2,0,0);
  }
  uVar1 = *(uint *)(param_2 + 0x23);
  uVar4 = *(ulong *)(uVar5 + 0xa0);
  uVar3 = uVar4;
  if (uVar1 != (uint)uVar4) {
    uVar3 = (ulong)*(uint *)((uVar5 | uVar1) + 0x1b);
  }
  if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(*(long *)this + -0x87b0))) {
    if (uVar1 != (uint)uVar4) {
      uVar4 = uVar5 | *(uint *)((uVar5 | uVar1) + 0x1b);
    }
    local_38 = uVar4;
    iVar2 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_38,
                       uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1));
    RecordVirtualObjectStats(this,param_2,uVar4,0x25,(long)iVar2,0,0);
  }
  return;
}

