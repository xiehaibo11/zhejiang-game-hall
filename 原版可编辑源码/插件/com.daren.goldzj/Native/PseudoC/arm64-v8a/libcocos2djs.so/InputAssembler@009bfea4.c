
/* cocos2d::renderer::InputAssembler::InputAssembler(cocos2d::renderer::InputAssembler&&) */

void __thiscall
cocos2d::renderer::InputAssembler::InputAssembler(InputAssembler *this,InputAssembler *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x10) = 4;
  *(undefined8 *)(this + 0x14) = 0xffffffff00000000;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)this = uVar2;
  *(undefined2 *)(this + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

