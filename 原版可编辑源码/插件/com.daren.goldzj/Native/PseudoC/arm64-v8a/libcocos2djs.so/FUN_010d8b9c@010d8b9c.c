
void FUN_010d8b9c(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  
  if (v8::internal::FLAG_trace_prototype_users != '\0') {
    v8::internal::PrintF("Invalidating prototype map %p \'s cell\n",param_1);
  }
  uVar5 = param_1 & 0xffffffff00000000;
  if (((*(uint *)(param_1 + 0x1f) & 1) != 0) &&
     (uVar3 = uVar5 | *(uint *)(param_1 + 0x1f),
     *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x99)) {
    *(undefined4 *)(uVar3 + 3) = 2;
  }
  if ((*(uint *)(param_1 + 0x23) & 1) != 0) {
    uVar3 = uVar5 | *(uint *)(param_1 + 0x23);
    uVar4 = uVar5 | 7;
    if ((((*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 100) &&
         (uVar1 = *(uint *)(uVar3 + 7), (uVar1 & 1) != 0)) &&
        (uVar3 = uVar5 | uVar1, *(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0xa7)) &&
       (iVar2 = *(int *)(uVar3 + 7), 3 < iVar2)) {
      iVar6 = 4;
      lVar7 = 1;
      do {
        uVar1 = *(uint *)(uVar3 + 0xb + (long)iVar6);
        if (((uVar1 != 3) && (((ulong)uVar1 & 3) == 3)) &&
           (*(short *)(uVar4 + *(uint *)(((ulong)uVar1 & 0xfffffffffffffffd | uVar5) - 1)) == 0xa2))
        {
          FUN_010d8b9c();
          iVar2 = *(int *)(uVar3 + 7);
        }
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (lVar7 < iVar2 >> 1);
    }
  }
  return;
}

