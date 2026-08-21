
/* cocos2d::CustomCommand::~CustomCommand() */

void __thiscall cocos2d::CustomCommand::~CustomCommand(CustomCommand *this)

{
  CustomCommand *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(CustomCommand **)(this + 0x40);
  *(undefined ***)this = &PTR__CustomCommand_01723da8;
  if (this + 0x20 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CustomCommand *)0x0) goto LAB_00fcdb80;
                    /* catch() { ... } // from try @ 00fcdbac with catch @ 00fcdb6c */
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fcdb80:
  RenderCommand::~RenderCommand((RenderCommand *)this);
  return;
}

