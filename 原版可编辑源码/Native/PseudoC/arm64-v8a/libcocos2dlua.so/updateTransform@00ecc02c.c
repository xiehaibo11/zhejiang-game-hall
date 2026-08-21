
/* cocos2d::ActionCamera::updateTransform() */

void __thiscall cocos2d::ActionCamera::updateTransform(ActionCamera *this)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4(aMStack_98);
  Mat4::createLookAt(*(float *)(this + 100),*(float *)(this + 0x68),*(float *)(this + 0x6c),
                     *(float *)(this + 0x58),*(float *)(this + 0x5c),*(float *)(this + 0x60),
                     *(float *)(this + 0x70),*(float *)(this + 0x74),*(float *)(this + 0x78),
                     aMStack_98);
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x38) + 0x158))();
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  Mat4::Mat4((Mat4 *)&local_e0,(Mat4 *)Mat4::IDENTITY);
  if (fVar3 != 0.0 || fVar4 != 0.0) {
    Mat4::Mat4((Mat4 *)&local_120);
    Mat4::createTranslation(fVar3,fVar4,0.0,(Mat4 *)&local_120);
    Mat4::Mat4((Mat4 *)&local_160,(Mat4 *)&local_e0);
    Mat4::multiply((Mat4 *)&local_160,(Mat4 *)&local_120);
    uStack_c8 = uStack_148;
    local_d0 = local_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_d8 = uStack_158;
    local_e0 = local_160;
    uStack_a8 = uStack_128;
    local_b0 = local_130;
    Mat4::~Mat4((Mat4 *)&local_160);
    Mat4::~Mat4((Mat4 *)&local_120);
  }
  Mat4::Mat4((Mat4 *)&local_120,(Mat4 *)&local_e0);
  Mat4::multiply((Mat4 *)&local_120,aMStack_98);
  uStack_c8 = uStack_108;
  local_d0 = local_110;
  uStack_b8 = uStack_f8;
  uStack_c0 = uStack_100;
  uStack_d8 = uStack_118;
  local_e0 = local_120;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  Mat4::~Mat4((Mat4 *)&local_120);
  if (fVar3 != 0.0 || fVar4 != 0.0) {
    Mat4::Mat4((Mat4 *)&local_120);
    Mat4::createTranslation(-fVar3,-fVar4,0.0,(Mat4 *)&local_120);
    Mat4::Mat4((Mat4 *)&local_160,(Mat4 *)&local_e0);
    Mat4::multiply((Mat4 *)&local_160,(Mat4 *)&local_120);
    uStack_c8 = uStack_148;
    local_d0 = local_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_d8 = uStack_158;
    local_e0 = local_160;
    uStack_a8 = uStack_128;
    local_b0 = local_130;
    Mat4::~Mat4((Mat4 *)&local_160);
    Mat4::~Mat4((Mat4 *)&local_120);
  }
  Node::setAdditionalTransform(*(Node **)(this + 0x38),(Mat4 *)&local_e0);
  Mat4::~Mat4((Mat4 *)&local_e0);
  Mat4::~Mat4(aMStack_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

