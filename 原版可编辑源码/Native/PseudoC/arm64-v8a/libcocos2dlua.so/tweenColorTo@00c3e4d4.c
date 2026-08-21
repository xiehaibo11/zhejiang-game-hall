
/* cocostudio::Tween::tweenColorTo(float, cocostudio::FrameData*) */

void __thiscall cocostudio::Tween::tweenColorTo(Tween *this,float param_1,FrameData *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = NEON_scvtf(*(undefined1 (*) [16])(*(long *)(this + 0x78) + 0x48),4);
  auVar1 = NEON_scvtf(*(undefined1 (*) [16])(*(long *)(this + 0x68) + 0x48),4);
  *(ulong *)(param_2 + 0x50) =
       CONCAT44((int)(auVar2._12_4_ * param_1 + auVar1._12_4_),
                (int)(auVar2._8_4_ * param_1 + auVar1._8_4_));
  *(ulong *)(param_2 + 0x48) =
       CONCAT44((int)(auVar2._4_4_ * param_1 + auVar1._4_4_),
                (int)(auVar2._0_4_ * param_1 + auVar1._0_4_));
                    /* WARNING: Could not recover jumptable at 0x00c3e508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x80) + 0x528))();
  return;
}

