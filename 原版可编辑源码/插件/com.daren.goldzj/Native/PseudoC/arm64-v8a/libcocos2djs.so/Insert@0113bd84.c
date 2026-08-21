
/* WARNING: Removing unreachable block (ram,0x0113bed4) */
/* v8::internal::TransitionsAccessor::Insert(v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::SimpleTransitionFlag) */

void __thiscall
v8::internal::TransitionsAccessor::Insert
          (TransitionsAccessor *this,ulong *param_2,ulong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong local_70;
  uint local_64;
  ulong local_48;
  
  local_48 = *param_3;
  Map::SetBackPointer((Map *)&local_48,*(undefined8 *)(this + 0x10),4);
  if (*(int *)(this + 0x20) - 1U < 2) {
    if (param_4 == 0) {
LAB_0113bf30:
      uVar8 = *param_3 | 2;
      goto LAB_0113c8a0;
    }
    iVar14 = 1;
    puVar6 = (undefined8 *)Factory::NewTransitionArray(*(Factory **)this,0,1);
    ReplaceTransitions(this,*puVar6);
    lVar13 = **(long **)(this + 8);
    *(long *)(this + 0x10) = lVar13;
    uVar8 = *(long *)this + (ulong)*(uint *)(lVar13 + 0x23);
    *(ulong *)(this + 0x18) = uVar8;
    if (((uVar8 & 1) != 0) && ((int)uVar8 != 3)) {
      if ((uVar8 & 3) != 1) {
        if ((uVar8 & 3) != 3) goto LAB_0113c8fc;
        *(undefined4 *)(this + 0x20) = 3;
        uVar15 = uVar8 & 0xfffffffffffffffd;
        if ((int)uVar15 != 0) goto LAB_0113be70;
        goto joined_r0x0113c1ec;
      }
      uVar15 = uVar8 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) == 0x98) {
        iVar14 = 4;
      }
      else {
        iVar14 = (uint)(*(short *)(uVar15 + *(uint *)(uVar8 - 1)) != 100) << 1;
      }
    }
    *(int *)(this + 0x20) = iVar14;
