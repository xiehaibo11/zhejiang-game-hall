
/* cocostudio::DataReaderHelper::decodeBone(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocostudio::DataReaderHelper::_DataInfo*) */

BoneData *
cocostudio::DataReaderHelper::decodeBone
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  BoneData *this;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  stExpCocoNode *psVar10;
  Ref *this_00;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (BoneData *)0x0) {
    BoneData::BoneData(this);
  }
  (**(code **)(*(long *)this + 0x30))(this);
  decodeNode((BaseData *)this,param_1,param_2,param_3);
  uVar4 = stExpCocoNode::GetChildNum(param_2);
  lVar7 = stExpCocoNode::GetChildArray(param_2,param_1);
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  if (0 < (int)uVar4) {
    uVar11 = 0;
    pvVar13 = (void *)((ulong)&local_80 | 1);
    do {
      psVar10 = (stExpCocoNode *)(lVar7 + uVar11 * 0x10);
      pcVar8 = (char *)stExpCocoNode::GetName(psVar10,param_1);
      sVar9 = strlen(pcVar8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,pcVar8,sVar9);
      pcVar8 = (char *)stExpCocoNode::GetValue(psVar10,param_1);
      uVar3 = local_80;
      uVar12 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        uVar12 = local_78;
      }
      sVar9 = 4;
      if (uVar12 < 5) {
        sVar9 = uVar12;
      }
      if (sVar9 == 0) {
LAB_00c50f2c:
        if (4 < uVar12 == 3 < uVar12) goto LAB_00c50f64;
        if (pcVar8 != (char *)0x0) {
          sVar9 = strlen(pcVar8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x58),pcVar8,sVar9);
        }
      }
      else {
        pvVar1 = pvVar13;
        if ((local_80 & 1) != 0) {
          pvVar1 = local_70;
        }
        iVar5 = memcmp(pvVar1,"name",sVar9);
        if (iVar5 == 0) goto LAB_00c50f2c;
LAB_00c50f64:
        sVar9 = 6;
        if (uVar12 < 7) {
          sVar9 = uVar12;
        }
        if (sVar9 == 0) {
LAB_00c50f90:
          if (6 < uVar12 != 5 < uVar12) {
            if (pcVar8 != (char *)0x0) {
              sVar9 = strlen(pcVar8);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(this + 0x70),pcVar8,sVar9);
            }
            goto LAB_00c50ea4;
          }
        }
        else {
          pvVar1 = pvVar13;
          if ((uVar3 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar5 = memcmp(pvVar1,"parent",sVar9);
          if (iVar5 == 0) goto LAB_00c50f90;
        }
        sVar9 = 0xc;
        if (uVar12 < 0xd) {
          sVar9 = uVar12;
        }
        if (sVar9 != 0) {
          pvVar1 = pvVar13;
          if ((uVar3 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar5 = memcmp(pvVar1,"display_data",sVar9);
          if (iVar5 != 0) goto LAB_00c50ea4;
        }
        if (0xc < uVar12 != 0xb < uVar12) {
          uVar6 = stExpCocoNode::GetChildNum(psVar10);
          uVar12 = (ulong)uVar6;
          psVar10 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar10,param_1);
          if (0 < (int)uVar6) {
            do {
              this_00 = (Ref *)decodeBoneDisplay(param_1,psVar10,param_3);
              if (this_00 != (Ref *)0x0) {
                BoneData::addDisplayData(this,(DisplayData *)this_00);
                cocos2d::Ref::release(this_00);
              }
              uVar12 = uVar12 - 1;
              psVar10 = psVar10 + 0x10;
            } while (uVar12 != 0);
          }
        }
      }
LAB_00c50ea4:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
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

