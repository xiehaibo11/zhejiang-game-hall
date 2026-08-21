
/* cocostudio::WidgetReader::WidgetReader() */

void __thiscall cocostudio::WidgetReader::WidgetReader(WidgetReader *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_80;
  WidgetReader *pWStack_78;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__WidgetReader_016ce900;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)(this + 0x30) = &PTR__WidgetReader_016ce980;
  *(undefined ***)(this + 0x28) = &PTR__WidgetReader_016ce950;
  *(undefined8 *)(this + 0xd0) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0xe8));
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (WidgetReader)0x0;
  *(undefined4 *)(this + 0xec) = 0xff;
  local_80 = &PTR_FUN_016cea00;
  local_60 = (long *)&local_80;
  FUN_00cdfe08(&local_80,this + 0x40);
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00cdabd0:
    (*pcVar2)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar2 = *(code **)(*local_60 + 0x28);
    goto LAB_00cdabd0;
  }
  local_80 = &PTR_FUN_016cea90;
  pWStack_78 = this;
  local_60 = (long *)&local_80;
  FUN_00ce002c(&local_80,this + 0x70);
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00cdac18:
    (*pcVar2)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar2 = *(code **)(*local_60 + 0x28);
    goto LAB_00cdac18;
  }
  local_80 = &PTR_FUN_016ceb20;
  local_60 = (long *)&local_80;
  FUN_00ce0228(&local_80,this + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00cdac64;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_00cdac64:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

