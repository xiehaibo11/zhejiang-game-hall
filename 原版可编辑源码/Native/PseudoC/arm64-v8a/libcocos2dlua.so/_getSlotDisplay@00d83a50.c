
/* dragonBones::BaseFactory::_getSlotDisplay(dragonBones::BuildArmaturePackage const*,
   dragonBones::DisplayData*, dragonBones::DisplayData*, dragonBones::Slot*) const */

undefined1  [16] __thiscall
dragonBones::BaseFactory::_getSlotDisplay
          (BaseFactory *this,BuildArmaturePackage *param_1,DisplayData *param_2,DisplayData *param_3
          ,Slot *param_4)

{
  long *plVar1;
  int iVar2;
  DisplayData DVar3;
  long lVar4;
  ulong uVar5;
  BuildArmaturePackage *pBVar6;
  BaseFactory *pBVar7;
  DisplayData *pDVar8;
  uint uVar9;
  BaseFactory *pBVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  BaseFactory *pBVar14;
  undefined1 auVar15 [16];
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (param_1 == (BuildArmaturePackage *)0x0) {
    if (*(BaseFactory **)(this + 0x10) == this + 0x18) {
      uVar9 = 0;
    }
    else {
      pBVar14 = *(BaseFactory **)(this + 0x10);
      do {
        if (*(long *)(pBVar14 + 0x38) ==
            *(long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x40) + 0x158) &&
            (BaseFactory *)&local_80 != pBVar14 + 0x20) {
          uVar5 = *(ulong *)(pBVar14 + 0x28);
          pBVar7 = *(BaseFactory **)(pBVar14 + 0x30);
          if (((byte)pBVar14[0x20] & 1) == 0) {
            pBVar7 = pBVar14 + 0x21;
            uVar5 = (ulong)((byte)pBVar14[0x20] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,(char *)pBVar7,uVar5);
          pBVar7 = *(BaseFactory **)(pBVar14 + 8);
          if (*(BaseFactory **)(pBVar14 + 8) != (BaseFactory *)0x0) goto LAB_00d83b14;
LAB_00d83b4c:
          pBVar7 = pBVar14 + 0x10;
          pBVar10 = *(BaseFactory **)pBVar7;
          if (*(BaseFactory **)pBVar10 != pBVar14) {
            do {
              lVar12 = *(long *)pBVar7;
              pBVar7 = (BaseFactory *)(lVar12 + 0x10);
              pBVar10 = *(BaseFactory **)pBVar7;
            } while (*(long *)pBVar10 != lVar12);
          }
        }
        else {
          pBVar7 = *(BaseFactory **)(pBVar14 + 8);
          if (*(BaseFactory **)(pBVar14 + 8) == (BaseFactory *)0x0) goto LAB_00d83b4c;
LAB_00d83b14:
          do {
            pBVar10 = pBVar7;
            pBVar7 = *(BaseFactory **)pBVar10;
          } while (*(BaseFactory **)pBVar10 != (BaseFactory *)0x0);
        }
        pBVar14 = pBVar10;
      } while (pBVar10 != this + 0x18);
      uVar9 = (uint)(byte)local_80._0_1_;
    }
    uVar5 = (ulong)(uVar9 >> 1);
    if ((uVar9 & 1) != 0) {
      uVar5 = local_78;
    }
    if ((uVar5 == 0) &&
       (lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x60) + 0x40) + 0x158),
       &local_80 != (ulong *)(lVar12 + 0x30))) {
      pBVar6 = *(BuildArmaturePackage **)(lVar12 + 0x40);
      uVar5 = *(ulong *)(lVar12 + 0x38);
      if ((*(byte *)(lVar12 + 0x30) & 1) == 0) {
        pBVar6 = (BuildArmaturePackage *)(lVar12 + 0x31);
        uVar5 = (ulong)(*(byte *)(lVar12 + 0x30) >> 1);
      }
      goto LAB_00d83abc;
    }
  }
  else if ((BuildArmaturePackage *)&local_80 != param_1) {
                    /* try { // try from 00d83aa8 to 00e83abf has its CatchHandler @ 00d83c88 */
    uVar5 = *(ulong *)(param_1 + 8);
    pBVar6 = *(BuildArmaturePackage **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pBVar6 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
LAB_00d83abc:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_80,(char *)pBVar6,uVar5);
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d83aa8 with catch @ 00d83c88
                        */
    if (*(long *)(param_2 + 0x80) == 0) {
      lVar12 = *(long *)this;
      pBVar6 = (BuildArmaturePackage *)&local_80;
LAB_00d83d1c:
      uVar11 = (**(code **)(lVar12 + 0x18))(this,pBVar6,param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x80) = uVar11;
    }
    else if (param_1 != (BuildArmaturePackage *)0x0) {
      pBVar6 = param_1 + 0x18;
      if (((byte)*pBVar6 & 1) == 0) {
        if ((byte)*pBVar6 >> 1 != 0) {
LAB_00d83d14:
          lVar12 = *(long *)this;
          goto LAB_00d83d1c;
        }
      }
      else if (*(long *)(param_1 + 0x20) != 0) goto LAB_00d83d14;
    }
    uVar5 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar5 & 1) != 0) {
      lVar12 = *(long *)(param_4 + 0xe8);
      uVar11 = 2;
                    /* try { // try from 00d83d48 to 00e83da7 has its CatchHandler @ 00d83d48
                       catch() { ... } // from try @ 00d83d48 with catch @ 00d83d48
                       catch() { ... } // from try @ 00d84764 with catch @ 00d83d48
                       catch() { ... } // from try @ 00d84ea0 with catch @ 00d83d48 */
      goto joined_r0x00d83dfc;
    }
