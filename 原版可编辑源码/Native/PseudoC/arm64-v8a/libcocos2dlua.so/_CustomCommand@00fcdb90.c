
/* cocos2d::CustomCommand::~CustomCommand() */

void __thiscall cocos2d::CustomCommand::~CustomCommand(CustomCommand *this)

{
  CustomCommand *pCVar1;
  code *pcVar2;
  
                    /* try { // try from 00fcdba4 to 010cdbab has its CatchHandler @ 00fcdc3c */
  pCVar1 = *(CustomCommand **)(this + 0x40);
                    /* try { // try from 00fcdbac to 010cdc57 has its CatchHandler @ 00fcdb6c */
  *(undefined ***)this = &PTR__CustomCommand_01723da8;
  if (this + 0x20 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CustomCommand *)0x0) goto LAB_00fcdbdc;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fcdbdc:
  RenderCommand::~RenderCommand((RenderCommand *)this);
  operator_delete(this);
  return;
}

