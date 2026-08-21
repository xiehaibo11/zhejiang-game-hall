
/* cocos2d::TextFieldTTF::update(float) */

void __thiscall cocos2d::TextFieldTTF::update(TextFieldTTF *this,float param_1)

{
  long *plVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((this[0x710] != (TextFieldTTF)0x0) && (this[0x728] != (TextFieldTTF)0x0)) {
    fVar3 = 0.5;
    if (-0.5 <= *(float *)(this + 0x724) - param_1) {
      fVar3 = *(float *)(this + 0x724) - param_1;
    }
    *(float *)(this + 0x724) = fVar3;
    plVar1 = (long *)(**(code **)(*(long *)this + 0x5d0))(this,*(int *)(this + 0x718) + 1);
    if (plVar1 != (long *)0x0) {
      if (*(int *)(this + 0x308) == 1) {
        uVar2 = (**(code **)(*(long *)this + 0x4b0))(this);
        (**(code **)(*plVar1 + 0x4c0))(plVar1,uVar2);
      }
      (**(code **)(*plVar1 + 0x490))(plVar1,-(uint)(0.0 <= *(float *)(this + 0x724)));
                    /* try { // try from 00f56970 to 01056973 has its CatchHandler @ 00f569f8 */
                    /* WARNING: Could not recover jumptable at 0x00f5697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x5d8))(plVar1,1);
      return;
    }
  }
  return;
}

