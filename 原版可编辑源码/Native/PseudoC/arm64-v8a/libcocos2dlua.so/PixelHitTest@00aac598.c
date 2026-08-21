
/* fairygui::PixelHitTest::PixelHitTest(fairygui::PixelHitTestData*, int, int) */

void __thiscall
fairygui::PixelHitTest::PixelHitTest
          (PixelHitTest *this,PixelHitTestData *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR_hitTest_016a9d10;
  *(PixelHitTestData **)(this + 0x18) = param_1;
  return;
}

