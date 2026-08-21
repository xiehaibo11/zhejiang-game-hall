
/* cocostudio::BatchNode::generateGroupCommand() */

void __thiscall cocostudio::BatchNode::generateGroupCommand(BatchNode *this)

{
  long lVar1;
  Renderer *this_00;
  
  lVar1 = cocos2d::Director::getInstance();
  this_00 = *(Renderer **)(lVar1 + 0x1b0);
  cocos2d::GroupCommand::init(*(GroupCommand **)(this + 0x2f8),*(float *)(this + 0x170));
  cocos2d::Renderer::addCommand(this_00,*(RenderCommand **)(this + 0x2f8));
  cocos2d::Renderer::pushGroup(this_00,*(int *)(*(long *)(this + 0x2f8) + 0x18));
  return;
}

