
/* WARNING: Type propagation algorithm not settling */

void FUN_00c9ac3c(void)

{
  stExpCocoNode *this;
  size_t sVar1;
  undefined *puVar2;
  ulong __n;
  WidgetReader WVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  char *__dest;
  stExpCocoNode *this_00;
  LinearLayoutParameter *this_01;
  RelativeLayoutParameter *this_02;
  long *plVar9;
  basic_string *unaff_x19;
  stExpCocoNode *unaff_x20;
  WidgetReader *unaff_x21;
  CocoLoader *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar10;
  ulong uVar11;
  long unaff_x29;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  char *in_stack_00000028;
  char *in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  void *in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  ulong in_stack_00000070;
  size_t in_stack_00000078;
  char *in_stack_00000080;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
  bStack0000000000000090;
  undefined7 uStack0000000000000091;
  ulong in_stack_00000098;
  char *in_stack_000000a0;
  
code_r0x00c9ac3c:
  cocos2d::ui::Widget::setPositionType();
switchD_00c9ab8c_caseD_5:
  do {
joined_r0x00c9af34:
    if (((byte)bStack0000000000000090 & 1) != 0) {
      operator_delete(in_stack_000000a0);
    }
    if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
      operator_delete(*(void **)(unaff_x29 + -0x78));
    }
    unaff_x24 = unaff_x24 + 1;
    iVar5 = cocostudio::stExpCocoNode::GetChildNum(unaff_x20);
    if (iVar5 <= unaff_x24) {
      cocostudio::WidgetReader::endSetBasicProperties(unaff_x21,(Widget *)unaff_x19);
      if (*(long *)(in_stack_00000038 + 0x28) == *(long *)(unaff_x29 + -0x70)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (stExpCocoNode *)(unaff_x23 + unaff_x24 * 0x10);
    pcVar7 = (char *)cocostudio::stExpCocoNode::GetName(this,unaff_x22);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (unaff_x29 + -0x88),pcVar7);
    pcVar7 = (char *)cocostudio::stExpCocoNode::GetValue(this,unaff_x22);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&stack0x00000090,pcVar7);
    puVar2 = cocostudio::P_IgnoreSize;
    sVar8 = strlen(cocostudio::P_IgnoreSize);
    bVar4 = *(byte *)(unaff_x29 + -0x88);
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(unaff_x29 + -0x80);
    }
    if (sVar8 == sVar1) {
      if (sVar8 != 0) {
        if (sVar8 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar8);
        if (iVar5 != 0) goto LAB_00c9a38c;
      }
      plVar9 = *(long **)(unaff_x21 + 0x90);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x600))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a38c:
    puVar2 = cocostudio::P_SizeType;
    sVar8 = strlen(cocostudio::P_SizeType);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a3d4;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      cocos2d::ui::Widget::setSizeType();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a3d4:
    puVar2 = cocostudio::P_PositionType;
    sVar8 = strlen(cocostudio::P_PositionType);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a41c;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      goto code_r0x00c9ac3c;
    }
