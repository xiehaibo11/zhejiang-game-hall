
/* cocos2d::PUScriptLexer::setToken(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<cocos2d::PUScriptToken*, std::__ndk1::allocator<cocos2d::PUScriptToken*> >*)
    */

void __thiscall
cocos2d::PUScriptLexer::setToken
          (PUScriptLexer *this,basic_string *param_1,int param_2,basic_string *param_3,
          vector *param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  basic_string bVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  undefined4 uVar7;
  basic_string *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pbVar6 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (pbVar6 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
    this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  }
  else {
    *(undefined8 *)(pbVar6 + 0x18) = 0;
    *(undefined8 *)(pbVar6 + 0x10) = 0;
    *(undefined8 *)(pbVar6 + 0x28) = 0;
    *(undefined8 *)(pbVar6 + 0x20) = 0;
    *(undefined8 *)(pbVar6 + 8) = 0;
    *(undefined8 *)pbVar6 = 0;
    this_01 = pbVar6;
  }
  local_60 = pbVar6;
  if (this_01 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar8 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01,(char *)pbVar8,uVar2);
  }
  this_00 = this_01 + 0x18;
  *(int *)(this_01 + 0x34) = param_2;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar8 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
      uVar2 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar8,uVar2);
  }
  bVar4 = *param_1;
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (uVar2 == 1) {
    if (((byte)bVar4 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if ((*pbVar8 == (basic_string)0xd) || (*pbVar8 == (basic_string)0xa)) {
      *(undefined4 *)(this_01 + 0x30) = 6;
      if ((*(long *)param_4 != *(long *)(param_4 + 8)) &&
         (*(int *)(*(long *)(*(long *)(param_4 + 8) + -8) + 0x30) == 6)) {
        if (((byte)*this_00 & 1) != 0) {
          operator_delete(*(void **)(this_01 + 0x28));
        }
        if (((byte)*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(this_01 + 0x10));
        }
        operator_delete(pbVar6);
        goto LAB_00e44ed0;
      }
    }
    else {
      pbVar8 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        pbVar8 = param_1 + 1;
      }
      if (*pbVar8 != (basic_string)0x7b) {
        pbVar8 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar4 & 1) == 0) {
          pbVar8 = param_1 + 1;
        }
        if (*pbVar8 == (basic_string)0x7d) {
          uVar7 = 1;
        }
        else {
          pbVar8 = *(basic_string **)(param_1 + 0x10);
          pbVar1 = pbVar8;
          if (((byte)bVar4 & 1) == 0) {
            pbVar1 = param_1 + 1;
          }
          if (*pbVar1 != (basic_string)0x3a) goto LAB_00e44e60;
          uVar7 = 2;
        }
        goto LAB_00e44ea8;
      }
      *(undefined4 *)(this_01 + 0x30) = 0;
    }
  }
  else {
LAB_00e44e60:
    if (((byte)bVar4 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if (*pbVar8 == (basic_string)0x24) {
      uVar7 = 3;
    }
    else if (((uVar2 < 2) || (*pbVar8 != (basic_string)0x22)) ||
            (pbVar8[uVar2 - 1] != (basic_string)0x22)) {
      uVar7 = 4;
    }
    else {
      uVar7 = 5;
    }
LAB_00e44ea8:
    *(undefined4 *)(this_01 + 0x30) = uVar7;
  }
  puVar3 = *(undefined8 **)(param_4 + 8);
  if (puVar3 == *(undefined8 **)(param_4 + 0x10)) {
    std::__ndk1::vector<cocos2d::PUScriptToken*,std::__ndk1::allocator<cocos2d::PUScriptToken*>>::
    __push_back_slow_path<cocos2d::PUScriptToken*const&>
              ((vector<cocos2d::PUScriptToken*,std::__ndk1::allocator<cocos2d::PUScriptToken*>> *)
               param_4,(PUScriptToken **)&local_60);
  }
  else {
    *puVar3 = this_01;
    *(undefined8 **)(param_4 + 8) = puVar3 + 1;
  }
LAB_00e44ed0:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

