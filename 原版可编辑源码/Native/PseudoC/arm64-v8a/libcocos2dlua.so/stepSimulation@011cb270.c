
/* btDiscreteDynamicsWorld::stepSimulation(float, int, float) */

uint __thiscall
btDiscreteDynamicsWorld::stepSimulation
          (btDiscreteDynamicsWorld *this,float param_1,int param_2,float param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  CProfileManager *this_00;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined4 in_register_00005004;
  undefined8 uVar7;
  undefined4 in_register_00005024;
  
  uVar7 = CONCAT44(in_register_00005004,param_1);
  CProfileManager::Reset();
  CProfileManager::Start_Profile("stepSimulation");
  if (param_2 == 0) {
    fVar6 = 0.0;
    if (this[0x1a4] == (btDiscreteDynamicsWorld)0x0) {
      fVar6 = param_1;
    }
    uVar4 = (uint)(1.1920929e-07 <= ABS(param_1));
    *(float *)(this + 0x170) = fVar6;
    *(undefined4 *)(this + 0x174) = 0;
    param_2 = uVar4;
  }
  else {
    *(float *)(this + 0x174) = param_3;
    fVar6 = *(float *)(this + 0x170) + param_1;
    *(float *)(this + 0x170) = fVar6;
    uVar7 = CONCAT44(in_register_00005024,param_3);
    if (param_3 <= fVar6) {
      uVar4 = (uint)(fVar6 / param_3);
      *(float *)(this + 0x170) = fVar6 - (float)(int)uVar4 * param_3;
    }
    else {
      uVar4 = 0;
    }
  }
  lVar2 = (**(code **)(*(long *)this + 0x28))(this);
  if (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar1 = (**(code **)(*plVar3 + 0x60))();
    gDisableDeactivation = (byte)(uVar1 >> 4) & 1;
  }
  if (uVar4 == 0) {
    (**(code **)(*(long *)this + 0xa0))(this);
  }
  else {
    if ((int)uVar4 <= param_2) {
      param_2 = uVar4;
    }
    (**(code **)(*(long *)this + 0x148))((float)uVar7 * (float)param_2,this);
    (**(code **)(*(long *)this + 0x150))(this);
    if (0 < param_2) {
      iVar5 = 0;
      do {
        (**(code **)(*(long *)this + 0x140))(uVar7,this);
        (**(code **)(*(long *)this + 0xa0))(this);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_2);
    }
  }
  (**(code **)(*(long *)this + 0xf0))(this);
  this_00 = (CProfileManager *)CProfileManager::Increment_Frame_Counter();
  CProfileManager::Stop_Profile(this_00);
  return uVar4;
}

