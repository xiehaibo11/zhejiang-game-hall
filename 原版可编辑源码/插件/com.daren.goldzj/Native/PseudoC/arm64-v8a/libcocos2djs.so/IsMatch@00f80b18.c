
/* v8::internal::SequentialStringKey<unsigned short>::IsMatch(v8::internal::String) */

bool __thiscall
v8::internal::SequentialStringKey<unsigned_short>::IsMatch
          (SequentialStringKey<unsigned_short> *this,ulong param_2)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar2 = (ushort *)(param_2 + 0xb);
  bVar1 = (*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 7) == 2
  ;
  if ((*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) >> 3 & 1) ==
      0) {
    if (bVar1) {
      puVar2 = (ushort *)(**(code **)(**(long **)puVar2 + 0x30))();
    }
    if (0 < *(long *)(this + 0x18) << 0x20) {
      puVar4 = *(ushort **)(this + 0x10);
      puVar5 = (ushort *)((long)puVar2 + ((*(long *)(this + 0x18) << 0x20) >> 0x1f));
      do {
        iVar3 = (uint)*puVar2 - (uint)*puVar4;
        if (iVar3 != 0) goto LAB_00f80bf4;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (puVar2 < puVar5);
    }
  }
  else {
    if (bVar1) {
      puVar2 = (ushort *)(**(code **)(**(long **)puVar2 + 0x30))();
    }
    if (0 < *(long *)(this + 0x18) << 0x20) {
      puVar5 = *(ushort **)(this + 0x10);
      puVar4 = (ushort *)((long)puVar2 + (long)(int)*(long *)(this + 0x18));
      do {
        iVar3 = (uint)(byte)*puVar2 - (uint)*puVar5;
        if (iVar3 != 0) goto LAB_00f80bf4;
        puVar2 = (ushort *)((long)puVar2 + 1);
        puVar5 = puVar5 + 1;
      } while (puVar2 < puVar4);
    }
  }
  iVar3 = 0;
LAB_00f80bf4:
  return iVar3 == 0;
}

