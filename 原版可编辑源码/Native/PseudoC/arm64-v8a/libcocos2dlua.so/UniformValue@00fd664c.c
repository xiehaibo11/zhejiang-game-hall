
/* cocos2d::UniformValue::UniformValue(cocos2d::UniformValue const&) */

void __thiscall cocos2d::UniformValue::UniformValue(UniformValue *this,UniformValue *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (this != param_1) {
    lVar1 = *(long *)param_1;
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(long *)this = lVar1;
                    /* try { // try from 00fd6674 to 010d667b has its CatchHandler @ 00fd6730 */
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x38) = uVar2;
    *(undefined8 *)(this + 0x50) = uVar4;
    *(undefined8 *)(this + 0x48) = uVar3;
    *(undefined8 *)(this + 0x20) = uVar6;
    *(undefined8 *)(this + 0x18) = uVar5;
    *(undefined8 *)(this + 0x30) = uVar8;
    *(undefined8 *)(this + 0x28) = uVar7;
                    /* try { // try from 00fd669c to 010d669f has its CatchHandler @ 00fd6720 */
                    /* try { // try from 00fd66a0 to 010d674b has its CatchHandler @ 00fd6638 */
    if ((*(int *)(lVar1 + 8) == 0x8b5e) && (*(Ref **)(this + 0x20) != (Ref *)0x0)) {
      Ref::retain(*(Ref **)(this + 0x20));
      return;
    }
  }
  return;
}

