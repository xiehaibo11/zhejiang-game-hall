
/* cocos2d::VertexAttribValue::~VertexAttribValue() */

void __thiscall cocos2d::VertexAttribValue::~VertexAttribValue(VertexAttribValue *this)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  if ((this[8] == (VertexAttribValue)0x0) ||
     (plVar3 = *(long **)(this + 0x10), plVar3 == (long *)0x0)) {
    return;
  }
  plVar1 = (long *)plVar3[4];
  if (plVar3 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00fd6cfc;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fd6cfc:
  operator_delete(plVar3);
  return;
}

