
/* spine::SkeletonBatch::addCommand(cocos2d::Renderer*, float, cocos2d::Texture2D*,
   cocos2d::GLProgramState*, cocos2d::BlendFunc, cocos2d::TrianglesCommand::Triangles const&,
   cocos2d::Mat4 const&, unsigned int) */

RenderCommand * __thiscall
spine::SkeletonBatch::addCommand
          (TrianglesCommand *param_1_00,SkeletonBatch *this,Renderer *param_1,undefined8 param_3,
          undefined8 param_4,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined4 param_9)

{
  RenderCommand *pRVar1;
  
                    /* try { // try from 00d60e74 to 00e60f83 has its CatchHandler @ 00d60f90 */
  pRVar1 = (RenderCommand *)nextFreeCommand(this);
  cocos2d::TrianglesCommand::init(param_1_00,pRVar1,param_3,param_4,param_6,param_7,param_8,param_9)
  ;
  cocos2d::Renderer::addCommand(param_1,pRVar1);
  return pRVar1;
}

