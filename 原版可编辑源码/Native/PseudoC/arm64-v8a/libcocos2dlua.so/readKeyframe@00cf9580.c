
/* cocosbuilder::CCBReader::readKeyframe(cocosbuilder::CCBReader::PropertyType) */

CCBKeyframe *
cocosbuilder::CCBReader::readKeyframe(CCBReader *param_1,undefined4 param_2,basic_string *param_3)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  char cVar7;
  long lVar8;
  Value *pVVar9;
  CCBKeyframe *this;
  Value *pVVar10;
  SpriteFrameCache *this_00;
  CCBReader *pCVar11;
  Ref *pRVar12;
  Director *this_01;
  TextureCache *this_02;
  Texture2D *pTVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  Value *pVVar22;
  float fVar23;
  float fVar24;
  float local_d4;
  float local_d0;
  Value *local_c8;
  Value *pVStack_c0;
  Value *local_b8;
  Value *local_b0;
  Value *pVStack_a8;
  Value *local_a0;
  Value *local_90;
  Value *pVStack_88;
  Value *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  Value aVStack_68 [8];
  int local_60;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (CCBKeyframe *)0x0) {
    CCBKeyframe::CCBKeyframe(this);
  }
  cocos2d::Ref::autorelease((Ref *)this);
  fVar23 = (float)readFloat(param_1);
  CCBKeyframe::setTime(this,fVar23);
  iVar14 = *(int *)(param_1 + 0x40);
  uVar18 = *(uint *)(param_1 + 0x44);
  uVar16 = 0xffffffffffffffff;
  do {
    bVar3 = *(byte *)(*(long *)(param_1 + 0x38) + (long)iVar14);
    uVar19 = uVar18 & 0x1f;
    *(uint *)(param_1 + 0x44) = uVar18 + 1;
    bVar1 = 6 < (int)uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) {
      uVar18 = 0;
      iVar14 = iVar14 + 1;
      *(int *)(param_1 + 0x40) = iVar14;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    uVar16 = uVar16 + 1;
  } while ((1 << (ulong)uVar19 & (uint)bVar3) == 0);
  if ((int)uVar16 == 0) {
    uVar16 = 0;
    uVar19 = 0;
  }
  else {
    uVar20 = 0;
    uVar21 = uVar16;
    do {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x38) + (long)iVar14);
      uVar19 = uVar18 & 0x1f;
      uVar21 = uVar21 - 1;
      *(uint *)(param_1 + 0x44) = uVar18 + 1;
      bVar1 = 6 < (int)uVar18;
      uVar18 = uVar18 + 1;
      if (bVar1) {
        uVar18 = 0;
        iVar14 = iVar14 + 1;
        *(int *)(param_1 + 0x40) = iVar14;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      uVar2 = 0;
      if ((1 << (ulong)uVar19 & (uint)bVar3) != 0) {
        uVar2 = 1L << (uVar21 & 0x3f);
      }
      uVar20 = uVar2 | uVar20;
      uVar19 = (uint)uVar20;
    } while (0 < (long)uVar21);
  }
  uVar19 = uVar19 | (uint)(1L << (uVar16 & 0x3f));
  if (uVar18 != 0) {
    *(int *)(param_1 + 0x40) = iVar14 + 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  cocos2d::Value::Value(aVStack_68);
  fVar23 = 0.0;
  if (uVar19 - 3 < 6) {
    fVar23 = (float)readFloat(param_1);
  }
  CCBKeyframe::setEasingType(this,uVar19 - 1);
  CCBKeyframe::setEasingOpt(this,fVar23);
  switch(param_2) {
  case 0:
  case 4:
  case 0x1b:
    fVar23 = (float)readFloat(param_1);
    fVar24 = (float)readFloat(param_1);
    pVStack_88 = (Value *)0x0;
    local_80 = (Value *)0x0;
    local_90 = (Value *)0x0;
    cocos2d::Value::Value((Value *)&local_b0,fVar23);
    pVVar10 = pVStack_88;
    if (pVStack_88 < local_80) {
      cocos2d::Value::Value(pVStack_88,(Value *)&local_b0);
      pVStack_88 = pVVar10 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_90,
                 (Value *)&local_b0);
    }
    cocos2d::Value::~Value((Value *)&local_b0);
    cocos2d::Value::Value((Value *)&local_b0,fVar24);
    pVVar10 = pVStack_88;
    if (pVStack_88 < local_80) {
      cocos2d::Value::Value(pVStack_88,(Value *)&local_b0);
      pVStack_88 = pVVar10 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_90,
                 (Value *)&local_b0);
    }
    cocos2d::Value::~Value((Value *)&local_b0);
    cocos2d::Value::operator=(aVStack_68,(vector *)&local_90);
    pVVar22 = local_90;
    pVVar10 = local_90;
    pVVar9 = pVStack_88;
    if (local_90 == (Value *)0x0) break;
    while (local_90 = pVVar10, pVVar9 != pVVar22) {
      cocos2d::Value::~Value(pVVar9 + -0x10);
      pVVar10 = local_90;
      pVVar9 = pVVar9 + -0x10;
    }
    pVStack_88 = pVVar22;
