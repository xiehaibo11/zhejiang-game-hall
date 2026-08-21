
/* cocos2d::PUOnRandomObserver::preUpdateObserver(float) */

void __thiscall
cocos2d::PUOnRandomObserver::preUpdateObserver(PUOnRandomObserver *this,float param_1)

{
  undefined4 in_register_00005004;
  
  PUObserver::preUpdateObserver((PUObserver *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00e3bec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(CONCAT44(in_register_00005004,param_1),this,0);
  return;
}

