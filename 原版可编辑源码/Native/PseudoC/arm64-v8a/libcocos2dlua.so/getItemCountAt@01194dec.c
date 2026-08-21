
/* dtProximityGrid::getItemCountAt(int, int) const */

int __thiscall dtProximityGrid::getItemCountAt(dtProximityGrid *this,int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = *(ushort *)
           (*(long *)(this + 0x18) +
           (long)(int)(*(int *)(this + 0x20) - 1U & (param_2 * 0x127409f ^ param_1 * 0x466f45d)) * 2
           );
  if (uVar1 == 0xffff) {
    return 0;
  }
  lVar3 = *(long *)(this + 8);
  iVar2 = 0;
  do {
    if ((*(short *)(lVar3 + (ulong)uVar1 * 8 + 2) == param_1) &&
       (*(short *)(lVar3 + (ulong)uVar1 * 8 + 4) == param_2)) {
      iVar2 = iVar2 + 1;
    }
    uVar1 = *(ushort *)(lVar3 + (ulong)uVar1 * 8 + 6);
  } while (uVar1 != 0xffff);
  return iVar2;
}

