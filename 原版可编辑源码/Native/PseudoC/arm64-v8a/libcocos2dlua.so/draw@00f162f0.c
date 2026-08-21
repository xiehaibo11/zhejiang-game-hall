
/* cocos2d::LayerColor::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::LayerColor::draw(LayerColor *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  LayerColor *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x390),(uint)param_2);
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  local_c0 = onDraw;
  local_b0 = this;
  Mat4::Mat4(aMStack_a8,param_2);
  local_68 = param_3;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x3b0),(__bind *)&local_c0);
  Mat4::~Mat4(aMStack_a8);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x390));
  lVar2 = 0;
  lVar3 = 0;
  do {
    Vec4::Vec4((Vec4 *)&local_c0);
    local_c0 = *(code **)(this + lVar3 + 0x330);
    fStack_b8 = *(float *)(this + 0x58);
    fStack_b4 = 1.0;
    Mat4::transformVector((Mat4 *)(this + 0x8c),(Vec4 *)&local_c0);
    Vec3::Vec3((Vec3 *)&local_e0,(float)local_c0,local_c0._4_4_,fStack_b8);
    Vec3::Vec3((Vec3 *)&local_d0,local_e0 / fStack_b4,fStack_dc / fStack_b4,local_d8 / fStack_b4);
    *(undefined8 *)(this + lVar2 + 0x3e0) = local_d0;
    *(undefined4 *)(this + lVar2 + 1000) = local_c8;
    Vec4::~Vec4((Vec4 *)&local_c0);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + 0xc;
  } while (lVar3 != 0x20);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

