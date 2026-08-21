
/* btOptimizedBvh::refit(btStridingMeshInterface*, btVector3 const&, btVector3 const&) */

void __thiscall
btOptimizedBvh::refit
          (btOptimizedBvh *this,btStridingMeshInterface *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined2 *puVar5;
  
  if (this[0x40] != (btOptimizedBvh)0x0) {
    btQuantizedBvh::setQuantizationValues((btQuantizedBvh *)this,param_2,param_3,1.0);
    updateBvhNodes((btStridingMeshInterface *)this,(int)param_1,0,*(int *)(this + 0x3c));
    iVar2 = *(int *)(this + 0xd4);
    if (0 < iVar2) {
      lVar4 = *(long *)(this + 0xb8);
      lVar3 = 0;
      puVar5 = (undefined2 *)(*(long *)(this + 0xe0) + 6);
      do {
        lVar3 = lVar3 + 1;
        puVar1 = (undefined2 *)(lVar4 + (long)*(int *)(puVar5 + 3) * 0x10);
        puVar5[-3] = *puVar1;
        puVar5[-2] = puVar1[1];
        puVar5[-1] = puVar1[2];
        *puVar5 = puVar1[3];
        puVar5[1] = puVar1[4];
        puVar5[2] = puVar1[5];
        puVar5 = puVar5 + 0x10;
      } while (lVar3 < iVar2);
    }
  }
  return;
}

