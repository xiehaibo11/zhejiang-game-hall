
/* cocos2d::UniformValue::~UniformValue() */

void __thiscall cocos2d::UniformValue::~UniformValue(UniformValue *this)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00fd6674 with catch @ 00fd6730 */
  if ((*(int *)(this + 0x10) != 2) || (plVar3 = *(long **)(this + 0x18), plVar3 == (long *)0x0))
  goto LAB_00fd6784;
  plVar1 = (long *)plVar3[4];
  if (plVar3 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00fd6778:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00fd6778;
  }
  operator_delete(plVar3);
LAB_00fd6784:
  if ((*(int *)(*(long *)this + 8) == 0x8b5e) && (*(Ref **)(this + 0x20) != (Ref *)0x0)) {
    Ref::release(*(Ref **)(this + 0x20));
  }
  return;
}

