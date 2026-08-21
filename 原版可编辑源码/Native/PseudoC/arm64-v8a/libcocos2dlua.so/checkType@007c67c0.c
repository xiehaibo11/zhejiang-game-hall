
/* LuaJavaBridge::CallInfo::checkType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) */

undefined4 __thiscall
LuaJavaBridge::CallInfo::checkType(CallInfo *this,basic_string *param_1,ulong *param_2)

{
  ulong uVar1;
  basic_string bVar2;
  size_t sVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  basic_string *pbVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  basic_string local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar2 = *param_1;
  pbVar7 = *(basic_string **)(param_1 + 0x10);
  uVar8 = *param_2;
  if (((byte)bVar2 & 1) == 0) {
    pbVar7 = param_1 + 1;
  }
  uVar9 = 1;
  switch(pbVar7[uVar8]) {
  case (basic_string)0x46:
    uVar9 = 2;
    break;
  default:
    uVar9 = 0xffffffff;
    *(undefined4 *)(this + 4) = 0xffffffff;
    break;
  case (basic_string)0x49:
    break;
  case (basic_string)0x4c:
    uVar10 = uVar8 + 1;
    uVar1 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    sVar3 = uVar1 - uVar10;
    if ((((uVar1 < uVar10 || sVar3 == 0) || (sVar3 == 0)) ||
        (pvVar6 = memchr(pbVar7 + uVar10,0x3b,sVar3), pvVar6 == (void *)0x0)) ||
       (uVar10 = (long)pvVar6 - (long)pbVar7, uVar10 == 0xffffffffffffffff)) {
      *(undefined4 *)(this + 4) = 0xfffffffe;
      uVar9 = 0xffffffff;
      break;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,(ulong)param_1,uVar8,(allocator *)((uVar10 - uVar8) + 1));
    uVar8 = (ulong)((byte)local_70[0] >> 1);
    if (((byte)local_70[0] & 1) != 0) {
      uVar8 = local_68;
    }
    sVar3 = 0x12;
    if (uVar8 < 0x13) {
      sVar3 = uVar8;
    }
    if (sVar3 == 0) {
LAB_007c68ec:
      if (0x12 < uVar8 == 0x11 < uVar8) {
        if (sVar3 != 0) goto LAB_007c6964;
        goto LAB_007c698c;
      }
      *param_2 = uVar10;
      uVar9 = 4;
    }
    else {
      pvVar6 = (void *)((ulong)local_70 | 1);
      if (((byte)local_70[0] & 1) != 0) {
        pvVar6 = local_60;
      }
      iVar5 = memcmp(pvVar6,"Ljava/lang/String;",sVar3);
      if (iVar5 == 0) goto LAB_007c68ec;
LAB_007c6964:
      pvVar6 = (void *)((ulong)local_70 | 1);
      if (((byte)local_70[0] & 1) != 0) {
        pvVar6 = local_60;
      }
      iVar5 = memcmp(pvVar6,"Ljava/util/Vector;",sVar3);
      if (iVar5 == 0) {
LAB_007c698c:
        if (0x12 < uVar8 != 0x11 < uVar8) {
          *param_2 = uVar10;
          uVar9 = 5;
          goto joined_r0x007c69ac;
        }
      }
      uVar9 = 0xffffffff;
      *(undefined4 *)(this + 4) = 0xffffffff;
    }
joined_r0x007c69ac:
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    break;
  case (basic_string)0x56:
    uVar9 = 0;
    break;
  case (basic_string)0x5a:
    uVar9 = 3;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

