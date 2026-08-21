
/* v8::internal::SeqString::Truncate(v8::internal::Handle<v8::internal::SeqString>, int) */

ulong * v8::internal::SeqString::Truncate(ulong *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  if (param_2 == 0) {
    param_1 = (ulong *)(uVar2 & 0xffffffff00000000 | 200);
  }
  else {
    iVar3 = *(int *)(uVar2 + 7);
    if (param_2 < iVar3) {
      uVar6 = uVar2 & 0xffffffff00000000 | 7;
      puVar4 = (uint *)(uVar2 - 1);
      if (((0x3f < *(ushort *)(uVar6 + *(uint *)(uVar2 - 1))) ||
          ((*(byte *)(uVar6 + *puVar4) & 7) != 0)) ||
         (iVar5 = param_2, (*(byte *)(uVar6 + *puVar4) >> 3 & 1) == 0)) {
        iVar3 = iVar3 << 1;
        iVar5 = param_2 << 1;
      }
      uVar1 = iVar5 + 0xfU & 0xfffffffc;
      Heap::CreateFillerObjectAt
                (*(Heap **)((uVar2 & 0xfffffffffffc0000) + 0x18),(long)puVar4 + (long)(int)uVar1,
                 (iVar3 + 0xfU & 0xfffffffc) - uVar1,1,1);
      *(int *)(*param_1 + 7) = param_2;
    }
  }
  return param_1;
}

