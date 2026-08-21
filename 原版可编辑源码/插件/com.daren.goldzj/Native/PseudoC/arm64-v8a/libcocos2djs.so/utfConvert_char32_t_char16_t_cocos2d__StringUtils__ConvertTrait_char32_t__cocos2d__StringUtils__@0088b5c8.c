
/* bool cocos2d::StringUtils::utfConvert<char32_t, char16_t,
   cocos2d::StringUtils::ConvertTrait<char32_t>, cocos2d::StringUtils::ConvertTrait<char16_t>
   >(std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> > const&, std::__ndk1::basic_string<char16_t,
   std::__ndk1::char_traits<char16_t>, std::__ndk1::allocator<char16_t> >&, ConversionResult
   (*)(cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType const**,
   cocos2d::StringUtils::ConvertTrait<char32_t>::ArgType const*,
   cocos2d::StringUtils::ConvertTrait<char16_t>::ArgType**,
   cocos2d::StringUtils::ConvertTrait<char16_t>::ArgType*, ConversionFlags)) */

bool cocos2d::StringUtils::
     utfConvert<char32_t,char16_t,cocos2d::StringUtils::ConvertTrait<char32_t>,cocos2d::StringUtils::ConvertTrait<char16_t>>
               (basic_string *param_1,basic_string *param_2,
               _func_ConversionResult_ArgType_ptr_ptr_ArgType_ptr_ArgType_ptr_ptr_ArgType_ptr_ConversionFlags_conflict4
               *param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ArgType *pAVar11;
  ulong uVar12;
  ArgType *local_90;
  basic_string *local_88;
  undefined8 local_80;
  ulong uStack_78;
  ArgType *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar3 = *param_1;
  uVar12 = *(ulong *)(param_1 + 8);
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = uVar12;
  }
  if (uVar2 == 0) {
    if (((byte)*param_2 & 1) == 0) {
      *(undefined2 *)(param_2 + 2) = 0;
      *param_2 = (basic_string)0x0;
    }
    else {
      **(undefined2 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
  }
  else {
    uVar4 = (uVar2 & 0x3fffffffffffffff) * 2;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar4 < 0xb) {
      pAVar11 = (ArgType *)((ulong)&local_80 | 2);
      local_80 = (ulong)(byte)((int)uVar2 << 2);
      if ((uVar2 & 0x3fffffffffffffff) != 0) goto LAB_0088b6a4;
    }
    else {
      if ((long)(uVar4 + 8) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      uVar9 = uVar4 + 8 & 0xfffffffffffffff8;
      pAVar11 = operator_new(uVar9 << 1);
      local_80 = uVar9 | 1;
      uStack_78 = uVar4;
      local_70 = pAVar11;
LAB_0088b6a4:
      memset(pAVar11,0,uVar2 << 2);
    }
    *(undefined2 *)(pAVar11 + uVar2 * 4) = 0;
    local_88 = param_1 + 4;
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      local_88 = *(basic_string **)(param_1 + 0x10);
      uVar2 = uVar12;
    }
    local_90 = local_70;
    uVar12 = uStack_78;
    if ((local_80 & 1) == 0) {
      local_90 = (ArgType *)((ulong)&local_80 | 2);
      uVar12 = local_80 >> 1 & 0x7f;
    }
    cVar7 = (*param_3)((ArgType **)&local_88,(ArgType *)(local_88 + uVar2 * 4),&local_90,
                       local_90 + uVar12 * 2,0);
    if (cVar7 != '\0') {
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      bVar6 = false;
      goto LAB_0088b874;
    }
    bVar6 = (local_80 & 1) != 0;
    pAVar11 = (ArgType *)((ulong)&local_80 | 2);
    if (bVar6) {
      pAVar11 = local_70;
    }
    uVar12 = local_80 >> 1 & 0x7f;
    lVar10 = (long)local_90 - (long)pAVar11;
    uVar2 = uVar12;
    if (bVar6) {
      uVar2 = uStack_78;
    }
    uVar9 = lVar10 >> 1;
    uVar4 = uVar9 - uVar2;
    if (uVar9 < uVar2 || uVar4 == 0) {
      if ((local_80 & 1) == 0) {
        *(undefined2 *)((long)&local_80 + uVar9 * 2 + 2) = 0;
        local_80 = CONCAT71(local_80._1_7_,(char)lVar10) & 0xfffffffffffffffe;
        goto LAB_0088b790;
      }
      *(undefined2 *)(local_70 + uVar9 * 2) = 0;
      uStack_78 = uVar9;
      if (((byte)*param_2 & 1) != 0) goto LAB_0088b838;
LAB_0088b798:
      *(undefined2 *)(param_2 + 2) = 0;
      *param_2 = (basic_string)0x0;
    }
    else {
      if (uVar4 == 0) {
LAB_0088b790:
        bVar3 = *param_2;
      }
      else {
        if ((local_80 & 1) == 0) {
          uVar8 = 10;
          uVar9 = local_80 & 0xff;
        }
        else {
          uVar8 = (local_80 & 0xfffffffffffffffe) - 1;
          uVar9 = local_80;
          uVar12 = uStack_78;
        }
        uVar1 = uVar12 + uVar4;
        if (uVar8 - uVar12 < uVar4) {
          std::__ndk1::
          basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
          ::__grow_by((basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
                       *)&local_80,uVar8,uVar1 - uVar8,uVar12,uVar12,0,0);
          uVar9 = local_80 & 0xff;
        }
        pAVar11 = (ArgType *)((ulong)&local_80 | 2);
        if ((uVar9 & 1) != 0) {
          pAVar11 = local_70;
        }
        memset(pAVar11 + uVar12 * 2,0,lVar10 + uVar2 * -2);
        uVar2 = uVar1;
        if ((local_80 & 1) == 0) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
          uVar2 = uStack_78;
        }
        uStack_78 = uVar2;
        *(undefined2 *)(pAVar11 + uVar1 * 2) = 0;
        bVar3 = *param_2;
      }
      if (((byte)bVar3 & 1) == 0) goto LAB_0088b798;
LAB_0088b838:
      **(undefined2 **)(param_2 + 0x10) = 0;
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
  bVar6 = true;
LAB_0088b874:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}

