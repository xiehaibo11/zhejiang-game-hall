
/* dragonBones::Armature::intersectsSegment(float, float, float, float, dragonBones::Point*,
   dragonBones::Point*, dragonBones::Point*) const */

long __thiscall
dragonBones::Armature::intersectsSegment
          (Armature *this,float param_1,float param_2,float param_3,float param_4,Point *param_5,
          Point *param_6,Point *param_7)

{
  long *plVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_58;
  undefined4 local_54;
  
  plVar6 = *(long **)(this + 0x78);
  plVar1 = *(long **)(this + 0x80);
  if (plVar6 == plVar1) {
    lVar4 = 0;
  }
  else {
    local_a8 = 0;
    local_58 = 0;
    lVar5 = 0;
    lVar4 = 0;
    fVar11 = 0.0;
    fVar10 = 0.0;
    local_ac = 0;
    fVar12 = param_2;
    if (param_1 != param_3) {
      fVar12 = param_1;
    }
    fVar9 = 0.0;
    local_54 = 0;
    do {
      iVar3 = Slot::intersectsSegment
                        ((Slot *)*plVar6,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
                    /* try { // try from 00d7d128 to 00e7d15b has its CatchHandler @ 00d7d8bc */
      if (0 < iVar3) {
        if (param_5 == (Point *)0x0 && param_6 == (Point *)0x0) {
          return *plVar6;
        }
        if (param_5 != (Point *)0x0) {
          fVar7 = *(float *)(param_5 + (ulong)(param_1 == param_3) * 4) - fVar12;
          fVar2 = -fVar7;
          if (0.0 <= fVar7) {
            fVar2 = fVar7;
          }
          if ((lVar4 == 0) || (fVar2 < fVar11)) {
            local_a8 = *(undefined8 *)param_5;
                    /* try { // try from 00d7d170 to 00e7d19f has its CatchHandler @ 00d7d92c */
            lVar4 = *plVar6;
            fVar11 = fVar2;
            if (param_7 != (Point *)0x0) {
              local_ac = *(undefined4 *)param_7;
            }
          }
        }
        if (param_6 != (Point *)0x0) {
          fVar8 = *(float *)param_6;
          fVar7 = fVar8 - param_1;
          fVar2 = -fVar7;
          if (0.0 <= fVar7) {
            fVar2 = fVar7;
          }
          if ((lVar5 == 0) || (fVar10 < fVar2)) {
            local_54 = *(undefined4 *)(param_6 + 4);
            lVar5 = *plVar6;
                    /* try { // try from 00d7d1b0 to 00e7d1bb has its CatchHandler @ 00d7d8bc */
            fVar10 = fVar2;
            fVar9 = fVar8;
            if (param_7 != (Point *)0x0) {
              local_58 = *(undefined4 *)(param_7 + 4);
            }
          }
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
                    /* try { // try from 00d7d1d0 to 00e7d2b7 has its CatchHandler @ 00d7d92c */
    if (((param_5 != (Point *)0x0) && (lVar4 != 0)) &&
       (*(undefined8 *)param_5 = local_a8, param_7 != (Point *)0x0)) {
      *(undefined4 *)param_7 = local_ac;
    }
    if ((param_6 != (Point *)0x0) && (lVar5 != 0)) {
      *(float *)param_6 = fVar9;
      *(undefined4 *)(param_6 + 4) = local_54;
      if (param_7 != (Point *)0x0) {
        *(undefined4 *)(param_7 + 4) = local_58;
      }
    }
  }
  return lVar4;
}

