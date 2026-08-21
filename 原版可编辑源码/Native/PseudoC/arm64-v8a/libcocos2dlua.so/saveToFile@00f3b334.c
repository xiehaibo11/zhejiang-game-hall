
/* cocos2d::RenderTexture::saveToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::function<void (cocos2d::RenderTexture*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)>) */

undefined8 __thiscall
cocos2d::RenderTexture::saveToFile
          (RenderTexture *this,basic_string *param_1,uint param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [8];
  ulong local_110;
  char *local_108;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_118,param_1);
  uVar6 = (ulong)(byte)local_118[0];
  if (((byte)local_118[0] & 1) == 0) {
    pcVar8 = (char *)((ulong)local_118 | 1);
    pcVar10 = pcVar8 + ((byte)local_118[0] >> 1);
    if (pcVar8 != pcVar10) {
LAB_00f3b3a8:
      do {
        iVar3 = tolower((int)*pcVar8);
        pcVar9 = pcVar8 + 1;
        *pcVar8 = (char)iVar3;
        pcVar8 = pcVar9;
                    /* try { // try from 00f3b3b8 to 0103b54b has its CatchHandler @ 00f3b3b8
                       catch() { ... } // from try @ 00f3b3b8 with catch @ 00f3b3b8
                       catch() { ... } // from try @ 00f3b554 with catch @ 00f3b3b8
                       catch() { ... } // from try @ 00f3b69c with catch @ 00f3b3b8
                       catch() { ... } // from try @ 00f3bbe0 with catch @ 00f3b3b8 */
      } while (pcVar10 != pcVar9);
      uVar6 = (ulong)(byte)local_118[0];
    }
  }
  else {
    pcVar10 = local_108 + local_110;
    pcVar8 = local_108;
    if (local_108 != pcVar10) goto LAB_00f3b3a8;
  }
  pcVar10 = (char *)((ulong)local_118 | 1);
  uVar11 = uVar6 >> 1;
  if ((uVar6 & 1) != 0) {
    pcVar10 = local_108;
    uVar11 = local_110;
  }
  if (3 < (long)uVar11) {
    piVar1 = (int *)(pcVar10 + uVar11);
    pcVar8 = pcVar10;
    uVar6 = uVar11;
    do {
      pcVar9 = pcVar10;
      if ((uVar6 - 3 == 0) || (piVar4 = memchr(pcVar8,0x2e,uVar6 - 3), piVar4 == (int *)0x0)) break;
      if (*piVar4 == 0x676e702e) {
        if ((piVar4 != piVar1) && ((long)piVar4 - (long)pcVar10 != -1)) {
          plVar5 = (long *)param_4[4];
          if (plVar5 == (long *)0x0) {
            local_80 = (long *)0x0;
          }
          else if (param_4 == plVar5) {
            local_80 = alStack_a0;
            (**(code **)(*plVar5 + 0x18))(plVar5,alStack_a0);
          }
          else {
            local_80 = (long *)(**(code **)(*plVar5 + 0x10))();
          }
          saveToFile(this,param_1,1,param_3 & 1,alStack_a0);
          plVar5 = local_80;
          if (alStack_a0 == local_80) goto LAB_00f3b5ac;
          goto LAB_00f3b554;
        }
        break;
      }
      pcVar8 = (char *)((long)piVar4 + 1);
      uVar6 = (long)piVar1 - (long)pcVar8;
    } while (3 < (long)uVar6);
    do {
      if ((((long)uVar11 < 4) || (uVar11 - 3 == 0)) ||
         (piVar4 = memchr(pcVar9,0x2e,uVar11 - 3), piVar4 == (int *)0x0)) break;
      if (*piVar4 == 0x67706a2e) {
        if ((piVar4 != piVar1) && ((long)piVar4 - (long)pcVar10 != -1)) {
          plVar5 = (long *)param_4[4];
          if (plVar5 == (long *)0x0) {
            local_b0 = (long *)0x0;
          }
          else if (param_4 == plVar5) {
            local_b0 = alStack_d0;
            (**(code **)(*plVar5 + 0x18))(plVar5,alStack_d0);
          }
          else {
            local_b0 = (long *)(**(code **)(*plVar5 + 0x10))();
          }
          saveToFile(this,param_1,0,0,alStack_d0);
          plVar5 = local_b0;
          if (alStack_d0 == local_b0) goto LAB_00f3b5ac;
          goto LAB_00f3b554;
        }
        break;
      }
      uVar11 = (long)piVar1 - ((long)piVar4 + 1);
      pcVar9 = (char *)((long)piVar4 + 1);
    } while( true );
  }
  plVar5 = (long *)param_4[4];
  if (plVar5 == (long *)0x0) {
    local_e0 = (long *)0x0;
  }
  else if (param_4 == plVar5) {
    local_e0 = alStack_100;
    (**(code **)(*plVar5 + 0x18))(plVar5,alStack_100);
  }
  else {
    local_e0 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  saveToFile(this,param_1,0,0,alStack_100);
                    /* try { // try from 00f3b54c to 0103b553 has its CatchHandler @ 00f3bc50 */
  plVar5 = local_e0;
  if (alStack_100 == local_e0) {
LAB_00f3b5ac:
    pcVar7 = *(code **)(*plVar5 + 0x20);
  }
  else {
LAB_00f3b554:
                    /* try { // try from 00f3b554 to 0103b693 has its CatchHandler @ 00f3b3b8 */
    if (plVar5 == (long *)0x0) goto LAB_00f3b5b8;
    pcVar7 = *(code **)(*plVar5 + 0x28);
  }
  (*pcVar7)();
LAB_00f3b5b8:
  if (((byte)local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

