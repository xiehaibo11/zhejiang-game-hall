
/* cocostudio::timeline::BoneNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocostudio::timeline::BoneNode::draw(BoneNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

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
  BoneNode *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cocos2d::CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x300),(uint)param_2);
  fStack_b8 = 1.4013e-45;
  fStack_b4 = 0.0;
  local_c0 = 0x610;
  local_b0 = this;
  cocos2d::Mat4::Mat4(aMStack_a8,param_2);
  local_68 = param_3;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 800),(__bind *)&local_c0);
  cocos2d::Mat4::~Mat4(aMStack_a8);
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(this + 0x300));
  lVar2 = 0;
  lVar3 = 0;
  do {
    cocos2d::Vec4::Vec4((Vec4 *)&local_c0);
    local_c0 = *(undefined8 *)(this + lVar3 + 0x3b0);
    fStack_b8 = *(float *)(this + 0x58);
    fStack_b4 = 1.0;
    cocos2d::Mat4::transformVector((Mat4 *)(this + 0x8c),(Vec4 *)&local_c0);
    cocos2d::Vec3::Vec3((Vec3 *)&local_e0,(float)local_c0,local_c0._4_4_,fStack_b8);
    cocos2d::Vec3::Vec3((Vec3 *)&local_d0,local_e0 / fStack_b4,fStack_dc / fStack_b4,
                        local_d8 / fStack_b4);
    *(undefined8 *)(this + lVar2 + 0x410) = local_d0;
    *(undefined4 *)(this + lVar2 + 0x418) = local_c8;
    cocos2d::Vec4::~Vec4((Vec4 *)&local_c0);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + 0xc;
  } while (lVar3 != 0x20);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

