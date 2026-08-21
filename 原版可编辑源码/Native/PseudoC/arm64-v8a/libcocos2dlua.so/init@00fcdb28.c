
/* cocos2d::CustomCommand::init(float, cocos2d::Mat4 const&, unsigned int) */

void cocos2d::CustomCommand::init(float param_1,Mat4 *param_2,uint param_3)

{
  uint in_w2;
  
  RenderCommand::init((RenderCommand *)param_2,param_1,(Mat4 *)(ulong)param_3,in_w2);
  return;
}

