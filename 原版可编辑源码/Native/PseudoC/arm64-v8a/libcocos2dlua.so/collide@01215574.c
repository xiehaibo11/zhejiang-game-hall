
/* btDbvtBroadphase::collide(btDispatcher*) */

void btDbvtBroadphase::collide(btDispatcher *param_1)

{
  btDbvt *this;
  long *plVar1;
  btDispatcher *pbVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  float fVar14;
  undefined **local_70;
  btDispatcher *pbStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this = (btDbvt *)(param_1 + 8);
  btDbvt::optimizeIncremental(this,(*(int *)(param_1 + 0xf4) * *(int *)(param_1 + 0x1c)) / 100 + 1);
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar8 = (*(int *)(param_1 + 0xf0) * *(int *)(param_1 + 0x7c)) / 100 + 1;
    btDbvt::optimizeIncremental((btDbvt *)(param_1 + 0x68),iVar8);
    uVar5 = *(int *)(param_1 + 0x100) - iVar8;
    *(uint *)(param_1 + 0x100) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  }
  iVar8 = *(int *)(param_1 + 0xec);
  uVar5 = iVar8 + 2;
  if (-1 < iVar8 + 1) {
    uVar5 = iVar8 + 1;
  }
  iVar8 = (iVar8 + 1) - (uVar5 & 0xfffffffe);
  *(int *)(param_1 + 0xec) = iVar8;
  if (*(void **)(param_1 + (long)iVar8 * 8 + 200) != (void *)0x0) {
    pvVar12 = *(void **)(param_1 + (long)iVar8 * 8 + 200);
    do {
      pvVar3 = *(void **)((long)pvVar12 + 0x50);
      pbVar2 = param_1 + (long)*(int *)((long)pvVar12 + 0x58) * 8 + 200;
      if (*(long *)((long)pvVar12 + 0x48) != 0) {
        pbVar2 = (btDispatcher *)(*(long *)((long)pvVar12 + 0x48) + 0x50);
      }
      *(void **)pbVar2 = pvVar3;
      if (*(long *)((long)pvVar12 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar12 + 0x50) + 0x48) =
             *(undefined8 *)((long)pvVar12 + 0x48);
      }
      *(undefined8 *)((long)pvVar12 + 0x48) = 0;
      *(undefined8 *)((long)pvVar12 + 0x50) = *(undefined8 *)(param_1 + 0xd8);
      if (*(long *)(param_1 + 0xd8) != 0) {
        *(void **)(*(long *)(param_1 + 0xd8) + 0x48) = pvVar12;
      }
      *(void **)(param_1 + 0xd8) = pvVar12;
      btDbvt::remove(this,*(btDbvtNode **)((long)pvVar12 + 0x40));
      pbStack_68 = *(btDispatcher **)((long)pvVar12 + 0x24);
      local_70 = *(undefined ***)((long)pvVar12 + 0x1c);
      uStack_58 = *(undefined8 *)((long)pvVar12 + 0x34);
      local_60 = *(undefined8 *)((long)pvVar12 + 0x2c);
      uVar6 = btDbvt::insert((btDbvt *)(param_1 + 0x68),(btDbvtAabbMm *)&local_70,pvVar12);
      *(undefined8 *)((long)pvVar12 + 0x40) = uVar6;
      *(undefined4 *)((long)pvVar12 + 0x58) = 2;
      pvVar12 = pvVar3;
    } while (pvVar3 != (void *)0x0);
    param_1[0x11e] = (btDispatcher)0x1;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x7c);
  }
  local_70 = &PTR__ICollide_01731568;
  pbStack_68 = param_1;
  if ((param_1[0x11d] != (btDispatcher)0x0) &&
     (btDbvt::collideTTpersistentStack
                (this,*(btDbvtNode **)(param_1 + 8),*(btDbvtNode **)(param_1 + 0x68),
                 (ICollide *)&local_70), param_1[0x11d] != (btDispatcher)0x0)) {
    btDbvt::collideTTpersistentStack
              (this,*(btDbvtNode **)this,*(btDbvtNode **)this,(ICollide *)&local_70);
  }
  if (param_1[0x11e] == (btDispatcher)0x0) goto LAB_01215870;
  lVar7 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x38))();
  iVar8 = *(int *)(lVar7 + 4);
  if (iVar8 < 1) goto LAB_01215870;
  iVar11 = (*(int *)(param_1 + 0xf8) * iVar8) / 100;
  iVar13 = *(int *)(param_1 + 0xfc);
  if (*(int *)(param_1 + 0xfc) <= iVar11) {
    iVar13 = iVar11;
  }
  iVar11 = iVar8;
  if (iVar13 <= iVar8) {
    iVar11 = iVar13;
  }
  if (iVar11 < 1) {
LAB_0121584c:
    iVar13 = 0;
    if (iVar8 != 0) {
      iVar13 = (*(int *)(param_1 + 0x114) + iVar11) / iVar8;
    }
    iVar8 = (*(int *)(param_1 + 0x114) + iVar11) - iVar13 * iVar8;
  }
  else {
    iVar13 = 0;
    do {
      iVar4 = 0;
      if (iVar8 != 0) {
        iVar4 = (*(int *)(param_1 + 0x114) + iVar13) / iVar8;
      }
      plVar1 = (long *)(*(long *)(lVar7 + 0x10) +
                       (long)((*(int *)(param_1 + 0x114) + iVar13) - iVar4 * iVar8) * 0x20);
      pfVar9 = *(float **)(*plVar1 + 0x40);
      pfVar10 = *(float **)(plVar1[1] + 0x40);
      if ((((pfVar10[4] < *pfVar9) || (pfVar9[4] < *pfVar10)) || (pfVar10[5] < pfVar9[1])) ||
         (((pfVar9[5] < pfVar10[1] || (pfVar10[6] < pfVar9[2])) || (pfVar9[6] < pfVar10[2])))) {
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))();
        iVar11 = iVar11 + -1;
        iVar13 = iVar13 + -1;
      }
      iVar8 = *(int *)(lVar7 + 4);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar11);
    if (0 < iVar8) goto LAB_0121584c;
    iVar8 = 0;
  }
  *(int *)(param_1 + 0x114) = iVar8;
LAB_01215870:
  uVar5 = *(uint *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0xfc) = 1;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  param_1[0x11e] = (btDispatcher)0x0;
  if (uVar5 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = (float)*(uint *)(param_1 + 0x108) / (float)uVar5;
  }
  *(float *)(param_1 + 0x10c) = fVar14;
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) >> 1;
  *(uint *)(param_1 + 0x104) = uVar5 >> 1;
  return;
}

