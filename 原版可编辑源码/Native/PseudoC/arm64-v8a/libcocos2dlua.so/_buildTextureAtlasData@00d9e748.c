
/* dragonBones::CCFactory::_buildTextureAtlasData(dragonBones::TextureAtlasData*, void*) const */

TextureAtlasData * __thiscall
dragonBones::CCFactory::_buildTextureAtlasData
          (CCFactory *this,TextureAtlasData *param_1,void *param_2)

{
  CCFactory *pCVar1;
  basic_string *pbVar2;
  CCFactory CVar3;
  long lVar4;
  allocator *paVar5;
  allocator *paVar6;
  Director *this_00;
  TextureCache *this_01;
  ulong uVar7;
  basic_string *pbVar8;
  ulong uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  basic_string local_60 [16];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_1 == (TextureAtlasData *)0x0) {
    param_1 = (TextureAtlasData *)BaseObject::borrowObject<dragonBones::CCTextureAtlasData>();
    if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_00d9e8f4;
  }
  else {
    CVar3 = this[0x50];
    if (((byte)CVar3 & 1) == 0) {
      pCVar1 = this + 0x51;
      paVar6 = (allocator *)(ulong)((byte)CVar3 >> 1);
    }
    else {
      pCVar1 = *(CCFactory **)(this + 0x60);
      paVar6 = *(allocator **)(this + 0x58);
    }
    do {
      paVar5 = paVar6;
      if (paVar5 == (allocator *)0x0) goto LAB_00d9e848;
      paVar6 = paVar5 + -1;
    } while ((pCVar1 + (long)paVar5)[-1] != (CCFactory)0x2f);
    if (paVar5 + -1 != (allocator *)0xffffffffffffffff) {
      pbVar8 = (basic_string *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_60,(ulong)(this + 0x50),0,paVar5);
      pbVar2 = (basic_string *)(param_1 + 0x38);
      std::__ndk1::operator+((__ndk1 *)local_60,pbVar2,pbVar8);
      if (((byte)param_1[0x38] & 1) == 0) {
        *(undefined2 *)pbVar2 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        if (((byte)param_1[0x38] & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x48));
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x48) = local_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_70;
      *(undefined8 *)pbVar2 = local_78;
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
LAB_00d9e848:
    if (param_2 == (void *)0x0) {
      this_00 = (Director *)cocos2d::Director::getInstance();
      this_01 = (TextureCache *)cocos2d::Director::getTextureCache(this_00);
      param_2 = (void *)cocos2d::TextureCache::getTextureForKey
                                  (this_01,(basic_string *)(param_1 + 0x38));
      if (param_2 == (Texture2D *)0x0) {
        uVar7 = cocos2d::Texture2D::getDefaultAlphaPixelFormat();
        uVar9 = uVar7 & 0xffffffff;
        if (*(int *)(param_1 + 0x10) - 1U < 6) {
          uVar7 = (ulong)*(uint *)(&DAT_0141c070 + (long)(int)(*(int *)(param_1 + 0x10) - 1U) * 4);
        }
        cocos2d::Texture2D::setDefaultAlphaPixelFormat(uVar7);
        param_2 = (void *)cocos2d::TextureCache::addImage(this_01,(basic_string *)(param_1 + 0x38));
        if (param_2 != (Texture2D *)0x0) {
          cocos2d::Texture2D::setDefaultAlphaPixelFormat(uVar9);
        }
      }
    }
    CCTextureAtlasData::setRenderTexture((CCTextureAtlasData *)param_1,param_2);
    if (*(long *)(lVar4 + 0x28) != local_48) {
LAB_00d9e8f4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return param_1;
}

