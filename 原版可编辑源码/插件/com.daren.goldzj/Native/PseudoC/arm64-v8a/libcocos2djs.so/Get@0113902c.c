
/* v8::internal::ConsString::Get(int) */

void __thiscall v8::internal::ConsString::Get(ConsString *this,int param_1)

{
  int *piVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_20;
  int local_1c;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  uVar3 = local_18 & 0xffffffff00000000;
  local_1c = param_1;
  if (*(int *)((uVar3 | *(uint *)(local_18 + 0xf)) + 7) == 0) {
    local_18 = uVar3 | *(uint *)(local_18 + 0xb);
  }
  else {
    uVar2 = *(ushort *)((uVar3 | *(uint *)(local_18 - 1)) + 7);
    while ((uVar2 & 7) == 1) {
      uVar4 = uVar3 | *(uint *)(local_18 + 0xb);
      piVar1 = (int *)(uVar4 + 7);
      if (*piVar1 <= local_1c) {
        uVar4 = uVar3 | *(uint *)(local_18 + 0xf);
        local_1c = local_1c - *piVar1;
      }
      uVar3 = uVar4 & 0xffffffff00000000;
      local_18 = uVar4;
      uVar2 = *(ushort *)((uVar3 | *(uint *)(uVar4 - 1)) + 7);
    }
  }
  local_20 = (uint)*(ushort *)((uVar3 | *(uint *)(local_18 - 1)) + 7);
  _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
            (&local_20,&local_18,&local_1c);
  return;
}