LAB_00cf9a2c:
    operator_delete(pVVar10);
    if (local_60 == 0) goto LAB_00cf9ba0;
    goto LAB_00cf9b94;
  case 5:
    fVar23 = (float)readFloat(param_1);
    cocos2d::Value::operator=(aVStack_68,fVar23);
    break;
  case 9:
    cVar7 = *(char *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x40));
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    cocos2d::Value::operator=(aVStack_68,cVar7 != '\0');
    break;
  case 10:
    readCachedString();
    readCachedString();
    pVVar10 = (Value *)((ulong)local_90 >> 1 & 0x7f);
    if (((ulong)local_90 & 1) != 0) {
      pVVar10 = pVStack_88;
    }
    if (pVVar10 == (Value *)0x0) {
      std::__ndk1::operator+((__ndk1 *)(param_1 + 0x168),(basic_string *)&local_b0,param_3);
      if (((ulong)local_b0 & 1) != 0) {
        *local_a0 = (Value)0x0;
        pVStack_a8 = (Value *)0x0;
        if (((ulong)local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      pVStack_a8 = pVStack_c0;
      local_b0 = local_c8;
      local_a0 = local_b8;
      this_01 = (Director *)cocos2d::Director::getInstance();
      this_02 = (TextureCache *)cocos2d::Director::getTextureCache(this_01);
      pTVar13 = (Texture2D *)cocos2d::TextureCache::addImage(this_02,(basic_string *)&local_b0);
      cocos2d::Texture2D::getContentSize();
      cocos2d::Texture2D::getContentSize();
      cocos2d::Rect::Rect((Rect *)&local_c8,0.0,0.0,local_d0,local_d4);
      pRVar12 = (Ref *)cocos2d::SpriteFrame::createWithTexture(pTVar13,(Rect *)&local_c8);
    }
    else {
      std::__ndk1::operator+((__ndk1 *)(param_1 + 0x168),(basic_string *)&local_90,param_3);
      if (((ulong)local_90 & 1) != 0) {
        *local_80 = (Value)0x0;
        pVStack_88 = (Value *)0x0;
        if (((ulong)local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      pVStack_88 = pVStack_c0;
      local_90 = local_c8;
      local_80 = local_b8;
      this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      pCVar11 = (CCBReader *)
                std::__ndk1::
                __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)(param_1 + 0x60),(basic_string *)&local_90);
      if (param_1 + 0x68 == pCVar11) {
        cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_00,(basic_string *)&local_90);
        std::__ndk1::
        __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(param_1 + 0x60),(basic_string *)&local_90,(basic_string *)&local_90);
      }
      pRVar12 = (Ref *)cocos2d::SpriteFrameCache::getSpriteFrameByName
                                 (this_00,(basic_string *)&local_b0);
    }
    CCBKeyframe::setObject(this,pRVar12);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    break;
  case 0xc:
    uVar4 = *(uchar *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x40));
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    cocos2d::Value::operator=(aVStack_68,uVar4);
    break;
  case 0xd:
    iVar14 = *(int *)(param_1 + 0x40);
    lVar17 = (long)iVar14;
    lVar15 = *(long *)(param_1 + 0x38);
    uVar4 = *(uchar *)(lVar15 + lVar17);
    *(int *)(param_1 + 0x40) = (int)(lVar17 + 1);
    uVar5 = *(uchar *)(lVar15 + lVar17 + 1);
    *(int *)(param_1 + 0x40) = (int)(lVar17 + 2);
    uVar6 = *(uchar *)(lVar15 + lVar17 + 2);
    *(int *)(param_1 + 0x40) = iVar14 + 3;
    pVStack_88 = (Value *)0x0;
    local_90 = (Value *)0x0;
    uStack_78 = 0;
    local_80 = (Value *)0x0;
    local_70 = 0x3f800000;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,"r");
    local_c8 = (Value *)&local_b0;
    lVar15 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                       ((basic_string *)&local_90,(piecewise_construct_t *)&local_b0,
                        (tuple *)&DAT_01417f21,(tuple *)&local_c8);
    cocos2d::Value::operator=((Value *)(lVar15 + 0x28),uVar4);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,"g");
    local_c8 = (Value *)&local_b0;
    lVar15 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                       ((basic_string *)&local_90,(piecewise_construct_t *)&local_b0,
                        (tuple *)&DAT_01417f21,(tuple *)&local_c8);
    cocos2d::Value::operator=((Value *)(lVar15 + 0x28),uVar5);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,"b");
    local_c8 = (Value *)&local_b0;
    lVar15 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                       ((basic_string *)&local_90,(piecewise_construct_t *)&local_b0,
                        (tuple *)&DAT_01417f21,(tuple *)&local_c8);
    cocos2d::Value::operator=((Value *)(lVar15 + 0x28),uVar6);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    cocos2d::Value::operator=(aVStack_68,(unordered_map *)&local_90);
    pVVar10 = local_90;
    pVVar9 = local_80;
    while (pVVar9 != (Value *)0x0) {
      pVVar22 = *(Value **)pVVar9;
      local_90 = pVVar10;
      cocos2d::Value::~Value(pVVar9 + 0x28);
      if (((byte)pVVar9[0x10] & 1) != 0) {
        operator_delete(*(void **)(pVVar9 + 0x20));
      }
      operator_delete(pVVar9);
      pVVar10 = local_90;
      pVVar9 = pVVar22;
    }
    local_90 = (Value *)0x0;
    if (pVVar10 != (Value *)0x0) goto LAB_00cf9a2c;
  }
  if (local_60 != 0) {
LAB_00cf9b94:
    CCBKeyframe::setValue(this,aVStack_68);
  }
LAB_00cf9ba0:
  cocos2d::Value::~Value(aVStack_68);
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

