
/* cocos2d::UniformValue::TEMPNAMEPLACEHOLDERVALUE(cocos2d::UniformValue const&) */

UniformValue * __thiscall cocos2d::UniformValue::operator=(UniformValue *this,UniformValue *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (this != param_1) {
    lVar1 = *(long *)param_1;
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(long *)this = lVar1;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = uVar2;
    *(undefined8 *)(this + 0x40) = uVar4;
    *(undefined8 *)(this + 0x38) = uVar3;
    *(undefined8 *)(this + 0x30) = uVar6;
    *(undefined8 *)(this + 0x28) = uVar5;
    *(undefined8 *)(this + 0x20) = uVar8;
    *(undefined8 *)(this + 0x18) = uVar7;
    if ((*(int *)(lVar1 + 8) == 0x8b5e) && (*(Ref **)(this + 0x20) != (Ref *)0x0)) {
      Ref::retain(*(Ref **)(this + 0x20));
    }
  }
                    /* catch() { ... } // from try @ 00fd669c with catch @ 00fd6720 */
  return this;
}

