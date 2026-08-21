
/* fairygui::GObject::onTouchMove(fairygui::EventContext*) */

void __thiscall fairygui::GObject::onTouchMove(GObject *this,EventContext *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  if (((_draggingObject != this) && (this[0xfa] != (GObject)0x0)) && (this[0x1b8] != (GObject)0x0))
  {
    if ((ABS(*(float *)(this + 0x1a8) - *(float *)(lVar3 + 0x10)) <
         (float)UIConfig::touchDragSensitivity) &&
       (ABS(*(float *)(this + 0x1ac) - *(float *)(lVar3 + 0x14)) <
        (float)UIConfig::touchDragSensitivity)) goto LAB_00a86260;
    this[0x1b8] = (GObject)0x0;
    uVar2 = UIEventDispatcher::dispatchEvent
                      ((UIEventDispatcher *)this,0x3c,(void *)0x0,(Value *)&cocos2d::Value::Null);
    if ((uVar2 & 1) == 0) {
      dragBegin((int)this);
    }
  }
  if (_draggingObject == this) {
    fVar9 = (*(float *)(lVar3 + 0x10) - DAT_01782604) + DAT_017825f0;
                    /* try { // try from 00a86118 to 00b86157 has its CatchHandler @ 00a86118
                       catch() { ... } // from try @ 00a86118 with catch @ 00a86118
                       catch() { ... } // from try @ 00a86194 with catch @ 00a86118
                       catch() { ... } // from try @ 00a86270 with catch @ 00a86118 */
    fVar6 = (*(float *)(lVar3 + 0x14) - DAT_01782608) + DAT_017825f4;
    fVar5 = DAT_017825f0;
    fVar8 = fVar9;
    fStack_6c = fVar6;
    if (*(long *)(this + 0x1b0) != 0) {
      localToGlobal(GRoot::_inst);
      fVar8 = local_68;
      if ((local_68 <= fVar9) &&
         (fVar7 = fVar9 + DAT_017825f8, fVar4 = (float)cocos2d::Rect::getMaxX((Rect *)&local_68),
         fVar8 = fVar9, fVar4 < fVar7)) {
                    /* try { // try from 00a86158 to 00b86193 has its CatchHandler @ 00a86288 */
        fVar9 = (float)cocos2d::Rect::getMaxX((Rect *)&local_68);
        fVar5 = local_68;
        fVar8 = fVar9 - DAT_017825f8;
        if (fVar9 - DAT_017825f8 < local_68) {
          fVar8 = local_68;
        }
      }
      fStack_6c = local_64;
                    /* try { // try from 00a86194 to 00b861c7 has its CatchHandler @ 00a86118 */
      if ((local_64 <= fVar6) &&
         (fVar4 = fVar6 + DAT_017825fc, fVar9 = (float)cocos2d::Rect::getMaxY((Rect *)&local_68),
         fStack_6c = fVar6, fVar9 < fVar4)) {
        fVar6 = (float)cocos2d::Rect::getMaxY((Rect *)&local_68);
        fVar5 = local_64;
        fStack_6c = fVar6 - DAT_017825fc;
        if (fVar6 - DAT_017825fc < local_64) {
          fStack_6c = local_64;
        }
      }
    }
    lVar3 = *(long *)(this + 0xa0);
    local_70 = fVar8;
    local_68 = (float)GRoot::rootToWorld(GRoot::_inst,(Vec2 *)&local_70);
                    /* try { // try from 00a861e8 to 00b86213 has its CatchHandler @ 00a86284 */
    local_64 = fVar5;
    local_68 = (float)cocos2d::Node::convertToNodeSpace(*(Node **)(lVar3 + 0xa8),(Vec2 *)&local_68);
    local_64 = *(float *)(lVar3 + 0xcc) - fVar5;
    if (*(char *)(lVar3 + 0xe8) != '\0') {
      local_68 = local_68 - *(float *)(lVar3 + 200) * *(float *)(lVar3 + 0xd8);
                    /* try { // try from 00a86218 to 00b8622b has its CatchHandler @ 00a86288 */
      local_64 = local_64 - *(float *)(lVar3 + 0xcc) * *(float *)(lVar3 + 0xdc);
    }
    DAT_01782600 = 1;
    setPosition(this,(float)(int)local_68,(float)(int)local_64);
    DAT_01782600 = 0;
    UIEventDispatcher::dispatchEvent
              ((UIEventDispatcher *)this,0x3d,(void *)0x0,(Value *)&cocos2d::Value::Null);
  }
LAB_00a86260:
                    /* try { // try from 00a86268 to 00b8626f has its CatchHandler @ 00a86284 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00a86270 to 00b862a3 has its CatchHandler @ 00a86118 */
                    /* catch() { ... } // from try @ 00a861e8 with catch @ 00a86284
                       catch() { ... } // from try @ 00a86268 with catch @ 00a86284 */
                    /* catch() { ... } // from try @ 00a86158 with catch @ 00a86288
                       catch() { ... } // from try @ 00a861c8 with catch @ 00a86288
                       catch() { ... } // from try @ 00a86218 with catch @ 00a86288 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