LAB_00d83d74:
    lVar12 = *(long *)(param_4 + 0xe0);
  }
  else {
    if (iVar2 == 1) {
      lVar12 = (**(code **)(*(long *)this + 0x38))(this,param_1,param_4,param_2);
      if (lVar12 != 0) {
        DVar3 = param_2[0x68];
        *(DisplayData *)(lVar12 + 0xd) = DVar3;
        if (DVar3 == (DisplayData)0x0) {
          pDVar8 = param_2 + 0x70;
          if (*(long *)pDVar8 == *(long *)(param_2 + 0x78)) {
            pDVar8 = (DisplayData *)(*(long *)(lVar12 + 0x20) + 0x90);
          }
          plVar13 = *(long **)pDVar8;
          plVar1 = *(long **)(pDVar8 + 8);
          if (plVar13 == plVar1) {
                    /* try { // try from 00d83dc8 to 00e83dcf has its CatchHandler @ 00d84ec4 */
                    /* try { // try from 00d83dd0 to 00e83de7 has its CatchHandler @ 00d84ec0 */
            local_90 = 0;
            local_88 = (void *)0x0;
            local_98 = 0;
            Animation::play(*(Animation **)(lVar12 + 0xa8),(basic_string *)&local_98,-1);
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
          else {
            do {
                    /* try { // try from 00d83c4c to 00e83ca3 has its CatchHandler @ 00d83a04 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d83c38 with catch @ 00d83c50
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d83c40 with catch @ 00d83c54
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d83b78 with catch @ 00d83c58
                        */
              local_90 = 0;
              local_88 = (void *)0x0;
              local_98 = 0;
              Animation::fadeIn((Animation *)0xbf800000,*(undefined8 *)(lVar12 + 0xa8),
                                *plVar13 + 0x18,0xffffffff,0,&local_98,3);
              if ((local_98 & 1) != 0) {
                operator_delete(local_88);
              }
              plVar13 = plVar13 + 1;
                    /* try { // try from 00d83c40 to 00e83c4b has its CatchHandler @ 00d83c54 */
            } while (plVar1 != plVar13);
          }
        }
        *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar12 + 0x20);
      }
      uVar11 = 1;
      goto joined_r0x00d83dfc;
    }
    if (iVar2 == 0) {
      if (*(long *)(param_2 + 0x70) == 0) {
        lVar12 = *(long *)this;
        pBVar6 = (BuildArmaturePackage *)&local_80;
LAB_00d83d64:
        uVar11 = (**(code **)(lVar12 + 0x18))(this,pBVar6,param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x70) = uVar11;
      }
      else if (param_1 != (BuildArmaturePackage *)0x0) {
        pBVar6 = param_1 + 0x18;
        if (((byte)*pBVar6 & 1) == 0) {
          if ((byte)*pBVar6 >> 1 != 0) {
LAB_00d83d5c:
            lVar12 = *(long *)this;
            goto LAB_00d83d64;
          }
        }
        else if (*(long *)(param_1 + 0x20) != 0) goto LAB_00d83d5c;
      }
      goto LAB_00d83d74;
    }
    lVar12 = 0;
  }
  uVar11 = 0;
joined_r0x00d83dfc:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = lVar12;
                    /* try { // try from 00d83da8 to 00e83daf has its CatchHandler @ 00d84ee0 */
                    /* try { // try from 00d83db0 to 00e83db7 has its CatchHandler @ 00d84ed0 */
                    /* try { // try from 00d83db8 to 00e83dbf has its CatchHandler @ 00d84ecc */
                    /* try { // try from 00d83dc0 to 00e83dc7 has its CatchHandler @ 00d84ec8 */
  return auVar15;
}

