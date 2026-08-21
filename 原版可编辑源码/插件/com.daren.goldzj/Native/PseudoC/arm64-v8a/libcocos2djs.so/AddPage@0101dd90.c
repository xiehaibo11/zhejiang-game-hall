
/* v8::internal::LargeObjectSpace::AddPage(v8::internal::LargePage*, unsigned long) */

void __thiscall
v8::internal::LargeObjectSpace::AddPage(LargeObjectSpace *this,LargePage *param_1,ulong param_2)

{
  ulong uVar1;
  LargeObjectSpace *pLVar2;
  long lVar3;
  long lVar4;
  
  *(long *)(this + 0x68) = (long)*(int *)param_1 + *(long *)(this + 0x68);
  uVar1 = *(long *)(this + 0x50) + *(long *)param_1;
  *(ulong *)(this + 0x50) = uVar1;
  if (*(ulong *)(this + 0x58) < uVar1) {
    *(ulong *)(this + 0x58) = uVar1;
  }
  pLVar2 = this + 0x28;
  lVar3 = *(long *)pLVar2;
  *(ulong *)(this + 0x78) = *(long *)(this + 0x78) + param_2;
  *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar4;
    *(long *)(param_1 + 0xe8) = lVar3;
    *(LargePage **)(lVar3 + 0xe0) = param_1;
    if (lVar4 != 0) {
      pLVar2 = (LargeObjectSpace *)(lVar4 + 0xe8);
    }
    *(LargePage **)pLVar2 = param_1;
    return;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(LargePage **)(this + 0x20) = param_1;
  *(LargePage **)pLVar2 = param_1;
  return;
}

