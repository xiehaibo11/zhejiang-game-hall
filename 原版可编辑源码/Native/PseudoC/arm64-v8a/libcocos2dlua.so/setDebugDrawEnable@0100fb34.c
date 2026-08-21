
/* cocos2d::Physics3DWorld::setDebugDrawEnable(bool) */

void __thiscall cocos2d::Physics3DWorld::setDebugDrawEnable(Physics3DWorld *this,bool param_1)

{
  long *plVar1;
  long lVar2;
  Physics3DDebugDrawer *this_00;
  
  plVar1 = *(long **)(this + 0x60);
  if (param_1) {
    lVar2 = (**(code **)(*plVar1 + 0x28))();
    if (lVar2 == 0) {
      this_00 = operator_new(0x90,(nothrow_t *)&std::nothrow);
      if (this_00 != (Physics3DDebugDrawer *)0x0) {
        Physics3DDebugDrawer::Physics3DDebugDrawer(this_00);
      }
      *(Physics3DDebugDrawer **)(this + 0x90) = this_00;
    }
    else {
      this_00 = *(Physics3DDebugDrawer **)(this + 0x90);
    }
    plVar1 = *(long **)(this + 0x60);
    lVar2 = *plVar1;
  }
  else {
    lVar2 = *plVar1;
    this_00 = (Physics3DDebugDrawer *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0100fbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x20))(plVar1,this_00);
  return;
}

