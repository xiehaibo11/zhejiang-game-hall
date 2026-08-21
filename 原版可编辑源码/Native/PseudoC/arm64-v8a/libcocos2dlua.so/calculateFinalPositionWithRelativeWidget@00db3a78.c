
/* cocos2d::ui::RelativeLayoutManager::calculateFinalPositionWithRelativeWidget(cocos2d::ui::LayoutProtocol*)
    */

void __thiscall
cocos2d::ui::RelativeLayoutManager::calculateFinalPositionWithRelativeWidget
          (RelativeLayoutManager *this,LayoutProtocol *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  Widget *this_00;
  long lVar4;
  RelativeLayoutParameter *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float local_90;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined1 auStack_60 [8];
  Size aSStack_58 [8];
  float local_50;
  float fStack_4c;
  long local_48;
  
                    /* try { // try from 00db3a94 to 00eb3a97 has its CatchHandler @ 00db3f08 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x48) + 0x150))();
  uVar9 = *puVar3;
                    /* try { // try from 00db3ac8 to 00eb3acf has its CatchHandler @ 00db3ed0 */
                    /* try { // try from 00db3ad4 to 00eb3adb has its CatchHandler @ 00db3eb0 */
  (**(code **)(**(long **)(this + 0x48) + 0x370))(auStack_60,*(long **)(this + 0x48));
                    /* try { // try from 00db3ae4 to 00eb3af3 has its CatchHandler @ 00db3e90 */
  Size::Size((Size *)&local_50,aSStack_58);
  *(undefined8 *)(this + 0x50) = 0;
  this_00 = (Widget *)getRelativeWidget(this,*(Widget **)(this + 0x48));
  lVar4 = (**(code **)(**(long **)(this + 0x48) + 0x5f8))(*(long **)(this + 0x48));
  this_01 = (RelativeLayoutParameter *)0x0;
  if (lVar4 != 0) {
    this_01 = (RelativeLayoutParameter *)
              __dynamic_cast(lVar4,&LayoutParameter::typeinfo,&RelativeLayoutParameter::typeinfo,0);
  }
  uVar2 = RelativeLayoutParameter::getAlign(this_01);
  (**(code **)(*(long *)param_1 + 0x18))(&local_68,param_1);
  fVar5 = (float)uVar9;
  fVar7 = (float)((ulong)uVar9 >> 0x20);
                    /* try { // try from 00db3b48 to 00eb3b4b has its CatchHandler @ 00db3ed8 */
                    /* try { // try from 00db3b50 to 00eb3b53 has its CatchHandler @ 00db3ed4 */
  switch(uVar2) {
  case 0:
  case 1:
    *(float *)(this + 0x50) = local_50 * fVar5;
                    /* try { // try from 00db3b8c to 00eb3b93 has its CatchHandler @ 00db3edc */
    *(float *)(this + 0x54) = fStack_64 - (1.0 - fVar7) * fStack_4c;
    break;
  case 2:
    local_68 = local_68 * 0.5;
    local_90 = *(float *)((ulong)&local_68 | 4);
    local_50 = (0.5 - fVar5) * local_50;
    fStack_4c = (1.0 - fVar7) * fStack_4c;
LAB_00db4054:
                    /* try { // try from 00db4054 to 00eb405b has its CatchHandler @ 00db4398 */
    uVar9 = CONCAT44(local_90 - fStack_4c,local_68 - local_50);
    goto LAB_00db4058;
  case 3:
    uVar9 = NEON_fmov(0x3f800000,4);
    uVar9 = CONCAT44(fStack_64 - ((float)((ulong)uVar9 >> 0x20) - fVar7) * fStack_4c,
                     local_68 - ((float)uVar9 - fVar5) * local_50);
    goto LAB_00db4058;
  case 4:
    *(float *)(this + 0x50) = local_50 * fVar5;
    *(float *)(this + 0x54) = fStack_64 * 0.5 - (0.5 - fVar7) * fStack_4c;
    break;
  case 5:
                    /* try { // try from 00db3dcc to 00eb3dd3 has its CatchHandler @ 00db3f04 */
    uVar9 = CONCAT44(fStack_64 * 0.5 - (0.5 - fVar7) * fStack_4c,
                     local_68 * 0.5 - (0.5 - fVar5) * local_50);
    goto LAB_00db4058;
  case 6:
    uVar9 = CONCAT44(fStack_64 * 0.5 - (0.5 - fVar7) * fStack_4c,local_68 - (1.0 - fVar5) * local_50
                    );
    goto LAB_00db4058;
  case 7:
    uVar9 = CONCAT44(fVar7 * fStack_4c,fVar5 * local_50);
LAB_00db4058:
    *(undefined8 *)(this + 0x50) = uVar9;
    break;
  case 8:
                    /* try { // try from 00db3e24 to 00eb3e87 has its CatchHandler @ 00db3ee4 */
    *(float *)(this + 0x50) = local_68 * 0.5 - (0.5 - fVar5) * local_50;
    *(float *)(this + 0x54) = fStack_4c * fVar7;
    break;
  case 9:
                    /* try { // try from 00db3d1c to 00eb3d27 has its CatchHandler @ 00db3f00 */
    *(float *)(this + 0x50) = local_68 - (1.0 - fVar5) * local_50;
                    /* try { // try from 00db3d3c to 00eb3d43 has its CatchHandler @ 00db3f2c */
    *(float *)(this + 0x54) = fStack_4c * fVar7;
    break;
  case 10:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) != 0) && (*(char *)(*(long *)(this + 0x58) + 0x70) == '\0'))
      goto LAB_00db40e8;
      local_90 = (float)Widget::getTopBoundary(this_00);
      fVar6 = (float)Widget::getLeftBoundary(this_00);
