
/* cocos2d::RenderCommand::init(float, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::RenderCommand::init(RenderCommand *this,float param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  Camera *this_00;
  undefined4 uVar2;
  
  *(float *)(this + 0xc) = param_1;
  if ((param_3 >> 3 & 1) == 0) {
    this[0x12] = (RenderCommand)0x0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  else {
    lVar1 = Camera::getVisitingCamera();
    if (lVar1 != 0) {
      this_00 = (Camera *)Camera::getVisitingCamera();
      uVar2 = Camera::getDepthInView(this_00,param_2);
      *(undefined4 *)(this + 0x14) = uVar2;
    }
    this[0x12] = (RenderCommand)0x1;
  }
  return;
}

