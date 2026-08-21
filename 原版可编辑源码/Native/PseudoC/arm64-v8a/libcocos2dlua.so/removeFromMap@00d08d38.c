
/* cocos2d::Animate3D::removeFromMap() */

void __thiscall cocos2d::Animate3D::removeFromMap(Animate3D *this)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x38);
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar4 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (DAT_01787278 != 0) {
      uVar11 = CONCAT17(POPCOUNT((char)(DAT_01787278 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(DAT_01787278 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(DAT_01787278 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(DAT_01787278 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(DAT_01787278 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(DAT_01787278 >>
                                                                                    0x10)),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  DAT_01787278 >> 8)),POPCOUNT((char)DAT_01787278)))
                                                  )))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar6 < 2) {
        uVar7 = uVar5 & DAT_01787278 - 1;
      }
      else {
        uVar7 = uVar5;
        if (DAT_01787278 <= uVar5) {
          uVar7 = 0;
          if (DAT_01787278 != 0) {
            uVar7 = uVar5 / DAT_01787278;
          }
          uVar7 = uVar5 - uVar7 * DAT_01787278;
        }
      }
      plVar8 = *(long **)(s_fadeInAnimates + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar5) {
            if (plVar8[2] == uVar4) {
              if ((Animate3D *)plVar8[3] == this) {
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
                ::remove(local_50,&s_fadeInAnimates);
                pvVar3 = local_50[0];
                local_50[0] = (void *)0x0;
                if (pvVar3 != (void *)0x0) {
                  operator_delete(pvVar3);
                }
                uVar4 = *(ulong *)(this + 0x38);
                uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
                uVar5 = (uVar5 ^ uVar4 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
                uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
              }
              break;
            }
          }
          else {
            if (uVar6 < 2) {
              uVar9 = uVar9 & DAT_01787278 - 1;
            }
            else if (DAT_01787278 <= uVar9) {
              uVar1 = 0;
              if (DAT_01787278 != 0) {
                uVar1 = uVar9 / DAT_01787278;
              }
              uVar9 = uVar9 - uVar1 * DAT_01787278;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (DAT_017872a0 != 0) {
      uVar11 = CONCAT17(POPCOUNT((char)(DAT_017872a0 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(DAT_017872a0 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(DAT_017872a0 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(DAT_017872a0 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(DAT_017872a0 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(DAT_017872a0 >>
                                                                                    0x10)),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  DAT_017872a0 >> 8)),POPCOUNT((char)DAT_017872a0)))
                                                  )))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar6 < 2) {
        uVar7 = uVar5 & DAT_017872a0 - 1;
      }
      else {
        uVar7 = uVar5;
        if (DAT_017872a0 <= uVar5) {
          uVar7 = 0;
          if (DAT_017872a0 != 0) {
            uVar7 = uVar5 / DAT_017872a0;
          }
          uVar7 = uVar5 - uVar7 * DAT_017872a0;
        }
      }
      plVar8 = *(long **)(s_fadeOutAnimates + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar5) {
            if (plVar8[2] == uVar4) {
              if ((Animate3D *)plVar8[3] == this) {
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
                ::remove(local_50,&s_fadeOutAnimates);
                pvVar3 = local_50[0];
                local_50[0] = (void *)0x0;
                if (pvVar3 != (void *)0x0) {
                  operator_delete(pvVar3);
                }
                uVar4 = *(ulong *)(this + 0x38);
              }
              break;
            }
          }
          else {
            if (uVar6 < 2) {
              uVar9 = uVar9 & DAT_017872a0 - 1;
            }
            else if (DAT_017872a0 <= uVar9) {
              uVar1 = 0;
              if (DAT_017872a0 != 0) {
                uVar1 = uVar9 / DAT_017872a0;
              }
              uVar9 = uVar9 - uVar1 * DAT_017872a0;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (DAT_017872c8 != 0) {
      uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
      uVar11 = CONCAT17(POPCOUNT((char)(DAT_017872c8 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(DAT_017872c8 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(DAT_017872c8 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(DAT_017872c8 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(DAT_017872c8 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(DAT_017872c8 >>
                                                                                    0x10)),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  DAT_017872c8 >> 8)),POPCOUNT((char)DAT_017872c8)))
                                                  )))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar6 = (uVar5 ^ uVar4 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
      uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
      if (uVar5 < 2) {
        uVar7 = uVar6 & DAT_017872c8 - 1;
      }
      else {
        uVar7 = uVar6;
        if (DAT_017872c8 <= uVar6) {
          uVar7 = 0;
          if (DAT_017872c8 != 0) {
            uVar7 = uVar6 / DAT_017872c8;
          }
          uVar7 = uVar6 - uVar7 * DAT_017872c8;
        }
      }
      plVar8 = *(long **)(s_runningAnimates + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if (plVar8[2] == uVar4) {
              if ((Animate3D *)plVar8[3] == this) {
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocos2d::Animate3D*>>>
                ::remove(local_50,&s_runningAnimates);
                pvVar3 = local_50[0];
                local_50[0] = (void *)0x0;
                if (pvVar3 != (void *)0x0) {
                  operator_delete(pvVar3);
                }
              }
              break;
            }
          }
          else {
            if (uVar5 < 2) {
              uVar9 = uVar9 & DAT_017872c8 - 1;
            }
            else if (DAT_017872c8 <= uVar9) {
              uVar1 = 0;
              if (DAT_017872c8 != 0) {
                uVar1 = uVar9 / DAT_017872c8;
              }
              uVar9 = uVar9 - uVar1 * DAT_017872c8;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

