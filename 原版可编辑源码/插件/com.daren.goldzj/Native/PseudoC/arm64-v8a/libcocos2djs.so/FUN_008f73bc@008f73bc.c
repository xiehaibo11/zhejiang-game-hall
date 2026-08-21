
void FUN_008f73bc(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *__src;
  byte bVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uchar *__src_00;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  uchar *local_b0;
  uint local_a4;
  Data aDStack_a0 [16];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  bVar4 = (byte)*param_3;
  uVar15 = param_3[1];
  __src = (byte *)param_3[2];
  pbVar2 = __src;
  uVar10 = uVar15;
  if ((bVar4 & 1) == 0) {
    pbVar2 = (byte *)((long)param_3 + 1);
    uVar10 = (ulong)(bVar4 >> 1);
  }
  uVar13 = uVar10;
  if (uVar10 == 0) {
LAB_008f7448:
    uVar13 = 0xffffffffffffffff;
LAB_008f744c:
    if (uVar13 <= uVar10) {
      uVar10 = uVar13;
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    if (0xffffffffffffffef < uVar10) {
LAB_008f7814:
      local_80 = (void *)0x0;
      uStack_88 = 0;
      local_90 = 0;
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar10 < 0x17) {
      pvVar14 = (void *)((ulong)&local_90 | 1);
      local_90 = (ulong)(byte)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_008f74a4;
    }
    else {
      uVar15 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = operator_new(uVar15);
      local_90 = uVar15 | 1;
      uStack_88 = uVar10;
      local_80 = pvVar14;
LAB_008f74a4:
      memcpy(pvVar14,pbVar2,uVar10);
    }
    *(undefined1 *)((long)pvVar14 + uVar10) = 0;
  }
  else {
    do {
      if (uVar13 == 0) goto LAB_008f7448;
      lVar6 = uVar13 - 1;
      uVar13 = uVar13 - 1;
    } while (pbVar2[lVar6] != 0x2e);
    if (uVar13 != 0) goto LAB_008f744c;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    if ((bVar4 & 1) == 0) {
      local_80 = (void *)param_3[2];
      uStack_88 = param_3[1];
      local_90 = *param_3;
    }
    else {
      if (0xffffffffffffffef < uVar15) goto LAB_008f7814;
      if (uVar15 < 0x17) {
        pvVar14 = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uVar15 << 1);
        if (uVar15 != 0) goto LAB_008f77f8;
      }
      else {
        uVar10 = uVar15 + 0x10 & 0xfffffffffffffff0;
        pvVar14 = operator_new(uVar10);
        local_90 = uVar10 | 1;
        uStack_88 = uVar15;
        local_80 = pvVar14;
LAB_008f77f8:
        memcpy(pvVar14,__src,uVar15);
      }
      *(undefined1 *)((long)pvVar14 + uVar15) = 0;
    }
  }
  puVar8 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,".jsc",4);
  local_60 = (void *)puVar8[2];
  uStack_68 = puVar8[1];
  local_70 = *puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  plVar9 = (long *)cocos2d::FileUtils::getInstance();
  uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9,&local_70);
  if ((uVar10 & 1) == 0) {
    plVar9 = (long *)cocos2d::FileUtils::getInstance();
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9,param_3);
    if ((uVar10 & 1) == 0) {
      pbVar2 = (byte *)((long)param_3 + 1);
      if ((*param_3 & 1) != 0) {
        pbVar2 = (byte *)param_3[2];
      }
      __android_log_print(6,"jswrapper",
                          "ScriptEngine::onGetStringFromFile %s not found, possible missing file.\n"
                          ,pbVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      plVar9 = (long *)cocos2d::FileUtils::getInstance();
      (**(code **)(*plVar9 + 0x18))(param_1,plVar9,param_3);
    }
    goto joined_r0x008f763c;
  }
  plVar9 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar9 + 0x20))(aDStack_a0,plVar9,&local_70);
  uVar11 = cocos2d::Data::getBytes(aDStack_a0);
  uVar12 = cocos2d::Data::getSize(aDStack_a0);
  bVar7 = ((byte)DAT_01d36fd8 & 1) == 0;
  uVar3 = DAT_01d36fe8;
  if (bVar7) {
    uVar3 = 0x1d36fd9;
  }
  uVar1 = (uint)((byte)DAT_01d36fd8 >> 1);
  if (!bVar7) {
    uVar1 = (uint)DAT_01d36fe0;
  }
  __src_00 = (uchar *)xxtea_decrypt(uVar11,uVar12,uVar3,uVar1,&local_a4);
  if (__src_00 == (uchar *)0x0) {
    pvVar14 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar14 = local_60;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 184): Can\'t decrypt code for %s\n"
                        ,pvVar14);
LAB_008f770c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar10 = cocos2d::ZipUtils::isGZipBuffer(__src_00,(ulong)local_a4);
    if ((uVar10 & 1) == 0) {
      uVar10 = (ulong)local_a4;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (local_a4 < 0x17) {
        pvVar14 = (void *)((long)param_1 + 1);
        *(char *)param_1 = (char)(local_a4 << 1);
        if (local_a4 != 0) goto LAB_008f76bc;
      }
      else {
        uVar15 = uVar10 + 0x10 & 0x1fffffff0;
        pvVar14 = operator_new(uVar15);
        param_1[1] = uVar10;
        param_1[2] = (ulong)pvVar14;
        *param_1 = uVar15 | 1;
LAB_008f76bc:
        memcpy(pvVar14,__src_00,uVar10);
      }
      *(undefined1 *)((long)pvVar14 + uVar10) = 0;
      free(__src_00);
    }
    else {
      uVar10 = cocos2d::ZipUtils::inflateMemory(__src_00,(ulong)local_a4,&local_b0);
      if (local_b0 == (uchar *)0x0) {
        pvVar14 = (void *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pvVar14 = local_60;
        }
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 192): Can\'t decrypt code for %s\n"
                            ,pvVar14);
        goto LAB_008f770c;
      }
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
      if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar10 < 0x17) {
        pvVar14 = (void *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)uVar10 << 1);
        if (uVar10 != 0) goto LAB_008f7760;
      }
      else {
        uVar15 = uVar10 + 0x10 & 0xfffffffffffffff0;
        pvVar14 = operator_new(uVar15);
        local_90 = uVar15 | 1;
        uStack_88 = uVar10;
        local_80 = pvVar14;
LAB_008f7760:
        memcpy(pvVar14,local_b0,uVar10);
      }
      *(undefined1 *)((long)pvVar14 + uVar10) = 0;
      free(local_b0);
      free(__src_00);
      param_1[2] = (ulong)local_80;
      param_1[1] = uStack_88;
      *param_1 = local_90;
    }
  }
  cocos2d::Data::~Data(aDStack_a0);
joined_r0x008f763c:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

