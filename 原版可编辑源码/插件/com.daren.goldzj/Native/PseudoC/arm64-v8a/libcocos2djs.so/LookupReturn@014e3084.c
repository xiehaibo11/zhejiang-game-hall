
/* v8::internal::HandlerTable::LookupReturn(int) */

uint __thiscall v8::internal::HandlerTable::LookupReturn(HandlerTable *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  iVar2 = *(int *)this;
  uVar4 = (ulong)iVar2;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      uVar6 = uVar4 >> 1;
      iVar1 = (int)uVar6 + iVar5;
      iVar3 = iVar1 + 1;
      uVar4 = uVar4 + ~uVar6;
      if (param_1 <= *(int *)(*(long *)(this + 8) + (long)(iVar1 * 2) * 4)) {
        iVar3 = iVar5;
        uVar4 = uVar6;
      }
      iVar5 = iVar3;
    } while (uVar4 != 0);
    if (iVar2 != iVar5) {
      if (*(int *)(*(long *)(this + 8) + (long)(iVar5 << 1) * 4) == param_1) {
        return *(uint *)(*(long *)(this + 8) + (long)(int)(iVar5 << 1 | 1) * 4) >> 3;
      }
    }
  }
  return 0xffffffff;
}

