
/* cocos2d::TransformConcat(cocos2d::Mat4 const&, cocos2d::Mat4 const&) */

void __thiscall cocos2d::TransformConcat(cocos2d *this,Mat4 *param_1,Mat4 *param_2)

{
  Mat4 *in_x8;
  
  Mat4::Mat4(in_x8,(Mat4 *)this);
  Mat4::multiply(in_x8,param_1);
  return;
}

