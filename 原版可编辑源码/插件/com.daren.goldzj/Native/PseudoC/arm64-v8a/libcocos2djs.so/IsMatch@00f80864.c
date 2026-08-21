
/* v8::internal::SequentialStringKey<unsigned char>::IsMatch(v8::internal::String) */

bool __thiscall
v8::internal::SequentialStringKey<unsigned_char>::IsMatch
          (SequentialStringKey<unsigned_char> *this,ulong param_2)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  ushort *__s1;
  byte *pbVar4;
  
  __s1 = (ushort *)(param_2 + 0xb);
  bVar2 = (*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 7) == 2
  ;
  if ((*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) >> 3 & 1) ==
      0) {
    if (bVar2) {
      __s1 = (ushort *)(**(code **)(**(long **)__s1 + 0x30))();
    }
    if (0 < *(long *)(this + 0x18) << 0x20) {
      pbVar4 = *(byte **)(this + 0x10);
      puVar1 = (ushort *)((long)__s1 + ((*(long *)(this + 0x18) << 0x20) >> 0x1f));
      do {
        iVar3 = (uint)*__s1 - (uint)*pbVar4;
        if (iVar3 != 0) goto LAB_00f80918;
        __s1 = __s1 + 1;
        pbVar4 = pbVar4 + 1;
      } while (__s1 < puVar1);
    }
    iVar3 = 0;
  }
  else {
    if (bVar2) {
      __s1 = (ushort *)(**(code **)(**(long **)__s1 + 0x30))();
    }
    iVar3 = memcmp(__s1,*(void **)(this + 0x10),(long)*(int *)(this + 0x18));
  }
LAB_00f80918:
  return iVar3 == 0;
}

