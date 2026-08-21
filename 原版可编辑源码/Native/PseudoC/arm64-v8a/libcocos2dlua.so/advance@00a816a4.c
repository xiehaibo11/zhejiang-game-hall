
/* fairygui::ActionMovieClip::advance(float) */

void __thiscall fairygui::ActionMovieClip::advance(ActionMovieClip *this,float param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ActionMovieClip AVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  ActionMovieClip AVar9;
  int iVar11;
  int iVar12;
  ActionMovieClip AVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  ActionMovieClip AVar10;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar7 = *(long *)(this + 0x50);
  if (lVar7 != 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    if (&local_60 == (undefined8 **)(lVar7 + 0x40)) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
      ::assign<cocos2d::AnimationFrame**>
                ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                  *)&local_60,*(AnimationFrame ***)(lVar7 + 0x40),
                 *(AnimationFrame ***)(lVar7 + 0x48));
      puVar6 = local_58;
      puVar14 = local_60;
      for (puVar1 = local_60; puVar1 != puVar6; puVar1 = puVar1 + 1) {
        cocos2d::Ref::retain((Ref *)*puVar1);
        puVar14 = local_58;
      }
    }
    iVar8 = (int)((ulong)((long)local_58 - (long)local_60) >> 3);
    puVar1 = puVar14;
    puVar6 = local_60;
    if (iVar8 != 0) {
      iVar2 = *(int *)(this + 0x58);
      AVar3 = this[100];
      iVar4 = iVar8 + -1;
      if (iVar8 < 3) {
        iVar8 = 2;
      }
      fVar15 = param_1;
      iVar11 = iVar2;
      AVar13 = AVar3;
      AVar9 = AVar3;
      AVar10 = AVar3;
      while( true ) {
        if ((iVar11 == 0) && (0 < *(int *)(this + 0x60))) {
          fVar16 = (*(float *)(local_60[iVar11] + 0x38) + *(float *)(this + 0x6c)) *
                   *(float *)(*(long *)(this + 0x50) + 0x34) + *(float *)(this + 0x6c);
        }
        else {
          fVar16 = (*(float *)(local_60[iVar11] + 0x38) + 0.0) *
                   *(float *)(*(long *)(this + 0x50) + 0x34);
        }
        if (fVar15 < fVar16) break;
        if (this[0x70] == (ActionMovieClip)0x0) {
          iVar12 = iVar11 + 1;
          *(int *)(this + 0x58) = iVar12;
          if (iVar4 <= iVar11) {
            iVar12 = 0;
            *(undefined4 *)(this + 0x58) = 0;
            *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
          }
        }
        else if (AVar13 == (ActionMovieClip)0x0) {
          *(int *)(this + 0x58) = iVar11 + 1;
          if (iVar11 < iVar4) {
            AVar13 = (ActionMovieClip)0x0;
            iVar12 = iVar11 + 1;
          }
          else {
            AVar10 = (ActionMovieClip)0x1;
            AVar9 = (ActionMovieClip)0x1;
            *(int *)(this + 0x58) = iVar8 + -2;
            this[100] = (ActionMovieClip)0x1;
            *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
            AVar13 = (ActionMovieClip)0x1;
            iVar12 = iVar8 + -2;
          }
        }
        else {
          iVar12 = iVar11 + -1;
          *(int *)(this + 0x58) = iVar12;
          if (iVar12 == 0 || iVar11 < 1) {
            AVar10 = (ActionMovieClip)((byte)AVar13 ^ 1);
            *(undefined4 *)(this + 0x58) = 0;
            *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
            this[100] = AVar10;
            iVar12 = 0;
            AVar13 = AVar10;
            AVar9 = AVar10;
          }
        }
        fVar15 = fVar15 - fVar16;
        iVar11 = iVar12;
        if ((iVar12 == iVar2) && (AVar13 = AVar10, AVar3 == AVar9)) {
          fVar15 = fVar15 - (param_1 - fVar15) * (float)(int)(fVar15 / (param_1 - fVar15));
          AVar13 = AVar3;
        }
      }
      *(undefined4 *)(this + 0x5c) = 0;
    }
    for (; puVar6 != puVar14; puVar6 = puVar6 + 1) {
      cocos2d::Ref::release((Ref *)*puVar6);
      puVar1 = local_60;
    }
    local_58 = local_60;
    if (puVar1 != (undefined8 *)0x0) {
      local_58 = puVar1;
      operator_delete(puVar1);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

