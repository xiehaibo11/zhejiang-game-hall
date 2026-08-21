
void FUN_008f6d7c(undefined8 param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte *__src;
  undefined8 uVar2;
  byte *__src_00;
  byte bVar3;
  long lVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uchar *puVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
  uchar *local_c0;
  long local_b8;
  uchar *local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  Data aDStack_70 [16];
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cocos2d::Data::Data(aDStack_70);
  bVar3 = *param_2;
  uVar15 = *(ulong *)(param_2 + 8);
  __src_00 = *(byte **)(param_2 + 0x10);
  __src = __src_00;
  uVar8 = uVar15;
  if ((bVar3 & 1) == 0) {
    __src = param_2 + 1;
    uVar8 = (ulong)(bVar3 >> 1);
  }
  uVar13 = uVar8;
  if (uVar8 == 0) {
LAB_008f6e10:
    uVar13 = 0xffffffffffffffff;
LAB_008f6e14:
    if (uVar13 <= uVar8) {
      uVar8 = uVar13;
    }
    local_b0 = (uchar *)0x0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar8 < 0x17) {
      pvVar14 = (void *)((ulong)&local_b0 | 1);
      local_b0 = (uchar *)(ulong)(byte)((int)uVar8 << 1);
      if (uVar8 != 0) goto LAB_008f6e6c;
    }
    else {
      uVar15 = uVar8 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = operator_new(uVar15);
      local_b0 = (uchar *)(uVar15 | 1);
      uStack_a8 = uVar8;
      local_a0 = pvVar14;
LAB_008f6e6c:
      memcpy(pvVar14,__src,uVar8);
    }
    *(undefined1 *)((long)pvVar14 + uVar8) = 0;
  }
  else {
    do {
      if (uVar13 == 0) goto LAB_008f6e10;
      lVar12 = uVar13 - 1;
      uVar13 = uVar13 - 1;
    } while (__src[lVar12] != 0x2e);
    if (uVar13 != 0) goto LAB_008f6e14;
    local_b0 = (uchar *)0x0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    if ((bVar3 & 1) == 0) {
      local_a0 = *(void **)(param_2 + 0x10);
      uStack_a8 = *(ulong *)(param_2 + 8);
      local_b0 = *(uchar **)param_2;
    }
    else {
      if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar15 < 0x17) {
        pvVar14 = (void *)((ulong)&local_b0 | 1);
        local_b0 = (uchar *)(ulong)(byte)((int)uVar15 << 1);
        if (uVar15 != 0) goto LAB_008f7144;
      }
      else {
        uVar8 = uVar15 + 0x10 & 0xfffffffffffffff0;
        pvVar14 = operator_new(uVar8);
        local_b0 = (uchar *)(uVar8 | 1);
        uStack_a8 = uVar15;
        local_a0 = pvVar14;
LAB_008f7144:
        memcpy(pvVar14,__src_00,uVar15);
      }
      *(undefined1 *)((long)pvVar14 + uVar15) = 0;
    }
  }
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,".jsc",4);
  local_80 = (void *)puVar6[2];
  uStack_88 = puVar6[1];
  local_90 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  plVar7 = (long *)cocos2d::FileUtils::getInstance();
  uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7,&local_90);
  if ((uVar8 & 1) == 0) {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar7 + 0x20))(&local_b0,plVar7,param_2);
    cocos2d::Data::operator=(aDStack_70,(Data *)&local_b0);
    cocos2d::Data::~Data((Data *)&local_b0);
    puVar11 = (uchar *)cocos2d::Data::getBytes(aDStack_70);
    local_60 = cocos2d::Data::getSize(aDStack_70);
    plVar7 = *(long **)(param_3 + 0x20);
    local_b0 = puVar11;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_b0,&local_60);
  }
  else {
    plVar7 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar7 + 0x20))(&local_b0,plVar7,&local_90);
    cocos2d::Data::operator=(aDStack_70,(Data *)&local_b0);
    cocos2d::Data::~Data((Data *)&local_b0);
    local_b8 = 0;
    uVar9 = cocos2d::Data::getBytes(aDStack_70);
    uVar10 = cocos2d::Data::getSize(aDStack_70);
    bVar5 = ((byte)DAT_01d36fd8 & 1) == 0;
    uVar2 = DAT_01d36fe8;
    if (bVar5) {
      uVar2 = 0x1d36fd9;
    }
    uVar1 = (uint)((byte)DAT_01d36fd8 >> 1);
    if (!bVar5) {
      uVar1 = (uint)DAT_01d36fe0;
    }
    puVar11 = (uchar *)xxtea_decrypt(uVar9,uVar10,uVar2,uVar1,&local_b8);
    if (puVar11 == (uchar *)0x0) {
      pvVar14 = (void *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        pvVar14 = local_80;
      }
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 144): Can\'t decrypt code for %s\n"
                          ,pvVar14);
    }
    else {
      uVar8 = cocos2d::ZipUtils::isGZipBuffer(puVar11,local_b8);
      if ((uVar8 & 1) == 0) {
        local_60 = local_b8;
        plVar7 = *(long **)(param_3 + 0x20);
        local_b0 = puVar11;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_b0,&local_60);
      }
      else {
        lVar12 = cocos2d::ZipUtils::inflateMemory(puVar11,local_b8,&local_c0);
        if (local_c0 == (uchar *)0x0) {
          pvVar14 = (void *)((ulong)&local_90 | 1);
          if ((local_90 & 1) != 0) {
            pvVar14 = local_80;
          }
          __android_log_print(6,"jswrapper",
                              "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 153): Can\'t decrypt code for %s\n"
                              ,pvVar14);
          goto joined_r0x008f70bc;
        }
        local_b0 = local_c0;
        plVar7 = *(long **)(param_3 + 0x20);
        local_60 = lVar12;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_b0,&local_60);
        free(puVar11);
        puVar11 = local_c0;
      }
      free(puVar11);
    }
  }
joined_r0x008f70bc:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  cocos2d::Data::~Data(aDStack_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

