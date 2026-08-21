
/* cocos2d::PrimitiveCommand::init(float, unsigned int, cocos2d::GLProgramState*,
   cocos2d::BlendFunc, cocos2d::Primitive*, cocos2d::Mat4 const&) */

void __thiscall
cocos2d::PrimitiveCommand::init
          (float param_1,PrimitiveCommand *this,int param_2,long param_3,undefined8 param_5,
          undefined8 param_6,Mat4 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  RenderCommand::init((RenderCommand *)this,param_1,param_7,0);
                    /* catch() { ... } // from try @ 00fe16cc with catch @ 00fe1750 */
  *(undefined8 *)(this + 0x30) = param_6;
  uVar3 = *(undefined8 *)(param_7 + 0x28);
  uVar2 = *(undefined8 *)(param_7 + 0x20);
  uVar4 = *(undefined8 *)(param_7 + 0x30);
  uVar6 = *(undefined8 *)(param_7 + 8);
  uVar5 = *(undefined8 *)param_7;
  uVar8 = *(undefined8 *)(param_7 + 0x18);
  uVar7 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_7 + 0x38);
  *(undefined8 *)(this + 0x68) = uVar4;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar7;
  *(undefined8 *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar5;
  iVar1 = (int)((ulong)param_5 >> 0x20);
  if ((((*(int *)(this + 0x1c) != param_2) || (*(int *)(this + 0x28) != (int)param_5)) ||
      (*(int *)(this + 0x2c) != iVar1)) || (*(long *)(this + 0x20) != param_3)) {
    *(int *)(this + 0x1c) = param_2;
    *(int *)(this + 0x28) = (int)param_5;
    *(int *)(this + 0x2c) = iVar1;
    *(long *)(this + 0x20) = param_3;
  }
                    /* catch() { ... } // from try @ 00fe17e8 with catch @ 00fe17b0 */
  return;
}

