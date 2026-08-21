
/* cocos2d::ui::TabHeader::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::TabHeader::copySpecialProperties(TabHeader *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (Widget *)0x0) &&
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 != 0)) {
    AbstractCheckButton::copySpecialProperties((AbstractCheckButton *)this,param_1);
    *(undefined4 *)(this + 0x610) = *(undefined4 *)(lVar2 + 0x610);
    *(undefined4 *)(this + 0x5c8) = *(undefined4 *)(lVar2 + 0x5c8);
    plVar3 = *(long **)(lVar2 + 0x600);
    if (plVar3 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else if ((long *)(lVar2 + 0x5e0) == plVar3) {
      local_50 = alStack_70;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
    FUN_00df3eec(alStack_70,this + 0x5e0);
    if (alStack_70 == local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3b28 with catch @ 00df3ca4
                        */
      if (local_50 == (long *)0x0) goto LAB_00df3cc0;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00df3cc0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00df3ce4 to 00ef3ce7 has its CatchHandler @ 00df3d20 */
  __stack_chk_fail();
}