LAB_00db3f5c:
      uVar9 = CONCAT44(local_90 + fVar7 * fStack_4c,fVar6 + fVar5 * local_50);
      goto LAB_00db4058;
    }
    break;
  case 0xb:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) != 0) && (*(char *)(*(long *)(this + 0x58) + 0x70) == '\0'))
      goto LAB_00db40e8;
      (**(code **)(*(long *)this_00 + 0x370))(auStack_60,this_00);
      Size::Size((Size *)&local_70,aSStack_58);
      fVar6 = (float)Widget::getTopBoundary(this_00);
      fVar6 = fVar6 + fStack_4c * fVar7;
LAB_00db3fd4:
      *(float *)(this + 0x54) = fVar6;
      fVar7 = (float)Widget::getLeftBoundary(this_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db405c with catch @ 00db4004
                       catch(type#1 @ 00000000) { ... } // from try @ 00db4264 with catch @ 00db4004
                        */
      *(float *)(this + 0x50) = (fVar7 + local_70 * 0.5 + local_50 * fVar5) - local_50 * 0.5;
    }
    break;
  case 0xc:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) != 0) && (*(char *)(*(long *)(this + 0x58) + 0x70) == '\0'))
      goto LAB_00db40e8;
      fVar6 = (float)Widget::getTopBoundary(this_00);
      fVar8 = (float)Widget::getRightBoundary(this_00);
LAB_00db3d98:
                    /* try { // try from 00db3d98 to 00eb3d9f has its CatchHandler @ 00db3f28 */
      *(float *)(this + 0x54) = fVar6 + fStack_4c * fVar7;
      *(float *)(this + 0x50) = fVar8 - (1.0 - fVar5) * local_50;
    }
    break;
  case 0xd:
    if (this_00 != (Widget *)0x0) {
                    /* try { // try from 00db3e88 to 00eb3f47 has its CatchHandler @ 00db38b8 */
      if ((*(long *)(this + 0x58) != 0) && (*(char *)(*(long *)(this + 0x58) + 0x70) == '\0'))
      goto LAB_00db40e8;
                    /* catch() { ... } // from try @ 00db3ae4 with catch @ 00db3e90 */
      local_90 = (float)Widget::getTopBoundary(this_00);
      local_68 = (float)Widget::getLeftBoundary(this_00);
LAB_00db4038:
      uVar9 = NEON_fmov(0x3f800000,4);
      local_50 = ((float)uVar9 - fVar5) * local_50;
      fStack_4c = ((float)((ulong)uVar9 >> 0x20) - fVar7) * fStack_4c;
      goto LAB_00db4054;
    }
    break;
  case 0xe:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) != 0) && (*(char *)(*(long *)(this + 0x58) + 0x70) == '\0'))
      goto LAB_00db40e8;
      (**(code **)(*(long *)this_00 + 0x370))(auStack_60,this_00);
      Size::Size((Size *)&local_70,aSStack_58);
      fVar6 = (float)Widget::getLeftBoundary(this_00);
      fVar6 = fVar6 - (1.0 - fVar5) * local_50;
LAB_00db3ef8:
      *(float *)(this + 0x50) = fVar6;
                    /* catch() { ... } // from try @ 00db3d1c with catch @ 00db3f00 */
      fVar5 = (float)Widget::getBottomBoundary(this_00);
                    /* catch() { ... } // from try @ 00db3dcc with catch @ 00db3f04 */
                    /* catch() { ... } // from try @ 00db39d8 with catch @ 00db3f08
                       catch() { ... } // from try @ 00db3a94 with catch @ 00db3f08 */
                    /* catch() { ... } // from try @ 00db3d98 with catch @ 00db3f28 */
                    /* catch() { ... } // from try @ 00db3d3c with catch @ 00db3f2c */
      *(float *)(this + 0x54) = (fVar5 + local_6c * 0.5 + fStack_4c * fVar7) - fStack_4c * 0.5;
    }
    break;
  case 0xf:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) == 0) || (*(char *)(*(long *)(this + 0x58) + 0x70) != '\0')) {
        fVar6 = (float)Widget::getBottomBoundary(this_00);
        fVar8 = (float)Widget::getLeftBoundary(this_00);
        goto LAB_00db3d98;
      }
