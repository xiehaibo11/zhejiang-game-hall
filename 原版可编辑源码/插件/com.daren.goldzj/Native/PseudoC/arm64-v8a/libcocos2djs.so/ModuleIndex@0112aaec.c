
/* v8::internal::ScopeInfo::ModuleIndex(v8::internal::String, v8::internal::VariableMode*,
   v8::internal::InitializationFlag*, v8::internal::MaybeAssignedFlag*) */

int __thiscall
v8::internal::ScopeInfo::ModuleIndex
          (ScopeInfo *this,ulong param_2,VariableMode *param_3,InitializationFlag *param_4,
          MaybeAssignedFlag *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_54;
  ulong local_38;
  
  uVar1 = *(ulong *)this;
  if (*(int *)(uVar1 + 3) < 2) {
    uVar4 = 0;
    iVar5 = 4;
  }
  else {
    uVar4 = *(uint *)(uVar1 + 7) >> 0x17 & 1;
    iVar5 = (*(int *)(uVar1 + 0xf) >> 1) + (*(int *)(uVar1 + 0xf) >> 1) +
            (*(uint *)(uVar1 + 7) >> 0xb & 1) + (uint)((*(uint *)(uVar1 + 7) & 0x6000) != 0) * 2 +
            (*(uint *)(uVar1 + 7) >> 0xf & 1);
    if ((*(uint *)(uVar1 + 7) >> 8 & 3) - 1 < 2) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 + (uint)(((*(uint *)(uVar1 + 7) >> 1 & 0xf) - 1 & 0xff) < 4) * 2 + 4;
  }
  puVar3 = (uint *)(uVar1 + 7);
  iVar5 = *(int *)((long)puVar3 + (long)(int)((uVar4 + iVar5) * 4));
  if (*(int *)(uVar1 + 3) < 2) {
    uVar4 = 0;
    iVar7 = 5;
  }
  else {
    iVar7 = (*(int *)(uVar1 + 0xf) >> 1) + (*(int *)(uVar1 + 0xf) >> 1) + (*puVar3 >> 0xb & 1) +
            (uint)((*puVar3 & 0x6000) != 0) * 2 + (*puVar3 >> 0xf & 1);
    if ((*puVar3 >> 8 & 3) - 1 < 2) {
      iVar7 = iVar7 + 1;
    }
    uVar4 = *puVar3 >> 0x17 & 1;
    iVar7 = iVar7 + (uint)(((*puVar3 >> 1 & 0xf) - 1 & 0xff) < 4) * 2 + 5;
  }
  if (iVar5 < 2) {
LAB_0112ad20:
    local_54 = 0;
  }
  else {
    iVar7 = (uVar4 + iVar7) * 4;
    uVar4 = *(uint *)(uVar1 + (long)iVar7 + 7);
    local_38 = param_2;
    if (uVar4 == (uint)param_2) {
      iVar6 = 0;
    }
    else {
      uVar1 = uVar1 & 0xffffffff00000000;
      iVar6 = 0;
      uVar2 = uVar1 | uVar4;
      do {
        iVar7 = iVar7 + 0xc;
        if (((0x1f < *(ushort *)
                      ((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1))) ||
            (0x1f < *(ushort *)((uVar1 | 7) + (ulong)*(uint *)(uVar2 - 1)))) &&
           (uVar1 = String::SlowEquals((String *)&local_38,uVar2), (uVar1 & 1) != 0)) break;
        iVar6 = iVar6 + 1;
        if (iVar5 >> 1 <= iVar6) goto LAB_0112ad20;
        uVar4 = *(uint *)(*(ulong *)this + (long)iVar7 + 7);
        uVar1 = *(ulong *)this & 0xffffffff00000000;
        uVar2 = uVar1 | uVar4;
      } while (uVar4 != (uint)local_38);
    }
    ModuleVariable(this,iVar6,(String *)0x0,&local_54,param_3,param_4,param_5);
  }
  return local_54;
}

