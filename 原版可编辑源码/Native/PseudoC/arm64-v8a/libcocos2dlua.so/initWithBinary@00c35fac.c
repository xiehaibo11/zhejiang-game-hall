
/* cocostudio::ActionObject::initWithBinary(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocos2d::Ref*) */

void __thiscall
cocostudio::ActionObject::initWithBinary
          (ActionObject *this,CocoLoader *param_1,stExpCocoNode *param_2,Ref *param_3)

{
  stExpCocoNode *this_00;
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  ActionNode *this_01;
  char *pcVar14;
  stExpCocoNode *this_02;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  float fVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  char *local_88;
  Ref *local_80;
  ulong local_78;
  long *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar11 = stExpCocoNode::GetChildArray(param_2,param_1);
  uVar7 = stExpCocoNode::GetChildNum(param_2);
  if (0 < (int)uVar7) {
    uVar17 = 0;
    this_02 = (stExpCocoNode *)0x0;
    plVar15 = (long *)((ulong)&local_80 | 1);
    pcVar14 = (char *)((ulong)local_98 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar11 + uVar17 * 0x10);
      pcVar12 = (char *)stExpCocoNode::GetName(this_00,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(this_00,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar12);
      uVar2 = (ulong)local_80 >> 1 & 0x7f;
      if (((ulong)local_80 & 1) != 0) {
        uVar2 = local_78;
      }
      if (uVar2 == 0xe) {
        plVar3 = plVar15;
        if (((ulong)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar8 = memcmp(plVar3,"actionnodelist",0xe);
        if (iVar8 != 0) {
          this_00 = this_02;
        }
      }
      else if (uVar2 == 8) {
        plVar3 = plVar15;
        if (((ulong)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        this_00 = this_02;
        if (*plVar3 == 0x656d697474696e75) {
          pcVar12 = pcVar14;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar12 = local_88;
          }
          dVar6 = (double)cocos2d::utils::atof(pcVar12);
          puVar16 = *(undefined8 **)(this + 0x28);
          puVar4 = *(undefined8 **)(this + 0x30);
          fVar18 = (float)dVar6;
          *(float *)(this + 0x5c) = fVar18;
          if (puVar16 != puVar4) {
            for (; ActionNode::setUnitTime((ActionNode *)*puVar16,fVar18), puVar4 + -1 != puVar16;
                puVar16 = puVar16 + 1) {
              fVar18 = *(float *)(this + 0x5c);
            }
          }
        }
      }
      else {
        this_00 = this_02;
        if (uVar2 == 4) {
          plVar3 = plVar15;
          if (((ulong)local_80 & 1) != 0) {
            plVar3 = local_70;
          }
          if ((int)*plVar3 == 0x656d616e) {
            pcVar12 = pcVar14;
            if (((byte)local_98[0] & 1) != 0) {
              pcVar12 = local_88;
            }
            sVar13 = strlen(pcVar12);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x40),pcVar12,sVar13);
          }
          else if ((int)*plVar3 == 0x706f6f6c) {
            pcVar12 = pcVar14;
            if (((byte)local_98[0] & 1) != 0) {
              pcVar12 = local_88;
            }
            iVar8 = atoi(pcVar12);
            this[0x58] = (ActionObject)(iVar8 == 1);
          }
        }
      }
      this_02 = this_00;
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar7);
    if (this_02 != (stExpCocoNode *)0x0) {
      uVar7 = stExpCocoNode::GetChildNum(this_02);
      uVar17 = (ulong)uVar7;
      lVar11 = stExpCocoNode::GetChildArray(this_02,param_1);
      if ((int)uVar7 < 1) {
        fVar18 = 0.0;
      }
      else {
        iVar8 = 0;
        do {
          this_01 = operator_new(0x70,(nothrow_t *)&std::nothrow);
          if (this_01 != (ActionNode *)0x0) {
            ActionNode::ActionNode(this_01);
          }
          cocos2d::Ref::autorelease((Ref *)this_01);
          (**(code **)(*(long *)this_01 + 0x30))(this_01,param_1,lVar11,param_3);
          ActionNode::setUnitTime(this_01,*(float *)(this + 0x5c));
          puVar16 = *(undefined8 **)(this + 0x30);
          local_80 = (Ref *)this_01;
          if (puVar16 == *(undefined8 **)(this + 0x38)) {
            std::__ndk1::
            vector<cocostudio::ActionNode*,std::__ndk1::allocator<cocostudio::ActionNode*>>::
            __push_back_slow_path<cocostudio::ActionNode*const&>
                      ((vector<cocostudio::ActionNode*,std::__ndk1::allocator<cocostudio::ActionNode*>>
                        *)(this + 0x28),(ActionNode **)&local_80);
          }
          else {
            *puVar16 = this_01;
            *(undefined8 **)(this + 0x30) = puVar16 + 1;
          }
          cocos2d::Ref::retain(local_80);
          iVar9 = ActionNode::getLastFrameIndex(this_01);
          iVar10 = ActionNode::getFirstFrameIndex(this_01);
          iVar1 = iVar9 - iVar10;
          if (iVar9 - iVar10 <= iVar8) {
            iVar1 = iVar8;
          }
          uVar17 = uVar17 - 1;
          lVar11 = lVar11 + 0x10;
          iVar8 = iVar1;
        } while (uVar17 != 0);
        fVar18 = (float)iVar1;
      }
      *(float *)(this + 0x78) = *(float *)(this + 0x5c) * fVar18;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

