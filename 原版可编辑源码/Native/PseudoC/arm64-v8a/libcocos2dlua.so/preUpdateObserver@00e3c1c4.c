
/* cocos2d::PUOnTimeObserver::preUpdateObserver(float) */

void __thiscall cocos2d::PUOnTimeObserver::preUpdateObserver(PUOnTimeObserver *this,float param_1)

{
  int iVar1;
  undefined4 in_register_00005004;
  
  PUObserver::preUpdateObserver((PUObserver *)this,param_1);
  iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x560))();
  if (0 < iVar1) {
    return;
  }
                    /* try { // try from 00e3c21c to 00f3c21f has its CatchHandler @ 00e3c278 */
                    /* WARNING: Could not recover jumptable at 0x00e3c228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(CONCAT44(in_register_00005004,param_1),this,0);
  return;
}