LAB_00c9a41c:
    puVar2 = cocostudio::P_SizePercentX;
    sVar8 = strlen(cocostudio::P_SizePercentX);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a464;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xd0) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a464:
    puVar2 = cocostudio::P_SizePercentY;
    sVar8 = strlen(cocostudio::P_SizePercentY);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a4ac;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xd4) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a4ac:
    puVar2 = cocostudio::P_PositionPercentX;
    sVar8 = strlen(cocostudio::P_PositionPercentX);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a4f4;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xd8) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a4f4:
    puVar2 = cocostudio::P_PositionPercentY;
    sVar8 = strlen(cocostudio::P_PositionPercentY);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a53c;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xdc) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a53c:
    puVar2 = cocostudio::P_Width;
    sVar8 = strlen(cocostudio::P_Width);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a584;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xe0) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a584:
    puVar2 = cocostudio::P_Height;
    sVar8 = strlen(cocostudio::P_Height);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a5cc;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xe4) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a5cc:
    puVar2 = cocostudio::P_Tag;
    sVar8 = strlen(cocostudio::P_Tag);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a614;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x2c0))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a614:
    puVar2 = cocostudio::P_ActionTag;
    sVar8 = strlen(cocostudio::P_ActionTag);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a65c;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      iVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      cocos2d::ui::Widget::setActionTag((Widget *)unaff_x19,iVar5);
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a65c:
    puVar2 = cocostudio::P_TouchAble;
    sVar8 = strlen(cocostudio::P_TouchAble);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a6a4;
      }
      plVar9 = *(long **)(unaff_x21 + 0x90);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x588))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a6a4:
    puVar2 = cocostudio::P_Name;
    sVar8 = strlen(cocostudio::P_Name);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a6ec;
      }
      pcVar7 = in_stack_000000a0;
      __n = in_stack_00000098;
      uVar11 = (ulong)((byte)bStack0000000000000090 >> 1);
      if (((byte)bStack0000000000000090 & 1) != 0) {
        uVar11 = in_stack_00000098;
      }
      if (uVar11 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&stack0x00000070,"default");
      }
      else {
        in_stack_00000078 = 0;
        in_stack_00000080 = (char *)0x0;
        in_stack_00000070 = 0;
        if (((byte)bStack0000000000000090 & 1) == 0) {
          in_stack_00000070 = CONCAT71(uStack0000000000000091,bStack0000000000000090);
          in_stack_00000078 = in_stack_00000098;
          in_stack_00000080 = in_stack_000000a0;
        }
        else {
          if (0xffffffffffffffef < in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (in_stack_00000098 < 0x17) {
            in_stack_00000070 = (ulong)(byte)((int)in_stack_00000098 << 1);
            __dest = in_stack_00000030;
            if (in_stack_00000098 != 0) goto LAB_00c9aef8;
          }
          else {
            uVar11 = in_stack_00000098 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar11);
            in_stack_00000070 = uVar11 | 1;
            in_stack_00000078 = __n;
            in_stack_00000080 = __dest;
LAB_00c9aef8:
            memcpy(__dest,pcVar7,__n);
          }
          __dest[__n] = '\0';
        }
      }
      (**(code **)(*(long *)unaff_x19 + 0x2d0))();
      if ((in_stack_00000070 & 1) != 0) {
        operator_delete(in_stack_00000080);
      }
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a6ec:
    puVar2 = cocostudio::P_X;
    sVar8 = strlen(cocostudio::P_X);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a734;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xf0) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a734:
    puVar2 = cocostudio::P_Y;
    sVar8 = strlen(cocostudio::P_Y);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a77c;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xf4) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a77c:
    puVar2 = cocostudio::P_ScaleX;
    sVar8 = strlen(cocostudio::P_ScaleX);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a7c4;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x50))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a7c4:
    puVar2 = cocostudio::P_ScaleY;
    sVar8 = strlen(cocostudio::P_ScaleY);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a80c;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x60))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a80c:
    puVar2 = cocostudio::P_Rotation;
    sVar8 = strlen(cocostudio::P_Rotation);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a854;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x180))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a854:
    puVar2 = cocostudio::P_Visbile;
    sVar8 = strlen(cocostudio::P_Visbile);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a89c;
      }
      plVar9 = *(long **)(unaff_x21 + 0x90);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x170))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a89c:
    puVar2 = cocostudio::P_ZOrder;
    sVar8 = strlen(cocostudio::P_ZOrder);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a8e4;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x18))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9a8e4:
    puVar2 = cocostudio::P_LayoutParameter;
    sVar8 = strlen(cocostudio::P_LayoutParameter);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a92c;
      }
      this_00 = (stExpCocoNode *)cocostudio::stExpCocoNode::GetChildArray(this,unaff_x22);
      this_01 = (LinearLayoutParameter *)cocos2d::ui::LinearLayoutParameter::create();
      this_02 = (RelativeLayoutParameter *)cocos2d::ui::RelativeLayoutParameter::create();
      cocos2d::ui::Margin::Margin((Margin *)&stack0x00000060);
      lVar10 = 0;
      iVar5 = -1;
      break;
    }
LAB_00c9a92c:
    puVar2 = cocostudio::P_Opacity;
    sVar8 = strlen(cocostudio::P_Opacity);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a974;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xec) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9a974:
    puVar2 = cocostudio::P_ColorR;
    sVar8 = strlen(cocostudio::P_ColorR);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9a9bc;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      WVar3 = (WidgetReader)(**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      unaff_x21[0xe8] = WVar3;
      goto joined_r0x00c9af34;
    }
