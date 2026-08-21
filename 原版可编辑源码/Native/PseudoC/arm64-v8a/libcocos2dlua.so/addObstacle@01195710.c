
/* dtTileCache::addObstacle(float const*, float, float, unsigned int*) */

undefined4 __thiscall
dtTileCache::addObstacle(dtTileCache *this,float *param_1,float param_2,float param_3,uint *param_4)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  
  uVar5 = 0x80000004;
  if (0x3f < *(int *)(this + 0x288)) {
    return 0x80000010;
  }
  pfVar6 = *(float **)(this + 0x80);
  if (pfVar6 != (float *)0x0) {
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(pfVar6 + 0x18);
    uVar2 = *(undefined2 *)(pfVar6 + 0x15);
    pfVar6[0x12] = 0.0;
    pfVar6[0x13] = 0.0;
    pfVar6[0x10] = 0.0;
    pfVar6[0x11] = 0.0;
    pfVar6[0x16] = 0.0;
    pfVar6[0x17] = 0.0;
    pfVar6[0x14] = 0.0;
    pfVar6[0x15] = 0.0;
    *(undefined1 *)((long)pfVar6 + 0x56) = 1;
    pfVar6[0x18] = 0.0;
    pfVar6[0x19] = 0.0;
    pfVar6[2] = 0.0;
    pfVar6[3] = 0.0;
    pfVar6[0] = 0.0;
    pfVar6[1] = 0.0;
    pfVar6[6] = 0.0;
    pfVar6[7] = 0.0;
    pfVar6[4] = 0.0;
    pfVar6[5] = 0.0;
    pfVar6[10] = 0.0;
    pfVar6[0xb] = 0.0;
    pfVar6[8] = 0.0;
    pfVar6[9] = 0.0;
    pfVar6[0xe] = 0.0;
    pfVar6[0xf] = 0.0;
    pfVar6[0xc] = 0.0;
    pfVar6[0xd] = 0.0;
    *(undefined2 *)(pfVar6 + 0x15) = uVar2;
    *pfVar6 = *param_1;
    pfVar6[1] = param_1[1];
    fVar1 = param_1[2];
    pfVar6[3] = param_2;
    pfVar6[4] = param_3;
    pfVar6[2] = fVar1;
    iVar3 = *(int *)(this + 0x288);
    *(int *)(this + 0x288) = iVar3 + 1;
    *(undefined8 *)(this + (long)iVar3 * 8 + 0x88) = 0;
    uVar4 = (int)((ulong)((long)pfVar6 - *(long *)(this + 0x78)) >> 3) * -0x3b13b13b |
            (uint)*(ushort *)(pfVar6 + 0x15) << 0x10;
    *(uint *)(this + (long)iVar3 * 8 + 0x8c) = uVar4;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar4;
    }
    uVar5 = 0x40000000;
  }
  return uVar5;
}

