
/* cocostudio::DataReaderHelper::decodeMovement(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocostudio::DataReaderHelper::_DataInfo*) */

MovementData *
cocostudio::DataReaderHelper::decodeMovement
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  MovementData *this;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  stExpCocoNode *psVar11;
  Ref *this_00;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (MovementData *)0x0) {
    MovementData::MovementData(this);
  }
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  uVar5 = stExpCocoNode::GetChildNum(param_2);
  lVar8 = stExpCocoNode::GetChildArray(param_2,param_1);
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  if (0 < (int)uVar5) {
    uVar13 = 0;
    pvVar12 = (void *)((ulong)&local_80 | 1);
    do {
      psVar11 = (stExpCocoNode *)(lVar8 + uVar13 * 0x10);
      pcVar9 = (char *)stExpCocoNode::GetName(psVar11,param_1);
      sVar10 = strlen(pcVar9);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,pcVar9,sVar10);
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar11,param_1);
      uVar4 = local_80;
      uVar14 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        uVar14 = local_78;
      }
      sVar10 = 4;
      if (uVar14 < 5) {
        sVar10 = uVar14;
      }
      if (sVar10 == 0) {
LAB_00c51ea8:
        if (4 < uVar14 == 3 < uVar14) goto LAB_00c51ee0;
        if (pcVar9 != (char *)0x0) {
          sVar10 = strlen(pcVar9);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x28),pcVar9,sVar10);
        }
      }
      else {
        pvVar1 = pvVar12;
        if ((local_80 & 1) != 0) {
          pvVar1 = local_70;
        }
        iVar6 = memcmp(pvVar1,"name",sVar10);
        if (iVar6 == 0) goto LAB_00c51ea8;
LAB_00c51ee0:
        __n = 2;
        if (uVar14 < 3) {
          __n = uVar14;
        }
        if (__n == 0) {
LAB_00c51f10:
          if (2 < uVar14 != 1 < uVar14) {
            this[0x50] = (MovementData)0x1;
            if ((pcVar9 != (char *)0x0) && (iVar6 = strcmp("1",pcVar9), iVar6 != 0)) {
              this[0x50] = (MovementData)0x0;
            }
            goto LAB_00c51e18;
          }
        }
        else {
          pvVar1 = pvVar12;
          if ((uVar4 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar6 = memcmp(pvVar1,&DAT_0129f7f1,__n);
          if (iVar6 == 0) goto LAB_00c51f10;
        }
        if (sVar10 == 0) {
LAB_00c51f74:
          if (4 < uVar14 != 3 < uVar14) {
            *(undefined4 *)(this + 0x4c) = 0;
            if (pcVar9 != (char *)0x0) {
              iVar6 = atoi(pcVar9);
              *(int *)(this + 0x4c) = iVar6;
            }
            goto LAB_00c51e18;
          }
        }
        else {
          pvVar1 = pvVar12;
          if ((uVar4 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar6 = memcmp(pvVar1,&DAT_01412b73,sVar10);
          if (iVar6 == 0) goto LAB_00c51f74;
        }
        if (__n == 0) {
LAB_00c51fc8:
          if (2 < uVar14 == 1 < uVar14) {
            if (__n != 0) goto LAB_00c51ffc;
            goto LAB_00c5201c;
          }
          *(undefined4 *)(this + 0x48) = 0;
          if (pcVar9 != (char *)0x0) {
            iVar6 = atoi(pcVar9);
            *(int *)(this + 0x48) = iVar6;
          }
        }
        else {
          pvVar1 = pvVar12;
          if ((uVar4 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar6 = memcmp(pvVar1,"to",__n);
          if (iVar6 == 0) goto LAB_00c51fc8;
LAB_00c51ffc:
          pvVar1 = pvVar12;
          if ((uVar4 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar6 = memcmp(pvVar1,"dr",__n);
          if (iVar6 == 0) {
LAB_00c5201c:
            if (2 < uVar14 == 1 < uVar14) {
              if (__n != 0) goto LAB_00c52050;
              goto LAB_00c52070;
            }
            *(undefined4 *)(this + 0x40) = 0;
            if (pcVar9 != (char *)0x0) {
              iVar6 = atoi(pcVar9);
              *(int *)(this + 0x40) = iVar6;
            }
          }
          else {
LAB_00c52050:
            pvVar1 = pvVar12;
            if ((uVar4 & 1) != 0) {
              pvVar1 = local_70;
            }
            iVar6 = memcmp(pvVar1,"sc",__n);
            if (iVar6 == 0) {
LAB_00c52070:
              if (2 < uVar14 != 1 < uVar14) {
                *(undefined4 *)(this + 0x44) = 0x3f800000;
                if (pcVar9 != (char *)0x0) {
                  dVar3 = (double)cocos2d::utils::atof(pcVar9);
                  *(float *)(this + 0x44) = (float)dVar3;
                }
                goto LAB_00c51e18;
              }
            }
            sVar10 = 3;
            if (uVar14 < 4) {
              sVar10 = uVar14;
            }
            if (sVar10 == 0) {
              if (3 < uVar14 == 2 < uVar14) goto LAB_00c5210c;
            }
            else {
              pvVar1 = pvVar12;
              if ((uVar4 & 1) != 0) {
                pvVar1 = local_70;
              }
              iVar6 = memcmp(pvVar1,&DAT_01412b78,sVar10);
              if ((iVar6 != 0) || (3 < uVar14 == 2 < uVar14)) {
LAB_00c5210c:
                sVar10 = 0xd;
                if (uVar14 < 0xe) {
                  sVar10 = uVar14;
                }
                if (sVar10 != 0) {
                  pvVar1 = pvVar12;
                  if ((uVar4 & 1) != 0) {
                    pvVar1 = local_70;
                  }
                  iVar6 = memcmp(pvVar1,"mov_bone_data",sVar10);
                  if (iVar6 != 0) goto LAB_00c51e18;
                }
                if (0xd < uVar14 != 0xc < uVar14) {
                  uVar7 = stExpCocoNode::GetChildNum(psVar11);
                  uVar14 = (ulong)uVar7;
                  psVar11 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar11,param_1);
                  if (0 < (int)uVar7) {
                    do {
                      this_00 = (Ref *)decodeMovementBone(param_1,psVar11,param_3);
                      MovementData::addMovementBoneData(this,(MovementBoneData *)this_00);
                      cocos2d::Ref::release(this_00);
                      uVar14 = uVar14 - 1;
                      psVar11 = psVar11 + 0x10;
                    } while (uVar14 != 0);
                  }
                }
                goto LAB_00c51e18;
              }
            }
            *(undefined4 *)(this + 0x54) = 0;
            if (pcVar9 != (char *)0x0) {
              iVar6 = atoi(pcVar9);
              *(int *)(this + 0x54) = iVar6;
            }
          }
        }
      }
LAB_00c51e18:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar5);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

