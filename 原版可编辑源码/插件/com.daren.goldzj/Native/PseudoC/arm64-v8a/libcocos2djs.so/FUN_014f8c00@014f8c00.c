
int FUN_014f8c00(Isolate *param_1,long *param_2,long *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long in_x7;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *param_3;
  pIVar1 = param_1 + 0x95a0;
  if ((*(ushort *)(lVar4 + 7) < 0x44) || ((*(byte *)(lVar4 + 9) >> 5 & 1) != 0)) {
    uVar5 = -(ulong)((uint)(*(int *)*param_2 >> 1) >> 0x1f) & 0xfffffffe00000000 |
            (ulong)(*(int *)*param_2 >> 1 | 0x10) << 1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar5;
      iVar3 = 2;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      iVar3 = 2;
    }
  }
  else {
    iVar3 = 1;
    if ((*(ushort *)(lVar4 + 7) == 0xaa) || ((*(uint *)(lVar4 + 0xb) >> 0x15 & 1) == 0))
    goto LAB_014f8d00;
    uVar5 = -(ulong)((uint)(*(int *)*param_2 >> 1) >> 0x1f) & 0xfffffffe00000000 |
            (ulong)(*(int *)*param_2 >> 1 | 0x20) << 1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar5;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    iVar3 = 1;
  }
  *param_2 = (long)puVar2;
LAB_014f8d00:
  if (in_x7 != 0) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

