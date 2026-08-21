
/* fairygui::GTextInput::handleInit() */

void __thiscall fairygui::GTextInput::handleInit(GTextInput *this)

{
  long lVar1;
  Ref *this_00;
  code *pcVar2;
  undefined **local_70;
  GTextInput *pGStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (Ref *)FUIInput::create();
  *(Ref **)(this + 0x208) = this_00;
  cocos2d::Ref::retain(this_00);
  cocos2d::ui::EditBox::setDelegate(*(EditBox **)(this + 0x208),(EditBoxDelegate *)(this + 0x200));
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x208);
  local_70 = &PTR_FUN_016a6f48;
  pGStack_68 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0xc,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
                    /* try { // try from 00a8d09c to 00b8d12f has its CatchHandler @ 00a8d09c
                       catch() { ... } // from try @ 00a8d09c with catch @ 00a8d09c
                       catch() { ... } // from try @ 00a8d138 with catch @ 00a8d09c */
    if (local_50 == (long *)0x0) goto LAB_00a8d0b8;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00a8d0b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

