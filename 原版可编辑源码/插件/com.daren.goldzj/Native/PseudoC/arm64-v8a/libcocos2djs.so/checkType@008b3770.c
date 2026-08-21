
/* JavaScriptJavaBridge::CallInfo::checkType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) */

undefined4 __thiscall
JavaScriptJavaBridge::CallInfo::checkType(CallInfo *this,basic_string *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong __n;
  basic_string bVar2;
  size_t sVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  basic_string *pbVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar2 = *param_1;
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  uVar10 = *param_2;
  if (((byte)bVar2 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  uVar9 = 2;
  switch(pbVar8[uVar10]) {
  case (basic_string)0x46:
    uVar9 = 4;
    break;
  default:
    uVar7 = 0xffffffff;
    goto LAB_008b389c;
  case (basic_string)0x49:
    break;
  case (basic_string)0x4a:
    uVar9 = 3;
    break;
  case (basic_string)0x4c:
    uVar12 = uVar10 + 1;
    uVar11 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar11 = *(ulong *)(param_1 + 8);
    }
    sVar3 = uVar11 - uVar12;
    if ((((uVar12 <= uVar11 && sVar3 != 0) && (sVar3 != 0)) &&
        (pvVar6 = memchr(pbVar8 + uVar12,0x3b,sVar3), pvVar6 != (void *)0x0)) &&
       (uVar12 = (long)pvVar6 - (long)pbVar8, uVar12 != 0xffffffffffffffff)) {
      local_70 = 0;
      local_68 = 0;
      local_60 = (void *)0x0;
      if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar1 = (uVar12 - uVar10) + 1;
      __n = uVar11 - uVar10;
      if (uVar1 <= uVar11 - uVar10) {
        __n = uVar1;
      }
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        pvVar6 = (void *)((ulong)&local_70 | 1);
        local_70 = (ulong)(byte)((int)__n << 1);
        if (__n != 0) goto LAB_008b38f0;
      }
      else {
        uVar11 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar6 = operator_new(uVar11);
        local_70 = uVar11 | 1;
        local_68 = __n;
        local_60 = pvVar6;
LAB_008b38f0:
        memcpy(pvVar6,pbVar8 + uVar10,__n);
      }
      uVar11 = local_70;
      *(undefined1 *)((long)pvVar6 + __n) = 0;
      uVar10 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar10 = local_68;
      }
      sVar3 = 0x12;
      if (uVar10 < 0x13) {
        sVar3 = uVar10;
      }
      if (sVar3 == 0) {
LAB_008b3950:
        if (0x12 < uVar10 == 0x11 < uVar10) {
          if (sVar3 != 0) goto LAB_008b397c;
          goto LAB_008b39a4;
        }
        *param_2 = uVar12;
        uVar9 = 6;
      }
      else {
        pvVar6 = (void *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pvVar6 = local_60;
        }
        iVar5 = memcmp(pvVar6,"Ljava/lang/String;",sVar3);
        if (iVar5 == 0) goto LAB_008b3950;
LAB_008b397c:
        pvVar6 = (void *)((ulong)&local_70 | 1);
        if ((uVar11 & 1) != 0) {
          pvVar6 = local_60;
        }
        iVar5 = memcmp(pvVar6,"Ljava/util/Vector;",sVar3);
        if (iVar5 == 0) {
LAB_008b39a4:
          if (0x12 < uVar10 != 0x11 < uVar10) {
            *param_2 = uVar12;
            uVar9 = 7;
            goto joined_r0x008b39c4;
          }
        }
        uVar9 = 0;
        *(undefined4 *)(this + 4) = 0xffffffff;
      }
joined_r0x008b39c4:
      if ((uVar11 & 1) != 0) {
        operator_delete(local_60);
      }
      break;
    }
    uVar7 = 0xfffffffe;
LAB_008b389c:
    uVar9 = 0;
    *(undefined4 *)(this + 4) = uVar7;
    break;
  case (basic_string)0x56:
    uVar9 = 1;
    break;
  case (basic_string)0x5a:
    uVar9 = 5;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

