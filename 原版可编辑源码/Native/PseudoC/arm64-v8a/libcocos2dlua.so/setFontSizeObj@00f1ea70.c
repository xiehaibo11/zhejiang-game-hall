
/* cocos2d::MenuItemFont::setFontSizeObj(int) */

void __thiscall cocos2d::MenuItemFont::setFontSizeObj(MenuItemFont *this,int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(int *)(this + 0x348) = param_1;
  plVar1 = (long *)0x0;
  if (*(long *)(this + 0x340) != 0) {
    plVar1 = (long *)__dynamic_cast(*(long *)(this + 0x340),&Node::typeinfo,&Label::typeinfo,0);
  }
  (**(code **)(*plVar1 + 0x570))((float)param_1);
  plVar1 = (long *)0x0;
  if (*(long *)(this + 0x340) != 0) {
    plVar1 = (long *)__dynamic_cast(*(long *)(this + 0x340),&Node::typeinfo,&Label::typeinfo,0);
  }
  uVar2 = (**(code **)(*plVar1 + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00f1eafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x160))(this,uVar2);
  return;
}

