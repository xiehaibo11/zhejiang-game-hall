
/* spine::Animation::apply(spine::Skeleton&, float, float, bool, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void __thiscall
spine::Animation::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,Animation *this,
          undefined8 param_1,ulong param_6,undefined8 param_5,undefined4 param_8,undefined4 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (((param_6 & 1) != 0) && (*(float *)(this + 0x40) != 0.0)) {
    param_2 = MathUtil::fmod((float)param_2,*(float *)(this + 0x40));
    if (0.0 < (float)param_1_00) {
      param_1_00 = MathUtil::fmod((float)param_1_00,*(float *)(this + 0x40));
    }
  }
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x20) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x18))
                (param_1_00,param_2,param_3,plVar1,param_1,param_5,param_8,param_9);
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  return;
}

