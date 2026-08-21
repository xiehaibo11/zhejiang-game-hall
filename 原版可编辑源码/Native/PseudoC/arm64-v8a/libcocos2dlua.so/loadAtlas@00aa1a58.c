
/* fairygui::UIPackage::loadAtlas(fairygui::PackageItem*) */

void __thiscall fairygui::UIPackage::loadAtlas(UIPackage *this,PackageItem *param_1)

{
  ulong __n;
  basic_string bVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  Ref *this_00;
  undefined7 uVar5;
  Image *pIVar6;
  ulong uVar7;
  Texture2D *pTVar8;
  long *plVar9;
  basic_string *pbVar10;
  void *pvVar11;
  ulong *puVar12;
  undefined8 uVar13;
  PackageItem *pPVar14;
  void *pvVar15;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  byte local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_87;
  undefined6 uStack_86;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined6 uStack_6f;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pIVar6 = operator_new(0x170);
  cocos2d::Image::Image(pIVar6);
  pbVar10 = (basic_string *)(param_1 + 0x70);
  uVar7 = cocos2d::Image::initWithImageFile(pIVar6,pbVar10);
  this_00 = _emptyTexture;
  if ((uVar7 & 1) == 0) {
    *(Ref **)(param_1 + 0xa0) = _emptyTexture;
    cocos2d::Ref::retain(this_00);
    (**(code **)(*(long *)pIVar6 + 8))(pIVar6);
    goto LAB_00aa1ce8;
  }
  pTVar8 = operator_new(0x88);
  cocos2d::Texture2D::Texture2D(pTVar8);
  cocos2d::Texture2D::initWithImage(pTVar8,pIVar6);
  *(Texture2D **)(param_1 + 0xa0) = pTVar8;
  (**(code **)(*(long *)pIVar6 + 8))(pIVar6);
  local_80 = 0;
  uStack_7f = 0;
  local_78 = (undefined1 *)0x0;
  local_88 = (basic_string)0x0;
  bStack_87 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_86 = 0;
  plVar9 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar9 + 0x138))(local_a0,plVar9,pbVar10);
  bVar1 = *pbVar10;
  if (((byte)bVar1 & 1) == 0) {
    pPVar14 = param_1 + 0x71;
    uVar7 = (ulong)((byte)bVar1 >> 1);
    if (uVar7 == 0) goto LAB_00aa1ba8;
LAB_00aa1b3c:
    do {
      if (uVar7 == 0) goto LAB_00aa1ba8;
      lVar4 = uVar7 - 1;
      uVar7 = uVar7 - 1;
    } while (pPVar14[lVar4] != (PackageItem)0x2e);
    if (uVar7 == 0xffffffffffffffff) goto LAB_00aa1ba8;
    uStack_68 = 0;
    uStack_61 = 0;
    local_60 = (void *)0x0;
    local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_6f = 0;
    uStack_69 = 0;
    __n = *(ulong *)(param_1 + 0x78);
    pPVar14 = *(PackageItem **)(param_1 + 0x80);
    if (((byte)bVar1 & 1) == 0) {
      pPVar14 = param_1 + 0x71;
      __n = (ulong)((byte)bVar1 >> 1);
    }
    if (uVar7 <= __n) {
      __n = uVar7;
    }
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      pvVar15 = (void *)((ulong)&local_70 | 1);
      local_70 = SUB41((int)__n << 1,0);
      if (__n != 0) goto LAB_00aa1d30;
    }
    else {
      uVar7 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar15 = operator_new(uVar7);
      local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 ((byte)uVar7 | 1);
      uStack_6f = (undefined6)(uVar7 >> 8);
      uStack_69 = (undefined1)(uVar7 >> 0x38);
      uStack_68 = (undefined7)__n;
      uStack_61 = (undefined1)(__n >> 0x38);
      local_60 = pvVar15;
LAB_00aa1d30:
      memcpy(pvVar15,pPVar14,__n);
    }
    *(undefined1 *)((long)pvVar15 + __n) = 0;
    puVar12 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append(&local_70,"!a",2);
    local_b0 = (void *)puVar12[2];
    uStack_b8 = puVar12[1];
    local_c0 = *puVar12;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    uVar7 = (ulong)(local_a0[0] >> 1);
    pcVar3 = (char *)((ulong)local_a0 | 1);
    if ((local_a0[0] & 1) != 0) {
      uVar7 = local_98;
      pcVar3 = local_90;
    }
    pbVar10 = (basic_string *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_c0,pcVar3,uVar7);
    pvVar15 = *(void **)(pbVar10 + 0x10);
    bVar1 = *pbVar10;
    uStack_50 = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 8) >> 8);
    uStack_58 = (undefined7)*(undefined8 *)(pbVar10 + 1);
    local_51 = (undefined1)((ulong)*(undefined8 *)(pbVar10 + 1) >> 0x38);
    *(undefined8 *)pbVar10 = 0;
    *(undefined8 *)(pbVar10 + 8) = 0;
    *(undefined8 *)(pbVar10 + 0x10) = 0;
    if (((byte)local_88 & 1) != 0) {
      *local_78 = 0;
      local_80 = 0;
      uStack_7f = 0;
      if (((byte)local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    uVar5 = uStack_58;
    uStack_58 = 0;
    bStack_87 = SUB71(uVar5,0);
    uStack_86 = (undefined6)((uint7)uVar5 >> 8);
    local_80 = local_51;
    uStack_7f = uStack_50;
    local_51 = 0;
    uStack_50 = 0;
    local_88 = bVar1;
    local_78 = pvVar15;
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    pvVar11 = local_60;
    if (((byte)local_70 & 1) != 0) goto LAB_00aa1c58;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x78);
    pPVar14 = *(PackageItem **)(param_1 + 0x80);
    if (uVar7 != 0) goto LAB_00aa1b3c;
LAB_00aa1ba8:
    FUN_007c1fb0(&local_c0,pbVar10,&DAT_013ce029);
    uVar7 = (ulong)(local_a0[0] >> 1);
    pcVar3 = (char *)((ulong)local_a0 | 1);
    if ((local_a0[0] & 1) != 0) {
      uVar7 = local_98;
      pcVar3 = local_90;
    }
    pbVar10 = (basic_string *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_c0,pcVar3,uVar7);
    pvVar15 = *(void **)(pbVar10 + 0x10);
    uVar13 = *(undefined8 *)(pbVar10 + 1);
    bVar1 = *pbVar10;
    uStack_68 = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 8) >> 8);
    local_70 = SUB81(uVar13,0);
    uStack_6f = (undefined6)((ulong)uVar13 >> 8);
    uStack_69 = (undefined1)((ulong)uVar13 >> 0x38);
    *(undefined8 *)pbVar10 = 0;
    *(undefined8 *)(pbVar10 + 8) = 0;
    *(undefined8 *)(pbVar10 + 0x10) = 0;
    if (((byte)local_88 & 1) != 0) {
      *local_78 = 0;
      local_80 = 0;
      uStack_7f = 0;
      if (((byte)local_88 & 1) != 0) {
        operator_delete(local_78);
      }
    }
    uStack_86 = uStack_6f;
    bStack_87 = local_70;
    local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_6f = 0;
    local_80 = uStack_69;
    uStack_7f = uStack_68;
    uStack_69 = 0;
    uStack_68 = 0;
    pvVar11 = local_b0;
    local_88 = bVar1;
    local_78 = pvVar15;
    if ((local_c0 & 1) != 0) {
LAB_00aa1c58:
      operator_delete(pvVar11);
    }
  }
  uVar7 = ToolSet::isFileExist(&local_88);
  if ((uVar7 & 1) != 0) {
    pIVar6 = operator_new(0x170);
    cocos2d::Image::Image(pIVar6);
    uVar7 = cocos2d::Image::initWithImageFile(pIVar6,&local_88);
    if ((uVar7 & 1) != 0) {
      pTVar8 = operator_new(0x88);
      cocos2d::Texture2D::Texture2D(pTVar8);
      cocos2d::Texture2D::initWithImage(pTVar8,pIVar6);
      cocos2d::Texture2D::setAlphaTexture(*(Texture2D **)(param_1 + 0xa0),pTVar8);
      cocos2d::Ref::release((Ref *)pTVar8);
    }
    (**(code **)(*(long *)pIVar6 + 8))(pIVar6);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00aa1ce8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

