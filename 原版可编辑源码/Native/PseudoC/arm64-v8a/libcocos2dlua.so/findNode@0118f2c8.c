
/* dtNodePool::findNode(unsigned int, unsigned char) */

long __thiscall dtNodePool::findNode(dtNodePool *this,uint param_1,uchar param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = (param_1 << 0xf ^ 0xffffffff) + param_1;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar2 = *(ushort *)
           (*(long *)(this + 8) + (ulong)(*(int *)(this + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10)) * 2)
  ;
  if (uVar2 != 0xffff) {
    lVar3 = *(long *)this;
    do {
      uVar4 = (ulong)uVar2;
      if ((*(uint *)(lVar3 + uVar4 * 0x1c + 0x18) == param_1) &&
         ((*(byte *)(lVar3 + uVar4 * 0x1c + 0x17) & 3) == param_2)) {
        return lVar3 + uVar4 * 0x1c;
      }
      uVar2 = *(ushort *)(*(long *)(this + 0x10) + uVar4 * 2);
    } while (uVar2 != 0xffff);
  }
  return 0;
}