LAB_00c9a9bc:
    puVar2 = cocostudio::P_ColorG;
    sVar8 = strlen(cocostudio::P_ColorG);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9aa04;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      WVar3 = (WidgetReader)(**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      unaff_x21[0xe9] = WVar3;
      goto joined_r0x00c9af34;
    }
LAB_00c9aa04:
    puVar2 = cocostudio::P_ColorB;
    sVar8 = strlen(cocostudio::P_ColorB);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9aa4c;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      WVar3 = (WidgetReader)(**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      unaff_x21[0xea] = WVar3;
      goto joined_r0x00c9af34;
    }
LAB_00c9aa4c:
    puVar2 = cocostudio::P_FlipX;
    sVar8 = strlen(cocostudio::P_FlipX);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9aa94;
      }
      plVar9 = *(long **)(unaff_x21 + 0x90);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x598))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9aa94:
    puVar2 = cocostudio::P_FlipY;
    sVar8 = strlen(cocostudio::P_FlipY);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9aadc;
      }
      plVar9 = *(long **)(unaff_x21 + 0x90);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      (**(code **)(*(long *)unaff_x19 + 0x5a8))();
      goto switchD_00c9ab8c_caseD_5;
    }
LAB_00c9aadc:
    puVar2 = cocostudio::P_AnchorPointX;
    sVar8 = strlen(cocostudio::P_AnchorPointX);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9ab24;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0xfc) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9ab24:
    puVar2 = cocostudio::P_AnchorPointY;
    sVar8 = strlen(cocostudio::P_AnchorPointY);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar9 = in_stack_00000040;
        if ((bVar4 & 1) != 0) {
          plVar9 = *(long **)(unaff_x29 + -0x78);
        }
        iVar5 = memcmp(plVar9,puVar2,sVar1);
        if (iVar5 != 0) goto LAB_00c9ab6c;
      }
      plVar9 = *(long **)(unaff_x21 + 0xc0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
      *(undefined4 *)(unaff_x21 + 0x100) = uVar12;
      goto joined_r0x00c9af34;
    }
