
/* v8::internal::LargeObjectSpace::RemovePage(v8::internal::LargePage*, unsigned long) */

void __thiscall
v8::internal::LargeObjectSpace::RemovePage(LargeObjectSpace *this,LargePage *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  *(long *)(this + 0x68) = *(long *)(this + 0x68) - (long)*(int *)param_1;
  lVar1 = *(long *)param_1;
  *(ulong *)(this + 0x78) = *(long *)(this + 0x78) - param_2;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) - lVar1;
  *(int *)(this + 0x70) = *(int *)(this + 0x70) + -1;
  if (*(LargePage **)(this + 0x28) == param_1) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0xe8);
  }
  if (*(LargePage **)(this + 0x20) == param_1) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0xe0);
  }
  lVar1 = *(long *)(param_1 + 0xe0);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0xe8) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0xe0) = lVar1;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

