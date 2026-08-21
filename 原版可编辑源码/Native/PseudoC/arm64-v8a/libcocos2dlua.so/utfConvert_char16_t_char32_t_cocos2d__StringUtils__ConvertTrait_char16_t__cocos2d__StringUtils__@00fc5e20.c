
/* bool cocos2d::StringUtils::utfConvert<char16_t, char32_t,
   cocos2d::StringUtils::ConvertTrait<char16_t>, cocos2d::StringUtils::ConvertTrait<char32_t>
   >(std::__ndk1::basic_string<char16_t, std::__ndk1::char_traits<char16_t>,
   std::__ndk1::allocator<char16_t> > const&, std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> >&, ConversionResult
   (*)(cocos2d::StringUtils::ConvertTrait<char16_t>::ArgType const**,
   cocos2d::StringUtils::ConvertTrait<char16_t>::ArgType const*,
   cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType**,
   cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType*, ConversionFlags)) */

bool cocos2d::StringUtils::
     utfConvert<char16_t,char32_t,cocos2d::StringUtils::ConvertTrait<char16_t>,cocos2d::StringUtils::ConvertTrait<char32_t>>
               (basic_string *param_1,basic_string *param_2,
               _func_ConversionResult_ArgType_ptr_ptr_ArgType_ptr_ArgType_ptr_ptr_ArgType_ptr_ConversionFlags_conflict2
               *param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
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
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  uVar10 = *(ulong *)(param_1 + 8);
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = uVar10;
  }
  if (uVar2 == 0) {
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
    uVar11 = uVar2 & 0x3fffffffffffffff;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    local_80 = 0;
    if (0x3fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar11 < 5) {
      pAVar9 = (ArgType *)((ulong)&local_80 | 4);
      local_80 = (ulong)(byte)((int)uVar2 << 1);
      if (uVar11 != 0) goto LAB_00fc5ee4;
    }
    else {
      if (uVar11 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar12 = uVar11 + 4 & 0x7ffffffffffffffc;
      pAVar9 = operator_new(uVar12 << 2);
      local_80 = uVar12 | 1;
      uStack_78 = uVar11;
      local_70 = pAVar9;
LAB_00fc5ee4:
      memset(pAVar9,0,uVar2 << 2);
    }
    *(undefined4 *)(pAVar9 + uVar2 * 4) = 0;
    local_88 = param_1 + 2;
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      local_88 = *(basic_string **)(param_1 + 0x10);
      uVar2 = uVar10;
    }
    local_90 = local_70;
    uVar10 = uStack_78;
    if ((local_80 & 1) == 0) {
      local_90 = (ArgType *)((ulong)&local_80 | 4);
      uVar10 = local_80 >> 1 & 0x7f;
    }
    cVar6 = (*param_3)((ArgType **)&local_88,(ArgType *)(local_88 + uVar2 * 2),&local_90,
                       local_90 + uVar10 * 4,0);
    if (cVar6 != '\0') {
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      bVar5 = false;
      goto LAB_00fc60b4;
    }
    bVar5 = (local_80 & 1) != 0;
    pAVar9 = (ArgType *)((ulong)&local_80 | 4);
    if (bVar5) {
      pAVar9 = local_70;
    }
    uVar10 = local_80 >> 1 & 0x7f;
    uVar11 = (long)local_90 - (long)pAVar9;
    uVar2 = uVar10;
    if (bVar5) {
      uVar2 = uStack_78;
    }
    uVar8 = (long)uVar11 >> 2;
    uVar12 = uVar8 - uVar2;
    if (uVar8 < uVar2 || uVar12 == 0) {
      if ((local_80 & 1) == 0) {
        *(undefined4 *)((long)&local_80 + uVar8 * 4 + 4) = 0;
        local_80 = CONCAT71(local_80._1_7_,(char)(uVar11 >> 1));
        goto LAB_00fc5fd0;
      }
      *(undefined4 *)(local_70 + uVar8 * 4) = 0;
      uStack_78 = uVar8;
      if (((byte)*param_2 & 1) != 0) goto LAB_00fc6078;
LAB_00fc5fd8:
      *(undefined4 *)(param_2 + 4) = 0;
      *param_2 = (basic_string)0x0;
    }
    else {
      if (uVar12 == 0) {
LAB_00fc5fd0:
        bVar3 = *param_2;
      }
      else {
        if ((local_80 & 1) == 0) {
          uVar7 = 4;
          uVar8 = local_80 & 0xff;
        }
        else {
          uVar7 = (local_80 & 0xfffffffffffffffe) - 1;
          uVar8 = local_80;
          uVar10 = uStack_78;
        }
        uVar1 = uVar10 + uVar12;
        if (uVar7 - uVar10 < uVar12) {
          std::__ndk1::
          basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
          ::__grow_by((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
                       *)&local_80,uVar7,uVar1 - uVar7,uVar10,uVar10,0,0);
          uVar8 = local_80 & 0xff;
        }
        pAVar9 = (ArgType *)((ulong)&local_80 | 4);
        if ((uVar8 & 1) != 0) {
          pAVar9 = local_70;
        }
        memset(pAVar9 + uVar10 * 4,0,uVar11 + uVar2 * -4);
        uVar2 = uVar1;
        if ((local_80 & 1) == 0) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
          uVar2 = uStack_78;
        }
        uStack_78 = uVar2;
        *(undefined4 *)(pAVar9 + uVar1 * 4) = 0;
        bVar3 = *param_2;
      }
      if (((byte)bVar3 & 1) == 0) goto LAB_00fc5fd8;
LAB_00fc6078:
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
  bVar5 = true;
LAB_00fc60b4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