LAB_00c9ab6c:
    switch(sVar1) {
    case 4:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      if ((int)*plVar9 == 0x74786574) {
        cocos2d::ui::TextField::setString(unaff_x19);
      }
      break;
    case 8:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      if (*plVar9 == 0x657a6953746e6f66) {
        plVar9 = *(long **)(unaff_x21 + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        iVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
        cocos2d::ui::TextField::setFontSize((TextField *)unaff_x19,iVar5);
      }
      else if (*plVar9 == 0x656d614e746e6f66) {
        cocos2d::ui::TextField::setFontName((TextField *)unaff_x19,(basic_string *)&stack0x00000090)
        ;
      }
      break;
    case 9:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      iVar5 = memcmp(plVar9,"maxLength",9);
      if (iVar5 == 0) {
        plVar9 = *(long **)(unaff_x21 + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        iVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
        cocos2d::ui::TextField::setMaxLength((TextField *)unaff_x19,iVar5);
      }
      break;
    case 0xb:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      iVar5 = memcmp(plVar9,"placeHolder",0xb);
      if (iVar5 == 0) {
        cocos2d::ui::TextField::setPlaceHolder(unaff_x19);
      }
      break;
    case 0xe:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      iVar5 = memcmp(plVar9,"touchSizeWidth",0xe);
      if (iVar5 == 0) {
        plVar9 = *(long **)(unaff_x21 + 0xc0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        fVar14 = (float)(**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
        cocos2d::ui::TextField::getTouchSize();
        cocos2d::Size::Size((Size *)&stack0x00000070,fVar14,fStack000000000000004c);
        cocos2d::ui::TextField::setTouchSize((TextField *)unaff_x19,(Size *)&stack0x00000070);
      }
      else {
        iVar5 = memcmp(plVar9,"passwordEnable",0xe);
        if (iVar5 == 0) {
          plVar9 = *(long **)(unaff_x21 + 0x90);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          bVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
          cocos2d::ui::TextField::setPasswordEnabled((TextField *)unaff_x19,(bool)(bVar4 & 1));
        }
      }
      break;
    case 0xf:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      iVar5 = memcmp(plVar9,"touchSizeHeight",0xf);
      if (iVar5 == 0) {
        cocos2d::ui::TextField::getTouchSize();
        fVar14 = fStack0000000000000048;
        plVar9 = *(long **)(unaff_x21 + 0xc0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        fVar13 = (float)(**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
        cocos2d::Size::Size((Size *)&stack0x00000070,fVar14,fVar13);
        cocos2d::ui::TextField::setTouchSize((TextField *)unaff_x19,(Size *)&stack0x00000070);
      }
      else {
        iVar5 = memcmp(plVar9,"maxLengthEnable",0xf);
        if (iVar5 == 0) {
          plVar9 = *(long **)(unaff_x21 + 0x90);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          bVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000090);
          cocos2d::ui::TextField::setMaxLengthEnabled((TextField *)unaff_x19,(bool)(bVar4 & 1));
        }
      }
      break;
    case 0x11:
      plVar9 = in_stack_00000040;
      if ((bVar4 & 1) != 0) {
        plVar9 = *(long **)(unaff_x29 + -0x78);
      }
      iVar5 = memcmp(plVar9,"passwordStyleText",0x11);
      if (iVar5 == 0) {
        pcVar7 = in_stack_00000028;
        if (((byte)bStack0000000000000090 & 1) != 0) {
          pcVar7 = in_stack_000000a0;
        }
        cocos2d::ui::TextField::setPasswordStyleText((TextField *)unaff_x19,pcVar7);
      }
    }
  } while( true );
LAB_00c9b01c:
  iVar6 = cocostudio::stExpCocoNode::GetChildNum(this);
  if (iVar6 <= lVar10) goto LAB_00c9b4a8;
  pcVar7 = (char *)cocostudio::stExpCocoNode::GetName(this_00,unaff_x22);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000070,pcVar7);
  pcVar7 = (char *)cocostudio::stExpCocoNode::GetValue(this_00,unaff_x22);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &stack0x00000048,pcVar7);
  puVar2 = cocostudio::P_Type;
  sVar8 = strlen(cocostudio::P_Type);
  uVar11 = in_stack_00000070;
  sVar1 = in_stack_00000070 >> 1 & 0x7f;
  if ((in_stack_00000070 & 1) != 0) {
    sVar1 = in_stack_00000078;
  }
  if (sVar8 == sVar1) {
    if (sVar8 != 0) {
      if (sVar8 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      pcVar7 = in_stack_00000030;
      if ((in_stack_00000070 & 1) != 0) {
        pcVar7 = in_stack_00000080;
      }
      iVar6 = memcmp(pcVar7,puVar2,sVar8);
      if (iVar6 != 0) goto LAB_00c9b0c0;
    }
    plVar9 = *(long **)(unaff_x21 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    iVar5 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
  }
  else {
LAB_00c9b0c0:
    puVar2 = cocostudio::P_Gravity;
    sVar8 = strlen(cocostudio::P_Gravity);
    if (sVar8 == sVar1) {
      if (sVar1 != 0) {
        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pcVar7 = in_stack_00000030;
        if ((uVar11 & 1) != 0) {
          pcVar7 = in_stack_00000080;
        }
        iVar6 = memcmp(pcVar7,puVar2,sVar1);
        if (iVar6 != 0) goto LAB_00c9b108;
      }
      plVar9 = *(long **)(unaff_x21 + 0x60);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
      cocos2d::ui::LinearLayoutParameter::setGravity(this_01,uVar12);
    }
    else {
LAB_00c9b108:
      puVar2 = cocostudio::P_RelativeName;
      sVar8 = strlen(cocostudio::P_RelativeName);
      if (sVar8 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pcVar7 = in_stack_00000030;
          if ((uVar11 & 1) != 0) {
            pcVar7 = in_stack_00000080;
          }
          iVar6 = memcmp(pcVar7,puVar2,sVar1);
          if (iVar6 != 0) goto LAB_00c9b150;
        }
        cocos2d::ui::RelativeLayoutParameter::setRelativeName
                  (this_02,(basic_string *)&stack0x00000048);
      }
      else {
LAB_00c9b150:
        puVar2 = cocostudio::P_RelativeToName;
        sVar8 = strlen(cocostudio::P_RelativeToName);
        if (sVar8 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pcVar7 = in_stack_00000030;
            if ((uVar11 & 1) != 0) {
              pcVar7 = in_stack_00000080;
            }
            iVar6 = memcmp(pcVar7,puVar2,sVar1);
            if (iVar6 != 0) goto LAB_00c9b198;
          }
          cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                    (this_02,(basic_string *)&stack0x00000048);
        }
        else {
LAB_00c9b198:
          puVar2 = cocostudio::P_Align;
          sVar8 = strlen(cocostudio::P_Align);
          if (sVar8 == sVar1) {
            if (sVar1 != 0) {
              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              pcVar7 = in_stack_00000030;
              if ((uVar11 & 1) != 0) {
                pcVar7 = in_stack_00000080;
              }
              iVar6 = memcmp(pcVar7,puVar2,sVar1);
              if (iVar6 != 0) goto LAB_00c9b1e0;
            }
            plVar9 = *(long **)(unaff_x21 + 0x60);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar12 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
            cocos2d::ui::RelativeLayoutParameter::setAlign(this_02,uVar12);
          }
          else {
LAB_00c9b1e0:
            puVar2 = cocostudio::P_MarginLeft;
            sVar8 = strlen(cocostudio::P_MarginLeft);
            if (sVar8 == sVar1) {
              if (sVar1 != 0) {
                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                pcVar7 = in_stack_00000030;
                if ((uVar11 & 1) != 0) {
                  pcVar7 = in_stack_00000080;
                }
                iVar6 = memcmp(pcVar7,puVar2,sVar1);
                if (iVar6 != 0) goto LAB_00c9b228;
              }
              plVar9 = *(long **)(unaff_x21 + 0xc0);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uStack0000000000000060 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
            }
            else {
LAB_00c9b228:
              puVar2 = cocostudio::P_MarginTop;
              sVar8 = strlen(cocostudio::P_MarginTop);
              if (sVar8 == sVar1) {
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pcVar7 = in_stack_00000030;
                  if ((uVar11 & 1) != 0) {
                    pcVar7 = in_stack_00000080;
                  }
                  iVar6 = memcmp(pcVar7,puVar2,sVar1);
                  if (iVar6 != 0) goto LAB_00c9b270;
                }
                plVar9 = *(long **)(unaff_x21 + 0xc0);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uStack0000000000000064 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
              }
              else {
LAB_00c9b270:
                puVar2 = cocostudio::P_MarginRight;
                sVar8 = strlen(cocostudio::P_MarginRight);
                if (sVar8 == sVar1) {
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pcVar7 = in_stack_00000030;
                    if ((uVar11 & 1) != 0) {
                      pcVar7 = in_stack_00000080;
                    }
                    iVar6 = memcmp(pcVar7,puVar2,sVar1);
                    if (iVar6 != 0) goto LAB_00c9b2b8;
                  }
                  plVar9 = *(long **)(unaff_x21 + 0xc0);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uStack0000000000000068 = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
                }
                else {
LAB_00c9b2b8:
                  puVar2 = cocostudio::P_MarginDown;
                  sVar8 = strlen(cocostudio::P_MarginDown);
                  if (sVar8 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pcVar7 = in_stack_00000030;
                      if ((uVar11 & 1) != 0) {
                        pcVar7 = in_stack_00000080;
                      }
                      iVar6 = memcmp(pcVar7,puVar2,sVar1);
                      if (iVar6 != 0) goto joined_r0x00c9b3f8;
                    }
                    plVar9 = *(long **)(unaff_x21 + 0xc0);
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uStack000000000000006c = (**(code **)(*plVar9 + 0x30))(plVar9,&stack0x00000048);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
joined_r0x00c9b3f8:
  if (((uint)fStack0000000000000048 & 1) != 0) {
    operator_delete(in_stack_00000058);
  }
  if ((in_stack_00000070 & 1) != 0) {
    operator_delete(in_stack_00000080);
  }
  lVar10 = lVar10 + 1;
  this_00 = this_00 + 0x10;
  goto LAB_00c9b01c;
LAB_00c9b4a8:
  cocos2d::ui::LayoutParameter::setMargin((LayoutParameter *)this_01,(Margin *)&stack0x00000060);
  cocos2d::ui::LayoutParameter::setMargin((LayoutParameter *)this_02,(Margin *)&stack0x00000060);
  if (iVar5 == 1) {
    cocos2d::ui::Widget::setLayoutParameter((Widget *)unaff_x19,(LayoutParameter *)this_01);
  }
  else if (iVar5 == 2) {
    cocos2d::ui::Widget::setLayoutParameter((Widget *)unaff_x19,(LayoutParameter *)this_02);
  }
  goto switchD_00c9ab8c_caseD_5;
}

