
/* dragonBones::BaseFactory::_getSlotDisplay(dragonBones::BuildArmaturePackage const*,
   dragonBones::DisplayData*, dragonBones::DisplayData*, dragonBones::Slot*) const */

undefined1  [16] __thiscall
dragonBones::BaseFactory::_getSlotDisplay
          (BaseFactory *this,BuildArmaturePackage *param_1,DisplayData *param_2,DisplayData *param_3
          ,Slot *param_4)

{
  BaseFactory *pBVar1;
  long *plVar2;
  int iVar3;
  BuildArmaturePackage BVar4;
  DisplayData DVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  BuildArmaturePackage *pBVar9;
  BaseFactory *pBVar10;
  DisplayData *pDVar11;
  uint uVar12;
  BaseFactory *pBVar13;
  long lVar14;
  long *plVar15;
  BaseFactory *pBVar16;
  undefined1 auVar17 [16];
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  if (param_1 == (BuildArmaturePackage *)0x0) {
    pBVar1 = this + 0x18;
    if (*(BaseFactory **)(this + 0x10) == pBVar1) {
      uVar12 = 0;
    }
    else {
      pBVar16 = *(BaseFactory **)(this + 0x10);
      do {
        while (*(long *)(pBVar16 + 0x38) !=
               *(long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x40) + 0x158) ||
               (BaseFactory *)&local_80 == pBVar16 + 0x20) {
          pBVar10 = *(BaseFactory **)(pBVar16 + 8);
          if (*(BaseFactory **)(pBVar16 + 8) == (BaseFactory *)0x0) goto LAB_00d305d4;
LAB_00d3059c:
          do {
            pBVar16 = pBVar10;
            pBVar10 = *(BaseFactory **)pBVar16;
          } while (*(BaseFactory **)pBVar16 != (BaseFactory *)0x0);
LAB_00d30600:
          if (pBVar16 == pBVar1) goto LAB_00d30618;
        }
        uVar7 = *(ulong *)(pBVar16 + 0x28);
        pBVar10 = *(BaseFactory **)(pBVar16 + 0x30);
        if (((byte)pBVar16[0x20] & 1) == 0) {
          pBVar10 = pBVar16 + 0x21;
          uVar7 = (ulong)((byte)pBVar16[0x20] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,(char *)pBVar10,uVar7);
        pBVar10 = *(BaseFactory **)(pBVar16 + 8);
        if (*(BaseFactory **)(pBVar16 + 8) != (BaseFactory *)0x0) goto LAB_00d3059c;
LAB_00d305d4:
        pBVar10 = pBVar16 + 0x10;
        pBVar13 = *(BaseFactory **)pBVar10;
        if (*(BaseFactory **)pBVar13 != pBVar16) {
          do {
            lVar14 = *(long *)pBVar10;
            pBVar10 = (BaseFactory *)(lVar14 + 0x10);
            pBVar16 = *(BaseFactory **)pBVar10;
          } while (*(long *)pBVar16 != lVar14);
          goto LAB_00d30600;
        }
        pBVar16 = pBVar13;
      } while (pBVar13 != pBVar1);
LAB_00d30618:
      uVar12 = (uint)(byte)local_80._0_1_;
    }
    uVar7 = (ulong)(uVar12 >> 1);
    if ((uVar12 & 1) != 0) {
      uVar7 = local_78;
    }
    if ((uVar7 == 0) &&
       (lVar14 = *(long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x40) + 0x158),
       &local_80 != (ulong *)(lVar14 + 0x30))) {
      pBVar9 = *(BuildArmaturePackage **)(lVar14 + 0x40);
      uVar7 = *(ulong *)(lVar14 + 0x38);
      if ((*(byte *)(lVar14 + 0x30) & 1) == 0) {
        pBVar9 = (BuildArmaturePackage *)(lVar14 + 0x31);
        uVar7 = (ulong)(*(byte *)(lVar14 + 0x30) >> 1);
      }
      goto LAB_00d30554;
    }
  }
  else if ((BuildArmaturePackage *)&local_80 != param_1) {
    uVar7 = *(ulong *)(param_1 + 8);
    pBVar9 = *(BuildArmaturePackage **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pBVar9 = param_1 + 1;
      uVar7 = (ulong)((byte)*param_1 >> 1);
    }
LAB_00d30554:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_80,(char *)pBVar9,uVar7);
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 2) {
    if (param_1 != (BuildArmaturePackage *)0x0) {
      BVar4 = param_1[0x18];
      if (((byte)BVar4 & 1) == 0) {
        if ((byte)BVar4 >> 1 != 0) {
LAB_00d3077c:
          uVar8 = (**(code **)(*(long *)this + 0x18))(this,param_1 + 0x18,param_2 + 0x30);
          *(undefined8 *)(param_2 + 0x80) = uVar8;
        }
      }
      else if (*(long *)(param_1 + 0x20) != 0) goto LAB_00d3077c;
    }
    if (*(long *)(param_2 + 0x80) == 0) {
      uVar8 = (**(code **)(*(long *)this + 0x18))(this,&local_80,param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x80) = uVar8;
    }
    uVar7 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar7 & 1) != 0) {
      lVar14 = *(long *)(param_4 + 0xe8);
      uVar8 = 2;
      goto joined_r0x00d308ac;
    }
