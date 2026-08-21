
/* cocos2d::renderer::Light::extractView(cocos2d::renderer::View&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */

void __thiscall cocos2d::renderer::Light::extractView(Light *this,View *param_1,vector *param_2)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* try { // try from 009c0668 to 00ac0673 has its CatchHandler @ 009c08f8 */
                    /* try { // try from 009c0674 to 00ac067f has its CatchHandler @ 009c08f4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009c0680 to 00ac0873 has its CatchHandler @ 009c090c */
  *(Light **)(param_1 + 0x1a8) = this;
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x80));
  Rect::Rect((Rect *)&local_88,0.0,0.0,fVar4,fVar4);
  auVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x30) = 0x100000001;
  *(undefined8 *)(param_1 + 0x18) = uStack_80;
  *(undefined8 *)(param_1 + 0x10) = local_88;
  *(long *)(param_1 + 0x28) = auVar3._8_8_;
  *(long *)(param_1 + 0x20) = auVar3._0_8_;
  param_1[0x3c] = (View)0x3;
  if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(param_1 + 0x180) !=
      (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)param_2) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(param_1 + 0x180),*(basic_string **)param_2,*(basic_string **)(param_2 + 8));
  }
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(this + 0x60);
  switch(*(undefined4 *)(this + 0xc)) {
  case 0:
    NodeProxy::getWorldRT(*(NodeProxy **)(this + 0x168),(Mat4 *)(this + 0x124));
    Mat4::getInversed();
    *(undefined8 *)(param_1 + 0x68) = uStack_60;
    *(undefined8 *)(param_1 + 0x60) = local_68;
    *(undefined8 *)(param_1 + 0x78) = uStack_50;
    *(undefined8 *)(param_1 + 0x70) = local_58;
    *(undefined8 *)(param_1 + 0x48) = uStack_80;
    *(undefined8 *)(param_1 + 0x40) = local_88;
    *(undefined8 *)(param_1 + 0x58) = uStack_70;
    *(undefined8 *)(param_1 + 0x50) = local_78;
    Mat4::~Mat4((Mat4 *)&local_88);
    fVar2 = *(float *)(this + 0xe0) * 0.5;
    fVar4 = *(float *)(this + 0xe0) * -0.5;
    Mat4::createOrthographic
              (fVar4,fVar2,fVar4,fVar2,*(float *)(this + 0x8c),*(float *)(this + 0x90),
               (Mat4 *)(param_1 + 0xc0));
    break;
  case 1:
  case 3:
    break;
  case 2:
    NodeProxy::getWorldRT(*(NodeProxy **)(this + 0x168),(Mat4 *)(this + 0x124));
    Mat4::getInversed();
    *(undefined8 *)(param_1 + 0x68) = uStack_60;
    *(undefined8 *)(param_1 + 0x60) = local_68;
    *(undefined8 *)(param_1 + 0x78) = uStack_50;
    *(undefined8 *)(param_1 + 0x70) = local_58;
    *(undefined8 *)(param_1 + 0x48) = uStack_80;
    *(undefined8 *)(param_1 + 0x40) = local_88;
    *(undefined8 *)(param_1 + 0x58) = uStack_70;
    *(undefined8 *)(param_1 + 0x50) = local_78;
    Mat4::~Mat4((Mat4 *)&local_88);
    Mat4::createPerspective
              (*(float *)(this + 0x24) * *(float *)(this + 0xdc),1.0,*(float *)(this + 0x8c),
               *(float *)(this + 0x90),(Mat4 *)(param_1 + 0xc0));
    break;
  default:
    __android_log_print(5,"renderer"," (167): Shadow of this light type is not supported\n");
  }
  Mat4::multiply((Mat4 *)(param_1 + 0xc0),(Mat4 *)(param_1 + 0x40),(Mat4 *)(param_1 + 0x100));
  Mat4::getInversed();
  *(undefined8 *)(param_1 + 0x168) = uStack_60;
  *(undefined8 *)(param_1 + 0x160) = local_68;
  *(undefined8 *)(param_1 + 0x178) = uStack_50;
  *(undefined8 *)(param_1 + 0x170) = local_58;
  *(undefined8 *)(param_1 + 0x148) = uStack_80;
  *(undefined8 *)(param_1 + 0x140) = local_88;
  *(undefined8 *)(param_1 + 0x158) = uStack_70;
  *(undefined8 *)(param_1 + 0x150) = local_78;
  Mat4::~Mat4((Mat4 *)&local_88);
  Mat4::set((Mat4 *)(this + 0x9c),(Mat4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

