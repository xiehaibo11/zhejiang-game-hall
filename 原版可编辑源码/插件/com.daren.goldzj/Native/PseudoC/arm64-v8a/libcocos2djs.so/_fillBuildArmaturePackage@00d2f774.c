
/* dragonBones::BaseFactory::_fillBuildArmaturePackage(dragonBones::BuildArmaturePackage&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined4 __thiscall
dragonBones::BaseFactory::_fillBuildArmaturePackage
          (BaseFactory *this,BuildArmaturePackage *param_1,basic_string *param_2,
          basic_string *param_3,basic_string *param_4,basic_string *param_5)

{
  basic_string *pbVar1;
  BaseFactory BVar2;
  long lVar3;
  bool bVar4;
  BaseFactory *pBVar5;
  long lVar6;
  BaseFactory *pBVar7;
  BaseFactory *pBVar8;
  BaseFactory *pBVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  void *__src;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  if (((byte)*param_2 & 1) == 0) {
    local_70 = *(char **)(param_2 + 0x10);
    uStack_78 = *(ulong *)(param_2 + 8);
    local_80 = *(ulong *)param_2;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_2 + 0x10);
    if (uVar12 < 0x17) {
      pcVar14 = (char *)((ulong)&local_80 | 1);
      local_80 = (ulong)(byte)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_00d2f828;
    }
    else {
      uVar15 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pcVar14 = operator_new(uVar15);
      local_80 = uVar15 | 1;
      uStack_78 = uVar12;
      local_70 = pcVar14;
LAB_00d2f828:
      memcpy(pcVar14,__src,uVar12);
    }
    pcVar14[uVar12] = '\0';
  }
  uVar12 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar12 = uStack_78;
  }
  if ((uVar12 != 0) &&
     (pBVar5 = (BaseFactory *)
               std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                           *)(this + 0x10),(basic_string *)&local_80), this + 0x18 != pBVar5)) {
    lVar13 = *(long *)(pBVar5 + 0x38);
    lVar6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                        *)(lVar13 + 0x90),param_3);
    if ((lVar13 + 0x98 != lVar6) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
LAB_00d2f9dc:
      if (param_1 != (BuildArmaturePackage *)&local_80) {
        uVar12 = local_80 >> 1 & 0x7f;
        pcVar14 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          uVar12 = uStack_78;
          pcVar14 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 param_1,pcVar14,uVar12);
      }
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (param_1 + 0x18) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5)
      {
        uVar12 = *(ulong *)(param_5 + 8);
        pbVar1 = *(basic_string **)(param_5 + 0x10);
        if (((byte)*param_5 & 1) == 0) {
          pbVar1 = param_5 + 1;
          uVar12 = (ulong)((byte)*param_5 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x18),(char *)pbVar1,uVar12);
      }
      *(long *)(param_1 + 0x30) = lVar13;
      *(long *)(param_1 + 0x38) = lVar6;
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar12 = (ulong)((byte)*param_4 >> 1);
      if (((byte)*param_4 & 1) != 0) {
        uVar12 = *(ulong *)(param_4 + 8);
      }
      if (uVar12 == 0) {
LAB_00d2fb28:
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar6 + 0x138);
      }
      else {
        lVar13 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
                             *)(lVar6 + 0x108),param_4);
        if (lVar6 + 0x110 == lVar13) {
          *(undefined8 *)(param_1 + 0x40) = 0;
          BVar2 = this[8];
joined_r0x00d2fa8c:
          if (BVar2 != (BaseFactory)0x0) {
            pBVar5 = this + 0x18;
            pBVar7 = *(BaseFactory **)(this + 0x10);
            if (*(BaseFactory **)(this + 0x10) != pBVar5) {
              do {
                while( true ) {
                  lVar11 = *(long *)(pBVar7 + 0x38);
                  lVar13 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                           ::
                           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                                       *)(lVar11 + 0x90),param_4);
                  if ((lVar11 + 0x98 != lVar13) && (*(long *)(lVar13 + 0x38) != 0)) {
                    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x138);
                    *(long *)(param_1 + 0x40) = lVar13;
                    goto joined_r0x00d2fb48;
                  }
                  pBVar8 = *(BaseFactory **)(pBVar7 + 8);
                  if (*(BaseFactory **)(pBVar7 + 8) == (BaseFactory *)0x0) break;
                  do {
                    pBVar7 = pBVar8;
                    pBVar8 = *(BaseFactory **)pBVar7;
                  } while (*(BaseFactory **)pBVar7 != (BaseFactory *)0x0);
LAB_00d2fb08:
                  if (pBVar7 == pBVar5) goto LAB_00d2fb20;
                }
                pBVar8 = pBVar7 + 0x10;
                pBVar9 = *(BaseFactory **)pBVar8;
                if (*(BaseFactory **)pBVar9 != pBVar7) {
                  do {
                    lVar13 = *(long *)pBVar8;
                    pBVar8 = (BaseFactory *)(lVar13 + 0x10);
                    pBVar7 = *(BaseFactory **)pBVar8;
                  } while (*(long *)pBVar7 != lVar13);
                  goto LAB_00d2fb08;
                }
                pBVar7 = pBVar9;
              } while (pBVar9 != pBVar5);
LAB_00d2fb20:
              lVar13 = *(long *)(param_1 + 0x40);
joined_r0x00d2fb48:
              if (lVar13 != 0) goto LAB_00d2fb30;
            }
          }
          goto LAB_00d2fb28;
        }
        lVar13 = *(long *)(lVar13 + 0x38);
        *(long *)(param_1 + 0x40) = lVar13;
        if (lVar13 == 0) {
          BVar2 = this[8];
          goto joined_r0x00d2fa8c;
        }
      }
LAB_00d2fb30:
      uVar10 = 1;
      goto joined_r0x00d2f96c;
    }
  }
  uVar12 = (ulong)((byte)local_80._0_1_ >> 1);
  if ((local_80 & 1) != 0) {
    uVar12 = uStack_78;
  }
  if ((uVar12 == 0) || (this[8] != (BaseFactory)0x0)) {
    pBVar5 = *(BaseFactory **)(this + 0x10);
    if (pBVar5 != this + 0x18) {
      while( true ) {
        lVar13 = *(long *)(pBVar5 + 0x38);
        uVar12 = (ulong)((byte)local_80._0_1_ >> 1);
        if (((byte)local_80._0_1_ & 1) != 0) {
          uVar12 = uStack_78;
        }
        if ((((uVar12 == 0) || (*(char *)(lVar13 + 0xd) != '\0')) &&
            (lVar6 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                                 *)(lVar13 + 0x90),param_3), lVar13 + 0x98 != lVar6)) &&
           (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
          if ((BaseFactory *)&local_80 != pBVar5 + 0x20) {
            uVar12 = *(ulong *)(pBVar5 + 0x28);
            pBVar7 = *(BaseFactory **)(pBVar5 + 0x30);
            if (((byte)pBVar5[0x20] & 1) == 0) {
              pBVar7 = pBVar5 + 0x21;
              uVar12 = (ulong)((byte)pBVar5[0x20] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,(char *)pBVar7,uVar12);
          }
          goto LAB_00d2f9dc;
        }
        pBVar7 = *(BaseFactory **)(pBVar5 + 8);
        if (*(BaseFactory **)(pBVar5 + 8) == (BaseFactory *)0x0) {
          pBVar7 = pBVar5 + 0x10;
          bVar4 = *(BaseFactory **)*(BaseFactory **)pBVar7 != pBVar5;
          pBVar5 = *(BaseFactory **)pBVar7;
          if (bVar4) {
            do {
              lVar6 = *(long *)pBVar7;
              pBVar7 = (BaseFactory *)(lVar6 + 0x10);
              pBVar5 = *(BaseFactory **)pBVar7;
            } while (*(long *)pBVar5 != lVar6);
          }
        }
        else {
          do {
            pBVar5 = pBVar7;
            pBVar7 = *(BaseFactory **)pBVar5;
          } while (*(BaseFactory **)pBVar5 != (BaseFactory *)0x0);
        }
        if (pBVar5 == this + 0x18) break;
      }
    }
  }
  uVar10 = 0;
joined_r0x00d2f96c:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

