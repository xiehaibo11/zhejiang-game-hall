
/* fairygui::ScrollPane::getScrollingPosX() const */

undefined1  [16] __thiscall fairygui::ScrollPane::getScrollingPosX(ScrollPane *this)

{
  float extraout_s0;
  float fVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined8 uVar4;
  undefined1 auVar2 [16];
  float fVar5;
  float fVar6;
  
  (**(code **)(**(long **)(this + 0x108) + 0xe0))();
  fVar6 = *(float *)(this + 0x74);
  fVar5 = -extraout_s0;
  fVar1 = (float)NEON_fminnm(fVar6,0);
  uVar3 = extraout_var;
  uVar4 = extraout_var_00;
  if (fVar1 <= fVar5) {
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    uVar3 = 0;
    uVar4 = 0;
    fVar1 = fVar5;
    if (fVar6 <= fVar5) {
      uVar3 = 0;
      uVar4 = 0;
      fVar1 = fVar6;
    }
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = fVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}

