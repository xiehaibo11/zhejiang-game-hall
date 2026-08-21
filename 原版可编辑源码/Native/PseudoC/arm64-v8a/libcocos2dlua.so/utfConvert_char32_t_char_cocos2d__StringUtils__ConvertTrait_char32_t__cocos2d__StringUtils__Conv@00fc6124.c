
/* bool cocos2d::StringUtils::utfConvert<char32_t, char,
   cocos2d::StringUtils::ConvertTrait<char32_t>, cocos2d::StringUtils::ConvertTrait<char>
   >(std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, ConversionResult
   (*)(cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType const**,
   cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType const*,
   cocos2d::StringUtils::ConvertTrait<char>::ArgType**,
   cocos2d::StringUtils::ConvertTrait<char>::ArgType*, ConversionFlags)) */

bool cocos2d::StringUtils::
     utfConvert<char32_t,char,cocos2d::StringUtils::ConvertTrait<char32_t>,cocos2d::StringUtils::ConvertTrait<char>>
               (basic_string *param_1,basic_string *param_2,
               _func_ConversionResult_ArgType_ptr_ptr_ArgType_ptr_ArgType_ptr_ptr_ArgType_ptr_ConversionFlags_conflict3
               *param_3)

{
  basic_string bVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ArgType *pAVar7;
  ArgType *local_80;
  basic_string *local_78;
  undefined8 local_70;
  ulong uStack_68;
  ArgType *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  uVar5 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if (uVar5 == 0) {
    if (((byte)*param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  else {
    uVar6 = uVar5 * 4;
    uStack_68 = 0;
    local_60 = (ArgType *)0x0;
    local_70 = 0;
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar6 < 0x17) {
      pAVar7 = (ArgType *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)uVar5 << 3);
      if (uVar6 != 0) goto LAB_00fc61e4;
      *pAVar7 = (ArgType)0x0;
      if (((byte)bVar1 & 1) != 0) goto LAB_00fc61fc;
LAB_00fc61a8:
      local_78 = param_1 + 4;
      uVar5 = (ulong)((byte)bVar1 >> 1);
    }
    else {
      uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pAVar7 = operator_new(uVar5);
      local_70 = uVar5 | 1;
      uStack_68 = uVar6;
      local_60 = pAVar7;
LAB_00fc61e4:
      memset(pAVar7,0,uVar6);
      pAVar7[uVar6] = (ArgType)0x0;
      if (((byte)bVar1 & 1) == 0) goto LAB_00fc61a8;
LAB_00fc61fc:
      uVar5 = *(ulong *)(param_1 + 8);
      local_78 = *(basic_string **)(param_1 + 0x10);
    }
    local_80 = local_60;
    uVar6 = uStack_68;
    if ((local_70 & 1) == 0) {
      local_80 = (ArgType *)((ulong)&local_70 | 1);
      uVar6 = local_70 >> 1 & 0x7f;
    }
    cVar3 = (*param_3)((ArgType **)&local_78,(ArgType *)(local_78 + uVar5 * 4),&local_80,
                       local_80 + uVar6,0);
    if (cVar3 != '\0') {
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      bVar4 = false;
      goto LAB_00fc6324;
    }
    uVar5 = local_70 >> 1 & 0x7f;
    pAVar7 = (ArgType *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar5 = uStack_68;
      pAVar7 = local_60;
    }
    uVar6 = (long)local_80 - (long)pAVar7;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      if ((local_70 & 1) != 0) {
        local_60[uVar6] = (ArgType)0x0;
        bVar1 = *param_2;
        uStack_68 = uVar6;
        goto joined_r0x00fc62e4;
      }
      *(undefined1 *)((long)&local_70 + uVar6 + 1) = 0;
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar6 << 1));
      if (((byte)*param_2 & 1) == 0) goto LAB_00fc629c;
LAB_00fc62e8:
      **(undefined1 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      if (((byte)*param_2 & 1) != 0) {
        operator_delete(*(void **)(param_2 + 0x10));
        *(undefined8 *)param_2 = 0;
      }
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,uVar6 - uVar5,'\0');
      bVar1 = *param_2;
joined_r0x00fc62e4:
      if (((byte)bVar1 & 1) != 0) goto LAB_00fc62e8;
LAB_00fc629c:
      *(undefined2 *)param_2 = 0;
    }
    *(ArgType **)(param_2 + 0x10) = local_60;
    *(ulong *)(param_2 + 8) = uStack_68;
    *(ulong *)param_2 = local_70;
    uStack_68 = 0;
    local_60 = (ArgType *)0x0;
    local_70 = 0;
  }
  bVar4 = true;
LAB_00fc6324:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}

