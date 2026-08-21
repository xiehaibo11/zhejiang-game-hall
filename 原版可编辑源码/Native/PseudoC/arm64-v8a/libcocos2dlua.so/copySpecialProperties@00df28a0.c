
/* cocos2d::ui::TabControl::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::TabControl::copySpecialProperties(TabControl *this,Widget *param_1)

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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df276c with catch @ 00df28e8
                        */
  if ((param_1 != (Widget *)0x0) &&
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df2944 with catch @ 00df28ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00df2b04 with catch @ 00df28ec
                        */
    Widget::copySpecialProperties((Widget *)this);
    *(undefined8 *)(this + 0x528) = *(undefined8 *)(lVar2 + 0x528);
    *(undefined4 *)(this + 0x530) = *(undefined4 *)(lVar2 + 0x530);
    *(undefined4 *)(this + 0x544) = *(undefined4 *)(lVar2 + 0x544);
    plVar3 = *(long **)(lVar2 + 0x510);
    if (plVar3 == (long *)0x0) {
                    /* try { // try from 00df293c to 00ef2943 has its CatchHandler @ 00df2c10 */
      local_50 = (long *)0x0;
    }
    else if ((long *)(lVar2 + 0x4f0) == plVar3) {
                    /* try { // try from 00df2944 to 00ef2a9b has its CatchHandler @ 00df28ec */
      local_50 = alStack_70;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
    FUN_00df4054(alStack_70,this + 0x4f0);
    if (alStack_70 == local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00df2994;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_00df2994:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

