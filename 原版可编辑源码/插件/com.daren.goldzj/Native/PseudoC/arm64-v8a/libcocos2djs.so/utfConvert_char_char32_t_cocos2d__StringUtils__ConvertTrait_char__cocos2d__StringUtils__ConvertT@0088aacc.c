
/* bool cocos2d::StringUtils::utfConvert<char, char32_t, cocos2d::StringUtils::ConvertTrait<char>,
   cocos2d::StringUtils::ConvertTrait<char32_t> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >&, ConversionResult
   (*)(cocos2d::StringUtils::ConvertTrait<char>::ArgType const**,
   cocos2d::StringUtils::ConvertTrait<char>::ArgType const*,
   cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType**,
   cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType*, ConversionFlags)) */

bool cocos2d::StringUtils::
     utfConvert<char,char32_t,cocos2d::StringUtils::ConvertTrait<char>,cocos2d::StringUtils::ConvertTrait<char32_t>>
               (basic_string *param_1,basic_string *param_2,
               _func_ConversionResult_ArgType_ptr_ptr_ArgType_ptr_ArgType_ptr_ptr_ArgType_ptr_ConversionFlags_conflict
               *param_3)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ArgType *pAVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ArgType *local_90;
  basic_string *local_88;
  undefined8 local_80;
  ulong uStack_78;
  ArgType *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar11 = *(ulong *)(param_1 + 8);
  uVar7 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    if (((byte)*param_2 & 1) == 0) {
      *(undefined4 *)(param_2 + 4) = 0;
      *param_2 = (basic_string)0x0;
    }
    else {
      **(undefined4 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  else {
    uVar12 = uVar7 & 0x3fffffffffffffff;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    if (0x3fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar12 < 5) {
      pAVar9 = (ArgType *)((ulong)&local_80 | 4);
      local_80 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar12 != 0) goto LAB_0088aba8;
    }
    else {
      if (uVar12 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar10 = uVar12 + 4 & 0x7ffffffffffffffc;
      pAVar9 = operator_new(uVar10 << 2);
      local_80 = uVar10 | 1;
      uStack_78 = uVar12;
      local_70 = pAVar9;
LAB_0088aba8:
      memset(pAVar9,0,uVar7 << 2);
    }
    *(undefined4 *)(pAVar9 + uVar7 * 4) = 0;
    local_88 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      local_88 = param_1 + 1;
      uVar11 = (ulong)((byte)bVar2 >> 1);
    }
    local_90 = local_70;
    uVar7 = uStack_78;
    if ((local_80 & 1) == 0) {
      local_90 = (ArgType *)((ulong)&local_80 | 4);
      uVar7 = local_80 >> 1 & 0x7f;
    }
    cVar5 = (*param_3)((ArgType **)&local_88,(ArgType *)(local_88 + uVar11),&local_90,
                       local_90 + uVar7 * 4,0);
    if (cVar5 != '\0') {
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      bVar4 = false;
      goto LAB_0088ad74;
    }
    bVar4 = (local_80 & 1) != 0;
    pAVar9 = (ArgType *)((ulong)&local_80 | 4);
    if (bVar4) {
      pAVar9 = local_70;
    }
    uVar11 = local_80 >> 1 & 0x7f;
    uVar12 = (long)local_90 - (long)pAVar9;
    uVar7 = uVar11;
    if (bVar4) {
      uVar7 = uStack_78;
    }
    uVar8 = (long)uVar12 >> 2;
    uVar10 = uVar8 - uVar7;
    if (uVar8 < uVar7 || uVar10 == 0) {
      if ((local_80 & 1) == 0) {
        *(undefined4 *)((long)&local_80 + uVar8 * 4 + 4) = 0;
        local_80 = CONCAT71(local_80._1_7_,(char)(uVar12 >> 1));
        goto LAB_0088ac90;
      }
      *(undefined4 *)(local_70 + uVar8 * 4) = 0;
      uStack_78 = uVar8;
      if (((byte)*param_2 & 1) != 0) goto LAB_0088ad38;
LAB_0088ac98:
      *(undefined4 *)(param_2 + 4) = 0;
      *param_2 = (basic_string)0x0;
    }
    else {
      if (uVar10 == 0) {
LAB_0088ac90:
        bVar2 = *param_2;
      }
      else {
        if ((local_80 & 1) == 0) {
          uVar6 = 4;
          uVar8 = local_80 & 0xff;
        }
        else {
          uVar6 = (local_80 & 0xfffffffffffffffe) - 1;
          uVar8 = local_80;
          uVar11 = uStack_78;
        }
        uVar1 = uVar11 + uVar10;
        if (uVar6 - uVar11 < uVar10) {
          std::__ndk1::
          basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
          ::__grow_by((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                       *)&local_80,uVar6,uVar1 - uVar6,uVar11,uVar11,0,0);
          uVar8 = local_80 & 0xff;
        }
        pAVar9 = (ArgType *)((ulong)&local_80 | 4);
        if ((uVar8 & 1) != 0) {
          pAVar9 = local_70;
        }
        memset(pAVar9 + uVar11 * 4,0,uVar12 + uVar7 * -4);
        uVar7 = uVar1;
        if ((local_80 & 1) == 0) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
          uVar7 = uStack_78;
        }
        uStack_78 = uVar7;
        *(undefined4 *)(pAVar9 + uVar1 * 4) = 0;
        bVar2 = *param_2;
      }
      if (((byte)bVar2 & 1) == 0) goto LAB_0088ac98;
LAB_0088ad38:
      **(undefined4 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      if (((byte)*param_2 & 1) != 0) {
        operator_delete(*(void **)(param_2 + 0x10));
        *(undefined8 *)param_2 = 0;
      }
    }
    *(ArgType **)(param_2 + 0x10) = local_70;
    *(ulong *)(param_2 + 8) = uStack_78;
    *(ulong *)param_2 = local_80;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    local_80 = 0;
  }
  bVar4 = true;
LAB_0088ad74:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}

