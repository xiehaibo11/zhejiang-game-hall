
/* fairygui::UIPackage::loadFont(fairygui::PackageItem*) */

void __thiscall fairygui::UIPackage::loadFont(UIPackage *this,PackageItem *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  Font *pFVar18;
  FontAtlas *this_00;
  long lVar19;
  basic_string *pbVar20;
  PackageItem *pPVar21;
  ByteBuffer *this_01;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  Texture2D *local_108;
  int local_100;
  int local_fc;
  Rect aRStack_e0 [16];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  long local_90;
  
  lVar2 = tpidr_el0;
  local_90 = *(long *)(lVar2 + 0x28);
  pFVar18 = (Font *)BitmapFont::create();
  *(Font **)(param_1 + 0x118) = pFVar18;
  this_00 = operator_new(0xd0);
  cocos2d::FontAtlas::FontAtlas(this_00,pFVar18);
  *(FontAtlas **)(*(long *)(param_1 + 0x118) + 0x30) = this_00;
  this_01 = *(ByteBuffer **)(param_1 + 0x88);
  ByteBuffer::seek(this_01,0,0);
  uVar9 = ByteBuffer::readBool(this_01);
  bVar7 = ByteBuffer::readBool(this_01);
  *(byte *)(*(long *)(param_1 + 0x118) + 0x29) = bVar7 & 1;
  bVar7 = ByteBuffer::readBool(this_01);
  *(byte *)(*(long *)(param_1 + 0x118) + 0x28) = bVar7 & 1;
  ByteBuffer::readBool(this_01);
  local_fc = ByteBuffer::readInt(this_01);
  iVar10 = ByteBuffer::readInt(this_01);
  local_100 = ByteBuffer::readInt(this_01);
  if (((uVar9 & 1) == 0) ||
     (lVar19 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
                           *)(this + 0xd8),(basic_string *)(param_1 + 0x38)), lVar19 == 0)) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    puVar22 = *(undefined8 **)(lVar19 + 0x28);
    if (puVar22 != (undefined8 *)0x0) {
      local_108 = (Texture2D *)getItemAsset(this,(PackageItem *)*puVar22);
      goto LAB_00aa2020;
    }
  }
  local_108 = (Texture2D *)0x0;
