
/* cocos2d::AutoPolygon::getSquareValue(unsigned int, unsigned int, cocos2d::Rect const&, float) */

byte __thiscall
cocos2d::AutoPolygon::getSquareValue
          (AutoPolygon *this,uint param_1,uint param_2,Rect *param_3,float param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  float fVar7;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  Rect aRStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f637a4 with catch @ 00f63800 */
  Size::Size((Size *)&local_88,2.0,2.0);
                    /* catch() { ... } // from try @ 00f63798 with catch @ 00f63810 */
  Size::operator-((Size *)(param_3 + 8),(Size *)&local_88);
  Rect::Rect(aRStack_78,param_3,(Size *)&local_80);
  local_80 = (float)(param_1 - 1);
  fStack_7c = (float)(param_2 - 1);
  uVar2 = Rect::containsPoint(aRStack_78,(Vec2 *)&local_80);
  if ((uVar2 & 1) == 0) {
    bVar6 = false;
  }
  else {
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) +
                                              (ulong)(uint)(((int)local_80 +
                                                            *(int *)(this + 0x28) * (int)fStack_7c)
                                                           * 4) + 3));
    bVar6 = param_4 < fVar7;
  }
  local_88 = (float)param_1;
  fStack_84 = (float)(param_2 - 1);
  uVar2 = Rect::containsPoint(aRStack_78,(Vec2 *)&local_88);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00f638d4 to 01063a63 has its CatchHandler @ 00f638d4
                       catch() { ... } // from try @ 00f638d4 with catch @ 00f638d4
                       catch() { ... } // from try @ 00f63a7c with catch @ 00f638d4 */
    bVar5 = 0;
  }
  else {
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) +
                                              (ulong)(uint)(((int)local_88 +
                                                            *(int *)(this + 0x28) * (int)fStack_84)
                                                           * 4) + 3));
    bVar5 = (param_4 < fVar7) << 1;
  }
  local_90 = (float)(param_1 - 1);
  fStack_8c = (float)param_2;
  uVar2 = Rect::containsPoint(aRStack_78,(Vec2 *)&local_90);
  if ((uVar2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) +
                                              (ulong)(uint)(((int)local_90 +
                                                            *(int *)(this + 0x28) * (int)fStack_8c)
                                                           * 4) + 3));
    bVar4 = (param_4 < fVar7) << 2;
  }
  local_98 = (float)param_1;
  fStack_94 = (float)param_2;
  uVar2 = Rect::containsPoint(aRStack_78,(Vec2 *)&local_98);
  if ((uVar2 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) +
                                              (ulong)(uint)(((int)local_98 +
                                                            *(int *)(this + 0x28) * (int)fStack_94)
                                                           * 4) + 3));
    bVar3 = (param_4 < fVar7) << 3;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar5 | bVar6 | bVar4 | bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

