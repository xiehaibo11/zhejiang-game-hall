
/* WARNING: Type propagation algorithm not settling */
/* btVoronoiSimplexSolver::reduceVertices(btUsageBitfield const&) */

void __thiscall
btVoronoiSimplexSolver::reduceVertices(btVoronoiSimplexSolver *this,btUsageBitfield *param_1)

{
  btUsageBitfield bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  btVoronoiSimplexSolver *pbVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)this;
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < 4) {
    if (uVar3 == 3) {
      uVar4 = 3;
      uVar3 = 3;
      bVar1 = *param_1;
      goto joined_r0x01234f7c;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 != 1) {
        return;
      }
      uVar4 = 1;
      bVar1 = *param_1;
      goto joined_r0x0123504c;
    }
    uVar4 = 2;
    bVar1 = *param_1;
joined_r0x0123501c:
    iVar2 = (int)uVar4;
  }
  else {
    if (((byte)*param_1 >> 3 & 1) == 0) {
      uVar3 = uVar3 - 1;
      uVar4 = (ulong)uVar3;
      *(uint *)this = uVar3;
      uVar7 = *(undefined8 *)(this + (long)(int)uVar3 * 0x10 + 4);
      *(undefined8 *)(this + 0x3c) = *(undefined8 *)(this + (long)(int)uVar3 * 0x10 + 0xc);
      *(undefined8 *)(this + 0x34) = uVar7;
      uVar7 = *(undefined8 *)(this + (long)(int)uVar3 * 0x10 + 0x54);
      *(undefined8 *)(this + 0x8c) = *(undefined8 *)(this + (long)(int)uVar3 * 0x10 + 0x5c);
      *(undefined8 *)(this + 0x84) = uVar7;
      uVar7 = *(undefined8 *)(this + (long)(int)uVar3 * 0x10 + 0xa4);
      *(undefined8 *)(this + 0xdc) = *(undefined8 *)(this + (long)(int)uVar3 * 0x10 + 0xac);
      *(undefined8 *)(this + 0xd4) = uVar7;
      bVar1 = *param_1;
    }
    else {
      bVar1 = *param_1;
    }
joined_r0x01234f7c:
    if (((byte)bVar1 >> 2 & 1) == 0) {
      uVar4 = (long)(int)uVar3 - 1;
      *(int *)this = (int)uVar4;
      uVar7 = *(undefined8 *)(this + uVar4 * 0x10 + 4);
      *(undefined8 *)(this + 0x2c) = *(undefined8 *)(this + uVar4 * 0x10 + 0xc);
      *(undefined8 *)(this + 0x24) = uVar7;
      uVar7 = *(undefined8 *)(this + uVar4 * 0x10 + 0x54);
      *(undefined8 *)(this + 0x7c) = *(undefined8 *)(this + uVar4 * 0x10 + 0x5c);
      *(undefined8 *)(this + 0x74) = uVar7;
      uVar7 = *(undefined8 *)(this + uVar4 * 0x10 + 0xa4);
      *(undefined8 *)(this + 0xcc) = *(undefined8 *)(this + uVar4 * 0x10 + 0xac);
      *(undefined8 *)(this + 0xc4) = uVar7;
      bVar1 = *param_1;
      goto joined_r0x0123501c;
    }
    iVar2 = (int)uVar4;
    bVar1 = *param_1;
  }
  if (((byte)bVar1 >> 1 & 1) == 0) {
    uVar4 = (long)iVar2 - 1;
    *(int *)this = (int)uVar4;
    uVar7 = *(undefined8 *)(this + uVar4 * 0x10 + 4);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(this + uVar4 * 0x10 + 0xc);
    *(undefined8 *)(this + 0x14) = uVar7;
    uVar7 = *(undefined8 *)(this + uVar4 * 0x10 + 0x54);
    *(undefined8 *)(this + 0x6c) = *(undefined8 *)(this + uVar4 * 0x10 + 0x5c);
    *(undefined8 *)(this + 100) = uVar7;
    uVar7 = *(undefined8 *)(this + uVar4 * 0x10 + 0xa4);
    *(undefined8 *)(this + 0xbc) = *(undefined8 *)(this + uVar4 * 0x10 + 0xac);
    *(undefined8 *)(this + 0xb4) = uVar7;
    bVar1 = *param_1;
  }
  else {
    bVar1 = *param_1;
  }
joined_r0x0123504c:
  if (((byte)bVar1 & 1) == 0) {
    lVar5 = (long)(int)uVar4 + -1;
    pbVar6 = this + 0xa4;
    *(int *)this = (int)lVar5;
    lVar5 = lVar5 * 0x10;
    uVar7 = *(undefined8 *)(this + lVar5 + 4);
    *(undefined8 *)(this + 0xc) = *(undefined8 *)(this + lVar5 + 4 + 8);
    *(undefined8 *)(this + 4) = uVar7;
    uVar7 = *(undefined8 *)(this + lVar5 + 0x54);
    *(undefined8 *)(this + 0x5c) = *(undefined8 *)(this + lVar5 + 0x54 + 8);
    *(undefined8 *)(this + 0x54) = uVar7;
    uVar7 = *(undefined8 *)(pbVar6 + lVar5);
    *(undefined8 *)(this + 0xac) = *(undefined8 *)(pbVar6 + lVar5 + 8);
    *(undefined8 *)pbVar6 = uVar7;
  }
  return;
}

