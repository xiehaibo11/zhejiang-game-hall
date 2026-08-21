
/* cocos2d::renderer::Assembler::IARenderData::IARenderData(cocos2d::renderer::Assembler::IARenderData
   const&) */

void __thiscall
cocos2d::renderer::Assembler::IARenderData::IARenderData(IARenderData *this,IARenderData *param_1)

{
  Ref *this_00;
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0xffffffff;
  *(undefined8 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  this_00 = *(Ref **)param_1;
  if (this_00 != (Ref *)0x0) {
    *(Ref **)this = this_00;
    Ref::retain(this_00);
    return;
  }
  return;
}

