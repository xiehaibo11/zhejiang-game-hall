
/* btCollisionWorld::updateSingleAabb(btCollisionObject*) */

void __thiscall
btCollisionWorld::updateSingleAabb(btCollisionWorld *this,btCollisionObject *param_1)

{
  float fVar1;
  long *plVar2;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),param_1 + 8,&local_40,&local_50);
  fVar1 = gContactBreakingThreshold;
  local_50 = gContactBreakingThreshold + local_50;
  local_4c = gContactBreakingThreshold + local_4c;
  local_40 = local_40 - gContactBreakingThreshold;
  local_3c = local_3c - gContactBreakingThreshold;
  local_48 = gContactBreakingThreshold + local_48;
  local_38 = local_38 - gContactBreakingThreshold;
  if (((this[0x40] != (btCollisionWorld)0x0) && (*(int *)(param_1 + 0x100) == 2)) &&
     (((byte)param_1[0xe0] & 3) == 0)) {
    (**(code **)(**(long **)(param_1 + 200) + 0x10))
              (*(long **)(param_1 + 200),param_1 + 0x48,&local_60,&local_70);
    local_60 = local_60 - fVar1;
    local_70 = fVar1 + local_70;
    fStack_6c = fVar1 + fStack_6c;
    local_5c = local_5c - fVar1;
    local_68 = fVar1 + local_68;
    local_58 = local_58 - fVar1;
    if (local_60 < local_40) {
      local_40 = local_60;
    }
    if (local_5c < local_3c) {
      local_3c = local_5c;
    }
    if (local_58 < local_38) {
      local_38 = local_58;
    }
    if (local_54 < local_34) {
      local_34 = local_54;
    }
    if (local_50 < local_70) {
      local_50 = local_70;
    }
    if (local_4c < fStack_6c) {
      local_4c = fStack_6c;
    }
    if (local_48 < local_68) {
      local_48 = local_68;
    }
    if (local_44 < local_64) {
      local_44 = local_64;
    }
  }
  if ((((byte)param_1[0xe0] & 1) != 0) ||
     ((local_50 - local_40) * (local_50 - local_40) + (local_4c - local_3c) * (local_4c - local_3c)
      + (local_48 - local_38) * (local_48 - local_38) < 1e+12)) {
    (**(code **)(**(long **)(this + 0x60) + 0x20))
              (*(long **)(this + 0x60),*(undefined8 *)(param_1 + 0xc0),&local_40,&local_50,
               *(undefined8 *)(this + 0x28));
  }
  else {
    btCollisionObject::setActivationState(param_1,5);
    if (((DAT_0179537c & 1) == 0) && (plVar2 = *(long **)(this + 0x68), plVar2 != (long *)0x0)) {
      DAT_0179537c = 1;
      (**(code **)(*plVar2 + 0x48))(plVar2,"Overflow in AABB, object removed from simulation");
      (**(code **)(**(long **)(this + 0x68) + 0x48))
                (*(long **)(this + 0x68),
                 "If you can reproduce this, please email bugs@continuousphysics.com\n");
      (**(code **)(**(long **)(this + 0x68) + 0x48))
                (*(long **)(this + 0x68),
                 "Please include above information, your Platform, version of OS.\n");
      (**(code **)(**(long **)(this + 0x68) + 0x48))(*(long **)(this + 0x68),"Thanks.\n");
    }
  }
  return;
}

