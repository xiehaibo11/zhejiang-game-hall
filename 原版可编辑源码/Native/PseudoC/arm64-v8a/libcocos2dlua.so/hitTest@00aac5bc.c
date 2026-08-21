
/* fairygui::PixelHitTest::hitTest(fairygui::GComponent*, cocos2d::Vec2 const&) */

bool __thiscall
fairygui::PixelHitTest::hitTest(PixelHitTest *this,GComponent *param_1,Vec2 *param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  piVar3 = *(int **)(this + 0x18);
  uVar7 = NEON_scvtf(*(undefined8 *)(this + 8),4);
  uVar5 = (uint)(float)(int)((*(float *)param_2 / (float)*(undefined8 *)(this + 0x10) - (float)uVar7
                             ) * (float)piVar3[1]);
  uVar6 = (uint)(float)(int)(((*(float *)(param_1 + 0xcc) - *(float *)(param_2 + 4)) /
                              (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) -
                             (float)((ulong)uVar7 >> 0x20)) * (float)piVar3[1]);
  if ((-1 < (int)(uVar6 | uVar5)) && ((int)uVar5 < *piVar3)) {
    iVar2 = uVar5 + *piVar3 * uVar6;
    lVar4 = (long)iVar2;
    lVar1 = lVar4 + 7;
    if (-1 < lVar4) {
      lVar1 = lVar4;
    }
    if ((-8 < iVar2) && (lVar1 >> 3 < *(long *)(piVar3 + 4))) {
      return (1 << (ulong)(iVar2 - ((uint)lVar1 & 0xfffffff8) & 0x1f) &
             (uint)*(byte *)(*(long *)(piVar3 + 2) + (lVar1 >> 3))) != 0;
    }
  }
  return false;
}

