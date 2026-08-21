
/* cocostudio::DataReaderHelper::decodeAnimation(cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*, cocostudio::DataReaderHelper::_DataInfo*) */

AnimationData *
cocostudio::DataReaderHelper::decodeAnimation
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  AnimationData *this;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  stExpCocoNode *psVar10;
  Ref *this_00;
  ulong uVar11;
  ulong uVar12;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (AnimationData *)0x0) {
    AnimationData::AnimationData(this);
  }
  uVar4 = stExpCocoNode::GetChildNum(param_2);
  lVar7 = stExpCocoNode::GetChildArray(param_2,param_1);
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      psVar10 = (stExpCocoNode *)(lVar7 + uVar12 * 0x10);
      pcVar8 = (char *)stExpCocoNode::GetName(psVar10,param_1);
      sVar9 = strlen(pcVar8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,pcVar8,sVar9);
      pcVar8 = (char *)stExpCocoNode::GetValue(psVar10,param_1);
      uVar3 = local_80;
      uVar11 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        uVar11 = local_78;
      }
      sVar9 = 4;
      if (uVar11 < 5) {
        sVar9 = uVar11;
      }
      if (sVar9 == 0) {
LAB_00c507f4:
        if (4 < uVar11 == 3 < uVar11) goto LAB_00c5082c;
        if (pcVar8 != (char *)0x0) {
          sVar9 = strlen(pcVar8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x28),pcVar8,sVar9);
        }
      }
      else {
        pvVar1 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar1 = local_70;
        }
        iVar5 = memcmp(pvVar1,"name",sVar9);
        if (iVar5 == 0) goto LAB_00c507f4;
LAB_00c5082c:
        sVar9 = 8;
        if (uVar11 < 9) {
          sVar9 = uVar11;
        }
        if (sVar9 != 0) {
          pvVar1 = (void *)((ulong)&local_80 | 1);
          if ((uVar3 & 1) != 0) {
            pvVar1 = local_70;
          }
          iVar5 = memcmp(pvVar1,"mov_data",sVar9);
          if (iVar5 != 0) goto LAB_00c5076c;
        }
        if (8 < uVar11 != 7 < uVar11) {
          uVar6 = stExpCocoNode::GetChildNum(psVar10);
          uVar11 = (ulong)uVar6;
          psVar10 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar10,param_1);
          if (0 < (int)uVar6) {
            do {
              this_00 = (Ref *)decodeMovement(param_1,psVar10,param_3);
              AnimationData::addMovement(this,(MovementData *)this_00);
              cocos2d::Ref::release(this_00);
              uVar11 = uVar11 - 1;
              psVar10 = psVar10 + 0x10;
            } while (uVar11 != 0);
          }
        }
      }
LAB_00c5076c:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
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

