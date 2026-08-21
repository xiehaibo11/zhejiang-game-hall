
/* dtNodePool::getNode(unsigned int, unsigned char) */

long __thiscall dtNodePool::getNode(dtNodePool *this,uint param_1,uchar param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = (param_1 << 0xf ^ 0xffffffff) + param_1;
  uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar4 = (ulong)(*(int *)(this + 0x1c) - 1U & (uVar1 ^ uVar1 >> 0x10));
  uVar2 = *(ushort *)(*(long *)(this + 8) + uVar4 * 2);
  if (uVar2 != 0xffff) {
    lVar6 = *(long *)this;
    do {
      uVar7 = (ulong)uVar2;
      if ((*(uint *)(lVar6 + uVar7 * 0x1c + 0x18) == param_1) &&
         ((*(byte *)(lVar6 + uVar7 * 0x1c + 0x17) & 3) == param_2)) {
        return lVar6 + uVar7 * 0x1c;
      }
      uVar2 = *(ushort *)(*(long *)(this + 0x10) + uVar7 * 2);
    } while (uVar2 != 0xffff);
  }
  uVar1 = *(uint *)(this + 0x20);
  if ((int)uVar1 < *(int *)(this + 0x18)) {
    *(uint *)(this + 0x20) = uVar1 + 1;
    lVar3 = *(long *)this + ((ulong)uVar1 & 0xffff) * 0x1c;
    *(undefined4 *)(lVar3 + 0xc) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    lVar5 = uVar4 * 2;
    *(uint *)(lVar3 + 0x14) = *(uint *)(lVar3 + 0x14) & 0xe0000000 | (param_2 & 3) << 0x18;
    *(uint *)(lVar3 + 0x18) = param_1;
    lVar6 = *(long *)(this + 8);
    *(undefined2 *)(*(long *)(this + 0x10) + ((ulong)uVar1 & 0xffff) * 2) =
         *(undefined2 *)(lVar6 + lVar5);
    *(short *)(lVar6 + lVar5) = (short)uVar1;
    return lVar3;
  }
  return 0;
}

