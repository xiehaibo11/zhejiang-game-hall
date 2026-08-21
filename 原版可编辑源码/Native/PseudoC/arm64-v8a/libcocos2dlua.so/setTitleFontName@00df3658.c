
/* cocos2d::ui::TabHeader::setTitleFontName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::TabHeader::setTitleFontName(TabHeader *this,basic_string *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  basic_string *pbVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00df3680 to 00ef3687 has its CatchHandler @ 00df36b8 */
  plVar4 = (long *)FileUtils::getInstance();
                    /* try { // try from 00df3688 to 00ef36d3 has its CatchHandler @ 00df3604 */
  uVar5 = (**(code **)(*plVar4 + 0x128))(plVar4,param_1);
  if ((uVar5 & 1) == 0) {
    (**(code **)(**(long **)(this + 0x5c0) + 0x560))(*(long **)(this + 0x5c0),param_1);
    if (*(int *)(this + 0x610) == 1) {
      (**(code **)(**(long **)(this + 0x5c0) + 0x580))();
    }
    (**(code **)(**(long **)(this + 0x5c0) + 0x570))(*(undefined4 *)(this + 0x5c8));
    *(undefined4 *)(this + 0x610) = 0;
    goto LAB_00df3890;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_98,param_1);
  uVar5 = (ulong)(byte)local_98[0];
  if (((byte)local_98[0] & 1) == 0) {
    pcVar9 = (char *)((ulong)local_98 | 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3680 with catch @ 00df36b8
                        */
    pcVar11 = pcVar9 + ((byte)local_98[0] >> 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df364c with catch @ 00df36bc
                        */
    if (pcVar9 != pcVar11) {
LAB_00df3724:
      do {
        iVar3 = tolower((int)*pcVar9);
        pcVar10 = pcVar9 + 1;
        *pcVar9 = (char)iVar3;
        pcVar9 = pcVar10;
      } while (pcVar11 != pcVar10);
      uVar5 = (ulong)(byte)local_98[0];
    }
  }
  else {
    pcVar11 = local_88 + local_90;
    pcVar9 = local_88;
    if (local_88 != pcVar11) goto LAB_00df3724;
  }
  pcVar11 = (char *)((ulong)local_98 | 1);
  uVar8 = uVar5 >> 1;
  if ((uVar5 & 1) != 0) {
    pcVar11 = local_88;
    uVar8 = local_90;
  }
  if (3 < (long)uVar8) {
    piVar1 = (int *)(pcVar11 + uVar8);
    pcVar9 = pcVar11;
    do {
      if ((uVar8 - 3 == 0) || (piVar6 = memchr(pcVar9,0x2e,uVar8 - 3), piVar6 == (int *)0x0)) break;
      if (*piVar6 == 0x746e662e) {
        if ((piVar6 != piVar1) && ((long)piVar6 - (long)pcVar11 != -1)) {
          (**(code **)(**(long **)(this + 0x5c0) + 0x540))
                    (0,*(long **)(this + 0x5c0),param_1,&Vec2::ZERO);
          *(undefined4 *)(this + 0x610) = 2;
          if (((byte)local_98[0] & 1) == 0) goto LAB_00df3890;
          goto LAB_00df3888;
        }
        break;
      }
      pcVar9 = (char *)((long)piVar6 + 1);
      uVar8 = (long)piVar1 - (long)pcVar9;
    } while (3 < (long)uVar8);
  }
  pbVar7 = (basic_string *)(**(code **)(**(long **)(this + 0x5c0) + 0x538))();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_80,pbVar7);
  uStack_54 = *(undefined8 *)(pbVar7 + 0x2c);
  local_68 = *(undefined8 *)(pbVar7 + 0x18);
  uStack_58 = (undefined4)((ulong)*(undefined8 *)(pbVar7 + 0x24) >> 0x20);
  uStack_60 = (undefined4)*(undefined8 *)(pbVar7 + 0x20);
  local_5c = (undefined4)((ulong)*(undefined8 *)(pbVar7 + 0x20) >> 0x20);
  if (local_80 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar5 = *(ulong *)(param_1 + 8);
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar7 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_80,(char *)pbVar7,uVar5);
  }
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x5c8));
  (**(code **)(**(long **)(this + 0x5c0) + 0x530))(*(long **)(this + 0x5c0),local_80);
  *(undefined4 *)(this + 0x610) = 1;
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_98[0] & 1) != 0) {
LAB_00df3888:
    operator_delete(local_88);
  }
LAB_00df3890:
  Node::setContentSize((Node *)this,(Size *)(this + 0x39c));
  (**(code **)(*(long *)this + 0x628))(this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