joined_r0x0113c1ec:
    if (param_4 == 2) {
      uVar5 = 0;
      bVar3 = true;
    }
    else {
LAB_0113c1f0:
      uVar8 = *param_3;
      bVar3 = false;
      uVar5 = *(int *)(((long)(int)((*(uint *)(uVar8 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                        0x1000000000 >> 0x20 | 3U) +
                      (uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x17))) >> 1;
    }
  }
  else {
    if (*(int *)(this + 0x20) != 3) goto joined_r0x0113c1ec;
    uVar8 = *(ulong *)(this + 0x18);
    uVar15 = uVar8 & 0xfffffffffffffffd;
    if ((int)uVar15 == 0) goto joined_r0x0113c1ec;
LAB_0113be70:
    uVar8 = uVar8 & 0xffffffff00000000;
    uVar5 = *(uint *)((uVar8 | *(uint *)(uVar15 + 0x17)) +
                      ((long)(int)((*(uint *)(uVar15 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                       0x1000000000 >> 0x20) + -1);
    uVar19 = *(uint *)(*(long *)this + (ulong)*(uint *)(uVar15 + 0x17) +
                      ((long)(int)((*(uint *)(uVar15 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                       0x1000000000 >> 0x20 | 3U));
    if (param_4 != 2) {
      uVar11 = *param_3;
      iVar14 = *(int *)(((long)(int)((*(uint *)(uVar11 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                         0x1000000000 >> 0x20 | 3U) +
                       (uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x17)));
      if (param_4 == 0) {
        uVar11 = *param_2;
        if (uVar5 != (uint)uVar11) {
          uVar18 = uVar8 | uVar5;
          if ((((*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar18 - 1)) < 0x20) &&
               (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0x20
               )) || (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x40)) ||
             ((*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x40
              || (local_48 = uVar18, uVar8 = String::SlowEquals((String *)&local_48),
                 (uVar8 & 1) == 0)))) goto LAB_0113bff0;
        }
        if (((iVar14 >> 1 ^ uVar19 >> 1) & 0x39) == 0) goto LAB_0113bf30;
      }
    }
LAB_0113bff0:
    pIVar7 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar9 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar15;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar15);
    }
    iVar14 = 1;
    puVar9 = (ulong *)Factory::NewTransitionArray(*(Factory **)this,1,1);
    lVar13 = **(long **)(this + 8);
    *(long *)(this + 0x10) = lVar13;
    uVar8 = *(long *)this + (ulong)*(uint *)(lVar13 + 0x23);
    *(ulong *)(this + 0x18) = uVar8;
    if (((uVar8 & 1) == 0) || ((int)uVar8 == 3)) {
LAB_0113c11c:
      *(int *)(this + 0x20) = iVar14;
LAB_0113c120:
      *(undefined4 *)(*puVar9 + 0xb) = 0;
    }
    else {
      if ((uVar8 & 3) != 3) {
        if ((uVar8 & 3) != 1) goto LAB_0113c8fc;
        uVar15 = uVar8 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) == 0x98) {
          iVar14 = 4;
        }
        else {
          iVar14 = (uint)(*(short *)(uVar15 + *(uint *)(uVar8 - 1)) != 100) << 1;
        }
        goto LAB_0113c11c;
      }
      uVar15 = uVar8 & 0xfffffffffffffffd;
      *(undefined4 *)(this + 0x20) = 3;
      if ((int)uVar15 == 0) goto LAB_0113c120;
      local_48 = *puVar9;
      TransitionArray::Set
                ((TransitionArray *)&local_48,0,
                 uVar8 & 0xffffffff00000000 |
                 (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0x17)) +
                                  ((long)(int)((*(uint *)(uVar15 + 0xb) >> 10 & 0x3ff) - 1) *
                                   0xc00000000 + 0x1000000000 >> 0x20) + -1),uVar8 | 2);
    }
    ReplaceTransitions(this,*puVar9);
    lVar13 = **(long **)(this + 8);
    *(long *)(this + 0x10) = lVar13;
    uVar8 = *(long *)this + (ulong)*(uint *)(lVar13 + 0x23);
    *(ulong *)(this + 0x18) = uVar8;
    if (((uVar8 & 1) != 0) && ((int)uVar8 != 3)) {
      if ((uVar8 & 3) == 1) {
        uVar15 = uVar8 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) == 0x98) {
          uVar12 = 4;
        }
        else {
          if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) == 100) {
            *(undefined4 *)(this + 0x20) = 0;
            goto joined_r0x0113c1ec;
          }
          uVar12 = 2;
        }
      }
      else {
        if ((uVar8 & 3) != 3) goto LAB_0113c8fc;
        uVar12 = 3;
      }
      *(undefined4 *)(this + 0x20) = uVar12;
      goto joined_r0x0113c1ec;
    }
    bVar3 = true;
    *(undefined4 *)(this + 0x20) = 1;
    if (param_4 != 2) goto LAB_0113c1f0;
    uVar5 = 0;
  }
  local_64 = 0xffffffff;
  local_48 = *(ulong *)(this + 0x18);
  if (*(int *)(local_48 + 3) < 4) {
    uVar19 = 0;
    if (!bVar3) goto LAB_0113c24c;
LAB_0113c2f8:
    if (3 < *(int *)(local_48 + 3)) {
      uVar15 = *param_2;
      iVar14 = *(int *)(local_48 + 0xb) >> 1;
      if (iVar14 != 0) {
        if (0x11 < *(int *)(local_48 + 0xb)) {
          uVar4 = BinarySearch<(v8::internal::SearchMode)0,v8::internal::TransitionArray>
                            (&local_48,uVar15,iVar14,&local_64);
          uVar8 = (ulong)uVar4;
          goto LAB_0113c264;
        }
        uVar4 = *(int *)(local_48 + 0xb) >> 1;
        if (1 < *(int *)(local_48 + 0xb)) {
          uVar8 = 0;
          iVar14 = 0xf;
          do {
            if (*(uint *)(uVar15 + 3) <
                *(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + (long)iVar14)
                          ) + 3)) {
              uVar4 = (uint)uVar8;
              break;
            }
            if (*(uint *)(local_48 + (long)iVar14) == (uint)uVar15) goto LAB_0113c264;
            uVar8 = uVar8 + 1;
            iVar14 = iVar14 + 8;
          } while (uVar4 != uVar8);
        }
        goto LAB_0113c370;
      }
    }
    local_64 = 0;
    uVar4 = local_64;
  }
  else {
    uVar19 = *(int *)(local_48 + 0xb) >> 1;
    if (bVar3) goto LAB_0113c2f8;
LAB_0113c24c:
    uVar8 = TransitionArray::Search
                      ((TransitionArray *)&local_48,uVar5 & 1,*param_2,uVar5 >> 3 & 7,&local_64);
LAB_0113c264:
    uVar4 = local_64;
    if ((int)uVar8 != -1) {
      uVar15 = *param_3;
      lVar13 = (long)((int)uVar8 * 8 + 0xc) + 7;
      uVar5 = (uint)uVar15 | 2;
      *(uint *)(local_48 + lVar13) = uVar5;
      goto joined_r0x0113c28c;
    }
  }
