
/* btHashedSimplePairCache::findPair(int, int) */

int * __thiscall
btHashedSimplePairCache::findPair(btHashedSimplePairCache *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 | param_2 << 0x10;
  gFindSimplePairs = gFindSimplePairs + 1;
  uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
  uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
  uVar2 = uVar2 ^ (int)uVar2 >> 6;
  uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
  uVar2 = *(int *)(this + 0x10) - 1U & (uVar2 ^ (int)uVar2 >> 0x10);
  if (((int)uVar2 < *(int *)(this + 0x34)) &&
     (iVar3 = *(int *)(*(long *)(this + 0x40) + (long)(int)uVar2 * 4), iVar3 != -1)) {
    do {
      piVar1 = (int *)(*(long *)(this + 0x18) + (long)iVar3 * 0x10);
      if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
        return piVar1;
      }
      iVar3 = *(int *)(*(long *)(this + 0x60) + (long)iVar3 * 4);
    } while (iVar3 != -1);
  }
  return (int *)0x0;
}

