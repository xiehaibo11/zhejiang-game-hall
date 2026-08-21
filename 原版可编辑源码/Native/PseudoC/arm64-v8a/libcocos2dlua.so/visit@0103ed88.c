
/* cocos2d::ComponentContainer::visit(float) */

void __thiscall cocos2d::ComponentContainer::visit(ComponentContainer *this,float param_1)

{
  long *plVar1;
  undefined4 in_register_00005004;
  
  if (*(long *)(this + 0x18) != 0) {
    if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
      Ref::retain(*(Ref **)(this + 0x28));
    }
    for (plVar1 = *(long **)(this + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
                    /* try { // try from 0103edc8 to 0113ee23 has its CatchHandler @ 0103ecbc */
      (**(code **)(*(long *)plVar1[5] + 0x30))(CONCAT44(in_register_00005004,param_1));
    }
    if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x28));
      return;
    }
  }
                    /* catch() { ... } // from try @ 0103ed14 with catch @ 0103edf0 */
                    /* catch() { ... } // from try @ 0103ecfc with catch @ 0103edf8 */
  return;
}

