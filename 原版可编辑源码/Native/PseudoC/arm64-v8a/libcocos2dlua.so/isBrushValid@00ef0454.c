
/* cocos2d::Camera::isBrushValid() */

void __thiscall cocos2d::Camera::isBrushValid(Camera *this)

{
  if (*(long **)(this + 0x498) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ef0464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x498) + 0x20))();
    return;
  }
  return;
}

