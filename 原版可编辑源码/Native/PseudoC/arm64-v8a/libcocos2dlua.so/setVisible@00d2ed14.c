
/* cocos2d::Mesh::setVisible(bool) */

void __thiscall cocos2d::Mesh::setVisible(Mesh *this,bool param_1)

{
  long *plVar1;
  
  if (this[0x48] != (Mesh)param_1) {
    plVar1 = *(long **)(this + 400);
    this[0x48] = (Mesh)param_1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d2ed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1);
      return;
    }
  }
  return;
}

