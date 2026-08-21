
/* btQuantizedBvh::walkStacklessTree(btNodeOverlapCallback*, btVector3 const&, btVector3 const&)
   const */

void __thiscall
btQuantizedBvh::walkStacklessTree
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3
          )

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  if (*(int *)(this + 0x3c) < 1) {
    iVar4 = 0;
  }
  else {
    pfVar6 = *(float **)(this + 0x78);
    iVar5 = 0;
    iVar4 = 0;
    do {
      if ((pfVar6[4] < *(float *)param_2) || (*(float *)param_3 < *pfVar6)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((pfVar6[6] < *(float *)(param_2 + 8)) || (*(float *)(param_3 + 8) < pfVar6[2])) {
        bVar2 = false;
      }
      iVar4 = iVar4 + 1;
      if ((pfVar6[5] < *(float *)(param_2 + 4)) || (*(float *)(param_3 + 4) < pfVar6[1])) {
        bVar2 = false;
        bVar3 = pfVar6[8] == -NAN;
LAB_0123abf4:
        if ((bVar3) || (bVar2)) goto LAB_0123ac38;
        pfVar1 = pfVar6 + 8;
        pfVar6 = pfVar6 + (long)(int)*pfVar1 * 0x10;
        iVar5 = (int)*pfVar1 + iVar5;
      }
      else {
        bVar3 = pfVar6[8] == -NAN;
        if (!(bool)(bVar2 & bVar3)) goto LAB_0123abf4;
        (**(code **)(*(long *)param_1 + 0x10))(param_1,pfVar6[9],pfVar6[10]);
LAB_0123ac38:
        pfVar6 = pfVar6 + 0x10;
        iVar5 = iVar5 + 1;
      }
    } while (iVar5 < *(int *)(this + 0x3c));
  }
  if (maxIterations < iVar4) {
    maxIterations = iVar4;
  }
  return;
}

