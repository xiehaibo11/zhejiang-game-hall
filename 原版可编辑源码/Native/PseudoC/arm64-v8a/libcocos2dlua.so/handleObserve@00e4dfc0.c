
/* cocos2d::PUObserver::handleObserve(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUObserver::handleObserve(PUObserver *this,PUParticle3D *param_1,float param_2)

{
  ulong uVar1;
  undefined4 in_register_00005004;
  
  if ((((this[0x60] != (PUObserver)0x0) && (this[99] != (PUObserver)0x0)) &&
      ((this[100] == (PUObserver)0x0 || (this[0x65] == (PUObserver)0x0)))) &&
     (uVar1 = (**(code **)(*(long *)this + 0x58))
                        (CONCAT44(in_register_00005004,param_2),this,param_1), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00e4e038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x70))(CONCAT44(in_register_00005004,param_2),this,param_1);
    return;
  }
  return;
}

