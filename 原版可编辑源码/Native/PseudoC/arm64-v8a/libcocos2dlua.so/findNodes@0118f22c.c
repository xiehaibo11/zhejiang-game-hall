
/* dtNodePool::findNodes(unsigned int, dtNode**, int) */

int __thiscall dtNodePool::findNodes(dtNodePool *this,uint param_1,dtNode **param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  dtNode *pdVar4;
  
  uVar1 = (param_1 << 0xf ^ 0xffffffff) + param_1;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar2 = *(ushort *)
           (*(long *)(this + 8) + (ulong)(*(int *)(this + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10)) * 2)
  ;
  if (uVar2 == 0xffff) {
    return 0;
  }
  iVar3 = 0;
  do {
    pdVar4 = (dtNode *)(*(long *)this + (ulong)uVar2 * 0x1c);
    if (*(uint *)(pdVar4 + 0x18) == param_1) {
      if (param_3 <= iVar3) {
        return iVar3;
      }
      param_2[iVar3] = pdVar4;
      iVar3 = iVar3 + 1;
    }
    uVar2 = *(ushort *)(*(long *)(this + 0x10) + (ulong)uVar2 * 2);
  } while (uVar2 != 0xffff);
  return iVar3;
}

