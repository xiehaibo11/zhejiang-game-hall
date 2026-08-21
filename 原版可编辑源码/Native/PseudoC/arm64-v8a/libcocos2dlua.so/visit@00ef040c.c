
/* cocos2d::Camera::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Camera::visit(Camera *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  this[0x429] = this[0x161];
  Node::visit((Node *)this,param_1,param_2,param_3);
  return;
}

