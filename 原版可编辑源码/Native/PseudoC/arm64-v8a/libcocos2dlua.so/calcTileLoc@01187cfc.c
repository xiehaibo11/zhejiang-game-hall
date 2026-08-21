
/* dtNavMesh::calcTileLoc(float const*, int*, int*) const */

void __thiscall dtNavMesh::calcTileLoc(dtNavMesh *this,float *param_1,int *param_2,int *param_3)

{
  *param_2 = (int)((*param_1 - *(float *)(this + 0x1c)) / *(float *)(this + 0x28));
  *param_3 = (int)((param_1[2] - *(float *)(this + 0x24)) / *(float *)(this + 0x2c));
  return;
}