LAB_00db40e8:
      uVar9 = 0;
      goto LAB_00db4060;
    }
    break;
  case 0x10:
    if (this_00 != (Widget *)0x0) {
                    /* try { // try from 00db3bac to 00eb3c97 has its CatchHandler @ 00db3ef0 */
      if ((*(long *)(this + 0x58) != 0) && (*(char *)(*(long *)(this + 0x58) + 0x70) == '\0'))
      goto LAB_00db40e8;
      fVar6 = (float)Widget::getTopBoundary(this_00);
      fVar8 = (float)Widget::getRightBoundary(this_00);
LAB_00db40b4:
      *(float *)(this + 0x54) = fVar6 - (1.0 - fVar7) * fStack_4c;
      *(float *)(this + 0x50) = fVar8 + local_50 * fVar5;
    }
    break;
  case 0x11:
    if (this_00 != (Widget *)0x0) {
                    /* catch() { ... } // from try @ 00db3ad4 with catch @ 00db3eb0 */
      if ((*(long *)(this + 0x58) == 0) || (*(char *)(*(long *)(this + 0x58) + 0x70) != '\0')) {
                    /* catch() { ... } // from try @ 00db3ac8 with catch @ 00db3ed0 */
        (**(code **)(*(long *)this_00 + 0x370))(auStack_60,this_00);
                    /* catch() { ... } // from try @ 00db3b50 with catch @ 00db3ed4 */
                    /* catch() { ... } // from try @ 00db3b48 with catch @ 00db3ed8 */
                    /* catch() { ... } // from try @ 00db3b8c with catch @ 00db3edc */
        Size::Size((Size *)&local_70,aSStack_58);
                    /* catch() { ... } // from try @ 00db3a54 with catch @ 00db3ee0 */
                    /* catch() { ... } // from try @ 00db3e24 with catch @ 00db3ee4 */
        fVar6 = (float)Widget::getRightBoundary(this_00);
                    /* catch() { ... } // from try @ 00db39c4 with catch @ 00db3ee8 */
                    /* catch() { ... } // from try @ 00db39b8 with catch @ 00db3eec */
                    /* catch() { ... } // from try @ 00db3bac with catch @ 00db3ef0 */
        fVar6 = fVar6 + local_50 * fVar5;
        goto LAB_00db3ef8;
      }
      goto LAB_00db40e8;
    }
    break;
  case 0x12:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) == 0) || (*(char *)(*(long *)(this + 0x58) + 0x70) != '\0')) {
        local_90 = (float)Widget::getBottomBoundary(this_00);
        fVar6 = (float)Widget::getRightBoundary(this_00);
        goto LAB_00db3f5c;
      }
      goto LAB_00db40e8;
    }
    break;
  case 0x13:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) == 0) || (*(char *)(*(long *)(this + 0x58) + 0x70) != '\0')) {
        fVar6 = (float)Widget::getBottomBoundary(this_00);
        fVar8 = (float)Widget::getLeftBoundary(this_00);
        goto LAB_00db40b4;
      }
      goto LAB_00db40e8;
    }
    break;
  case 0x14:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) == 0) || (*(char *)(*(long *)(this + 0x58) + 0x70) != '\0')) {
        (**(code **)(*(long *)this_00 + 0x370))(auStack_60,this_00);
        Size::Size((Size *)&local_70,aSStack_58);
        fVar6 = (float)Widget::getBottomBoundary(this_00);
        fVar6 = fVar6 - (1.0 - fVar7) * fStack_4c;
        goto LAB_00db3fd4;
      }
      goto LAB_00db40e8;
    }
    break;
  case 0x15:
    if (this_00 != (Widget *)0x0) {
      if ((*(long *)(this + 0x58) == 0) || (*(char *)(*(long *)(this + 0x58) + 0x70) != '\0')) {
        local_90 = (float)Widget::getBottomBoundary(this_00);
        local_68 = (float)Widget::getRightBoundary(this_00);
        goto LAB_00db4038;
      }
      goto LAB_00db40e8;
    }
  }
                    /* try { // try from 00db405c to 00eb41fb has its CatchHandler @ 00db4004 */
  uVar9 = 1;
LAB_00db4060:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

