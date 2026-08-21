
/* cocos2d::experimental::TMXLayer::initWithTilesetInfo(cocos2d::TMXTilesetInfo*,
   cocos2d::TMXLayerInfo*, cocos2d::TMXMapInfo*) */

undefined8 __thiscall
cocos2d::experimental::TMXLayer::initWithTilesetInfo
          (TMXLayer *this,TMXTilesetInfo *param_1,TMXLayerInfo *param_2,TMXMapInfo *param_3)

{
  ulong uVar1;
  TMXLayerInfo *pTVar2;
  int iVar3;
  long lVar4;
  Director *this_00;
  TextureCache *this_01;
  Ref *this_02;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *p_Var5;
  long lVar6;
  GLProgramCache *this_03;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_c0;
  float fStack_bc;
  void *local_b0;
  Size aSStack_a8 [4];
  float local_a4;
  float local_a0 [2];
  Mat4 aMStack_98 [64];
  long local_58;
  
                    /* try { // try from 00ef7f9c to 00ff7fef has its CatchHandler @ 00ef7f9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef7f9c with catch @ 00ef7f9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef7ff8 with catch @ 00ef7f9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef803c with catch @ 00ef7f9c
                        */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 != (TMXTilesetInfo *)0x0) {
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
    this_02 = (Ref *)TextureCache::addImage(this_01,(basic_string *)(param_1 + 0x60));
    *(Ref **)(this + 0x360) = this_02;
    Ref::retain(this_02);
  }
                    /* try { // try from 00ef7ff0 to 00ff7ff7 has its CatchHandler @ 00ef8094 */
                    /* try { // try from 00ef7ff8 to 00ff802f has its CatchHandler @ 00ef7f9c */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x2f8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_2 + 0x50)) {
    uVar1 = *(ulong *)(param_2 + 0x58);
    pTVar2 = *(TMXLayerInfo **)(param_2 + 0x60);
    if (((byte)param_2[0x50] & 1) == 0) {
      pTVar2 = param_2 + 0x51;
      uVar1 = (ulong)((byte)param_2[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x2f8),(char *)pTVar2,uVar1);
  }
  Size::operator=((Size *)(this + 0x310),(Size *)(param_2 + 0x68));
  uVar7 = *(undefined8 *)(param_2 + 0x70);
                    /* try { // try from 00ef8030 to 00ff803b has its CatchHandler @ 00ef8078 */
  this[0x3e4] = (TMXLayer)0x1;
  *(undefined8 *)(this + 800) = uVar7;
                    /* try { // try from 00ef803c to 00ff8097 has its CatchHandler @ 00ef7f9c */
  (**(code **)(*(long *)this + 0x490))(this,param_2[0x79]);
  p_Var5 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            *)TMXLayerInfo::getProperties(param_2);
  if ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
       *)(this + 0x338) != p_Var5) {
    *(undefined4 *)(this + 0x358) = *(undefined4 *)(p_Var5 + 0x20);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                *)(this + 0x338),*(undefined8 *)(p_Var5 + 0x10),0);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef8030 with catch @ 00ef8078
                        */
  *(TMXTilesetInfo **)(this + 0x328) = param_1;
  if (param_1 != (TMXTilesetInfo *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  Size::operator=((Size *)(this + 0x318),(Size *)(param_3 + 0x48));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef7ff0 with catch @ 00ef8094
                        */
  iVar3 = *(int *)(param_3 + 0x30);
                    /* try { // try from 00ef8098 to 00ff80e7 has its CatchHandler @ 00ef8098
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef8098 with catch @ 00ef8098
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef80f0 with catch @ 00ef8098
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef814c with catch @ 00ef8098
                        */
  *(int *)(this + 0x330) = iVar3;
  if (iVar3 == 2) {
                    /* try { // try from 00ef80e8 to 00ff80ef has its CatchHandler @ 00ef81e4 */
    fVar10 = *(float *)(this + 0x318) * 0.5 *
             (*(float *)(param_2 + 0x7c) - *(float *)(param_2 + 0x80));
                    /* try { // try from 00ef80f0 to 00ff811b has its CatchHandler @ 00ef8098 */
    fVar9 = (-*(float *)(param_2 + 0x7c) - *(float *)(param_2 + 0x80)) *
            *(float *)(this + 0x31c) * 0.5;
  }
  else {
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (iVar3 == 0) {
      fVar10 = *(float *)(param_2 + 0x7c) * *(float *)(this + 0x318);
      fVar9 = -(*(float *)(param_2 + 0x80) * *(float *)(this + 0x31c));
    }
  }
  lVar6 = Director::getInstance();
  fVar8 = *(float *)(lVar6 + 0x1a0);
  lVar6 = Director::getInstance();
  fStack_bc = fVar9 / *(float *)(lVar6 + 0x1a0);
                    /* try { // try from 00ef811c to 00ff812b has its CatchHandler @ 00ef81c8 */
  local_c0 = fVar10 / fVar8;
  (**(code **)(*(long *)this + 0x98))(this,&local_c0);
                    /* try { // try from 00ef8140 to 00ff814b has its CatchHandler @ 00ef8198 */
  Size::Size((Size *)local_a0,*(float *)(this + 0x310) * *(float *)(this + 0x318),
             *(float *)(this + 0x314) * *(float *)(this + 0x31c));
  lVar6 = Director::getInstance();
                    /* try { // try from 00ef814c to 00ff81e7 has its CatchHandler @ 00ef8098 */
  fVar9 = *(float *)(lVar6 + 0x1a0);
  Size::Size(aSStack_a8,*(float *)(this + 0x310) * *(float *)(this + 0x318),
             *(float *)(this + 0x314) * *(float *)(this + 0x31c));
  lVar6 = Director::getInstance();
  Size::Size((Size *)&local_c0,local_a0[0] / fVar9,local_a4 / *(float *)(lVar6 + 0x1a0));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef8140 with catch @ 00ef8198
                        */
  (**(code **)(*(long *)this + 0x160))(this,&local_c0);
  tileToNodeTransform();
  Mat4::~Mat4(aMStack_98);
  this_03 = (GLProgramCache *)GLProgramCache::getInstance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef811c with catch @ 00ef81c8
                        */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_c0,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  uVar7 = GLProgramCache::getGLProgram(this_03,(basic_string *)&local_c0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef80e8 with catch @ 00ef81e4
                        */
  (**(code **)(*(long *)this + 0x308))(this,uVar7);
  if (((uint)local_c0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00ef8360 with catch @ 00ef8200 */
    operator_delete(local_b0);
  }
  this[0x3a0] = (TMXLayer)0x0;
  *(undefined4 *)(this + 0x39c) = 0;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

