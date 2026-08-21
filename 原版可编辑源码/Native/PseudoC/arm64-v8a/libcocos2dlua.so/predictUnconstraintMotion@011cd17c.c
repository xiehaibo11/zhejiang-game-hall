
/* btDiscreteDynamicsWorld::predictUnconstraintMotion(float) */

void __thiscall
btDiscreteDynamicsWorld::predictUnconstraintMotion(btDiscreteDynamicsWorld *this,float param_1)

{
  CProfileManager *this_00;
  int iVar1;
  btRigidBody *this_01;
  long lVar2;
  
  this_00 = (CProfileManager *)CProfileManager::Start_Profile("predictUnconstraintMotion");
  iVar1 = *(int *)(this + 0x144);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      this_01 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar2 * 8);
      if (((byte)this_01[0xe0] & 3) == 0) {
        btRigidBody::applyDamping(this_01,param_1);
        this_00 = (CProfileManager *)
                  btRigidBody::predictIntegratedTransform
                            (this_01,param_1,(btTransform *)(this_01 + 0x48));
        iVar1 = *(int *)(this + 0x144);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  CProfileManager::Stop_Profile(this_00);
  return;
}

