
/* v8::internal::ScopeInfo::ContextSlotIndex(v8::internal::ScopeInfo, v8::internal::String,
   v8::internal::VariableMode*, v8::internal::InitializationFlag*, v8::internal::MaybeAssignedFlag*,
   v8::internal::IsStaticFlag*) */

int v8::internal::ScopeInfo::ContextSlotIndex
              (long param_1,int param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 3);
  if (((1 < uVar2) && (1 < (int)uVar2)) && (1 < *(int *)(param_1 + 0xf))) {
    lVar4 = 0;
    puVar1 = (uint *)(param_1 + 7);
    iVar5 = 0xc;
    do {
      if (*(int *)((long)puVar1 + (long)iVar5) == param_2) {
        if ((int)uVar2 < 2) {
          iVar5 = 3;
        }
        else {
          iVar5 = (*(int *)(param_1 + 0xf) >> 1) + 3;
        }
        iVar3 = (int)lVar4;
        *param_3 = (byte)(*(uint *)((long)puVar1 + (long)((iVar5 - iVar3) * 4)) >> 1) & 0xf;
        if (*(int *)(param_1 + 3) < 2) {
          iVar5 = 3;
        }
        else {
          iVar5 = (*(int *)(param_1 + 0xf) >> 1) + 3;
        }
        *param_6 = (byte)(*(uint *)((long)puVar1 + (long)((iVar5 - iVar3) * 4)) >> 0x17) & 1;
        if (*(int *)(param_1 + 3) < 2) {
          iVar5 = 3;
        }
        else {
          iVar5 = (*(int *)(param_1 + 0xf) >> 1) + 3;
        }
        *param_4 = (byte)(*(uint *)((long)puVar1 + (long)((iVar5 - iVar3) * 4)) >> 5) & 1;
        if (*(int *)(param_1 + 3) < 2) {
          iVar5 = 3;
        }
        else {
          iVar5 = (*(int *)(param_1 + 0xf) >> 1) + 3;
        }
        *param_5 = (byte)(*(uint *)((long)puVar1 + (long)((iVar5 - iVar3) * 4)) >> 6) & 1;
        iVar5 = 2;
        if ((1 < *(int *)(param_1 + 3)) && (iVar5 = 2, (*puVar1 & 0x8000000) != 0)) {
          iVar5 = 3;
        }
        return iVar5 - iVar3;
      }
      lVar4 = lVar4 + -1;
      iVar5 = iVar5 + 4;
    } while (3 - (ulong)((*(int *)(param_1 + 0xf) >> 1) + 3) != lVar4);
  }
  return -1;
}

