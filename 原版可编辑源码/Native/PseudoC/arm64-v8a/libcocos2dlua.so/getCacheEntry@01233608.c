
/* btPersistentManifold::getCacheEntry(btManifoldPoint const&) const */

undefined4 __thiscall
btPersistentManifold::getCacheEntry(btPersistentManifold *this,btManifoldPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  btPersistentManifold *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((int)*(uint *)(this + 0x318) < 1) {
    return 0xffffffff;
  }
  uVar3 = 0;
  uVar2 = 0xffffffff;
  pbVar4 = this + 0xc;
  fVar5 = *(float *)(this + 0x31c) * *(float *)(this + 0x31c);
  do {
    fVar6 = (float)*(undefined8 *)pbVar4 - (float)*(undefined8 *)(param_1 + 4);
    fVar7 = (float)((ulong)*(undefined8 *)pbVar4 >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar6 = (*(float *)(pbVar4 + -4) - *(float *)param_1) *
            (*(float *)(pbVar4 + -4) - *(float *)param_1) + fVar6 * fVar6 + fVar7 * fVar7;
    uVar1 = (int)uVar3;
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 0xc0;
    fVar5 = fVar6;
  } while (*(uint *)(this + 0x318) != uVar3);
  return uVar2;
}