LAB_00d30824:
    lVar14 = *(long *)(param_4 + 0xe0);
  }
  else {
    if (iVar3 == 1) {
      lVar14 = (**(code **)(*(long *)this + 0x38))(this,param_1,param_4,param_2);
      if (lVar14 != 0) {
        DVar5 = param_2[0x68];
        *(DisplayData *)(lVar14 + 0xd) = DVar5;
        if (DVar5 == (DisplayData)0x0) {
          pDVar11 = param_2 + 0x70;
          if (*(long *)pDVar11 == *(long *)(param_2 + 0x78)) {
            pDVar11 = (DisplayData *)(*(long *)(lVar14 + 0x20) + 0x90);
          }
          plVar15 = *(long **)pDVar11;
          plVar2 = *(long **)(pDVar11 + 8);
          if (plVar15 == plVar2) {
            local_98 = 0;
            uStack_90 = 0;
            local_88 = (void *)0x0;
            Animation::play(*(Animation **)(lVar14 + 0xa8),(basic_string *)&local_98,-1);
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
          else {
            do {
              local_98 = 0;
              uStack_90 = 0;
              local_88 = (void *)0x0;
              Animation::fadeIn((Animation *)0xbf800000,*(undefined8 *)(lVar14 + 0xa8),
                                *plVar15 + 0x18,0xffffffff,0,&local_98,3);
              if ((local_98 & 1) != 0) {
                operator_delete(local_88);
              }
              plVar15 = plVar15 + 1;
            } while (plVar2 != plVar15);
          }
        }
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar14 + 0x20);
      }
      uVar8 = 1;
      goto joined_r0x00d308ac;
    }
    if (iVar3 == 0) {
      if (param_1 != (BuildArmaturePackage *)0x0) {
        BVar4 = param_1[0x18];
        if (((byte)BVar4 & 1) == 0) {
          if ((byte)BVar4 >> 1 != 0) {
LAB_00d307e8:
            uVar8 = (**(code **)(*(long *)this + 0x18))(this,param_1 + 0x18,param_2 + 0x30);
            *(undefined8 *)(param_2 + 0x70) = uVar8;
          }
        }
        else if (*(long *)(param_1 + 0x20) != 0) goto LAB_00d307e8;
      }
      if (*(long *)(param_2 + 0x70) == 0) {
        uVar8 = (**(code **)(*(long *)this + 0x18))(this,&local_80,param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x70) = uVar8;
      }
      goto LAB_00d30824;
    }
    lVar14 = 0;
  }
  uVar8 = 0;
joined_r0x00d308ac:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar17._8_8_ = uVar8;
  auVar17._0_8_ = lVar14;
  return auVar17;
}

