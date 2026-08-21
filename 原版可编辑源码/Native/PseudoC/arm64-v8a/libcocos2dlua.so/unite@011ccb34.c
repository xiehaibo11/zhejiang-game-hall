
/* btUnionFind::unite(int, int) */

void __thiscall btUnionFind::unite(btUnionFind *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x10);
  puVar3 = (uint *)(lVar2 + (long)param_1 * 8);
  if (*puVar3 != param_1) {
    uVar4 = (long)(int)*puVar3 << 3;
    while( true ) {
      *puVar3 = *(uint *)(lVar2 + uVar4);
      param_1 = *(uint *)(lVar2 + uVar4);
      puVar3 = (uint *)(lVar2 + (long)param_1 * 8);
      uVar1 = *puVar3;
      if (param_1 == uVar1) break;
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    }
  }
  puVar3 = (uint *)(lVar2 + (long)param_2 * 8);
  if (*puVar3 != param_2) {
    uVar4 = (long)(int)*puVar3 << 3;
    while( true ) {
      *puVar3 = *(uint *)(lVar2 + uVar4);
      param_2 = *(uint *)(lVar2 + uVar4);
      puVar3 = (uint *)(lVar2 + (long)param_2 * 8);
      uVar1 = *puVar3;
      if (param_2 == uVar1) break;
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    }
  }
  if (param_1 != param_2) {
    puVar3 = (uint *)(lVar2 + (long)param_1 * 8);
    *puVar3 = param_2;
    lVar2 = lVar2 + (long)param_2 * 8;
    *(uint *)(lVar2 + 4) = *(int *)(lVar2 + 4) + puVar3[1];
  }
  return;
}

