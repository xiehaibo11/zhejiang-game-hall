
/* v8::internal::ObjectStatsCollectorImpl::SameLiveness(v8::internal::HeapObject,
   v8::internal::HeapObject) */

bool __thiscall
v8::internal::ObjectStatsCollectorImpl::SameLiveness(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  bVar3 = true;
  if (((int)param_2 != 0) && ((int)param_3 != 0)) {
    uVar5 = param_2 - (param_2 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) +
                     (uVar5 >> 7 & 0x1ffffff) * 4);
    iVar4 = 1;
    uVar2 = 1 << (ulong)((uint)(uVar5 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) == 0) {
      iVar6 = 1;
    }
    else {
      uVar2 = uVar2 << 1;
      bVar3 = uVar2 == 0;
      if (bVar3) {
        uVar2 = 1;
      }
      iVar6 = (uint)((puVar1[bVar3] & uVar2) == 0) << 1;
    }
    uVar5 = param_3 - (param_3 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((param_3 & 0xfffffffffffc0000) + 0x10) +
                     (uVar5 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(uVar5 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) != 0) {
      uVar2 = uVar2 << 1;
      bVar3 = uVar2 == 0;
      if (bVar3) {
        uVar2 = 1;
      }
      iVar4 = (uint)((puVar1[bVar3] & uVar2) == 0) << 1;
    }
    bVar3 = iVar6 == iVar4;
  }
  return bVar3;
}

