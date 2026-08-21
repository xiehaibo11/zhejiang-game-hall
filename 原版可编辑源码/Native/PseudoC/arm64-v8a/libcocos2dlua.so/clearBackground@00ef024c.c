
/* cocos2d::Camera::clearBackground() */

void __thiscall cocos2d::Camera::clearBackground(Camera *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x498);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ef0260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,this);
    return;
  }
  return;
}