LAB_00aa2020:
  ByteBuffer::seek(this_01,0,1);
  iVar11 = ByteBuffer::readInt(this_01);
  if (0 < iVar11) {
    do {
      sVar8 = ByteBuffer::readShort(this_01);
      iVar1 = *(int *)(this_01 + 0x1c);
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_a0 = 0;
      uVar12 = ByteBuffer::readUshort(this_01);
      pbVar20 = (basic_string *)ByteBuffer::readS(this_01);
      iVar13 = ByteBuffer::readInt(this_01);
      iVar14 = ByteBuffer::readInt(this_01);
      iVar15 = ByteBuffer::readInt(this_01);
      local_b0 = CONCAT44(local_b0._4_4_,(float)iVar15);
      iVar15 = ByteBuffer::readInt(this_01);
      local_b0 = CONCAT44((float)iVar15,(float)local_b0);
      iVar16 = ByteBuffer::readInt(this_01);
      iVar17 = ByteBuffer::readInt(this_01);
      local_a0 = ByteBuffer::readInt(this_01);
      ByteBuffer::readByte(this_01);
      iVar15 = local_100;
      if ((uVar9 & 1) == 0) {
        lVar19 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                             *)(this + 0x88),pbVar20);
        if ((lVar19 != 0) && (*(PackageItem **)(lVar19 + 0x28) != (PackageItem *)0x0)) {
          pPVar21 = (PackageItem *)PackageItem::getBranch(*(PackageItem **)(lVar19 + 0x28));
          iVar13 = *(int *)(pPVar21 + 0x68);
          iVar15 = *(int *)(pPVar21 + 0x6c);
          lVar19 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
                               *)(this + 0xd8),pbVar20);
          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x28) != 0)) {
            uVar26 = *(undefined8 *)(*(long *)(lVar19 + 0x28) + 0x20);
            local_b0 = CONCAT44((float)((ulong)uVar26 >> 0x20) + (float)((ulong)local_b0 >> 0x20),
                                (float)uVar26 + (float)local_b0);
          }
          pPVar21 = (PackageItem *)PackageItem::getHighResolution(pPVar21);
          getItemAsset(this,pPVar21);
          cocos2d::Rect::Rect((Rect *)&local_d0,(Rect *)(*(long *)(pPVar21 + 0xb8) + 0x48));
          fVar3 = local_d0;
          lVar19 = cocos2d::Director::getInstance();
          fVar4 = fStack_cc;
          fVar23 = *(float *)(lVar19 + 0x1a0);
          lVar19 = cocos2d::Director::getInstance();
          fVar5 = fStack_c8;
          fVar24 = *(float *)(lVar19 + 0x1a0);
          lVar19 = cocos2d::Director::getInstance();
          fVar6 = fStack_c4;
          fVar25 = *(float *)(lVar19 + 0x1a0);
          lVar19 = cocos2d::Director::getInstance();
          cocos2d::Rect::Rect(aRStack_e0,fVar3 / fVar23,fVar4 / fVar24,fVar5 / fVar25,
                              fVar6 / *(float *)(lVar19 + 0x1a0));
          cocos2d::Rect::operator=((Rect *)&local_d0,aRStack_e0);
          uStack_b8 = CONCAT44(fStack_c4,fStack_c8);
          local_c0 = CONCAT44(fStack_cc,local_d0);
          if (local_108 == (Texture2D *)0x0) {
            local_108 = (Texture2D *)
                        cocos2d::SpriteFrame::getTexture(*(SpriteFrame **)(pPVar21 + 0xb8));
          }
          uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
          if ((local_a0 == 0) && (local_a0 = iVar10, iVar10 == 0)) {
            local_a0 = (int)((float)local_b0 + (float)iVar13);
          }
          if (local_fc != 0) {
            iVar15 = local_fc;
          }
          local_fc = iVar15;
          if (iVar15 <= local_100) {
            iVar15 = local_100;
          }
        }
      }
      else {
        cocos2d::Rect::Rect((Rect *)&local_d0,*(float *)(puVar22 + 1) + (float)iVar13,
                            *(float *)((long)puVar22 + 0xc) + (float)iVar14,(float)iVar16,
                            (float)iVar17);
        fVar3 = local_d0;
        lVar19 = cocos2d::Director::getInstance();
        fVar4 = fStack_cc;
        fVar23 = *(float *)(lVar19 + 0x1a0);
        lVar19 = cocos2d::Director::getInstance();
        fVar5 = fStack_c8;
        fVar24 = *(float *)(lVar19 + 0x1a0);
        lVar19 = cocos2d::Director::getInstance();
        fVar6 = fStack_c4;
        fVar25 = *(float *)(lVar19 + 0x1a0);
        lVar19 = cocos2d::Director::getInstance();
        cocos2d::Rect::Rect(aRStack_e0,fVar3 / fVar23,fVar4 / fVar24,fVar5 / fVar25,
                            fVar6 / *(float *)(lVar19 + 0x1a0));
        cocos2d::Rect::operator=((Rect *)&local_d0,aRStack_e0);
        uStack_b8 = CONCAT44(fStack_c4,fStack_c8);
        local_c0 = CONCAT44(fStack_cc,local_d0);
        uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
      }
      local_100 = iVar15;
      cocos2d::FontAtlas::addLetterDefinition
                (this_00,uVar12 & 0xffff,(FontLetterDefinition *)&local_c0);
      iVar11 = iVar11 + -1;
      *(int *)(this_01 + 0x1c) = iVar1 + sVar8;
    } while (iVar11 != 0);
  }
  if (local_108 != (Texture2D *)0x0) {
    cocos2d::FontAtlas::addTexture(this_00,local_108,0);
  }
  cocos2d::FontAtlas::setLineHeight(this_00,(float)local_100);
  *(float *)(*(long *)(param_1 + 0x118) + 0x24) = (float)local_fc;
  if (this_01 != (ByteBuffer *)0x0) {
    ByteBuffer::~ByteBuffer(this_01);
    operator_delete(this_01);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(long *)(lVar2 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

