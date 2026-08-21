
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
  ulong __n;
  ArgType *pAVar5;
  ulong uVar6;
  ulong uVar7;
  ArgType *local_90;
  basic_string *local_88;
  undefined8 local_80;
  ulong uStack_78;
  ArgType *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  uVar7 = *(ulong *)(param_1 + 8);
  uVar6 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    uVar6 = uVar7;
  }
  if (uVar6 == 0) {
    if (((byte)*param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  else {
    __n = uVar6 * 4;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pAVar5 = (ArgType *)((ulong)&local_80 | 1);
      local_80 = (ulong)(byte)((int)uVar6 << 3);
      if (__n != 0) goto LAB_0088b418;
    }
    else {
      uVar6 = __n + 0x10 & 0xfffffffffffffff0;
      pAVar5 = operator_new(uVar6);
      local_80 = uVar6 | 1;
      uStack_78 = __n;
      local_70 = pAVar5;
LAB_0088b418:
      memset(pAVar5,0,__n);
    }
    pAVar5[__n] = (ArgType)0x0;
    local_88 = param_1 + 4;
    uVar6 = (ulong)((byte)bVar1 >> 1);
    if (((byte)bVar1 & 1) != 0) {
      local_88 = *(basic_string **)(param_1 + 0x10);
      uVar6 = uVar7;
    }
    local_90 = local_70;
    uVar7 = uStack_78;
    if ((local_80 & 1) == 0) {
      local_90 = (ArgType *)((ulong)&local_80 | 1);
      uVar7 = local_80 >> 1 & 0x7f;
    }
    cVar3 = (*param_3)((ArgType **)&local_88,(ArgType *)(local_88 + uVar6 * 4),&local_90,
                       local_90 + uVar7,0);
    if (cVar3 != '\0') {
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      bVar4 = false;
      goto LAB_0088b564;
    }
    uVar6 = local_80 >> 1 & 0x7f;
    pAVar5 = (ArgType *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar6 = uStack_78;
      pAVar5 = local_70;
    }
    uVar7 = (long)local_90 - (long)pAVar5;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      if ((local_80 & 1) != 0) {
        local_70[uVar7] = (ArgType)0x0;
        bVar1 = *param_2;
        uStack_78 = uVar7;
        goto joined_r0x0088b524;
      }
      *(undefined1 *)((long)&local_80 + uVar7 + 1) = 0;
      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar7 << 1));
      if (((byte)*param_2 & 1) == 0) goto LAB_0088b4dc;
LAB_0088b528:
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
             &local_80,uVar7 - uVar6,'\0');
      bVar1 = *param_2;
joined_r0x0088b524:
      if (((byte)bVar1 & 1) != 0) goto LAB_0088b528;
LAB_0088b4dc:
      *(undefined2 *)param_2 = 0;
    }
    *(ArgType **)(param_2 + 0x10) = local_70;
    *(ulong *)(param_2 + 8) = uStack_78;
    *(ulong *)param_2 = local_80;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    local_80 = 0;
  }
  bVar4 = true;
LAB_0088b564:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}

