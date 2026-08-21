
/* dtCrowd::init(int, float, dtNavMesh*) */

uint __thiscall dtCrowd::init(dtCrowd *this,int param_1,float param_2,dtNavMesh *param_3)

{
  void *__s;
  uint uVar1;
  dtProximityGrid *this_00;
  ulong uVar2;
  dtObstacleAvoidanceQuery *this_01;
  long lVar3;
  dtNavMeshQuery *this_02;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  purge(this);
  *(int *)this = param_1;
  *(float *)(this + 0x13c0) = param_2;
  *(ulong *)(this + 0x374) = CONCAT44(param_2 * 1.5,param_2 * 2.0);
  *(float *)(this + 0x37c) = param_2 * 2.0;
  this_00 = (dtProximityGrid *)dtAllocProximityGrid();
  *(dtProximityGrid **)(this + 0x360) = this_00;
  if (this_00 == (dtProximityGrid *)0x0) {
    return 0;
  }
  uVar2 = dtProximityGrid::init(this_00,*(int *)this << 2,param_2 * 3.0);
  if ((uVar2 & 1) != 0) {
    this_01 = (dtObstacleAvoidanceQuery *)dtAllocObstacleAvoidanceQuery();
    *(dtObstacleAvoidanceQuery **)(this + 0x358) = this_01;
    if (this_01 == (dtObstacleAvoidanceQuery *)0x0) {
      return 0;
    }
    uVar2 = dtObstacleAvoidanceQuery::init(this_01,6,8);
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(this + 0x340) = 0;
      *(undefined8 *)(this + 0x338) = 0;
      *(undefined8 *)(this + 0x350) = 0;
      *(undefined8 *)(this + 0x348) = 0;
      *(undefined8 *)(this + 800) = 0;
      *(undefined8 *)(this + 0x318) = 0;
      *(undefined8 *)(this + 0x330) = 0;
      *(undefined8 *)(this + 0x328) = 0;
      *(undefined8 *)(this + 0x300) = 0;
      *(undefined8 *)(this + 0x2f8) = 0;
      *(undefined8 *)(this + 0x310) = 0;
      *(undefined8 *)(this + 0x308) = 0;
      *(undefined8 *)(this + 0x2e0) = 0;
      *(undefined8 *)(this + 0x2d8) = 0;
      *(undefined8 *)(this + 0x2f0) = 0;
      *(undefined8 *)(this + 0x2e8) = 0;
      *(undefined8 *)(this + 0x2c0) = 0;
      *(undefined8 *)(this + 0x2b8) = 0;
      *(undefined8 *)(this + 0x2d0) = 0;
      *(undefined8 *)(this + 0x2c8) = 0;
      *(undefined8 *)(this + 0x2a0) = 0;
      *(undefined8 *)(this + 0x298) = 0;
      *(undefined8 *)(this + 0x2b0) = 0;
      *(undefined8 *)(this + 0x2a8) = 0;
      *(undefined8 *)(this + 0x280) = 0;
      *(undefined8 *)(this + 0x278) = 0;
      *(undefined8 *)(this + 0x290) = 0;
      *(undefined8 *)(this + 0x288) = 0;
      *(undefined8 *)(this + 0x280) = 0x3f4000003f400000;
      *(undefined8 *)(this + 0x278) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x288) = 0x4020000040200000;
      *(undefined4 *)(this + 0x290) = 0x5020721;
      *(undefined8 *)(this + 0x29c) = 0x3f4000003f400000;
      *(undefined8 *)(this + 0x294) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x2a4) = 0x4020000040200000;
      *(undefined4 *)(this + 0x2ac) = 0x5020721;
      *(undefined8 *)(this + 0x2b8) = 0x3f4000003f400000;
      *(undefined8 *)(this + 0x2b0) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x2c0) = 0x4020000040200000;
      *(undefined4 *)(this + 0x2c8) = 0x5020721;
      *(undefined8 *)(this + 0x2dc) = 0x4020000040200000;
      *(undefined8 *)(this + 0x2d4) = 0x3f4000003f400000;
      uVar10 = NEON_fmov(0x40200000,4);
      *(undefined8 *)(this + 0x2cc) = 0x400000003ecccccd;
      *(undefined4 *)(this + 0x2e4) = 0x5020721;
      *(undefined8 *)(this + 0x2f0) = 0x3f4000003f400000;
      *(undefined8 *)(this + 0x2e8) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x2f8) = 0x4020000040200000;
      *(undefined4 *)(this + 0x300) = 0x5020721;
      *(undefined8 *)(this + 0x30c) = 0x3f4000003f400000;
      *(undefined8 *)(this + 0x304) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x314) = 0x4020000040200000;
      *(undefined4 *)(this + 0x31c) = 0x5020721;
      *(undefined8 *)(this + 0x328) = 0x3f4000003f400000;
      *(undefined8 *)(this + 800) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x330) = uVar10;
      *(undefined4 *)(this + 0x338) = 0x5020721;
      *(undefined8 *)(this + 0x344) = 0x3f4000003f400000;
      *(undefined8 *)(this + 0x33c) = 0x400000003ecccccd;
      *(undefined8 *)(this + 0x34c) = 0x4020000040200000;
      *(undefined4 *)(this + 0x354) = 0x5020721;
      *(undefined4 *)(this + 0x370) = 0x100;
      lVar3 = dtAlloc(0x400,0);
      *(long *)(this + 0x368) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      uVar2 = dtPathQueue::init((dtPathQueue *)(this + 0x20),*(int *)(this + 0x370),0x1000,param_3);
      if ((uVar2 & 1) != 0) {
        lVar3 = dtAlloc(*(int *)this * 0x270,0);
        *(long *)(this + 8) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = dtAlloc(*(int *)this << 3,0);
        *(long *)(this + 0x10) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = dtAlloc(*(int *)this * 0x34,0);
        *(long *)(this + 0x18) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        if (0 < *(int *)this) {
          lVar9 = 0;
          lVar3 = 0;
          do {
            __s = (void *)(*(long *)(this + 8) + lVar9);
            memset(__s,0,0x270);
            dtPathCorridor::dtPathCorridor((dtPathCorridor *)((long)__s + 8));
            dtLocalBoundary::dtLocalBoundary((dtLocalBoundary *)((long)__s + 0x30));
            lVar4 = *(long *)(this + 8);
            *(undefined1 *)(lVar4 + lVar9) = 0;
            uVar2 = dtPathCorridor::init
                              ((dtPathCorridor *)((undefined1 *)(lVar4 + lVar9) + 8),
                               *(int *)(this + 0x370));
            if ((uVar2 & 1) == 0) {
              return 0;
            }
            uVar1 = *(uint *)this;
            lVar3 = lVar3 + 1;
            lVar9 = lVar9 + 0x270;
          } while (lVar3 < (int)uVar1);
          uVar2 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            puVar5 = *(undefined1 **)(this + 0x18);
            if (uVar1 == 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar2 & 0xfffffffe;
              uVar7 = uVar6;
              puVar8 = puVar5;
              do {
                *puVar8 = 0;
                puVar8[0x34] = 0;
                uVar7 = uVar7 - 2;
                puVar8 = puVar8 + 0x68;
              } while (uVar7 != 0);
              if (uVar6 == uVar2) goto LAB_0118fa98;
            }
            lVar3 = uVar2 - uVar6;
            puVar5 = puVar5 + uVar6 * 0x34;
            do {
              lVar3 = lVar3 + -1;
              *puVar5 = 0;
              puVar5 = puVar5 + 0x34;
            } while (lVar3 != 0);
          }
        }
LAB_0118fa98:
        this_02 = (dtNavMeshQuery *)dtAllocNavMeshQuery();
        *(dtNavMeshQuery **)(this + 0x13c8) = this_02;
        if (this_02 != (dtNavMeshQuery *)0x0) {
          uVar1 = dtNavMeshQuery::init(this_02,param_3,0x200);
          return ~uVar1 >> 0x1f;
        }
        return 0;
      }
    }
  }
  return 0;
}

