
/* cocos2d::SpriteFrameCache::removeSpriteFramesFromTexture(cocos2d::Texture2D*) */

void __thiscall
cocos2d::SpriteFrameCache::removeSpriteFramesFromTexture(SpriteFrameCache *this,Texture2D *param_1)

{
  basic_string bVar1;
  long lVar2;
  basic_string *pbVar3;
  ulong __n;
  void *__src;
  basic_string *pbVar4;
  long lVar5;
  Texture2D *pTVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  ulong uVar9;
  long *plVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined7 uStack_97;
  ulong uStack_90;
  void *local_88;
  basic_string *local_80;
  basic_string *local_78;
  basic_string *pbStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = (basic_string *)0x0;
  pbStack_70 = (basic_string *)0x0;
  local_80 = (basic_string *)0x0;
  plVar10 = *(long **)(this + 0x60);
  if (plVar10 != (long *)0x0) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(&local_98,(basic_string *)(plVar10 + 2));
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::SpriteFrame*>>>
                          *)(this + 0x50),(basic_string *)&local_98);
      if (((lVar5 != 0) && (*(SpriteFrame **)(lVar5 + 0x28) != (SpriteFrame *)0x0)) &&
         (pTVar6 = (Texture2D *)SpriteFrame::getTexture(*(SpriteFrame **)(lVar5 + 0x28)),
         pbVar7 = local_78, __src = local_88, __n = uStack_90, pTVar6 == param_1)) {
        if (local_78 == pbStack_70) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_80,(basic_string *)&local_98);
        }
        else {
          *(undefined8 *)local_78 = 0;
          *(undefined8 *)(local_78 + 8) = 0;
          *(undefined8 *)(local_78 + 0x10) = 0;
          if (((byte)local_98 & 1) == 0) {
            *(void **)(local_78 + 0x10) = local_88;
            *(ulong *)(local_78 + 8) = uStack_90;
            *(ulong *)local_78 = CONCAT71(uStack_97,local_98);
          }
          else {
            if (0xffffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_90 < 0x17) {
              pbVar8 = local_78 + 1;
              *local_78 = SUB41((int)uStack_90 << 1,0);
              if (uStack_90 != 0) goto LAB_00f480dc;
            }
            else {
              uVar9 = uStack_90 + 0x10 & 0xfffffffffffffff0;
              pbVar8 = operator_new(uVar9);
              *(ulong *)(pbVar7 + 8) = __n;
              *(basic_string **)(pbVar7 + 0x10) = pbVar8;
              *(ulong *)pbVar7 = uVar9 | 1;
LAB_00f480dc:
              memcpy(pbVar8,__src,__n);
            }
            pbVar8[__n] = (basic_string)0x0;
          }
          local_78 = pbVar7 + 0x18;
        }
      }
      if (((byte)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      pbVar4 = local_78;
      plVar10 = (long *)*plVar10;
      pbVar7 = local_80;
      pbVar8 = local_78;
    } while (plVar10 != (long *)0x0);
    for (; pbVar7 != pbVar4; pbVar7 = pbVar7 + 0x18) {
      PlistFramesCache::eraseFrame((PlistFramesCache *)(this + 0x50),pbVar7);
      pbVar8 = local_80;
    }
    if (pbVar8 != (basic_string *)0x0) {
      pbVar7 = pbVar8;
      if (local_78 != pbVar8) {
        bVar1 = local_78[-0x18];
        pbVar4 = local_78 + -0x18;
        pbVar7 = local_78;
        while( true ) {
          pbVar3 = pbVar4;
          if (((byte)bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + -8));
          }
          pbVar7 = local_80;
          if (pbVar8 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar4 = pbVar3 + -0x18;
          pbVar7 = pbVar3;
        }
      }
      local_78 = pbVar8;
      operator_delete(pbVar7);
    }
  }
                    /* try { // try from 00f48188 to 0104825f has its CatchHandler @ 00f48188
                       catch() { ... } // from try @ 00f48188 with catch @ 00f48188
                       catch() { ... } // from try @ 00f48338 with catch @ 00f48188 */
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

