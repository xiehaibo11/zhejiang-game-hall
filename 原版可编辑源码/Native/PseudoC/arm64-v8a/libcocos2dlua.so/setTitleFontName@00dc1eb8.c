
/* cocos2d::ui::Button::setTitleFontName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::Button::setTitleFontName(Button *this,basic_string *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  basic_string *pbVar7;
  Button *pBVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x508) == 0) {
    (**(code **)(*(long *)this + 0x6a0))(this);
  }
  plVar4 = (long *)FileUtils::getInstance();
  uVar5 = (**(code **)(*plVar4 + 0x128))(plVar4,param_1);
  if ((uVar5 & 1) == 0) {
    (**(code **)(**(long **)(this + 0x508) + 0x560))(*(long **)(this + 0x508),param_1);
    goto LAB_00dc20b4;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_98,param_1);
  uVar5 = (ulong)(byte)local_98[0];
  if (((byte)local_98[0] & 1) == 0) {
    pcVar10 = (char *)((ulong)local_98 | 1);
    pcVar12 = pcVar10 + ((byte)local_98[0] >> 1);
    if (pcVar10 != pcVar12) {
LAB_00dc1f68:
      do {
        iVar3 = tolower((int)*pcVar10);
        pcVar11 = pcVar10 + 1;
        *pcVar10 = (char)iVar3;
        pcVar10 = pcVar11;
      } while (pcVar12 != pcVar11);
      uVar5 = (ulong)(byte)local_98[0];
    }
  }
  else {
    pcVar12 = local_88 + local_90;
    pcVar10 = local_88;
    if (local_88 != pcVar12) goto LAB_00dc1f68;
  }
  pcVar12 = (char *)((ulong)local_98 | 1);
  uVar9 = uVar5 >> 1;
  if ((uVar5 & 1) != 0) {
    pcVar12 = local_88;
    uVar9 = local_90;
  }
                    /* try { // try from 00dc1fa0 to 00ec1fb7 has its CatchHandler @ 00dc23d0 */
  if (3 < (long)uVar9) {
    piVar1 = (int *)(pcVar12 + uVar9);
    pcVar10 = pcVar12;
    do {
      if ((uVar9 - 3 == 0) || (piVar6 = memchr(pcVar10,0x2e,uVar9 - 3), piVar6 == (int *)0x0))
      break;
      if (*piVar6 == 0x746e662e) {
        if ((piVar6 != piVar1) && ((long)piVar6 - (long)pcVar12 != -1)) {
                    /* try { // try from 00dc200c to 00ec201b has its CatchHandler @ 00dc23d8 */
          (**(code **)(**(long **)(this + 0x508) + 0x540))
                    (0,*(long **)(this + 0x508),param_1,&Vec2::ZERO);
          goto LAB_00dc20a4;
        }
        break;
      }
      pcVar10 = (char *)((long)piVar6 + 1);
      uVar9 = (long)piVar1 - (long)pcVar10;
    } while (3 < (long)uVar9);
  }
  pbVar7 = (basic_string *)(**(code **)(**(long **)(this + 0x508) + 0x538))();
                    /* try { // try from 00dc2034 to 00ec2043 has its CatchHandler @ 00dc2428 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_80,pbVar7);
                    /* try { // try from 00dc2048 to 00ec2057 has its CatchHandler @ 00dc2408 */
  uStack_54 = *(undefined8 *)(pbVar7 + 0x2c);
  uStack_68 = *(undefined8 *)(pbVar7 + 0x18);
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
  (**(code **)(**(long **)(this + 0x508) + 0x530))(*(long **)(this + 0x508),local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00dc20a4:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00dc20b4:
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x5c0) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar5 = *(ulong *)(param_1 + 8);
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar7 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x5c0),(char *)pbVar7,uVar5);
  }
  if (this[0x381] == (Button)0x0) {
    if (this[0x387] != (Button)0x0) {
                    /* try { // try from 00dc2100 to 00ec218b has its CatchHandler @ 00dc23f0 */
      (**(code **)(*(long *)this + 0x610))(local_80,this);
      (**(code **)(*(long *)this + 0x160))(this,local_80);
    }
  }
  else {
    if (this[0x515] == (Button)0x0) {
      (**(code **)(*(long *)this + 0x6a8))(local_80,this);
      pBVar8 = (Button *)local_80;
    }
    else {
      pBVar8 = this + 0x39c;
    }
    Node::setContentSize((Node *)this,(Size *)pBVar8);
    (**(code **)(*(long *)this + 0x628))(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

