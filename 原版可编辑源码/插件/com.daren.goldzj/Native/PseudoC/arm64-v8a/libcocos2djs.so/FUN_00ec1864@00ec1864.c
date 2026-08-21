
ulong * FUN_00ec1864(Isolate *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong local_18;
  
  if (param_3 < (ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21)) {
    lVar4 = (long)((int)param_3 << 2);
    uVar1 = *(uint *)(param_2 + 7 + lVar4);
    if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa8))) {
      *(uint *)(lVar4 + param_2 + 7) = *(uint *)(param_1 + 0xa8);
      uVar6 = param_2 & 0xffffffff00000000 | (ulong)uVar1;
      iVar5 = ((int)*(uint *)(param_2 + 3) >> 1) * 4;
      lVar4 = (long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21;
      while( true ) {
        iVar5 = iVar5 + -4;
        iVar3 = (int)lVar4;
        local_18 = param_2;
        if (lVar4 < 1) break;
        if ((((ulong)(param_1 + *(uint *)(param_2 + (long)iVar5 + 7)) & 1) == 0) ||
           (lVar4 = lVar4 + -1,
           (int)(param_1 + *(uint *)(param_2 + (long)iVar5 + 7)) != *(int *)(param_1 + 0xa8)))
        goto LAB_00ec1920;
      }
      if (iVar3 == 0) goto LAB_00ec192c;
LAB_00ec1920:
      v8::internal::FixedArray::Shrink((FixedArray *)&local_18,param_1,iVar3);
LAB_00ec192c:
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
        return puVar2;
      }
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar6;
      return puVar2;
    }
  }
  return (ulong *)0x0;
}

