
/* v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>::IsMatch(v8::internal::String) */

bool __thiscall
v8::internal::SeqSubStringKey<v8::internal::SeqOneByteString>::IsMatch
          (SeqSubStringKey<v8::internal::SeqOneByteString> *this,ulong param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  ushort *__s2;
  byte *pbVar4;
  
  __s2 = (ushort *)(param_2 + 0xb);
  bVar2 = (*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 7) == 2
  ;
  if ((*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) >> 3 & 1) ==
      0) {
    if (bVar2) {
      __s2 = (ushort *)(**(code **)(**(long **)__s2 + 0x30))();
    }
    if (0 < *(int *)(this + 0xc)) {
      pbVar4 = (byte *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) + 0xb);
      pbVar1 = pbVar4 + *(int *)(this + 0xc);
      do {
        iVar3 = (uint)*pbVar4 - (uint)*__s2;
        if (iVar3 != 0) goto LAB_00f80d38;
        pbVar4 = pbVar4 + 1;
        __s2 = __s2 + 1;
      } while (pbVar4 < pbVar1);
    }
    iVar3 = 0;
  }
  else {
    if (bVar2) {
      __s2 = (ushort *)(**(code **)(**(long **)__s2 + 0x30))();
    }
    iVar3 = memcmp((void *)(**(long **)(this + 0x10) + (long)*(int *)(this + 0x18) + 0xb),__s2,
                   (long)*(int *)(this + 0xc));
  }
LAB_00f80d38:
  return iVar3 == 0;
}

