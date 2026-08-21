
/* fairygui::ActionMovieClip::reverse() const */

Action * __thiscall fairygui::ActionMovieClip::reverse(ActionMovieClip *this)

{
  vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *this_00;
  AnimationFrame **ppAVar1;
  ActionMovieClip AVar2;
  ulong uVar3;
  long lVar4;
  AnimationFrame **ppAVar5;
  Animation *pAVar6;
  Action *this_01;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  AnimationFrame **local_80;
  AnimationFrame **ppAStack_78;
  AnimationFrame **local_70;
  Ref *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar8 = *(long **)(this + 0x50);
  puVar9 = (undefined8 *)plVar8[8];
  puVar7 = (undefined8 *)plVar8[9];
  ppAStack_78 = (AnimationFrame **)0x0;
  local_70 = (AnimationFrame **)0x0;
  local_80 = (AnimationFrame **)0x0;
  uVar3 = (long)puVar7 - (long)puVar9;
  if (uVar3 == 0) {
    if (puVar9 == puVar7) goto LAB_00a82808;
  }
  else {
    if ((ulong)((long)uVar3 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    local_80 = operator_new(uVar3);
    local_70 = local_80 + ((long)uVar3 >> 3);
    puVar9 = (undefined8 *)plVar8[8];
    puVar7 = (undefined8 *)plVar8[9];
    ppAStack_78 = local_80;
    if (puVar9 == puVar7) goto LAB_00a82808;
  }
  local_80 = ppAStack_78;
  while( true ) {
    local_60 = (Ref *)*puVar9;
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    insert((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
           &local_80,local_80,&local_60);
    cocos2d::Ref::retain(local_60);
    if (puVar7 + -1 == puVar9) break;
    puVar9 = puVar9 + 1;
  }
  plVar8 = *(long **)(this + 0x50);
LAB_00a82808:
  pAVar6 = (Animation *)(**(code **)(*plVar8 + 0x10))(plVar8);
  this_00 = (vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
            (pAVar6 + 0x40);
  if (this_00 !=
      (vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)&local_80
     ) {
    puVar9 = *(undefined8 **)(pAVar6 + 0x40);
    puVar7 = *(undefined8 **)(pAVar6 + 0x48);
    if (puVar9 != puVar7) {
      do {
        cocos2d::Ref::release((Ref *)*puVar9);
        puVar9 = puVar9 + 1;
      } while (puVar7 != puVar9);
      puVar9 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(pAVar6 + 0x48) = puVar9;
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    assign<cocos2d::AnimationFrame**>(this_00,local_80,ppAStack_78);
    puVar7 = *(undefined8 **)(pAVar6 + 0x48);
    for (puVar9 = *(undefined8 **)(pAVar6 + 0x40); puVar9 != puVar7; puVar9 = puVar9 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar9);
    }
  }
  fVar10 = *(float *)(this + 0x6c);
  AVar2 = this[0x70];
  this_01 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_01 != (Action *)0x0) {
    cocos2d::Action::Action(this_01);
    *(undefined8 *)(this_01 + 0x50) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)(this_01 + 0x5d) = 0;
    this_01[0x70] = (Action)0x0;
    *(undefined8 *)(this_01 + 0xa0) = 0;
    *(undefined8 *)(this_01 + 0xbc) = 0;
    *(undefined8 *)(this_01 + 0xb4) = 0;
    *(undefined4 *)(this_01 + 0xb0) = 0xffffffff;
    *(undefined ***)this_01 = &PTR__ActionMovieClip_016a60d0;
    *(undefined ***)(this_01 + 0x28) = &PTR_clone_016a6130;
    *(undefined8 *)(this_01 + 0x68) = 0x3f800000;
    *(undefined4 *)(this_01 + 0xc4) = 0;
    setAnimation((ActionMovieClip *)this_01,pAVar6,fVar10,AVar2 != (ActionMovieClip)0x0);
    cocos2d::Ref::autorelease((Ref *)this_01);
  }
  drawFrame((ActionMovieClip *)this_01);
  ppAVar5 = ppAStack_78;
  for (ppAVar1 = local_80; ppAVar1 != ppAVar5; ppAVar1 = ppAVar1 + 1) {
    cocos2d::Ref::release((Ref *)*ppAVar1);
  }
  ppAStack_78 = local_80;
  if (local_80 != (AnimationFrame **)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}

