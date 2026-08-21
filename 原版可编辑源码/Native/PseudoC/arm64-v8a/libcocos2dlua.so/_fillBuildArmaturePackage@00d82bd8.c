
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
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  void *__src;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
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
    uVar11 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_2 + 0x10);
    if (uVar11 < 0x17) {
      pcVar13 = (char *)((ulong)&local_80 | 1);
      local_80 = (ulong)(byte)((int)uVar11 << 1);
      if (uVar11 != 0) goto LAB_00d82c8c;
    }
    else {
      uVar14 = uVar11 + 0x10 & 0xfffffffffffffff0;
      pcVar13 = operator_new(uVar14);
      local_80 = uVar14 | 1;
      uStack_78 = uVar11;
      local_70 = pcVar13;
LAB_00d82c8c:
      memcpy(pcVar13,__src,uVar11);
    }
    pcVar13[uVar11] = '\0';
  }
  uVar11 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar11 = uStack_78;
  }
  if ((uVar11 != 0) &&
     (pBVar5 = (BaseFactory *)
               std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                           *)(this + 0x10),(basic_string *)&local_80), this + 0x18 != pBVar5)) {
    lVar12 = *(long *)(pBVar5 + 0x38);
    lVar6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                        *)(lVar12 + 0x90),param_3);
    if ((lVar12 + 0x98 != lVar6) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
LAB_00d82e3c:
      if (param_1 != (BuildArmaturePackage *)&local_80) {
        uVar11 = local_80 >> 1 & 0x7f;
        pcVar13 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          uVar11 = uStack_78;
          pcVar13 = local_70;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 param_1,pcVar13,uVar11);
      }
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (param_1 + 0x18) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5)
      {
        uVar11 = *(ulong *)(param_5 + 8);
        pbVar1 = *(basic_string **)(param_5 + 0x10);
        if (((byte)*param_5 & 1) == 0) {
          pbVar1 = param_5 + 1;
          uVar11 = (ulong)((byte)*param_5 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x18),(char *)pbVar1,uVar11);
      }
      *(long *)(param_1 + 0x30) = lVar12;
      *(long *)(param_1 + 0x38) = lVar6;
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar11 = (ulong)((byte)*param_4 >> 1);
      if (((byte)*param_4 & 1) != 0) {
        uVar11 = *(ulong *)(param_4 + 8);
      }
      if (uVar11 == 0) {
LAB_00d82f84:
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar6 + 0x138);
      }
      else {
        lVar12 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
                             *)(lVar6 + 0x108),param_4);
        if (lVar6 + 0x110 == lVar12) {
          *(undefined8 *)(param_1 + 0x40) = 0;
          BVar2 = this[8];
joined_r0x00d82eec:
          if (BVar2 != (BaseFactory)0x0) {
            pBVar5 = *(BaseFactory **)(this + 0x10);
            if (*(BaseFactory **)(this + 0x10) != this + 0x18) {
              do {
                lVar10 = *(long *)(pBVar5 + 0x38);
                lVar12 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                         ::
                         find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                                     *)(lVar10 + 0x90),param_4);
                if ((lVar10 + 0x98 != lVar12) && (*(long *)(lVar12 + 0x38) != 0)) {
                  lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x138);
                  *(long *)(param_1 + 0x40) = lVar12;
                  goto joined_r0x00d82fa4;
                }
                pBVar7 = *(BaseFactory **)(pBVar5 + 8);
                if (*(BaseFactory **)(pBVar5 + 8) == (BaseFactory *)0x0) {
                  pBVar7 = pBVar5 + 0x10;
                  pBVar8 = *(BaseFactory **)pBVar7;
                  if (*(BaseFactory **)pBVar8 != pBVar5) {
                    do {
                      lVar12 = *(long *)pBVar7;
                      pBVar7 = (BaseFactory *)(lVar12 + 0x10);
                      pBVar8 = *(BaseFactory **)pBVar7;
                    } while (*(long *)pBVar8 != lVar12);
                  }
                }
                else {
                  do {
                    pBVar8 = pBVar7;
                    pBVar7 = *(BaseFactory **)pBVar8;
                  } while (*(BaseFactory **)pBVar8 != (BaseFactory *)0x0);
                }
                pBVar5 = pBVar8;
              } while (pBVar8 != this + 0x18);
              lVar12 = *(long *)(param_1 + 0x40);
joined_r0x00d82fa4:
              if (lVar12 != 0) goto LAB_00d82f8c;
            }
          }
          goto LAB_00d82f84;
        }
        lVar12 = *(long *)(lVar12 + 0x38);
        *(long *)(param_1 + 0x40) = lVar12;
        if (lVar12 == 0) {
          BVar2 = this[8];
          goto joined_r0x00d82eec;
        }
      }
LAB_00d82f8c:
      uVar9 = 1;
      goto joined_r0x00d82dcc;
    }
  }
  uVar11 = (ulong)((byte)local_80._0_1_ >> 1);
  if ((local_80 & 1) != 0) {
    uVar11 = uStack_78;
  }
                    /* try { // try from 00d82d10 to 00e82fcb has its CatchHandler @ 00d82d10
                       catch() { ... } // from try @ 00d82d10 with catch @ 00d82d10
                       catch() { ... } // from try @ 00d8344c with catch @ 00d82d10 */
  if ((uVar11 == 0) || (this[8] != (BaseFactory)0x0)) {
    pBVar5 = *(BaseFactory **)(this + 0x10);
    if (pBVar5 != this + 0x18) {
      while( true ) {
        lVar12 = *(long *)(pBVar5 + 0x38);
        uVar11 = (ulong)((byte)local_80._0_1_ >> 1);
        if (((byte)local_80._0_1_ & 1) != 0) {
          uVar11 = uStack_78;
        }
        if ((((uVar11 == 0) || (*(char *)(lVar12 + 0xd) != '\0')) &&
            (lVar6 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureData*>>>
                                 *)(lVar12 + 0x90),param_3), lVar12 + 0x98 != lVar6)) &&
           (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
          if ((BaseFactory *)&local_80 != pBVar5 + 0x20) {
            uVar11 = *(ulong *)(pBVar5 + 0x28);
            pBVar7 = *(BaseFactory **)(pBVar5 + 0x30);
            if (((byte)pBVar5[0x20] & 1) == 0) {
              pBVar7 = pBVar5 + 0x21;
              uVar11 = (ulong)((byte)pBVar5[0x20] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_80,(char *)pBVar7,uVar11);
          }
          goto LAB_00d82e3c;
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
  uVar9 = 0;
joined_r0x00d82dcc:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

