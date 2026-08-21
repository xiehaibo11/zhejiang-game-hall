
/* cocos2d::EaseBezierAction::update(float) */

void __thiscall cocos2d::EaseBezierAction::update(EaseBezierAction *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::bezieratFunction
            (*(float *)(this + 0x60),*(float *)(this + 100),*(float *)(this + 0x68),
             *(float *)(this + 0x6c),param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed1ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

