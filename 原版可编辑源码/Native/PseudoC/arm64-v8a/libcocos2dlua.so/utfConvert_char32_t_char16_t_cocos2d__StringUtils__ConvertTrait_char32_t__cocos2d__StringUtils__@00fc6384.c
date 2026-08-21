
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
  long lVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ArgType *pAVar10;
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
  uVar11 = *(ulong *)(param_1 + 8);
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = uVar11;
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
    uVar12 = uVar2 * 2 & 0x7ffffffffffffffe;
    uStack_78 = 0;
    local_70 = (ArgType *)0x0;
    local_80 = 0;
    if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar12 < 0xb) {
      pAVar10 = (ArgType *)((ulong)&local_80 | 2);
      local_80 = (ulong)(byte)((int)uVar2 << 2);
      if (uVar12 != 0) goto LAB_00fc645c;
    }
    else {
      uVar8 = uVar2 * 2 + 8 & 0x7ffffffffffffff8;
      pAVar10 = operator_new(uVar8 << 1);
      local_80 = uVar8 | 1;
      uStack_78 = uVar12;
      local_70 = pAVar10;
LAB_00fc645c:
      memset(pAVar10,0,uVar2 << 2);
    }
    *(undefined2 *)(pAVar10 + uVar2 * 4) = 0;
    local_88 = param_1 + 4;
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      local_88 = *(basic_string **)(param_1 + 0x10);
      uVar2 = uVar11;
    }
    local_90 = local_70;
    uVar11 = uStack_78;
    if ((local_80 & 1) == 0) {
      local_90 = (ArgType *)((ulong)&local_80 | 2);
      uVar11 = local_80 >> 1 & 0x7f;
    }
    cVar6 = (*param_3)((ArgType **)&local_88,(ArgType *)(local_88 + uVar2 * 4),&local_90,
                       local_90 + uVar11 * 2,0);
    if (cVar6 != '\0') {
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      bVar5 = false;
      goto LAB_00fc662c;
    }
    bVar5 = (local_80 & 1) != 0;
    pAVar10 = (ArgType *)((ulong)&local_80 | 2);
    if (bVar5) {
      pAVar10 = local_70;
    }
    uVar11 = local_80 >> 1 & 0x7f;
    lVar9 = (long)local_90 - (long)pAVar10;
    uVar2 = uVar11;
    if (bVar5) {
      uVar2 = uStack_78;
    }
    uVar8 = lVar9 >> 1;
    uVar12 = uVar8 - uVar2;
    if (uVar8 < uVar2 || uVar12 == 0) {
      if ((local_80 & 1) == 0) {
        *(undefined2 *)((long)&local_80 + uVar8 * 2 + 2) = 0;
        local_80 = CONCAT71(local_80._1_7_,(char)lVar9) & 0xfffffffffffffffe;
        goto LAB_00fc6548;
      }
      *(undefined2 *)(local_70 + uVar8 * 2) = 0;
      uStack_78 = uVar8;
      if (((byte)*param_2 & 1) != 0) goto LAB_00fc65f0;
LAB_00fc6550:
      *(undefined2 *)(param_2 + 2) = 0;
      *param_2 = (basic_string)0x0;
    }
    else {
      if (uVar12 == 0) {
LAB_00fc6548:
        bVar3 = *param_2;
      }
      else {
        if ((local_80 & 1) == 0) {
          uVar7 = 10;
          uVar8 = local_80 & 0xff;
        }
        else {
          uVar7 = (local_80 & 0xfffffffffffffffe) - 1;
          uVar8 = local_80;
          uVar11 = uStack_78;
        }
        uVar1 = uVar11 + uVar12;
        if (uVar7 - uVar11 < uVar12) {
          std::__ndk1::
          basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
          ::__grow_by((basic_string<char16_t,std::__ndk1::char_traits<char16_t>,std::__ndk1::allocator<char16_t>>
                       *)&local_80,uVar7,uVar1 - uVar7,uVar11,uVar11,0,0);
          uVar8 = local_80 & 0xff;
        }
        pAVar10 = (ArgType *)((ulong)&local_80 | 2);
        if ((uVar8 & 1) != 0) {
          pAVar10 = local_70;
        }
        memset(pAVar10 + uVar11 * 2,0,lVar9 + uVar2 * -2);
        uVar2 = uVar1;
        if ((local_80 & 1) == 0) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
          uVar2 = uStack_78;
        }
        uStack_78 = uVar2;
        *(undefined2 *)(pAVar10 + uVar1 * 2) = 0;
        bVar3 = *param_2;
      }
      if (((byte)bVar3 & 1) == 0) goto LAB_00fc6550;
LAB_00fc65f0:
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
  bVar5 = true;
LAB_00fc662c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

