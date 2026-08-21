
/* cocostudio::ListViewReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::ListViewReader::setPropsFromBinary
          (ListViewReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  undefined *__s2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  int iVar4;
  undefined4 uVar5;
  stExpCocoNode *this_00;
  char *pcVar6;
  size_t sVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  float fVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  ScrollViewReader::setPropsFromBinary((ScrollViewReader *)this,param_1,param_2,param_3);
  this_00 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_3,param_2);
  iVar4 = stExpCocoNode::GetChildNum(param_3);
  if (0 < iVar4) {
    lVar10 = 0;
    pvVar9 = (void *)((ulong)local_80 | 1);
    do {
      pcVar6 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,pcVar6);
      pcVar6 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar6);
      bVar3 = local_80[0];
      __n = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        __n = local_78;
      }
      if (__n == 9) {
        pvVar1 = pvVar9;
        if (((byte)local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        iVar4 = memcmp(pvVar1,"direction",9);
        if (iVar4 != 0) goto LAB_00c83afc;
        plVar8 = *(long **)(this + 0x60);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,local_98);
        (**(code **)(*(long *)param_1 + 0x6d0))(param_1,uVar5);
      }
      else {
LAB_00c83afc:
        __s2 = P_Gravity;
        sVar7 = strlen(P_Gravity);
        if (sVar7 == __n) {
          if (__n != 0) {
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar1 = pvVar9;
            if (((byte)bVar3 & 1) != 0) {
              pvVar1 = local_70;
            }
            iVar4 = memcmp(pvVar1,__s2,__n);
            if (iVar4 != 0) goto LAB_00c83b40;
          }
          plVar8 = *(long **)(this + 0x60);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,local_98);
          cocos2d::ui::ListView::setGravity((ListView *)param_1,uVar5);
        }
        else {
LAB_00c83b40:
          if (__n == 10) {
            pvVar1 = pvVar9;
            if (((byte)bVar3 & 1) != 0) {
              pvVar1 = local_70;
            }
            iVar4 = memcmp(pvVar1,"itemMargin",10);
            if (iVar4 == 0) {
              plVar8 = *(long **)(this + 0xc0);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              fVar11 = (float)(**(code **)(*plVar8 + 0x30))(plVar8,local_98);
              cocos2d::ui::ListView::setItemsMargin((ListView *)param_1,fVar11);
            }
          }
        }
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      lVar10 = lVar10 + 1;
      iVar4 = stExpCocoNode::GetChildNum(param_3);
      this_00 = this_00 + 0x10;
    } while (lVar10 < iVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

