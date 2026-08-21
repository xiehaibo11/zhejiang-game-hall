
/* cocos2d::experimental::TMXTiledMap::buildWithMapInfo(cocos2d::TMXMapInfo*) */

void __thiscall
cocos2d::experimental::TMXTiledMap::buildWithMapInfo(TMXTiledMap *this,TMXMapInfo *param_1)

{
  vector<cocos2d::TMXObjectGroup*,std::__ndk1::allocator<cocos2d::TMXObjectGroup*>> *this_00;
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  Size *pSVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Size::operator=((Size *)(this + 0x2f8),(Size *)(param_1 + 0x40));
  Size::operator=((Size *)(this + 0x300),(Size *)(param_1 + 0x48));
  this_00 = (vector<cocos2d::TMXObjectGroup*,std::__ndk1::allocator<cocos2d::TMXObjectGroup*>> *)
            (this + 0x310);
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(param_1 + 0x30);
  if (this_00 !=
      (vector<cocos2d::TMXObjectGroup*,std::__ndk1::allocator<cocos2d::TMXObjectGroup*>> *)
      (param_1 + 0x80)) {
    puVar6 = *(undefined8 **)(this + 0x310);
    puVar8 = *(undefined8 **)(this + 0x318);
    if (puVar6 != puVar8) {
      do {
        puVar7 = puVar6 + 1;
        Ref::release((Ref *)*puVar6);
        puVar6 = puVar7;
      } while (puVar8 != puVar7);
      puVar6 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(this + 0x318) = puVar6;
    std::__ndk1::vector<cocos2d::TMXObjectGroup*,std::__ndk1::allocator<cocos2d::TMXObjectGroup*>>::
    assign<cocos2d::TMXObjectGroup**>
              (this_00,*(TMXObjectGroup ***)(param_1 + 0x80),*(TMXObjectGroup ***)(param_1 + 0x88));
    puVar8 = *(undefined8 **)(this + 0x318);
    for (puVar6 = *(undefined8 **)(this + 0x310); puVar6 != puVar8; puVar6 = puVar6 + 1) {
      Ref::retain((Ref *)*puVar6);
    }
  }
  if ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
       *)(this + 0x328) !=
      (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
       *)(param_1 + 0xa8)) {
    *(undefined4 *)(this + 0x348) = *(undefined4 *)(param_1 + 200);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                *)(this + 0x328),*(undefined8 *)(param_1 + 0xb8),0);
  }
  if ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
       *)(this + 0x350) !=
      (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
       *)(param_1 + 0x120)) {
    *(undefined4 *)(this + 0x370) = *(undefined4 *)(param_1 + 0x140);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,cocos2d::Value>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                *)(this + 0x350),*(undefined8 *)(param_1 + 0x130),0);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  puVar8 = *(undefined8 **)(param_1 + 0x58);
  if (puVar6 != puVar8) {
    iVar5 = 0;
    do {
      if (((TMXLayerInfo *)*puVar6)[0x78] != (TMXLayerInfo)0x0) {
                    /* catch() { ... } // from try @ 00efbde8 with catch @ 00efbf7c */
        plVar2 = (long *)parseLayer(this,(TMXLayerInfo *)*puVar6,param_1);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*(long *)this + 0x218))(this,plVar2,iVar5,iVar5);
                    /* catch() { ... } // from try @ 00efbdd0 with catch @ 00efbfac */
          puVar3 = (ulong *)(**(code **)(*plVar2 + 0x168))(plVar2);
                    /* catch() { ... } // from try @ 00efc4a4 with catch @ 00efbfc8 */
          pSVar4 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
          Size::Size((Size *)&local_60,pSVar4);
          uVar9 = *puVar3;
          local_60 = local_60 ^
                     (local_60 ^ uVar9) &
                     CONCAT44(-(uint)((float)(local_60 >> 0x20) < (float)(uVar9 >> 0x20)),
                              -(uint)((float)local_60 < (float)uVar9));
          (**(code **)(*(long *)this + 0x160))(this,&local_60);
        }
        iVar5 = iVar5 + 1;
      }
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

