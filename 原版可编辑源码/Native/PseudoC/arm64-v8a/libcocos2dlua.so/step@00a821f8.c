
/* fairygui::ActionMovieClip::step(float) */

void __thiscall fairygui::ActionMovieClip::step(ActionMovieClip *this,float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 0x50);
  if (lVar5 == 0) goto LAB_00a8233c;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_60 = (undefined8 *)0x0;
  if (&local_60 == (undefined8 **)(lVar5 + 0x40)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    std::__ndk1::vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
    assign<cocos2d::AnimationFrame**>
              ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>> *)
               &local_60,*(AnimationFrame ***)(lVar5 + 0x40),*(AnimationFrame ***)(lVar5 + 0x48));
    puVar9 = local_58;
    puVar8 = local_60;
    for (puVar10 = local_60; puVar10 != puVar9; puVar10 = puVar10 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar10);
      puVar8 = local_58;
    }
  }
  iVar6 = (int)((ulong)((long)local_58 - (long)local_60) >> 3);
  if ((iVar6 == 0) || (iVar1 = *(int *)(this + 0xc4), iVar1 == 3)) {
LAB_00a82304:
    puVar9 = puVar8;
    puVar10 = local_60;
    if (local_60 != puVar8) {
LAB_00a8230c:
      do {
        cocos2d::Ref::release((Ref *)*puVar10);
        puVar10 = puVar10 + 1;
        puVar9 = local_60;
      } while (puVar8 != puVar10);
    }
  }
  else {
    iVar2 = *(int *)(this + 0x58);
    fVar11 = *(float *)(this + 0x68) * param_1;
    if (*(float *)(this + 0x68) == 1.0) {
      fVar11 = param_1;
    }
    fVar11 = *(float *)(this + 0x5c) + fVar11;
    *(float *)(this + 0x5c) = fVar11;
    if ((iVar2 == 0) && (0 < *(int *)(this + 0x60))) {
      fVar12 = *(float *)(*(long *)(this + 0x50) + 0x34);
      fVar13 = (*(float *)(local_60[iVar2] + 0x38) + *(float *)(this + 0x6c)) * fVar12 +
               *(float *)(this + 0x6c);
    }
    else {
      fVar12 = *(float *)(*(long *)(this + 0x50) + 0x34);
      fVar13 = (*(float *)(local_60[iVar2] + 0x38) + 0.0) * fVar12;
    }
    if (fVar11 < fVar13) goto LAB_00a82304;
    if (fVar11 - fVar13 <= fVar12) {
      fVar12 = fVar11 - fVar13;
    }
    *(float *)(this + 0x5c) = fVar12;
    if (this[0x70] == (ActionMovieClip)0x0) {
      iVar7 = iVar2 + 1;
      *(int *)(this + 0x58) = iVar7;
      if (iVar2 < iVar6 + -1) goto joined_r0x00a8245c;
      iVar7 = 0;
      *(undefined4 *)(this + 0x58) = 0;
      *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
      if (iVar1 != 2) goto LAB_00a82460;
LAB_00a82478:
      *(undefined4 *)(this + 0xc4) = 3;
      *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0xc0);
      *(undefined4 *)(this + 0x5c) = 0;
      if (*(long **)(this + 0xa0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xa0) + 0x30))();
      }
    }
    else {
      if (this[100] == (ActionMovieClip)0x0) {
        iVar7 = iVar2 + 1;
        *(int *)(this + 0x58) = iVar7;
        if (iVar6 + -1 <= iVar2) {
          if (iVar6 < 3) {
            iVar6 = 2;
          }
          iVar7 = iVar6 + -2;
          *(int *)(this + 0x58) = iVar7;
          *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
          this[100] = (ActionMovieClip)0x1;
        }
      }
      else {
        iVar7 = iVar2 + -1;
        *(int *)(this + 0x58) = iVar7;
        if (iVar7 == 0 || iVar2 < 1) {
          iVar7 = 0;
          *(undefined4 *)(this + 0x58) = 0;
          *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
          this[100] = (ActionMovieClip)((byte)this[100] ^ 1);
        }
      }
joined_r0x00a8245c:
      if (iVar1 == 2) goto LAB_00a82478;
LAB_00a82460:
      if (iVar1 == 1) {
        *(undefined4 *)(this + 0xc4) = 0;
        *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0xb4);
        *(undefined4 *)(this + 0x5c) = 0;
      }
      else if (iVar7 == *(int *)(this + 0xb8)) {
        iVar6 = *(int *)(this + 0xbc) + -1;
        if (*(int *)(this + 0xbc) < 1) {
          if (*(int *)(this + 0xb4) != 0) goto LAB_00a824d0;
        }
        else {
          *(int *)(this + 0xbc) = iVar6;
          if (iVar6 == 0) {
            uVar4 = 2;
          }
          else {
LAB_00a824d0:
            uVar4 = 1;
          }
          *(undefined4 *)(this + 0xc4) = uVar4;
        }
      }
    }
    drawFrame(this);
    puVar8 = local_58;
    puVar9 = local_58;
    puVar10 = local_60;
    if (local_60 != local_58) goto LAB_00a8230c;
  }
  local_58 = local_60;
  if (puVar9 != (undefined8 *)0x0) {
    local_58 = puVar9;
    operator_delete(puVar9);
  }
LAB_00a8233c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