LAB_0113c370:
  local_64 = uVar4;
  iVar14 = uVar19 + 1;
  if (0x600 < iVar14) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","new_nof <= kMaxNumberOfTransitions");
  }
  if ((int)*(uint *)(local_48 + 3) < 6) {
    if ((int)uVar19 < 0) {
LAB_0113c444:
      *(int *)(local_48 + 0xb) = iVar14 * 2;
      if ((int)local_64 < (int)uVar19) {
        lVar16 = (long)(int)uVar19;
        iVar14 = uVar19 << 3;
        do {
          lVar13 = (long)(iVar14 + 7);
          uVar5 = *(uint *)(local_48 + lVar13);
          lVar17 = (long)(iVar14 + 0xf);
          *(uint *)(local_48 + lVar17) = uVar5;
          if ((uVar5 != 3) && ((uVar5 & 1) != 0)) {
            uVar15 = local_48 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffc0000;
            uVar8 = *(ulong *)(uVar15 + 8);
            lVar10 = local_48 + lVar17;
            uVar11 = local_48 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffffffd;
            if (((uint)uVar8 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(local_48,lVar10,uVar11);
              uVar8 = *(ulong *)(uVar15 | 8);
              lVar10 = local_48 + lVar17;
            }
            if (((uVar8 & 0x18) != 0) &&
               ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(local_48,lVar10,uVar11);
            }
          }
          uVar5 = *(uint *)(local_48 + (long)(iVar14 + 4) + 7);
          lVar16 = lVar16 + -1;
          lVar17 = (long)(iVar14 + 0xc) + 7;
          *(uint *)(local_48 + lVar17) = uVar5;
          if ((uVar5 != 3) && ((uVar5 & 1) != 0)) {
            uVar15 = local_48 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffc0000;
            uVar8 = *(ulong *)(uVar15 + 8);
            uVar11 = local_48 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffffffd;
            lVar10 = local_48 + lVar17;
            if (((uint)uVar8 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(local_48,lVar10,uVar11);
              uVar8 = *(ulong *)(uVar15 | 8);
              lVar10 = local_48 + lVar17;
            }
            if (((uVar8 & 0x18) != 0) &&
               ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(local_48,lVar10,uVar11);
            }
          }
          iVar14 = iVar14 + -8;
        } while ((int)local_64 < lVar16);
      }
      else {
        iVar14 = uVar19 * 8;
        lVar13 = (long)(iVar14 + 0xf);
      }
      uVar8 = *param_2;
      *(int *)(local_48 + lVar13) = (int)uVar8;
      if (((int)uVar8 != 3) && ((uVar8 & 1) != 0)) {
        uVar15 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        lVar16 = local_48 + lVar13;
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(local_48,lVar16,uVar8 & 0xfffffffffffffffd);
          uVar15 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
          lVar16 = local_48 + lVar13;
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
           ) {
          Heap_GenerationalBarrierSlow(local_48,lVar16,uVar8 & 0xfffffffffffffffd);
        }
      }
      uVar15 = *param_3;
      lVar13 = (long)(iVar14 + 0xc) + 7;
      uVar5 = (uint)uVar15 | 2;
      *(uint *)(local_48 + lVar13) = uVar5;
joined_r0x0113c28c:
      if ((uVar15 & 1) == 0) {
        return;
      }
      if (uVar5 == 3) {
        return;
      }
      uVar8 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
      lVar16 = local_48 + lVar13;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(local_48,lVar16,uVar15 & 0xfffffffffffffffd);
        uVar8 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
        lVar16 = local_48 + lVar13;
      }
      if ((uVar8 & 0x18) == 0) {
        return;
      }
      if ((*(byte *)((local_48 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        return;
      }
      Heap_GenerationalBarrierSlow(local_48,lVar16,uVar15 & 0xfffffffffffffffd);
      return;
    }
  }
  else {
    uVar4 = *(uint *)(local_48 + 3) >> 1;
    iVar2 = uVar4 - 2;
    iVar1 = uVar4 - 1;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if ((int)uVar19 < iVar1 >> 1) goto LAB_0113c444;
  }
  if (0x600 < (int)uVar19) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= max_slack");
  }
  uVar4 = 0x600 - uVar19;
  if ((int)(uVar19 >> 2) <= (int)(0x600 - uVar19)) {
    uVar4 = uVar19 >> 2;
  }
  if ((int)uVar19 < 4) {
    uVar4 = 1;
  }
  puVar9 = (ulong *)Factory::NewTransitionArray(*(Factory **)this,iVar14,uVar4);
  lVar13 = **(long **)(this + 8);
  *(long *)(this + 0x10) = lVar13;
  uVar8 = *(long *)this + (ulong)*(uint *)(lVar13 + 0x23);
  iVar14 = 1;
  *(ulong *)(this + 0x18) = uVar8;
  if (((uVar8 & 1) != 0) && ((int)uVar8 != 3)) {
    uVar15 = uVar8 & 3;
    iVar14 = (int)uVar15;
    if (uVar15 != 3) {
      if (uVar15 != 1) {
LAB_0113c8fc:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar15 = uVar8 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar15 + *(uint *)(uVar8 - 1)) == 0x98) {
        iVar14 = 4;
      }
      else {
        iVar14 = (uint)(*(short *)(uVar15 + *(uint *)(uVar8 - 1)) != 100) << 1;
      }
    }
  }
  *(int *)(this + 0x20) = iVar14;
  local_48 = uVar8;
  if (*(int *)(uVar8 + 3) < 4) {
    if (uVar19 != 0) {
LAB_0113c65c:
      if (*(int *)(uVar8 + 3) < 4) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(int *)(uVar8 + 0xb) >> 1;
      }
      local_64 = 0xffffffff;
      if (bVar3) {
        if (3 < *(int *)(uVar8 + 3)) {
          uVar11 = *param_2;
          iVar14 = *(int *)(uVar8 + 0xb) >> 1;
          if (iVar14 != 0) {
            if (0x11 < *(int *)(uVar8 + 0xb)) {
              uVar5 = BinarySearch<(v8::internal::SearchMode)0,v8::internal::TransitionArray>
                                (&local_48,uVar11,iVar14,&local_64);
              uVar15 = (ulong)uVar5;
              goto LAB_0113c724;
            }
            uVar5 = *(int *)(uVar8 + 0xb) >> 1;
            if (1 < *(int *)(uVar8 + 0xb)) {
              uVar15 = 0;
              iVar14 = 0xf;
              do {
                if (*(uint *)(uVar11 + 3) <
                    *(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + (long)iVar14))
                             + 3)) {
                  uVar5 = (uint)uVar15;
                  break;
                }
                if (*(uint *)(uVar8 + (long)iVar14) == (uint)uVar11) goto LAB_0113c724;
                uVar15 = uVar15 + 1;
                iVar14 = iVar14 + 8;
              } while (uVar5 != uVar15);
            }
            goto LAB_0113c73c;
          }
        }
        local_64 = 0;
        uVar5 = local_64;
LAB_0113c73c:
        local_64 = uVar5;
        uVar4 = uVar19 + 1;
      }
      else {
        uVar15 = TransitionArray::Search
                           ((TransitionArray *)&local_48,uVar5 & 1,*param_2,uVar5 >> 3 & 7,&local_64
                           );
LAB_0113c724:
        uVar4 = uVar19;
        uVar5 = local_64;
        local_64 = (uint)uVar15;
        if ((uint)uVar15 == 0xffffffff) goto LAB_0113c73c;
      }
      *(uint *)(*puVar9 + 0xb) = uVar4 << 1;
    }
  }
  else if (*(int *)(uVar8 + 0xb) >> 1 != uVar19) goto LAB_0113c65c;
  if (*(int *)(local_48 + 7) != 0) {
    uVar8 = *puVar9;
    uVar5 = *(uint *)(local_48 + 7);
    *(uint *)(uVar8 + 7) = uVar5;
    if ((uVar5 != 3) && ((uVar5 & 1) != 0)) {
      uVar11 = local_48 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffc0000;
      uVar15 = *(ulong *)(uVar11 + 8);
      uVar18 = local_48 & 0xffffffff00000000 | (ulong)uVar5 & 0xfffffffffffffffd;
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar18);
        uVar15 = *(ulong *)(uVar11 | 8);
      }
      if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar18);
      }
    }
  }
  uVar8 = (ulong)local_64;
  if (0 < (int)local_64) {
    uVar15 = 0;
    iVar14 = 0xc;
    do {
      local_70 = *puVar9;
      TransitionArray::Set
                ((TransitionArray *)&local_70,uVar15 & 0xffffffff,
                 local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + (long)(iVar14 + 3)),
                 local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + (long)iVar14 + 7));
      uVar8 = (ulong)(int)local_64;
      uVar15 = uVar15 + 1;
      iVar14 = iVar14 + 8;
    } while ((long)uVar15 < (long)uVar8);
  }
  local_70 = *puVar9;
  TransitionArray::Set((TransitionArray *)&local_70,uVar8,*param_2,*param_3 | 2);
  if ((int)local_64 < (int)uVar19) {
    iVar14 = local_64 * 8 + 0xc;
    uVar5 = local_64;
    do {
      local_70 = *puVar9;
      uVar5 = uVar5 + 1;
      TransitionArray::Set
                ((TransitionArray *)&local_70,uVar5,
                 local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + (long)(iVar14 + 3)),
                 local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + (long)iVar14 + 7));
      iVar14 = iVar14 + 8;
    } while (uVar19 != uVar5);
  }
  uVar8 = *puVar9;
LAB_0113c8a0:
  ReplaceTransitions(this,uVar8);
  return;
}

