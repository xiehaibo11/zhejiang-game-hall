
/* spine::Triangulator::isConcave(int, int, spine::Vector<float>&, spine::Vector<int>&) */

bool spine::Triangulator::isConcave(int param_1,int param_2,Vector *param_3,Vector *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar10 = *(long *)(param_4 + 0x18);
  iVar9 = param_1 + param_2 + -1;
  iVar7 = 0;
  if (param_2 != 0) {
    iVar7 = (param_1 + 1) / param_2;
  }
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = iVar9 / param_2;
  }
  uVar1 = *(uint *)(lVar10 + (long)(iVar9 - iVar8 * param_2) * 4);
  uVar2 = *(uint *)(lVar10 + (long)param_1 * 4);
  lVar11 = *(long *)(param_3 + 0x18);
  uVar3 = *(uint *)(lVar10 + (long)((param_1 + 1) - iVar7 * param_2) * 4);
  uVar4 = uVar1 << 1;
  uVar5 = uVar2 << 1;
  uVar6 = uVar3 << 1;
  fVar12 = *(float *)(lVar11 + (((ulong)(long)(int)uVar5 >> 1) << 3 | 4));
  fVar13 = *(float *)(lVar11 + (((ulong)(long)(int)uVar6 >> 1) << 3 | 4));
  fVar14 = *(float *)(lVar11 + (((ulong)(long)(int)uVar4 >> 1) << 3 | 4));
  return (fVar12 - fVar14) *
         *(float *)(lVar11 + (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)uVar6 << 2)) +
         *(float *)(lVar11 + (-(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)uVar4 << 2)) * (fVar13 - fVar12) +
         *(float *)(lVar11 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)uVar5 << 2)) * (fVar14 - fVar13) < 0.0;
}

