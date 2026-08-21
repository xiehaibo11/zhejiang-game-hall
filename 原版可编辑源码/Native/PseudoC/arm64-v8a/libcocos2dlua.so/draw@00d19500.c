
/* cocos2d::BillBoard::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::BillBoard::draw(BillBoard *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = Texture2D::getName(*(Texture2D **)(this + 0x368));
  uVar2 = Node::getGLProgramState((Node *)this);
  TrianglesCommand::init
            ((TrianglesCommand *)0x0,(RenderCommand *)(this + 0x378),uVar1,uVar2,
             *(undefined8 *)(this + 0x35c),this + 0x4c0,this + 0x8c,param_3 | 8);
  this[0x388] = (BillBoard)0x1;
  this[0x38a] = (BillBoard)0x1;
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x378));
  return;
}

