
/* cocos2d::Animate3D::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Animate3D::startWithTarget(Animate3D *this,Node *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  Node **ppNVar9;
  int iVar10;
  Skeleton3D *this_00;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  void *pvVar22;
  Node *pNVar23;
  Animate3D *pAVar24;
  basic_string *pbVar25;
  Animate3D *pAVar26;
  long *plVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  Node *local_b0;
  Node *local_a8;
  Node *local_a0 [2];
  Node **local_90 [3];
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  pNVar23 = *(Node **)(this + 0x38);
  local_a0[0] = param_1;
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  if (pNVar23 != param_1) {
    if (*(long *)(this + 0xb8) != 0) {
      puVar8 = *(void **)(this + 0xb0);
      while (puVar8 != (void *)0x0) {
        pvVar22 = (void *)*puVar8;
        operator_delete(puVar8);
        puVar8 = pvVar22;
      }
      lVar13 = *(long *)(this + 0xa8);
      *(undefined8 *)(this + 0xb0) = 0;
      if (lVar13 != 0) {
        lVar15 = 0;
        do {
          *(undefined8 *)(*(Bone3D **)(this + 0xa0) + lVar15 * 8) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar13 != lVar15);
      }
      *(undefined8 *)(this + 0xb8) = 0;
    }
    pAVar24 = this + 200;
    if (*(long *)(this + 0xe0) != 0) {
      puVar8 = *(void **)(this + 0xd8);
      while (puVar8 != (void *)0x0) {
        pvVar22 = (void *)*puVar8;
        operator_delete(puVar8);
        puVar8 = pvVar22;
      }
      lVar13 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd8) = 0;
      if (lVar13 != 0) {
        lVar15 = 0;
        do {
          *(undefined8 *)(*(Node **)pAVar24 + lVar15 * 8) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar13 != lVar15);
      }
      *(undefined8 *)(this + 0xe0) = 0;
    }
    pNVar23 = local_a0[0];
    if (local_a0[0] == (Node *)0x0) {
      lVar13 = *(long *)(this + 0x60);
    }
    else {
      lVar15 = __dynamic_cast(local_a0[0],&Node::typeinfo,&Sprite3D::typeinfo,0);
      pAVar26 = this + 0x60;
      lVar13 = *(long *)pAVar26;
      if (lVar15 != 0) {
        if ((lVar13 != 0) && (plVar27 = *(long **)(lVar13 + 0x38), plVar27 != (long *)0x0)) {
          this_00 = *(Skeleton3D **)(lVar15 + 0x300);
          do {
            if (this_00 != (Skeleton3D *)0x0) {
              pbVar25 = (basic_string *)(plVar27 + 2);
              local_a8 = (Node *)Skeleton3D::getBoneByName(this_00,pbVar25);
              if (local_a8 == (Node *)0x0) {
                local_b0 = (Node *)0x0;
                pbVar11 = (byte *)(**(code **)(*(long *)local_a0[0] + 0x2c8))();
                bVar4 = *pbVar11;
                bVar5 = *(byte *)(plVar27 + 2);
                sVar16 = (size_t)(bVar4 >> 1);
                sVar1 = sVar16;
                if ((bVar4 & 1) != 0) {
                  sVar1 = *(size_t *)(pbVar11 + 8);
                }
                sVar2 = (ulong)(bVar5 >> 1);
                if ((bVar5 & 1) != 0) {
                  sVar2 = plVar27[3];
                }
                if (sVar1 == sVar2) {
                  pbVar14 = *(byte **)(pbVar11 + 0x10);
                  pbVar19 = (byte *)plVar27[4];
                  if ((bVar4 & 1) == 0) {
                    pbVar14 = pbVar11 + 1;
                  }
                  if ((bVar5 & 1) == 0) {
                    pbVar19 = (byte *)((long)plVar27 + 0x11);
                  }
                  if ((bVar4 & 1) == 0) {
                    while (pNVar23 = local_a0[0], sVar1 != 0) {
                      pbVar11 = pbVar11 + 1;
                      if (*pbVar11 != *pbVar19) goto LAB_00d08738;
                      pbVar19 = pbVar19 + 1;
                      sVar16 = sVar16 - 1;
                      sVar1 = sVar16;
                    }
                  }
                  else {
                    pNVar23 = local_a0[0];
                    if ((sVar1 != 0) &&
                       (iVar10 = memcmp(pbVar14,pbVar19,sVar1), pNVar23 = local_a0[0], iVar10 != 0))
                    goto LAB_00d08738;
                  }
                }
                else {
LAB_00d08738:
                  pNVar23 = (Node *)findChildByNameRecursively(local_a0[0],pbVar25);
                }
                local_b0 = pNVar23;
                if ((local_b0 == (Node *)0x0) ||
                   (lVar12 = Animation3D::getBoneCurveByName(*(Animation3D **)pAVar26,pbVar25),
                   lVar12 == 0)) goto LAB_00d08684;
                local_90[0] = &local_b0;
                lVar13 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>>>
                         ::
                         __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                                   ((Node **)pAVar24,(piecewise_construct_t *)&local_b0,
                                    (tuple *)&DAT_0141889a,(tuple *)local_90);
              }
              else {
                lVar12 = Animation3D::getBoneCurveByName(*(Animation3D **)pAVar26,pbVar25);
                local_90[0] = &local_a8;
                lVar13 = std::__ndk1::
                         __hash_table<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<cocos2d::Bone3D*,std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<cocos2d::Bone3D*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Bone3D*,std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<cocos2d::Bone3D*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Bone3D*,cocos2d::Animation3D::Curve*>>>
                         ::
                         __emplace_unique_key_args<cocos2d::Bone3D*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Bone3D*const&>,std::__ndk1::tuple<>>
                                   ((Bone3D **)(this + 0xa0),(piecewise_construct_t *)&local_a8,
                                    (tuple *)&DAT_0141889a,(tuple *)local_90);
              }
              *(long *)(lVar13 + 0x18) = lVar12;
            }
LAB_00d08684:
            plVar27 = (long *)*plVar27;
            if (plVar27 == (long *)0x0) break;
            this_00 = *(Skeleton3D **)(lVar15 + 0x300);
          } while( true );
        }
        goto LAB_00d088e4;
      }
    }
    plVar27 = *(long **)(lVar13 + 0x38);
    if (plVar27 != (long *)0x0) {
      do {
        local_a8 = (Node *)0x0;
        pbVar11 = (byte *)(**(code **)(*(long *)pNVar23 + 0x2c8))(pNVar23);
        pbVar25 = (basic_string *)(plVar27 + 2);
        bVar3 = *pbVar25;
        bVar4 = *pbVar11;
        sVar16 = (size_t)(bVar4 >> 1);
        sVar1 = sVar16;
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar11 + 8);
        }
        sVar2 = (ulong)((byte)bVar3 >> 1);
        if (((byte)bVar3 & 1) != 0) {
          sVar2 = plVar27[3];
        }
        if (sVar1 == sVar2) {
          pbVar14 = *(byte **)(pbVar11 + 0x10);
          pbVar19 = (byte *)plVar27[4];
          if ((bVar4 & 1) == 0) {
            pbVar14 = pbVar11 + 1;
          }
          if (((byte)bVar3 & 1) == 0) {
            pbVar19 = (byte *)((long)plVar27 + 0x11);
          }
          if ((bVar4 & 1) == 0) {
            while (pNVar23 = local_a0[0], sVar1 != 0) {
              pbVar11 = pbVar11 + 1;
              if (*pbVar11 != *pbVar19) goto LAB_00d08860;
              pbVar19 = pbVar19 + 1;
              sVar16 = sVar16 - 1;
              sVar1 = sVar16;
            }
          }
          else {
            pNVar23 = local_a0[0];
            if ((sVar1 != 0) &&
               (iVar10 = memcmp(pbVar14,pbVar19,sVar1), pNVar23 = local_a0[0], iVar10 != 0))
            goto LAB_00d08860;
          }
        }
        else {
LAB_00d08860:
          pNVar23 = (Node *)findChildByNameRecursively(local_a0[0],pbVar25);
        }
        local_a8 = pNVar23;
        if ((local_a8 != (Node *)0x0) &&
           (lVar13 = Animation3D::getBoneCurveByName(*(Animation3D **)(this + 0x60),pbVar25),
           lVar13 != 0)) {
          local_90[0] = &local_a8;
          lVar15 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animation3D::Curve*>>>
                   ::
                   __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                             ((Node **)pAVar24,(piecewise_construct_t *)&local_a8,
                              (tuple *)&DAT_0141889a,(tuple *)local_90);
          *(long *)(lVar15 + 0x18) = lVar13;
        }
        plVar27 = (long *)*plVar27;
        pNVar23 = local_a0[0];
      } while (plVar27 != (long *)0x0);
    }
  }
LAB_00d088e4:
  uVar17 = ((ulong)(uint)((int)local_a0[0] << 3) + 8 ^ (ulong)local_a0[0] >> 0x20) *
           -0x622015f714c7d297;
  uVar17 = (uVar17 ^ (ulong)local_a0[0] >> 0x20 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
  uVar17 = (uVar17 ^ uVar17 >> 0x2f) * -0x622015f714c7d297;
  if (DAT_017872c8 != 0) {
    uVar29 = CONCAT17(POPCOUNT((char)(DAT_017872c8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_017872c8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_017872c8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_017872c8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_017872c8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_017872c8 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_017872c8 >> 8)),POPCOUNT((char)DAT_017872c8)))
                                                  )))));
    uVar28 = NEON_uaddlv(uVar29,1);
    uVar18 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
    if (uVar18 < 2) {
      uVar20 = uVar17 & DAT_017872c8 - 1;
    }
    else {
      uVar20 = uVar17;
      if (DAT_017872c8 <= uVar17) {
        uVar20 = 0;
        if (DAT_017872c8 != 0) {
          uVar20 = uVar17 / DAT_017872c8;
        }
        uVar20 = uVar17 - uVar20 * DAT_017872c8;
      }
    }
    plVar27 = *(long **)(s_runningAnimates + uVar20 * 8);
    if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
      do {
        uVar21 = plVar27[1];
        if (uVar21 == uVar17) {
          if ((Node *)plVar27[2] == local_a0[0]) {
            pAVar24 = (Animate3D *)plVar27[3];
            if (pAVar24 == this) goto LAB_00d08b90;
            if (_transTime < 0.001) goto LAB_00d08b54;
            local_90[0] = local_a0;
            lVar13 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
                     ::
                     __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                               ((Node **)&s_fadeOutAnimates,(piecewise_construct_t *)local_a0,
                                (tuple *)&DAT_0141889a,(tuple *)local_90);
            *(Animate3D **)(lVar13 + 0x18) = pAVar24;
            *(undefined4 *)(pAVar24 + 0x58) = 1;
            *(undefined4 *)(pAVar24 + 0x6c) = 0x3f800000;
            *(undefined8 *)(pAVar24 + 0x7c) = 0;
            FUN_00d08bc8(&s_runningAnimates,local_a0);
            local_90[0] = local_a0;
            lVar13 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
                     ::
                     __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                               ((Node **)&s_fadeInAnimates,(piecewise_construct_t *)local_a0,
                                (tuple *)&DAT_0141889a,(tuple *)local_90);
            *(Animate3D **)(lVar13 + 0x18) = this;
            *(undefined4 *)(this + 0x58) = 0;
            *(undefined4 *)(this + 0x6c) = 0;
            *(undefined8 *)(this + 0x7c) = 0;
            goto LAB_00d08b90;
          }
        }
        else {
          if (uVar18 < 2) {
            uVar21 = uVar21 & DAT_017872c8 - 1;
          }
          else if (DAT_017872c8 <= uVar21) {
            uVar6 = 0;
            if (DAT_017872c8 != 0) {
              uVar6 = uVar21 / DAT_017872c8;
            }
            uVar21 = uVar21 - uVar6 * DAT_017872c8;
          }
          if (uVar21 != uVar20) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
  }
  if (DAT_01787278 != 0) {
    uVar29 = CONCAT17(POPCOUNT((char)(DAT_01787278 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(DAT_01787278 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(DAT_01787278 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(DAT_01787278 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(DAT_01787278 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(DAT_01787278 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)(
                                                  DAT_01787278 >> 8)),POPCOUNT((char)DAT_01787278)))
                                                  )))));
    uVar28 = NEON_uaddlv(uVar29,1);
    uVar18 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
    if (uVar18 < 2) {
      uVar20 = DAT_01787278 - 1 & uVar17;
    }
    else {
      uVar20 = uVar17;
      if (DAT_01787278 <= uVar17) {
        uVar20 = 0;
        if (DAT_01787278 != 0) {
          uVar20 = uVar17 / DAT_01787278;
        }
        uVar20 = uVar17 - uVar20 * DAT_01787278;
      }
    }
    plVar27 = *(long **)(s_fadeInAnimates + uVar20 * 8);
    if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
      do {
        uVar21 = plVar27[1];
        if (uVar21 == uVar17) {
          if ((Node *)plVar27[2] == local_a0[0]) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
            ::remove(local_90,&s_fadeInAnimates);
            ppNVar9 = local_90[0];
            local_90[0] = (Node **)0x0;
            if (ppNVar9 != (Node **)0x0) {
              operator_delete(ppNVar9);
            }
            break;
          }
        }
        else {
          if (uVar18 < 2) {
            uVar21 = uVar21 & DAT_01787278 - 1;
          }
          else if (DAT_01787278 <= uVar21) {
            uVar6 = 0;
            if (DAT_01787278 != 0) {
              uVar6 = uVar21 / DAT_01787278;
            }
            uVar21 = uVar21 - uVar6 * DAT_01787278;
          }
          if (uVar21 != uVar20) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
  }
LAB_00d08b54:
  local_90[0] = local_a0;
  lVar13 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
           ::
           __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*const&>,std::__ndk1::tuple<>>
                     ((Node **)&s_runningAnimates,(piecewise_construct_t *)local_a0,
                      (tuple *)&DAT_0141889a,(tuple *)local_90);
  *(Animate3D **)(lVar13 + 0x18) = this;
  *(undefined4 *)(this + 0x58) = 2;
  *(undefined4 *)(this + 0x6c) = 0x3f800000;
LAB_00d08b90:
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

