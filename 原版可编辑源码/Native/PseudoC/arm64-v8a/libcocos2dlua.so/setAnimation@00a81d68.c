
/* fairygui::ActionMovieClip::setAnimation(cocos2d::Animation*, float, bool) */

void __thiscall
fairygui::ActionMovieClip::setAnimation
          (ActionMovieClip *this,Animation *param_1,float param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  Ref *this_00;
  ActionMovieClip *pAVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a81d94 to 00b81de3 has its CatchHandler @ 00a81d94
                       catch() { ... } // from try @ 00a81d94 with catch @ 00a81d94
                       catch() { ... } // from try @ 00a81e1c with catch @ 00a81d94
                       catch() { ... } // from try @ 00a81e60 with catch @ 00a81d94 */
  this_00 = *(Ref **)(this + 0x50);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Animation *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x50);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(Animation **)(this + 0x50) = param_1;
  }
  if (param_1 == (Animation *)0x0) goto LAB_00a81f1c;
  pAVar4 = *(ActionMovieClip **)(this + 0xa0);
  this[0x70] = (ActionMovieClip)param_3;
  *(float *)(this + 0x6c) = param_2;
                    /* try { // try from 00a81de4 to 00b81e1b has its CatchHandler @ 00a81ea0 */
  *(undefined8 *)(this + 0xa0) = 0;
  if (this + 0x80 == pAVar4) {
    pcVar6 = *(code **)(*(long *)pAVar4 + 0x20);
LAB_00a81e04:
    (*pcVar6)();
  }
  else if (pAVar4 != (ActionMovieClip *)0x0) {
    pcVar6 = *(code **)(*(long *)pAVar4 + 0x28);
    goto LAB_00a81e04;
  }
  lVar7 = *(long *)(this + 0x50);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_60 = (undefined8 *)0x0;
                    /* try { // try from 00a81e1c to 00b81e4b has its CatchHandler @ 00a81d94 */
  if (&local_60 == (undefined8 **)(lVar7 + 0x40)) {
                    /* try { // try from 00a81e60 to 00b81ebb has its CatchHandler @ 00a81d94 */
    puVar8 = (undefined8 *)0x0;
  }
  else {
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    assign<cocos2d::AnimationFrame**>
              ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
               &local_60,*(AnimationFrame ***)(lVar7 + 0x40),*(AnimationFrame ***)(lVar7 + 0x48));
    puVar3 = local_58;
    puVar8 = local_60;
    for (puVar1 = local_60; puVar1 != puVar3; puVar1 = puVar1 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar1);
                    /* try { // try from 00a81e4c to 00b81e5f has its CatchHandler @ 00a81ea0 */
      puVar8 = local_58;
    }
  }
  iVar5 = (int)((ulong)((long)local_58 - (long)local_60) >> 3);
  if ((*(int *)(this + 0xb8) == -1) || (iVar5 <= *(int *)(this + 0xb8))) {
    *(int *)(this + 0xb8) = iVar5 + -1;
  }
                    /* catch() { ... } // from try @ 00a81de4 with catch @ 00a81ea0
                       catch() { ... } // from try @ 00a81e4c with catch @ 00a81ea0 */
  if ((*(int *)(this + 0xc0) == -1) || (iVar5 <= *(int *)(this + 0xc0))) {
    *(int *)(this + 0xc0) = iVar5 + -1;
  }
  if ((*(int *)(this + 0x58) < 0) || (iVar5 <= *(int *)(this + 0x58))) {
    *(int *)(this + 0x58) = iVar5 + -1;
  }
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  this[100] = (ActionMovieClip)0x0;
  puVar3 = puVar8;
  for (puVar1 = local_60; puVar1 != puVar8; puVar1 = puVar1 + 1) {
    cocos2d::Ref::release((Ref *)*puVar1);
    puVar3 = local_60;
  }
  local_58 = local_60;
  if (puVar3 != (undefined8 *)0x0) {
    local_58 = puVar3;
    operator_delete(puVar3);
  }
LAB_00a81f1c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

