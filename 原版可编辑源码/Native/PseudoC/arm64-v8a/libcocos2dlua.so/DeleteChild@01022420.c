
/* tinyxml2::XMLNode::DeleteChild(tinyxml2::XMLNode*) */

void __thiscall tinyxml2::XMLNode::DeleteChild(XMLNode *this,XMLNode *param_1)

{
  long *plVar1;
  
  if (param_1 != (XMLNode *)0x0) {
    plVar1 = *(long **)(param_1 + 0x50);
    (**(code **)(*(long *)param_1 + 0x80))(param_1);
                    /* WARNING: Could not recover jumptable at 0x01022460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return;
  }
  return;
}

