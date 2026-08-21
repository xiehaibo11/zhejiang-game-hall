
/* cocos2d::Node::Node() */

void __thiscall cocos2d::Node::Node(Node *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  long lVar9;
  Ref *pRVar10;
  long *plVar11;
  undefined8 uVar12;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined ***)this = &PTR__Node_01706cd8;
  Quaternion::Quaternion((Quaternion *)(this + 0x34));
  uVar12 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x5e) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x44) = uVar12;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined8 *)(this + 0x68) = 0;
  Size::Size((Size *)(this + 0x80),(Size *)&Size::ZERO);
  this[0x88] = (Node)0x1;
  Mat4::Mat4((Mat4 *)(this + 0x8c));
  Mat4::Mat4((Mat4 *)(this + 0xcc));
  this[0x10c] = (Node)0x1;
  Mat4::Mat4((Mat4 *)(this + 0x110));
  this[0x150] = (Node)0x1;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined2 *)(this + 0x160) = 0x100;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1a0) = 0xffffffff;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x1a8),"");
  *(undefined4 *)(this + 0x1f8) = 0x100;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  this[0x1fc] = (Node)0x0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined2 *)(this + 0x218) = 0xffff;
  uVar7 = Color3B::WHITE;
  this[0x21c] = DAT_01792432;
  *(undefined2 *)(this + 0x21a) = uVar7;
  uVar7 = Color3B::WHITE;
  this[0x21f] = DAT_01792432;
  *(undefined2 *)(this + 0x21d) = uVar7;
  *(undefined4 *)(this + 0x220) = 0x10000;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  lVar9 = Director::getInstance();
  *(long *)(this + 0x198) = lVar9;
  pRVar10 = *(Ref **)(lVar9 + 0xa8);
  *(Ref **)(this + 0x1e8) = pRVar10;
  Ref::retain(pRVar10);
  pRVar10 = *(Ref **)(*(long *)(this + 0x198) + 0xa0);
  *(Ref **)(this + 0x1e0) = pRVar10;
  Ref::retain(pRVar10);
  pRVar10 = *(Ref **)(*(long *)(this + 0x198) + 0xb0);
  *(Ref **)(this + 0x1f0) = pRVar10;
  Ref::retain(pRVar10);
  plVar11 = (long *)ScriptEngineManager::getInstance();
  uVar8 = 0;
  if ((long *)*plVar11 != (long *)0x0) {
    uVar8 = (**(code **)(*(long *)*plVar11 + 0x10))();
  }
  *(undefined4 *)(this + 0x208) = uVar8;
  uVar6 = Mat4::IDENTITY._56_8_;
  uVar5 = Mat4::IDENTITY._48_8_;
  uVar4 = Mat4::IDENTITY._32_8_;
  uVar3 = Mat4::IDENTITY._24_8_;
  uVar2 = Mat4::IDENTITY._16_8_;
  uVar1 = Mat4::IDENTITY._8_8_;
  uVar12 = Mat4::IDENTITY._0_8_;
  *(undefined8 *)(this + 0x138) = Mat4::IDENTITY._40_8_;
  *(undefined8 *)(this + 0x130) = uVar4;
  *(undefined8 *)(this + 0x148) = uVar6;
  *(undefined8 *)(this + 0x140) = uVar5;
  *(undefined8 *)(this + 0x118) = uVar1;
  *(undefined8 *)(this + 0x110) = uVar12;
  *(undefined8 *)(this + 0x128) = uVar3;
  *(undefined8 *)(this + 0x120) = uVar2;
  uVar6 = Mat4::IDENTITY._56_8_;
  uVar5 = Mat4::IDENTITY._48_8_;
  uVar4 = Mat4::IDENTITY._32_8_;
  uVar3 = Mat4::IDENTITY._24_8_;
  uVar2 = Mat4::IDENTITY._16_8_;
  uVar1 = Mat4::IDENTITY._8_8_;
  uVar12 = Mat4::IDENTITY._0_8_;
  *(undefined8 *)(this + 0xf4) = Mat4::IDENTITY._40_8_;
  *(undefined8 *)(this + 0xec) = uVar4;
  *(undefined8 *)(this + 0x104) = uVar6;
  *(undefined8 *)(this + 0xfc) = uVar5;
  *(undefined8 *)(this + 0xd4) = uVar1;
  *(undefined8 *)(this + 0xcc) = uVar12;
  *(undefined8 *)(this + 0xe4) = uVar3;
  *(undefined8 *)(this + 0xdc) = uVar2;
                    /* try { // try from 00f22b74 to 01022b7b has its CatchHandler @ 00f22ee0 */
                    /* try { // try from 00f22b7c to 01022c4f has its CatchHandler @ 00f2268c */
  return;
}

