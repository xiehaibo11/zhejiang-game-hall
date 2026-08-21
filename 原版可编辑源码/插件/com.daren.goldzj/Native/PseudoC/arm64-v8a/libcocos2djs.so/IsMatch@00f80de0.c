
/* v8::internal::SeqSubStringKey<v8::internal::SeqTwoByteString>::IsMatch(v8::internal::String) */

bool __thiscall
v8::internal::SeqSubStringKey<v8::internal::SeqTwoByteString>::IsMatch
          (SeqSubStringKey<v8::internal::SeqTwoByteString> *this,ulong param_2)

{
  ushort *puVar1;
  bool bVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  puVar3 = (ushort *)(param_2 + 0xb);
  bVar2 = (*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 7) == 2
  ;
  if ((*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) >> 3 & 1) ==
      0) {
    if (bVar2) {
      puVar3 = (ushort *)(**(code **)(**(long **)puVar3 + 0x30))();
    }
    if (0 < *(int *)(this + 0xc)) {
      puVar4 = (ushort *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) * 2 + 0xb);
      puVar1 = puVar4 + *(int *)(this + 0xc);
      do {
        iVar5 = (uint)*puVar4 - (uint)*puVar3;
        if (iVar5 != 0) goto LAB_00f80ed4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (puVar4 < puVar1);
    }
  }
  else {
    if (bVar2) {
      puVar3 = (ushort *)(**(code **)(**(long **)puVar3 + 0x30))();
    }
    if (0 < *(int *)(this + 0xc)) {
      puVar4 = (ushort *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) * 2 + 0xb);
      puVar1 = puVar4 + *(int *)(this + 0xc);
      do {
        iVar5 = (uint)*puVar4 - (uint)(byte)*puVar3;
        if (iVar5 != 0) goto LAB_00f80ed4;
        puVar4 = puVar4 + 1;
        puVar3 = (ushort *)((long)puVar3 + 1);
      } while (puVar4 < puVar1);
    }
  }
  iVar5 = 0;
LAB_00f80ed4:
  return iVar5 == 0;
}

