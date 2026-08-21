
/* spine::SkeletonCacheAnimation::update(float) */

void __thiscall spine::SkeletonCacheAnimation::update(SkeletonCacheAnimation *this,float param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  int iVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  AnimationData *this_01;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong *puVar8;
  long *plVar9;
  void *pvVar10;
  char *pcVar11;
  ulong uVar12;
  void *pvVar13;
  float fVar14;
  float fVar15;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[0x1c] != (SkeletonCacheAnimation)0x0) goto LAB_00d19584;
  fVar15 = SkeletonAnimation::GlobalTimeScale * *(float *)(this + 0x18) * param_1;
  if (this[0x100] != (SkeletonCacheAnimation)0x0) {
    puVar8 = *(ulong **)(this + 0x158);
    if (*(long *)(this + 0x150) == 0) {
      if (puVar8 == (ulong *)0x0) {
        if ((*(long *)(this + 0xe8) != 0) && (*(char *)(*(long *)(this + 0xe8) + 0x18) == '\0')) {
          SkeletonCache::updateToFrame
                    (*(SkeletonCache **)(this + 0xe0),(basic_string *)(this + 0x108),-1);
        }
        goto LAB_00d19584;
      }
    }
    else if (puVar8 == (ulong *)0x0) {
      uVar6 = *(ulong *)(this + 0x148);
      puVar8 = *(ulong **)
                (*(long *)((long)*(undefined8 **)(this + 0x130) + (uVar6 >> 6 & 0x3fffffffffffff8))
                + (uVar6 & 0x1ff) * 8);
      *(ulong *)(this + 0x148) = uVar6 + 1;
      *(long *)(this + 0x150) = *(long *)(this + 0x150) + -1;
      *(ulong **)(this + 0x158) = puVar8;
      if (0x3ff < uVar6 + 1) {
        operator_delete((void *)**(undefined8 **)(this + 0x130));
        puVar8 = *(ulong **)(this + 0x158);
        *(long *)(this + 0x130) = *(long *)(this + 0x130) + 8;
        *(long *)(this + 0x148) = *(long *)(this + 0x148) + -0x200;
      }
      if (puVar8 == (ulong *)0x0) goto LAB_00d19584;
    }
    fVar14 = fVar15 + *(float *)(this + 0xf4);
    *(float *)(this + 0xf4) = fVar14;
    if (*(float *)((long)puVar8 + 0x1c) < fVar14) {
      uStack_78 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      if ((*puVar8 & 1) == 0) {
        local_70 = (char *)puVar8[2];
        uStack_78 = puVar8[1];
        local_80 = *puVar8;
        bVar3 = (byte)puVar8[3];
      }
      else {
        uVar6 = puVar8[1];
        if (0xffffffffffffffef < uVar6) goto LAB_00d19a8c;
        pvVar10 = (void *)puVar8[2];
        if (uVar6 < 0x17) {
          pcVar11 = (char *)((ulong)&local_80 | 1);
          local_80 = (ulong)(byte)((int)uVar6 << 1);
          if (uVar6 != 0) goto LAB_00d19814;
        }
        else {
          uVar12 = uVar6 + 0x10 & 0xfffffffffffffff0;
          pcVar11 = operator_new(uVar12);
          local_80 = uVar12 | 1;
          uStack_78 = uVar6;
          local_70 = pcVar11;
LAB_00d19814:
          memcpy(pcVar11,pvVar10,uVar6);
        }
        pcVar11[uVar6] = '\0';
        bVar3 = (byte)puVar8[3];
      }
      if (puVar8 != (ulong *)0x0) {
        if ((*puVar8 & 1) != 0) {
          operator_delete((void *)puVar8[2]);
        }
        operator_delete(puVar8);
      }
      this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (this + 0x108);
      *(undefined8 *)(this + 0x158) = 0;
      *(uint *)(this + 0xfc) = bVar3 ^ 1;
      if (this_00 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_80) {
        uVar6 = local_80 >> 1 & 0x7f;
        pcVar11 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          uVar6 = uStack_78;
          pcVar11 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this_00,pcVar11,uVar6);
      }
      uVar5 = SkeletonCache::buildAnimationData
                        (*(SkeletonCache **)(this + 0xe0),(basic_string *)this_00);
      this[0x100] = (SkeletonCacheAnimation)0x0;
      *(undefined4 *)(this + 0xf8) = 0;
      *(undefined8 *)(this + 0xe8) = uVar5;
      *(undefined8 *)(this + 0xf0) = 0;
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_00d19584;
    }
  }
  if (*(long *)(this + 0xe8) == 0) goto LAB_00d19584;
  if (((*(float *)(this + 0xf4) <= 1e-05) && (*(int *)(this + 0xf8) == 0)) &&
     (plVar9 = *(long **)(this + 0x70), plVar9 != (long *)0x0)) {
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    if (((byte)this[0x108] & 1) == 0) {
      local_90 = *(void **)(this + 0x118);
      uStack_98 = *(ulong *)(this + 0x110);
      local_a0 = *(ulong *)(this + 0x108);
    }
    else {
      uVar6 = *(ulong *)(this + 0x110);
      if (0xffffffffffffffef < uVar6) goto LAB_00d19a8c;
      pvVar10 = *(void **)(this + 0x118);
      if (uVar6 < 0x17) {
        pvVar13 = (void *)((ulong)&local_a0 | 1);
        local_a0 = (ulong)(byte)((int)uVar6 << 1);
        if (uVar6 != 0) goto LAB_00d19a4c;
      }
      else {
        uVar12 = uVar6 + 0x10 & 0xfffffffffffffff0;
        pvVar13 = operator_new(uVar12);
        local_a0 = uVar12 | 1;
        uStack_98 = uVar6;
        local_90 = pvVar13;
LAB_00d19a4c:
        memcpy(pvVar13,pvVar10,uVar6);
      }
      *(undefined1 *)((long)pvVar13 + uVar6) = 0;
    }
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_a0);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  this_01 = *(AnimationData **)(this + 0xe8);
  fVar15 = fVar15 + *(float *)(this + 0xf4);
  *(float *)(this + 0xf4) = fVar15;
  iVar7 = (int)(fVar15 / SkeletonCache::FrameTime);
  if (this_01[0x18] == (AnimationData)0x0) {
    SkeletonCache::updateToFrame
              (*(SkeletonCache **)(this + 0xe0),(basic_string *)(this + 0x108),iVar7);
    this_01 = *(AnimationData **)(this + 0xe8);
  }
  iVar4 = SkeletonCache::AnimationData::getFrameCount(this_01);
  if ((*(char *)(*(long *)(this + 0xe8) + 0x18) != '\0') && (iVar4 + -1 <= iVar7)) {
    iVar1 = *(int *)(this + 0xf8);
    *(undefined4 *)(this + 0xf4) = 0;
    *(int *)(this + 0xf8) = iVar1 + 1;
    iVar7 = 0;
    if ((0 < *(int *)(this + 0xfc)) && (*(int *)(this + 0xfc) <= iVar1 + 1)) {
      *(undefined4 *)(this + 0xf8) = 0;
      this[0x100] = (SkeletonCacheAnimation)0x1;
      iVar7 = iVar4 + -1;
    }
    plVar9 = *(long **)(this + 0xa0);
    if (plVar9 != (long *)0x0) {
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      local_c0 = 0;
      if (((byte)this[0x108] & 1) == 0) {
        local_b0 = *(void **)(this + 0x118);
        uStack_b8 = *(ulong *)(this + 0x110);
        local_c0 = *(ulong *)(this + 0x108);
      }
      else {
        uVar6 = *(ulong *)(this + 0x110);
        if (0xffffffffffffffef < uVar6) goto LAB_00d19a8c;
        pvVar10 = *(void **)(this + 0x118);
        if (uVar6 < 0x17) {
          pvVar13 = (void *)((ulong)&local_c0 | 1);
          local_c0 = (ulong)(byte)((int)uVar6 << 1);
          if (uVar6 != 0) goto LAB_00d19904;
        }
        else {
          uVar12 = uVar6 + 0x10 & 0xfffffffffffffff0;
          pvVar13 = operator_new(uVar12);
          local_c0 = uVar12 | 1;
          uStack_b8 = uVar6;
          local_b0 = pvVar13;
LAB_00d19904:
          memcpy(pvVar13,pvVar10,uVar6);
        }
        *(undefined1 *)((long)pvVar13 + uVar6) = 0;
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_c0);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
    }
    plVar9 = *(long **)(this + 0xd0);
    if (plVar9 != (long *)0x0) {
      uStack_d8 = 0;
      local_d0 = (void *)0x0;
      local_e0 = 0;
      if (((byte)this[0x108] & 1) == 0) {
        local_d0 = *(void **)(this + 0x118);
        uStack_d8 = *(ulong *)(this + 0x110);
        local_e0 = *(ulong *)(this + 0x108);
      }
      else {
        uVar6 = *(ulong *)(this + 0x110);
        if (0xffffffffffffffef < uVar6) {
LAB_00d19a8c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pvVar10 = *(void **)(this + 0x118);
        if (uVar6 < 0x17) {
          pvVar13 = (void *)((ulong)&local_e0 | 1);
          local_e0 = (ulong)(byte)((int)uVar6 << 1);
          if (uVar6 != 0) goto LAB_00d199bc;
        }
        else {
          uVar12 = uVar6 + 0x10 & 0xfffffffffffffff0;
          pvVar13 = operator_new(uVar12);
          local_e0 = uVar12 | 1;
          uStack_d8 = uVar6;
          local_d0 = pvVar13;
LAB_00d199bc:
          memcpy(pvVar13,pvVar10,uVar6);
        }
        *(undefined1 *)((long)pvVar13 + uVar6) = 0;
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_e0);
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
    }
  }
  *(int *)(this + 0xf0) = iVar7;
LAB_00d19584:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

