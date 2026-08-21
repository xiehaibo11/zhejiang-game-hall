
/* cocos2d::RenderCommand::printID() */

int __thiscall cocos2d::RenderCommand::printID(RenderCommand *this)

{
  int iVar1;
  
  iVar1 = printf("Command Depth: %f\n",(double)*(float *)(this + 0xc));
  return iVar1;
}

