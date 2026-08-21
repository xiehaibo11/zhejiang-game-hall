
/* spine::TwoColorTrianglesCommand::TwoColorTrianglesCommand() */

void __thiscall
spine::TwoColorTrianglesCommand::TwoColorTrianglesCommand(TwoColorTrianglesCommand *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  TwoColorTrianglesCommand *pTStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)this);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__TwoColorTrianglesCommand_016d5d30;
  *(undefined8 *)(this + 0x68) = 1;
                    /* try { // try from 00d5323c to 00e5333b has its CatchHandler @ 00d5323c
                       catch() { ... } // from try @ 00d5323c with catch @ 00d5323c
                       catch() { ... } // from try @ 00d53378 with catch @ 00d5323c */
  cocos2d::Mat4::Mat4((Mat4 *)(this + 0x88));
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 8) = 2;
  local_70 = &PTR_FUN_016d5d98;
  pTStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_008820fc(&local_70,this + 0x20);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d53294;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00d53294:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

