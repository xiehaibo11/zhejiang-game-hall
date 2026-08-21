
/* cocostudio::DataReaderHelper::decodeContour(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*)
    */

ContourData *
cocostudio::DataReaderHelper::decodeContour(CocoLoader *param_1,stExpCocoNode *param_2)

{
  ulong uVar1;
  size_t __n;
  void *__s1;
  undefined8 *puVar2;
  long lVar3;
  double dVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  uint uVar6;
  int iVar7;
  ContourData *this;
  stExpCocoNode *psVar8;
  char *pcVar9;
  long lVar10;
  stExpCocoNode *this_00;
  ulong uVar11;
  undefined8 local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (ContourData *)0x0) {
    ContourData::ContourData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  uVar6 = stExpCocoNode::GetChildNum(param_2);
  uVar11 = (ulong)uVar6;
  psVar8 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
  if (0 < (int)uVar6) {
    do {
      pcVar9 = (char *)stExpCocoNode::GetName(psVar8,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,pcVar9);
      stExpCocoNode::GetValue(psVar8,param_1);
      bVar5 = local_80[0];
      uVar1 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar1 = local_78;
      }
      __n = 6;
      if (uVar1 < 7) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00c52e90:
        if (6 < uVar1 != 5 < uVar1) {
          iVar7 = stExpCocoNode::GetChildNum(psVar8);
          lVar10 = stExpCocoNode::GetChildArray(psVar8,param_1);
          if (0 < iVar7) {
            psVar8 = (stExpCocoNode *)(lVar10 + (long)iVar7 * 0x10);
            lVar10 = (long)iVar7;
            do {
              psVar8 = psVar8 + -0x10;
              this_00 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar8,param_1);
              local_88 = 0;
              pcVar9 = (char *)stExpCocoNode::GetValue(this_00,param_1);
              dVar4 = (double)cocos2d::utils::atof(pcVar9);
              local_88 = CONCAT44(local_88._4_4_,(float)dVar4);
              pcVar9 = (char *)stExpCocoNode::GetValue(this_00 + 0x10,param_1);
              dVar4 = (double)cocos2d::utils::atof(pcVar9);
              local_88 = CONCAT44((float)dVar4,(undefined4)local_88);
              puVar2 = *(undefined8 **)(this + 0x30);
              if (puVar2 == *(undefined8 **)(this + 0x38)) {
                std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
                __push_back_slow_path<cocos2d::Vec2_const&>
                          ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)
                           (this + 0x28),(Vec2 *)&local_88);
              }
              else {
                *puVar2 = local_88;
                *(undefined8 **)(this + 0x30) = puVar2 + 1;
              }
              lVar10 = lVar10 + -1;
            } while (0 < lVar10);
          }
          if (((byte)local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
          break;
        }
      }
      else {
        __s1 = (void *)((ulong)local_80 | 1);
        if (((byte)local_80[0] & 1) != 0) {
          __s1 = local_70;
        }
        iVar7 = memcmp(__s1,"vertex",__n);
        if (iVar7 == 0) goto LAB_00c52e90;
      }
      if (((byte)bVar5 & 1) != 0) {
        operator_delete(local_70);
      }
      uVar11 = uVar11 - 1;
      psVar8 = psVar8 + 0x10;
    } while (uVar11 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

