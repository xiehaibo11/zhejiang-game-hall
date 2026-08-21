
/* cocos2d::UniformValue::setMat4(cocos2d::Mat4 const&) */

void __thiscall cocos2d::UniformValue::setMat4(UniformValue *this,Mat4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x10) = 0;
                    /* catch() { ... } // from try @ 00fd6bb4 with catch @ 00fd6c48 */
  *(undefined8 *)(this + 0x50) = uVar2;
  *(undefined8 *)(this + 0x48) = uVar1;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined8 *)(this + 0x18) = uVar7;
                    /* catch() { ... } // from try @ 00fd6b8c with catch @ 00fd6c58 */
  return;
}

