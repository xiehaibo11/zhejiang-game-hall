
/* cocos2d::PUObserver::updateObserver(cocos2d::PUParticle3D*, float, bool) */

void __thiscall
cocos2d::PUObserver::updateObserver
          (PUObserver *this,PUParticle3D *param_1,float param_2,bool param_3)

{
  undefined4 in_register_00005004;
  
  if (this[0x60] != (PUObserver)0x0) {
    if (param_3) {
      (**(code **)(*(long *)this + 0x50))(CONCAT44(in_register_00005004,param_2),this,param_1);
    }
    if ((this[0x78] == (PUObserver)0x0) || (*(int *)(param_1 + 0x90) == *(int *)(this + 0x74))) {
                    /* WARNING: Could not recover jumptable at 0x00e4e17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x68))(CONCAT44(in_register_00005004,param_2),this,param_1);
      return;
    }
  }
  return;
}

