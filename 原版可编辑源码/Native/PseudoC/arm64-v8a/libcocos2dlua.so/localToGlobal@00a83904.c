
/* fairygui::GObject::localToGlobal(cocos2d::Rect const&) */

void fairygui::GObject::localToGlobal(Rect *param_1)

{
  long lVar1;
  Rect *in_x1;
  Rect *in_x8;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::Rect::Rect(in_x8);
  local_50 = *(ulong *)in_x1;
  fVar2 = (float)(local_50 >> 0x20);
  if (param_1[0xe8] == '\0') {
    fVar4 = *(float *)(param_1 + 0xcc);
  }
  else {
    fVar4 = *(float *)(param_1 + 0xcc);
    fVar2 = fVar4 * *(float *)(param_1 + 0xdc) + fVar2;
    local_50 = (ulong)(uint)(*(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8) +
                            (float)local_50);
  }
  local_50 = CONCAT44(fVar4 - fVar2,(undefined4)local_50);
  uVar3 = cocos2d::Node::convertToWorldSpace(*(Node **)(param_1 + 0xa8),(Vec2 *)&local_50);
                    /* try { // try from 00a839a0 to 00b839a7 has its CatchHandler @ 00a839bc */
                    /* try { // try from 00a839a8 to 00b83a0b has its CatchHandler @ 00a83830 */
  local_50 = CONCAT44(fVar4,uVar3);
  uVar3 = GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_50);
                    /* catch() { ... } // from try @ 00a838b0 with catch @ 00a839bc
                       catch() { ... } // from try @ 00a839a0 with catch @ 00a839bc */
  *(undefined4 *)in_x8 = uVar3;
  *(float *)(in_x8 + 4) = fVar4;
                    /* catch() { ... } // from try @ 00a83894 with catch @ 00a839c0 */
  fVar2 = (float)cocos2d::Rect::getMaxX(in_x1);
  fVar4 = (float)cocos2d::Rect::getMaxY(in_x1);
  if (param_1[0xe8] == '\0') {
    fVar5 = *(float *)(param_1 + 0xcc);
  }
  else {
                    /* catch() { ... } // from try @ 00a83870 with catch @ 00a839f0 */
    fVar2 = fVar2 + *(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8);
    fVar5 = *(float *)(param_1 + 0xcc);
    fVar4 = fVar4 + fVar5 * *(float *)(param_1 + 0xdc);
  }
  local_50 = CONCAT44(fVar5 - fVar4,fVar2);
  uVar3 = cocos2d::Node::convertToWorldSpace(*(Node **)(param_1 + 0xa8),(Vec2 *)&local_50);
  local_50 = CONCAT44(fVar5,uVar3);
  fVar2 = (float)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_50);
  *(ulong *)(in_x8 + 8) =
       CONCAT44(fVar5 - (float)((ulong)*(undefined8 *)in_x8 >> 0x20),
                fVar2 - (float)*(undefined8 *)in_x8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

