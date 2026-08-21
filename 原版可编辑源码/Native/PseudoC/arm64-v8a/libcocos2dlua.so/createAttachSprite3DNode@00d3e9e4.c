
/* cocos2d::Sprite3D::createAttachSprite3DNode(cocos2d::NodeData*, cocos2d::MaterialDatas const&) */

void __thiscall
cocos2d::Sprite3D::createAttachSprite3DNode(Sprite3D *this,NodeData *param_1,MaterialDatas *param_2)

{
  basic_string *pbVar1;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>>>
  *this_00;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  Bone3D *pBVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  basic_string *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar2 = *(long **)(param_1 + 0x60);
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar2 == plVar3) {
LAB_00d3eb68:
    puVar4 = *(undefined8 **)(param_1 + 0x80);
    for (puVar10 = *(undefined8 **)(param_1 + 0x78); puVar10 != puVar4; puVar10 = puVar10 + 1) {
      createAttachSprite3DNode(this,(NodeData *)*puVar10,param_2);
                    /* try { // try from 00d3eb84 to 00e3eb87 has its CatchHandler @ 00d3ebcc */
                    /* try { // try from 00d3eb88 to 00e3ec03 has its CatchHandler @ 00d3eb34 */
    }
    if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  pbVar1 = (basic_string *)(param_1 + 8);
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>>>
             *)(this + 800);
  lVar9 = *plVar2;
  do {
    if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 00d3ea60 with catch @ 00d3ea68
                       try { // try from 00d3ea68 to 00e3ea83 has its CatchHandler @ 00d3e9d8 */
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_00,pbVar1);
      if (lVar9 == 0) {
        if ((*(Skeleton3D **)(this + 0x300) == (Skeleton3D *)0x0) ||
           (pBVar7 = (Bone3D *)Skeleton3D::getBoneByName(*(Skeleton3D **)(this + 0x300),pbVar1),
           pBVar7 == (Bone3D *)0x0)) goto LAB_00d3ea54;
        lVar9 = AttachNode::create(pBVar7);
        (**(code **)(*(long *)this + 0x208))(this,lVar9);
                    /* try { // try from 00d3eb34 to 00e3eb63 has its CatchHandler @ 00d3eb34
                       catch() { ... } // from try @ 00d3eb34 with catch @ 00d3eb34
                       catch() { ... } // from try @ 00d3eb88 with catch @ 00d3eb34 */
        local_70 = pbVar1;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)this_00,(piecewise_construct_t *)pbVar1,
                           (tuple *)&DAT_01419632,(tuple *)&local_70);
        *(long *)(lVar6 + 0x28) = lVar9;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x28);
      }
                    /* try { // try from 00d3ea84 to 00e3eab3 has its CatchHandler @ 00d3ea84
                       catch() { ... } // from try @ 00d3ea84 with catch @ 00d3ea84
                       catch() { ... } // from try @ 00d3eac0 with catch @ 00d3ea84 */
      if ((lVar9 != 0) &&
         (lVar9 = createSprite3DNode(this,param_1,(ModelData *)*plVar2,param_2), lVar9 != 0)) {
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          (this_00,pbVar1);
        if (lVar6 == 0) {
                    /* try { // try from 00d3eab4 to 00e3eabf has its CatchHandler @ 00d3eacc */
          if ((*(Skeleton3D **)(this + 0x300) == (Skeleton3D *)0x0) ||
             (pBVar7 = (Bone3D *)Skeleton3D::getBoneByName(*(Skeleton3D **)(this + 0x300),pbVar1),
             pBVar7 == (Bone3D *)0x0)) {
            plVar8 = (long *)0x0;
                    /* try { // try from 00d3eb64 to 00e3eb6f has its CatchHandler @ 00d3ebf0 */
          }
          else {
                    /* try { // try from 00d3eac0 to 00e3eadf has its CatchHandler @ 00d3ea84 */
            plVar8 = (long *)AttachNode::create(pBVar7);
                    /* catch() { ... } // from try @ 00d3eab4 with catch @ 00d3eacc */
            (**(code **)(*(long *)this + 0x208))(this,plVar8);
            local_70 = pbVar1;
            lVar6 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AttachNode*>>>
                    ::
                    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                              ((basic_string *)this_00,(piecewise_construct_t *)pbVar1,
                               (tuple *)&DAT_01419632,(tuple *)&local_70);
            *(long **)(lVar6 + 0x28) = plVar8;
          }
        }
        else {
          plVar8 = *(long **)(lVar6 + 0x28);
        }
        (**(code **)(*plVar8 + 0x208))(plVar8,lVar9);
      }
    }
LAB_00d3ea54:
    plVar2 = plVar2 + 1;
    if (plVar3 == plVar2) goto LAB_00d3eb68;
                    /* try { // try from 00d3ea60 to 00e3ea67 has its CatchHandler @ 00d3ea68 */
    lVar9 = *plVar2;
  } while( true );
}

