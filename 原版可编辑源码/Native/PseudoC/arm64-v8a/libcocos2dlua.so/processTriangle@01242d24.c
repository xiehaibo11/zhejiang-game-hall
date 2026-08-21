
/* btConvexTriangleCallback::processTriangle(btVector3*, int, int) */

void __thiscall
btConvexTriangleCallback::processTriangle
          (btConvexTriangleCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  btVector3 *pbVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long local_f0;
  undefined ***pppuStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0;
  int iStack_cc;
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar6 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 0x20);
  fVar9 = fVar8;
  if (fVar6 <= fVar8) {
    fVar9 = fVar6;
  }
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  if (fVar9 <= *(float *)(this + 0x28)) {
    pbVar1 = param_1;
    if (fVar8 <= fVar6) {
      pbVar1 = param_1 + 0x10;
    }
    if (*(float *)pbVar1 <= fVar7) {
      pbVar1 = param_1 + 0x20;
    }
    if (*(float *)(this + 0x18) <= *(float *)pbVar1) {
      fVar6 = *(float *)(param_1 + 8);
      fVar8 = *(float *)(param_1 + 0x18);
      fVar7 = *(float *)(param_1 + 0x28);
      fVar9 = fVar6;
      if (fVar8 <= fVar6) {
        fVar9 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar9 = fVar7;
      }
      if (fVar9 <= *(float *)(this + 0x30)) {
        pbVar1 = param_1 + 8;
        if (fVar6 <= fVar8) {
          pbVar1 = param_1 + 0x18;
        }
        if (*(float *)pbVar1 <= fVar7) {
          pbVar1 = param_1 + 0x28;
        }
        if (*(float *)(this + 0x20) <= *(float *)pbVar1) {
          fVar6 = *(float *)(param_1 + 4);
          fVar8 = *(float *)(param_1 + 0x14);
          fVar7 = *(float *)(param_1 + 0x24);
          fVar9 = fVar6;
          if (fVar8 <= fVar6) {
            fVar9 = fVar8;
          }
          if (fVar7 <= fVar9) {
            fVar9 = fVar7;
          }
          if (fVar9 <= *(float *)(this + 0x2c)) {
            pbVar1 = param_1 + 4;
            if (fVar6 <= fVar8) {
              pbVar1 = param_1 + 0x14;
            }
            if (*(float *)pbVar1 <= fVar7) {
              pbVar1 = param_1 + 0x24;
            }
            if ((*(float *)(this + 0x1c) <= *(float *)pbVar1) &&
               (*(int *)(*(long *)(*(long *)(this + 8) + 8) + 8) < 0x14)) {
              plVar4 = *(long **)(this + 0x40);
              btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_c8)
              ;
              local_c8 = &PTR__btPolyhedralConvexShape_01733dc8;
              local_c0 = 1;
              uStack_78 = *(undefined8 *)(param_1 + 8);
              local_80 = *(undefined8 *)param_1;
              uStack_68 = *(undefined8 *)(param_1 + 0x18);
              local_70 = *(undefined8 *)(param_1 + 0x10);
              uStack_58 = *(undefined8 *)(param_1 + 0x28);
              local_60 = *(undefined8 *)(param_1 + 0x20);
              local_90 = *(undefined4 *)(this + 0x50);
              local_f0 = *(long *)(this + 0x10);
              uStack_d8 = *(undefined8 *)(local_f0 + 0x18);
              local_e0 = *(undefined8 *)(local_f0 + 0x10);
              pppuStack_e8 = &local_c8;
              local_d0 = param_2;
              iStack_cc = param_3;
              plVar2 = (long *)(**(code **)(*plVar4 + 0x10))
                                         (plVar4,*(undefined8 *)(this + 8),&local_f0,
                                          *(undefined8 *)(this + 0x58));
              plVar3 = *(long **)(this + 0x38);
              lVar5 = plVar3[2];
              if (*(long *)(lVar5 + 0x10) == *(long *)(*(long *)(this + 0x10) + 0x10)) {
                plVar3[2] = (long)&local_f0;
                (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
              }
              else {
                lVar5 = plVar3[3];
                plVar3[3] = (long)&local_f0;
                (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
              }
              (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(this + 8),&local_f0,*(undefined8 *)(this + 0x48),
                         *(undefined8 *)(this + 0x38));
              plVar3 = (long *)(*(long *)(this + 0x38) + 0x10);
              if (*(long *)(*plVar3 + 0x10) != *(long *)(*(long *)(this + 0x10) + 0x10)) {
                plVar3 = (long *)(*(long *)(this + 0x38) + 0x18);
              }
              *plVar3 = lVar5;
              (**(code **)*plVar2)(plVar2);
              (**(code **)(*plVar4 + 0x78))(plVar4,plVar2);
              btPolyhedralConvexShape::~btPolyhedralConvexShape
                        ((btPolyhedralConvexShape *)&local_c8);
            }
          }
        }
      }
    }
  }
  return;
}

