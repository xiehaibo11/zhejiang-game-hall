
/* v8::internal::SharedFunctionInfo::Init(v8::internal::ReadOnlyRoots, int) */

void v8::internal::SharedFunctionInfo::Init(ulong *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  ulong local_38;
  
  *(undefined4 *)(*param_1 + 3) = 0x12e;
  *(undefined4 *)(*param_1 + 7) = 0;
  *(undefined4 *)(*param_1 + 0xb) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*param_1 + 0xf) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(*param_1 + 0x1f) = 0xffffffff;
  *(undefined2 *)(*param_1 + 0x13) = 0;
  *(undefined2 *)(*param_1 + 0x15) = 0;
  *(undefined2 *)(*param_1 + 0x17) = 0;
  *(undefined2 *)(*param_1 + 0x19) = 0;
  *(undefined4 *)(*param_1 + 0x1b) = 0x2000000;
  uVar5 = *param_1;
  uVar2 = *(uint *)(uVar5 + 0x1b);
  uVar3 = *(uint *)(uVar5 + 0x1b);
  uVar4 = *(uint *)(uVar5 + 7);
  uVar1 = uVar3 & 0x1f;
  if (((uVar4 & 1) == 0) ||
     (local_38 = uVar5 & 0xffffffff00000000 | (ulong)uVar4,
     *(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
    uVar4 = (uint)(uVar4 != 0);
  }
  else {
    uVar4 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
    uVar5 = *param_1;
  }
  puVar6 = (uint *)(uVar5 + 0x1b);
  uVar7 = 0xb8000;
  if ((uVar1 - 3 & 0xff) < 4) goto LAB_01113890;
  if ((uVar1 - 0xd & 0xff) < 4) {
    iVar8 = 0xbc;
    if (4 < (uVar1 - 10 & 0xff)) {
      iVar8 = 0xb8;
    }
  }
  else {
    uVar3 = uVar3 & 0x1f;
    if (uVar3 < 0x13) {
      uVar1 = 1 << (ulong)uVar3;
      if ((uVar1 & 0x7c04) == 0) {
        if ((uVar1 & 0x70380) == 0) goto LAB_011138bc;
        iVar8 = 0xb0;
      }
      else {
        iVar8 = 0xb4;
      }
    }
    else {
LAB_011138bc:
      iVar8 = 0xa9;
      if ((uVar2 & 0x40) != 0) {
        iVar8 = 0xad;
      }
    }
  }
  uVar7 = (iVar8 + (*puVar6 >> 0xc & 2 | ~uVar4 & 1)) * 0x8000 - 0x548000;
LAB_01113890:
  *puVar6 = *puVar6 & 0xfff07fff | uVar7;
  *(undefined4 *)(*param_1 + 0x23) = 0;
  return;
}

