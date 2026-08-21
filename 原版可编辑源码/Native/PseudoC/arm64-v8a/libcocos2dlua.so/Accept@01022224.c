
/* tinyxml2::XMLDocument::Accept(tinyxml2::XMLVisitor*) const */

void __thiscall tinyxml2::XMLDocument::Accept(XMLDocument *this,XMLVisitor *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,this);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(this + 0x30);
    while ((plVar2 != (long *)0x0 &&
           (uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1), (uVar1 & 1) != 0))) {
      plVar2 = (long *)plVar2[9];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01022298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,this);
  return;
}

