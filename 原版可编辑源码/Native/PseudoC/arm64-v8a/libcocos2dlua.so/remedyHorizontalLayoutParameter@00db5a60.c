
/* cocos2d::ui::ListView::remedyHorizontalLayoutParameter(cocos2d::ui::LinearLayoutParameter*, long)
    */

void __thiscall
cocos2d::ui::ListView::remedyHorizontalLayoutParameter
          (ListView *this,LinearLayoutParameter *param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Margin aMStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x8d0) - 3U < 3) {
    LinearLayoutParameter::setGravity
              (param_1,*(undefined4 *)(&DAT_0141dfcc + (long)(int)(*(int *)(this + 0x8d0) - 3U) * 4)
              );
  }
  if (param_2 == 0) {
    fVar2 = *(float *)(this + 0x8e0);
  }
  else {
    if (param_2 == *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3) {
                    /* try { // try from 00db5ac8 to 00eb5adb has its CatchHandler @ 00db5c64 */
      fVar2 = *(float *)(this + 0x8dc);
      fVar3 = *(float *)(this + 0x8e4);
      fVar4 = *(float *)(this + 0x8e8);
      fVar5 = *(float *)(this + 0x8ec);
      goto LAB_00db5afc;
    }
    fVar2 = *(float *)(this + 0x8dc);
  }
  fVar3 = *(float *)(this + 0x8e4);
  fVar5 = *(float *)(this + 0x8ec);
  fVar4 = 0.0;
LAB_00db5afc:
  Margin::Margin(aMStack_48,fVar2,fVar3,fVar4,fVar5);
  LayoutParameter::setMargin((LayoutParameter *)param_1,aMStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00db5b2c to 00eb5b4f has its CatchHandler @ 00db5c6c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

