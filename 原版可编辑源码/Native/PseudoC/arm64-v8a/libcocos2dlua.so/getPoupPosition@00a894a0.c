
/* fairygui::GRoot::getPoupPosition(fairygui::GObject*, fairygui::GObject*,
   fairygui::PopupDirection) */

int fairygui::GRoot::getPoupPosition
              (undefined1 param_1_00 [16],float param_2_00,Vec2 *param_1,long param_2,
              GObject *param_5,int param_6)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 00a894b4 to 00b894c7 has its CatchHandler @ 00a896bc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a894cc to 00b894df has its CatchHandler @ 00a896c4 */
  local_58 = 0;
  local_50 = 0;
  if (param_5 == (GObject *)0x0) {
    local_50._0_4_ = (float)GObject::globalToLocal(param_1);
    fVar5 = 0.0;
    fVar3 = 0.0;
    local_50._4_4_ = param_2_00;
  }
  else {
                    /* try { // try from 00a894e4 to 00b894f7 has its CatchHandler @ 00a896c0 */
    uVar2 = GObject::localToGlobal(param_5,(Vec2 *)&cocos2d::Vec2::ZERO);
    local_50 = CONCAT44(param_2_00,uVar2);
                    /* try { // try from 00a894fc to 00b8950f has its CatchHandler @ 00a896dc */
    local_50._0_4_ = (float)GObject::globalToLocal(param_1);
    local_60 = *(undefined8 *)(param_5 + 200);
    local_50._4_4_ = param_2_00;
    uVar2 = GObject::localToGlobal(param_5,(Vec2 *)&local_60);
    local_58 = CONCAT44(param_2_00,uVar2);
    fVar3 = (float)GObject::globalToLocal(param_1);
    fVar3 = fVar3 - (float)local_50;
    fVar5 = param_2_00 - local_50._4_4_;
    local_58 = CONCAT44(fVar5,fVar3);
  }
  fVar4 = ((float)local_50 + fVar3) - *(float *)(param_2 + 200);
  if ((float)local_50 + *(float *)(param_2 + 200) <= *(float *)(param_1 + 200)) {
    fVar4 = (float)local_50;
  }
                    /* try { // try from 00a89580 to 00b89587 has its CatchHandler @ 00a8961c */
  if (param_6 == 0) {
    fVar6 = *(float *)(param_2 + 0xcc);
                    /* try { // try from 00a89598 to 00b8959f has its CatchHandler @ 00a89614 */
    if (local_50._4_4_ + fVar5 + fVar6 <= *(float *)(param_1 + 0xcc)) goto LAB_00a895cc;
  }
  else {
    if (param_6 != 1) goto LAB_00a895cc;
                    /* try { // try from 00a8958c to 00b89593 has its CatchHandler @ 00a89618 */
    fVar6 = *(float *)(param_2 + 0xcc);
  }
                    /* try { // try from 00a895b0 to 00b895b7 has its CatchHandler @ 00a89610 */
  if ((local_50._4_4_ - fVar6) + -1.0 < 0.0) {
                    /* try { // try from 00a895bc to 00b895c3 has its CatchHandler @ 00a8960c */
    fVar4 = fVar4 + fVar3 * 0.5;
                    /* try { // try from 00a895c8 to 00b895cf has its CatchHandler @ 00a89608 */
  }
LAB_00a895cc:
                    /* try { // try from 00a895d4 to 00b895db has its CatchHandler @ 00a89630 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00a895e0 to 00b895e7 has its CatchHandler @ 00a8962c */
                    /* try { // try from 00a895ec to 00b895f3 has its CatchHandler @ 00a89628 */
                    /* try { // try from 00a895f4 to 00b89707 has its CatchHandler @ 00a881e4 */
    return (int)fVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

