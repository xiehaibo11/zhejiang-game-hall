
/* v8::internal::SharedFunctionInfo::SetName(v8::internal::String) */

void __thiscall v8::internal::SharedFunctionInfo::SetName(SharedFunctionInfo *this,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  ulong local_38;
  
  uVar6 = *(ulong *)this;
  if (((*(uint *)(uVar6 + 7) & 1) == 0) ||
     (local_38 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7),
     *(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
    *(int *)(uVar6 + 7) = (int)param_2;
    if ((param_2 & 1) != 0) {
      uVar6 = *(ulong *)this;
      uVar7 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
      lVar5 = uVar6 + 7;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,lVar5,param_2);
        uVar6 = *(ulong *)this;
        uVar7 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
        lVar5 = uVar6 + 7;
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,lVar5,param_2);
      }
    }
  }
  else {
    ScopeInfo::SetFunctionName((ScopeInfo *)&local_38,param_2);
  }
  uVar6 = *(ulong *)this;
  uVar2 = *(uint *)(uVar6 + 0x1b);
  uVar3 = *(uint *)(uVar6 + 0x1b);
  uVar4 = *(uint *)(uVar6 + 7);
  uVar1 = uVar3 & 0x1f;
  if (((uVar4 & 1) == 0) ||
     (local_38 = uVar6 & 0xffffffff00000000 | (ulong)uVar4,
     *(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
    uVar4 = (uint)(uVar4 != 0);
  }
  else {
    uVar4 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
    uVar6 = *(ulong *)this;
  }
  puVar8 = (uint *)(uVar6 + 0x1b);
  uVar9 = 0xb8000;
  if ((uVar1 - 3 & 0xff) < 4) goto LAB_00ebd868;
  if ((uVar1 - 0xd & 0xff) < 4) {
    iVar10 = 0xbc;
    if (4 < (uVar1 - 10 & 0xff)) {
      iVar10 = 0xb8;
    }
  }
  else {
    uVar3 = uVar3 & 0x1f;
    if (uVar3 < 0x13) {
      uVar1 = 1 << (ulong)uVar3;
      if ((uVar1 & 0x7c04) == 0) {
        if ((uVar1 & 0x70380) == 0) goto LAB_00ebd88c;
        iVar10 = 0xb0;
      }
      else {
        iVar10 = 0xb4;
      }
    }
    else {
LAB_00ebd88c:
      iVar10 = 0xa9;
      if ((uVar2 & 0x40) != 0) {
        iVar10 = 0xad;
      }
    }
  }
  uVar9 = (iVar10 + (*puVar8 >> 0xc & 2 | ~uVar4 & 1)) * 0x8000 - 0x548000;
LAB_00ebd868:
  *puVar8 = *puVar8 & 0xfff07fff | uVar9;
  return;
}

