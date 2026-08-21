
/* cocos2d::PhysicsWorld::removeBody(int) */

void __thiscall cocos2d::PhysicsWorld::removeBody(PhysicsWorld *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x38);
  do {
                    /* catch() { ... } // from try @ 0100d480 with catch @ 0100d67c */
    if (plVar1 == *(long **)(this + 0x40)) {
      return;
    }
                    /* catch() { ... } // from try @ 0100d3d0 with catch @ 0100d680 */
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(int *)(lVar2 + 0xbc) != param_1);
                    /* WARNING: Could not recover jumptable at 0x0100d6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,lVar2);
  return;
}

