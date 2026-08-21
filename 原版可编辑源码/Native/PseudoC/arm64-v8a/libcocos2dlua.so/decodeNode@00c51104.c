
/* cocostudio::DataReaderHelper::decodeNode(cocostudio::BaseData*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*, cocostudio::DataReaderHelper::_DataInfo*) */

void cocostudio::DataReaderHelper::decodeNode
               (BaseData *param_1,CocoLoader *param_2,stExpCocoNode *param_3,_DataInfo *param_4)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  uint uVar6;
  int iVar7;
  stExpCocoNode *psVar8;
  char *pcVar9;
  stExpCocoNode *this;
  void *pvVar10;
  ulong uVar11;
  stExpCocoNode *this_00;
  double dVar12;
  float fVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar6 = stExpCocoNode::GetChildNum(param_3);
  uVar11 = (ulong)uVar6;
  psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_3,param_2);
  fVar13 = *(float *)(param_4 + 0x74);
  if (0 < (int)uVar6) {
    pvVar10 = (void *)((ulong)local_90 | 1);
    this_00 = psVar8;
    do {
      pcVar9 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,pcVar9);
      pcVar9 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      bVar5 = local_90[0];
      uVar1 = (ulong)((byte)local_90[0] >> 1);
      if (((byte)local_90[0] & 1) != 0) {
        uVar1 = local_88;
      }
      sVar3 = uVar1;
      if (1 < uVar1) {
        sVar3 = 1;
      }
      if (sVar3 == 0) {
LAB_00c51200:
        if (1 < uVar1 == (uVar1 != 0)) {
          if (sVar3 != 0) goto LAB_00c51244;
          goto LAB_00c51268;
        }
        dVar12 = (double)cocos2d::utils::atof(pcVar9);
        *(float *)(param_1 + 0x24) = (float)(dVar12 * (double)*(float *)(param_4 + 0x38));
      }
      else {
        pvVar2 = pvVar10;
        if (((byte)local_90[0] & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar7 = memcmp(pvVar2,"x",sVar3);
        if (iVar7 == 0) goto LAB_00c51200;
LAB_00c51244:
        pvVar2 = pvVar10;
        if (((byte)bVar5 & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar7 = memcmp(pvVar2,&DAT_014a23fd,sVar3);
        if (iVar7 == 0) {
LAB_00c51268:
          if (1 < uVar1 == (uVar1 != 0)) {
            if (sVar3 != 0) goto LAB_00c512ac;
            goto LAB_00c512d0;
          }
          dVar12 = (double)cocos2d::utils::atof(pcVar9);
          *(float *)(param_1 + 0x28) = (float)(dVar12 * (double)*(float *)(param_4 + 0x38));
        }
        else {
LAB_00c512ac:
          pvVar2 = pvVar10;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_80;
          }
          iVar7 = memcmp(pvVar2,&DAT_014017d5,sVar3);
          if (iVar7 == 0) {
LAB_00c512d0:
            if (1 < uVar1 != (uVar1 != 0)) {
              iVar7 = atoi(pcVar9);
              *(int *)(param_1 + 0x2c) = iVar7;
              goto joined_r0x00c51238;
            }
          }
          sVar3 = 2;
          if (uVar1 < 3) {
            sVar3 = uVar1;
          }
          if (sVar3 == 0) {
LAB_00c51334:
            if (2 < uVar1 == 1 < uVar1) {
              if (sVar3 != 0) goto LAB_00c5136c;
              goto LAB_00c51390;
            }
            dVar12 = (double)cocos2d::utils::atof(pcVar9);
            *(float *)(param_1 + 0x30) = (float)dVar12;
          }
          else {
            pvVar2 = pvVar10;
            if (((byte)bVar5 & 1) != 0) {
              pvVar2 = local_80;
            }
            iVar7 = memcmp(pvVar2,&DAT_0141ba7c,sVar3);
            if (iVar7 == 0) goto LAB_00c51334;
LAB_00c5136c:
            pvVar2 = pvVar10;
            if (((byte)bVar5 & 1) != 0) {
              pvVar2 = local_80;
            }
            iVar7 = memcmp(pvVar2,&DAT_0141ba80,sVar3);
            if (iVar7 == 0) {
LAB_00c51390:
              if (2 < uVar1 == 1 < uVar1) {
                if (sVar3 != 0) goto LAB_00c513c8;
                goto LAB_00c513ec;
              }
              dVar12 = (double)cocos2d::utils::atof(pcVar9);
              *(float *)(param_1 + 0x34) = (float)dVar12;
            }
            else {
LAB_00c513c8:
              pvVar2 = pvVar10;
              if (((byte)bVar5 & 1) != 0) {
                pvVar2 = local_80;
              }
              iVar7 = memcmp(pvVar2,"cX",sVar3);
              if (iVar7 == 0) {
LAB_00c513ec:
                if (2 < uVar1 == 1 < uVar1) {
                  if (sVar3 != 0) goto LAB_00c51424;
                  if (2 < uVar1 == 1 < uVar1) goto LAB_00c514a4;
                  goto LAB_00c51464;
                }
                dVar12 = (double)cocos2d::utils::atof(pcVar9);
                *(float *)(param_1 + 0x38) = (float)dVar12;
              }
              else {
LAB_00c51424:
                pvVar2 = pvVar10;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar2 = local_80;
                }
                iVar7 = memcmp(pvVar2,"cY",sVar3);
                if ((iVar7 == 0) && (2 < uVar1 != 1 < uVar1)) {
LAB_00c51464:
                  dVar12 = (double)cocos2d::utils::atof(pcVar9);
                  *(float *)(param_1 + 0x3c) = (float)dVar12;
                }
                else {
LAB_00c514a4:
                  sVar3 = uVar1;
                  if (4 < uVar1) {
                    sVar3 = 5;
                  }
                  if (sVar3 != 0) {
                    pvVar2 = pvVar10;
                    if (((byte)bVar5 & 1) != 0) {
                      pvVar2 = local_80;
                    }
                    iVar7 = memcmp(pvVar2,"color",sVar3);
                    if (iVar7 != 0) goto joined_r0x00c51238;
                  }
                  if ((1.1 <= fVar13) && (uVar1 == 5)) {
                    iVar7 = stExpCocoNode::GetType(this_00,param_2);
                    if ((iVar7 == 3) && (iVar7 = stExpCocoNode::GetChildNum(this_00), iVar7 == 4)) {
                      this = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                      pcVar9 = (char *)stExpCocoNode::GetValue(this,param_2);
                      iVar7 = atoi(pcVar9);
                      *(int *)(param_1 + 0x48) = iVar7;
                      pcVar9 = (char *)stExpCocoNode::GetValue(this + 0x10,param_2);
                      iVar7 = atoi(pcVar9);
                      *(int *)(param_1 + 0x4c) = iVar7;
                      pcVar9 = (char *)stExpCocoNode::GetValue(this + 0x20,param_2);
                      iVar7 = atoi(pcVar9);
                      *(int *)(param_1 + 0x50) = iVar7;
                      pcVar9 = (char *)stExpCocoNode::GetValue(this + 0x30,param_2);
                      iVar7 = atoi(pcVar9);
                      *(int *)(param_1 + 0x54) = iVar7;
                    }
                    param_1[0x44] = (BaseData)0x1;
                  }
                }
              }
            }
          }
        }
      }
joined_r0x00c51238:
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      uVar11 = uVar11 - 1;
      this_00 = this_00 + 0x10;
    } while (uVar11 != 0);
  }
  if ((fVar13 < 1.1) && (iVar7 = stExpCocoNode::GetChildNum(psVar8), 0 < iVar7)) {
    iVar7 = stExpCocoNode::GetType(psVar8,param_2);
    if ((iVar7 == 3) && (iVar7 = stExpCocoNode::GetChildNum(psVar8), iVar7 == 4)) {
      psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar8,param_2);
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar8,param_2);
      iVar7 = atoi(pcVar9);
      *(int *)(param_1 + 0x48) = iVar7;
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar8 + 0x10,param_2);
      iVar7 = atoi(pcVar9);
      *(int *)(param_1 + 0x4c) = iVar7;
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar8 + 0x20,param_2);
      iVar7 = atoi(pcVar9);
      *(int *)(param_1 + 0x50) = iVar7;
      pcVar9 = (char *)stExpCocoNode::GetValue(psVar8 + 0x30,param_2);
      iVar7 = atoi(pcVar9);
      *(int *)(param_1 + 0x54) = iVar7;
    }
    param_1[0x44] = (BaseData)0x1;
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

