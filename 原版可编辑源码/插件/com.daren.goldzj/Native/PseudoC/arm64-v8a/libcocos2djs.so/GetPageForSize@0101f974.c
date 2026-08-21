
/* v8::internal::FreeListLegacy::GetPageForSize(unsigned long) */

ulong v8::internal::FreeListLegacy::GetPageForSize(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x48))();
  plVar3 = *(long **)(param_1 + 0x20);
  uVar2 = 0;
  if (plVar3[5] != 0) {
    uVar2 = *(ulong *)(plVar3[5] + 8) & 0xfffffffffffc0000;
  }
  if (((iVar1 < 5) && (uVar2 == 0)) && (uVar2 = 0, plVar3[4] != 0)) {
    uVar2 = *(ulong *)(plVar3[4] + 8) & 0xfffffffffffc0000;
  }
  if (((iVar1 < 4) && (uVar2 == 0)) && (uVar2 = 0, plVar3[3] != 0)) {
    uVar2 = *(ulong *)(plVar3[3] + 8) & 0xfffffffffffc0000;
  }
  if (((iVar1 < 3) && (uVar2 == 0)) && (uVar2 = 0, plVar3[2] != 0)) {
    uVar2 = *(ulong *)(plVar3[2] + 8) & 0xfffffffffffc0000;
  }
  if (((iVar1 < 2) && (uVar2 == 0)) && (uVar2 = 0, plVar3[1] != 0)) {
    uVar2 = *(ulong *)(plVar3[1] + 8) & 0xfffffffffffc0000;
  }
  if (((iVar1 < 1) && (uVar2 == 0)) && (uVar2 = 0, *plVar3 != 0)) {
    uVar2 = *(ulong *)(*plVar3 + 8) & 0xfffffffffffc0000;
  }
  return uVar2;
}

