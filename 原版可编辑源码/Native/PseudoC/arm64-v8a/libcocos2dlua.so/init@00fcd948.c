
/* cocos2d::BatchCommand::init(float, cocos2d::GLProgram*, cocos2d::BlendFunc,
   cocos2d::TextureAtlas*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::BatchCommand::init
          (float param_1,BatchCommand *this,undefined8 param_2,undefined8 param_4,
          TextureAtlas *param_5,Mat4 *param_6,uint param_7)

{
  undefined4 uVar1;
  Texture2D *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  RenderCommand::init((RenderCommand *)this,param_1,param_6,param_7);
  this_00 = (Texture2D *)TextureAtlas::getTexture(param_5);
  uVar1 = Texture2D::getName(this_00);
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined8 *)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = param_4;
  *(TextureAtlas **)(this + 0x30) = param_5;
  uVar4 = *(undefined8 *)(param_6 + 0x28);
  uVar3 = *(undefined8 *)(param_6 + 0x20);
  uVar2 = *(undefined8 *)(param_6 + 0x30);
  uVar8 = *(undefined8 *)(param_6 + 8);
  uVar7 = *(undefined8 *)param_6;
  uVar6 = *(undefined8 *)(param_6 + 0x18);
  uVar5 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_6 + 0x38);
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x50) = uVar6;
  *(undefined8 *)(this + 0x48) = uVar5;
  *(undefined8 *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x38) = uVar7;
  return;
}

