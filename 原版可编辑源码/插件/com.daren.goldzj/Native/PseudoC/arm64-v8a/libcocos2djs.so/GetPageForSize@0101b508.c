
/* v8::internal::FreeListMany::GetPageForSize(unsigned long) */

ulong v8::internal::FreeListMany::GetPageForSize(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x48))();
  lVar4 = (long)iVar1;
  lVar3 = lVar4;
  while( true ) {
    if (*(int *)(param_1 + 0xc) <= iVar1) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar4 * 8);
      if (lVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(ulong *)(lVar3 + 8) & 0xfffffffffffc0000;
      }
      return uVar2;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8 + lVar3 * 8);
    lVar3 = lVar3 + 1;
    if ((lVar5 != 0) && (uVar2 = *(ulong *)(lVar5 + 8) & 0xfffffffffffc0000, uVar2 != 0)) break;
    iVar1 = (int)lVar3;
  }
  return uVar2;
}

