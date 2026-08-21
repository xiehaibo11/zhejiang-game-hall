
/* cocos2d::SpriteFrameCache::removeUnusedSpriteFrames() */

void __thiscall cocos2d::SpriteFrameCache::removeUnusedSpriteFrames(SpriteFrameCache *this)

{
  basic_string bVar1;
  long lVar2;
  bool bVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  int iVar8;
  Texture2D *this_00;
  Ref *this_01;
  long *plVar9;
  basic_string *local_60;
  basic_string *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = (basic_string *)0x0;
  pbStack_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
  ;
  local_60 = (basic_string *)0x0;
  plVar9 = *(long **)(this + 0x60);
  if (plVar9 != (long *)0x0) {
    bVar3 = false;
    do {
      this_01 = (Ref *)plVar9[5];
      iVar8 = Ref::getReferenceCount(this_01);
      pbVar6 = local_58;
      if (iVar8 == 1) {
        if (local_58 == (basic_string *)pbStack_50) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_60,(basic_string *)(plVar9 + 2));
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_58,(basic_string *)(plVar9 + 2));
          local_58 = pbVar6 + 0x18;
        }
        this_00 = (Texture2D *)SpriteFrame::getTexture((SpriteFrame *)this_01);
        Texture2D::removeSpriteFrameCapInset(this_00,(SpriteFrame *)this_01);
        bVar3 = true;
      }
      pbVar6 = local_58;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    pbVar4 = local_60;
    if (bVar3) {
      for (; pbVar4 != pbVar6; pbVar4 = pbVar4 + 0x18) {
        PlistFramesCache::eraseFrame((PlistFramesCache *)(this + 0x50),pbVar4);
      }
    }
  }
  pbVar6 = local_60;
  if (local_60 != (basic_string *)0x0) {
    if (local_58 != local_60) {
      bVar1 = local_58[-0x18];
      pbVar7 = local_58 + -0x18;
      pbVar4 = local_58;
      while( true ) {
        pbVar5 = pbVar7;
        if (((byte)bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar6 == pbVar5) break;
        bVar1 = pbVar5[-0x18];
        pbVar7 = pbVar5 + -0x18;
        pbVar4 = pbVar5;
      }
    }
    local_58 = pbVar6;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

