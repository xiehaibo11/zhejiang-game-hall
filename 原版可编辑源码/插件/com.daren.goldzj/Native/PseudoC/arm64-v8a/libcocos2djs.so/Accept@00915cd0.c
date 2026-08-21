
/* tinyxml2::XMLElement::Accept(tinyxml2::XMLVisitor*) const */

void __thiscall tinyxml2::XMLElement::Accept(XMLElement *this,XMLVisitor *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x20))(param_1,this,*(undefined8 *)(this + 0x60));
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(this + 0x30);
    while ((plVar2 != (long *)0x0 &&
           (uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1), (uVar1 & 1) != 0))) {
      plVar2 = (long *)plVar2[9];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00915d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,this);
  return;
}

