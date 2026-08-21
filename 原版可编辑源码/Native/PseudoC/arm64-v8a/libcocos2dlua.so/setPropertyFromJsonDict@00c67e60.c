
/* cocostudio::SceneReader::setPropertyFromJsonDict(cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*, cocos2d::Node*) */

void __thiscall
cocostudio::SceneReader::setPropertyFromJsonDict
          (SceneReader *this,CocoLoader *param_1,stExpCocoNode *param_2,Node *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  stExpCocoNode *this_00;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  double dVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
  iVar4 = stExpCocoNode::GetChildNum(param_2);
  if (0 < iVar4) {
    lVar6 = 0;
    plVar7 = (long *)((ulong)local_80 | 1);
    pcVar8 = (char *)((ulong)local_98 | 1);
    do {
      pcVar5 = (char *)stExpCocoNode::GetName(this_00,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,pcVar5);
      pcVar5 = (char *)stExpCocoNode::GetValue(this_00,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar5);
      uVar1 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar1 = local_78;
      }
      switch(uVar1) {
      case 1:
        plVar2 = plVar7;
        if (((byte)local_80[0] & 1) != 0) {
          plVar2 = local_70;
        }
        if ((char)*plVar2 == 'y') {
          pcVar5 = pcVar8;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          dVar9 = (double)cocos2d::utils::atof(pcVar5);
          (**(code **)(*(long *)param_3 + 0xe8))((float)dVar9,param_3);
        }
        else if ((char)*plVar2 == 'x') {
          pcVar5 = pcVar8;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          dVar9 = (double)cocos2d::utils::atof(pcVar5);
          (**(code **)(*(long *)param_3 + 0xd8))((float)dVar9,param_3);
        }
        break;
      case 4:
        plVar2 = plVar7;
        if (((byte)local_80[0] & 1) != 0) {
          plVar2 = local_70;
        }
        if ((int)*plVar2 != 0x656d616e) break;
        pcVar5 = pcVar8;
        if (((byte)local_98[0] & 1) != 0) {
          pcVar5 = local_88;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_b0,pcVar5);
        (**(code **)(*(long *)param_3 + 0x2d0))(param_3,local_b0);
        if (((byte)local_b0[0] & 1) == 0) break;
        operator_delete(local_a0);
        goto joined_r0x00c680c4;
      case 6:
        plVar2 = plVar7;
        if (((byte)local_80[0] & 1) != 0) {
          plVar2 = local_70;
        }
        iVar4 = memcmp(plVar2,"zorder",6);
        if (iVar4 == 0) {
          pcVar5 = pcVar8;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          iVar4 = atoi(pcVar5);
          (**(code **)(*(long *)param_3 + 0x18))(param_3,iVar4);
        }
        else {
          iVar4 = memcmp(plVar2,"scalex",6);
          if (iVar4 == 0) {
            pcVar5 = pcVar8;
            if (((byte)local_98[0] & 1) != 0) {
              pcVar5 = local_88;
            }
            dVar9 = (double)cocos2d::utils::atof(pcVar5);
            (**(code **)(*(long *)param_3 + 0x50))((float)dVar9,param_3);
          }
          else {
            iVar4 = memcmp(plVar2,"scaley",6);
            if (iVar4 == 0) {
              pcVar5 = pcVar8;
              if (((byte)local_98[0] & 1) != 0) {
                pcVar5 = local_88;
              }
              dVar9 = atof(pcVar5);
              (**(code **)(*(long *)param_3 + 0x60))((float)dVar9,param_3);
            }
          }
        }
        break;
      case 7:
        plVar2 = plVar7;
        if (((byte)local_80[0] & 1) != 0) {
          plVar2 = local_70;
        }
        iVar4 = memcmp(plVar2,"visible",7);
        if (iVar4 == 0) {
          pcVar5 = pcVar8;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          iVar4 = atoi(pcVar5);
          (**(code **)(*(long *)param_3 + 0x170))(param_3,iVar4 != 0);
        }
        break;
      case 8:
        plVar2 = plVar7;
        if (((byte)local_80[0] & 1) != 0) {
          plVar2 = local_70;
        }
        if (*plVar2 == 0x6e6f697461746f72) {
          pcVar5 = pcVar8;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          dVar9 = (double)cocos2d::utils::atof(pcVar5);
          (**(code **)(*(long *)param_3 + 0x180))((float)dVar9,param_3);
        }
        break;
      case 9:
        plVar2 = plVar7;
        if (((byte)local_80[0] & 1) != 0) {
          plVar2 = local_70;
        }
        iVar4 = memcmp(plVar2,"objecttag",9);
        if (iVar4 == 0) {
          pcVar5 = pcVar8;
          if (((byte)local_98[0] & 1) != 0) {
            pcVar5 = local_88;
          }
          iVar4 = atoi(pcVar5);
          (**(code **)(*(long *)param_3 + 0x2c0))(param_3,iVar4);
        }
      }
joined_r0x00c680c4:
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      lVar6 = lVar6 + 1;
      iVar4 = stExpCocoNode::GetChildNum(param_2);
      this_00 = this_00 + 0x10;
    } while (lVar6 < iVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

