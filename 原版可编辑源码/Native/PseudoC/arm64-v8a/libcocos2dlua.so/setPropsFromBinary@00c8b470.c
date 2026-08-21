
/* cocostudio::ScrollViewReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::ScrollViewReader::setPropsFromBinary
          (ScrollViewReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  stExpCocoNode *this_00;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  float unaff_s8;
  float unaff_s9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  LayoutReader::setPropsFromBinary((LayoutReader *)this,param_1,param_2,param_3);
  this_00 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_3,param_2);
  iVar5 = stExpCocoNode::GetChildNum(param_3);
  if (0 < iVar5) {
    lVar9 = 0;
    pvVar10 = (void *)((ulong)local_90 | 1);
    do {
      pcVar7 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_90,pcVar7);
      pcVar7 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar7);
      uVar1 = (ulong)((byte)local_90[0] >> 1);
      if (((byte)local_90[0] & 1) != 0) {
        uVar1 = local_88;
      }
      switch(uVar1) {
      case 9:
        pvVar2 = pvVar10;
        if (((byte)local_90[0] & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar5 = memcmp(pvVar2,"direction",9);
        if (iVar5 == 0) {
          plVar8 = *(long **)(this + 0x60);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8,local_a8);
          (**(code **)(*(long *)param_1 + 0x6d0))(param_1,uVar6);
        }
        break;
      case 10:
        pvVar2 = pvVar10;
        if (((byte)local_90[0] & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar5 = memcmp(pvVar2,"innerWidth",10);
        if (iVar5 != 0) break;
        plVar8 = *(long **)(this + 0xc0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        unaff_s9 = (float)(**(code **)(*plVar8 + 0x30))(plVar8,local_a8);
        goto joined_r0x00c8b6ac;
      case 0xb:
        pvVar2 = pvVar10;
        if (((byte)local_90[0] & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar5 = memcmp(pvVar2,"innerHeight",0xb);
        if (iVar5 == 0) {
          plVar8 = *(long **)(this + 0xc0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          unaff_s8 = (float)(**(code **)(*plVar8 + 0x30))(plVar8,local_a8);
          goto joined_r0x00c8b6ac;
        }
        break;
      case 0xc:
        pvVar2 = pvVar10;
        if (((byte)local_90[0] & 1) != 0) {
          pvVar2 = local_80;
        }
        iVar5 = memcmp(pvVar2,"bounceEnable",0xc);
        if (iVar5 == 0) {
          plVar8 = *(long **)(this + 0x90);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          bVar4 = (**(code **)(*plVar8 + 0x30))(plVar8,local_a8);
          cocos2d::ui::ScrollView::setBounceEnabled((ScrollView *)param_1,(bool)(bVar4 & 1));
        }
      }
joined_r0x00c8b6ac:
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      lVar9 = lVar9 + 1;
      iVar5 = stExpCocoNode::GetChildNum(param_3);
      this_00 = this_00 + 0x10;
    } while (lVar9 < iVar5);
  }
  cocos2d::Size::Size((Size *)local_90,unaff_s9,unaff_s8);
  cocos2d::ui::ScrollView::setInnerContainerSize((ScrollView *)param_1,(Size *)local_90);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

