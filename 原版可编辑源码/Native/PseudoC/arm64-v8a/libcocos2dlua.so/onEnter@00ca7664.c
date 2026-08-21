
/* cocostudio::timeline::InnerActionFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::InnerActionFrame::onEnter(Frame *param_1,int param_2)

{
  size_t __n;
  size_t sVar1;
  Frame FVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  long *plVar11;
  Frame *__s2;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  Frame *pFVar16;
  Node *this;
  Frame *pFVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  undefined8 local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = *(Node **)(param_1 + 0x50);
  if (this == (Node *)0x0) goto LAB_00ca78dc;
  iVar4 = (**(code **)(*(long *)this + 0x2b8))(this,param_2);
  plVar8 = (long *)cocos2d::Node::getActionByTag(this,iVar4);
  if (plVar8 == (long *)0x0) goto LAB_00ca78dc;
  if (*(int *)(param_1 + 0x58) == 2) {
    (**(code **)(*plVar8 + 0x80))(plVar8,*(undefined4 *)(param_1 + 100));
    goto LAB_00ca78dc;
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x60);
  if (param_1[0x80] != (Frame)0x0) {
    pFVar17 = param_1 + 0x68;
    FVar2 = *pFVar17;
    uVar13 = (ulong)((byte)FVar2 >> 1);
    __n = uVar13;
    if (((byte)FVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x70);
    }
    sVar1 = (ulong)(AnimationAllName >> 1);
    if ((AnimationAllName & 1) != 0) {
      sVar1 = DAT_01786928;
    }
    if (__n == sVar1) {
      pFVar16 = *(Frame **)(param_1 + 0x78);
      if (((byte)FVar2 & 1) == 0) {
        pFVar16 = param_1 + 0x69;
      }
      __s2 = DAT_01786930;
      if ((AnimationAllName & 1) == 0) {
        __s2 = (Frame *)&DAT_01786921;
      }
      if (((byte)FVar2 & 1) == 0) {
        if (__n != 0) {
          pFVar16 = param_1 + 0x69;
          do {
            if (*pFVar16 != *__s2) goto LAB_00ca7778;
            uVar13 = uVar13 - 1;
            pFVar16 = pFVar16 + 1;
            __s2 = __s2 + 1;
          } while (uVar13 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(pFVar16,__s2,__n), iVar5 != 0)) goto LAB_00ca7778;
      iVar6 = (**(code **)(*plVar8 + 0xb8))(plVar8);
      iVar4 = 0;
    }
    else {
LAB_00ca7778:
      uVar13 = (**(code **)(*plVar8 + 0x108))(plVar8,pFVar17);
      if ((uVar13 & 1) != 0) {
        pbVar9 = (basic_string *)(**(code **)(*plVar8 + 0x110))(plVar8,pFVar17);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_a0,pbVar9);
        local_88 = *(undefined8 *)(pbVar9 + 0x18);
        pbVar10 = *(basic_string **)(pbVar9 + 0x40);
        if (pbVar10 == (basic_string *)0x0) {
          local_60 = (long *)0x0;
        }
        else if (pbVar9 + 0x20 == pbVar10) {
          local_60 = local_80;
          (**(code **)(**(long **)(pbVar9 + 0x40) + 0x18))();
        }
        else {
          local_60 = (long *)(**(code **)(*(long *)pbVar10 + 0x10))();
        }
        iVar4 = (int)local_88;
        iVar6 = local_88._4_4_;
        if (local_80 == local_60) {
          pcVar14 = *(code **)(*local_60 + 0x20);
LAB_00ca7854:
          (*pcVar14)();
        }
        else if (local_60 != (long *)0x0) {
          pcVar14 = *(code **)(*local_60 + 0x28);
          goto LAB_00ca7854;
        }
        if (((byte)local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
      }
    }
  }
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x48) + 0x68))();
  iVar7 = (**(code **)(*plVar11 + 0xb8))();
  iVar5 = (iVar7 - *(int *)(param_1 + 0x24)) + iVar4;
  if (-1 < (iVar4 - iVar6) + (iVar7 - *(int *)(param_1 + 0x24))) {
    iVar5 = iVar6;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    lVar15 = *plVar8;
    uVar12 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x58) != 1) goto LAB_00ca78dc;
    lVar15 = *plVar8;
    uVar12 = 0;
  }
  (**(code **)(lVar15 + 0x70))(plVar8,iVar4,iVar5,uVar12);
LAB_00ca78dc:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

