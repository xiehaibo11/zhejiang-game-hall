
/* cocos2d::TMXLayer::initWithTilesetInfo(cocos2d::TMXTilesetInfo*, cocos2d::TMXLayerInfo*,
   cocos2d::TMXMapInfo*) */

void __thiscall
cocos2d::TMXLayer::initWithTilesetInfo
          (TMXLayer *this,TMXTilesetInfo *param_1,TMXLayerInfo *param_2,TMXMapInfo *param_3)

{
  TMXLayerInfo *pTVar1;
  undefined4 uVar2;
  long lVar3;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar4;
  ulong uVar5;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *p_Var6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Size aSStack_78 [4];
  float local_74;
  float local_70 [2];
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  Size::Size((Size *)&local_60,(Size *)(param_2 + 0x68));
  if (param_1 != (TMXTilesetInfo *)0x0) {
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
    pTVar4 = (Texture2D *)TextureCache::addImage(this_01,(basic_string *)(param_1 + 0x60));
    uVar8 = 0;
    if (pTVar4 == (Texture2D *)0x0) goto LAB_00f4c418;
    fVar11 = 1.0;
                    /* try { // try from 00f4c19c to 0104c1b3 has its CatchHandler @ 00f4d5b4 */
    uVar5 = SpriteBatchNode::initWithTexture
                      ((SpriteBatchNode *)this,pTVar4,(long)(local_60 * fStack_5c * 0.35 + 1.0));
    if ((uVar5 & 1) != 0) {
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this + 0x3a0) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (param_2 + 0x50)) {
                    /* try { // try from 00f4c1c4 to 0104c1cb has its CatchHandler @ 00f4d4c8 */
        uVar5 = *(ulong *)(param_2 + 0x58);
        pTVar1 = *(TMXLayerInfo **)(param_2 + 0x60);
        if (((byte)param_2[0x50] & 1) == 0) {
          pTVar1 = param_2 + 0x51;
          uVar5 = (ulong)((byte)param_2[0x50] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x3a0),(char *)pTVar1,uVar5);
      }
                    /* try { // try from 00f4c1e0 to 0104c1e7 has its CatchHandler @ 00f4d4bc */
      Size::operator=((Size *)(this + 0x3dc),(Size *)&local_60);
      *(undefined8 *)(this + 0x3f0) = *(undefined8 *)(param_2 + 0x70);
      this[0x3b8] = *(TMXLayer *)(param_2 + 0x79);
      p_Var6 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                *)TMXLayerInfo::getProperties(param_2);
      if ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           *)(this + 0x410) != p_Var6) {
        *(undefined4 *)(this + 0x430) = *(undefined4 *)(p_Var6 + 0x20);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,void*>*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                    *)(this + 0x410),*(undefined8 *)(p_Var6 + 0x10),0);
      }
      lVar7 = Director::getInstance();
      uVar2 = *(undefined4 *)(lVar7 + 0x1a0);
      *(TMXTilesetInfo **)(this + 0x3f8) = param_1;
      *(undefined4 *)(this + 0x3d8) = uVar2;
      Ref::retain((Ref *)param_1);
      Size::operator=((Size *)(this + 0x3e4),(Size *)(param_3 + 0x48));
      uVar8 = *(undefined8 *)(param_3 + 0x30);
      *(undefined8 *)(this + 0x408) = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 *)(this + 0x400) = uVar8;
      fVar9 = (float)calculateLayerOffset(this,param_2 + 0x7c);
      lVar7 = Director::getInstance();
                    /* try { // try from 00f4c268 to 0104c27f has its CatchHandler @ 00f4d5b4 */
      fVar10 = *(float *)(lVar7 + 0x1a0);
      lVar7 = Director::getInstance();
      fStack_64 = fVar11 / *(float *)(lVar7 + 0x1a0);
      local_68 = fVar9 / fVar10;
                    /* try { // try from 00f4c290 to 0104c297 has its CatchHandler @ 00f4d4c0 */
      (**(code **)(*(long *)this + 0x98))(this,&local_68);
      uVar8 = ccCArrayNew((long)(local_60 * fStack_5c));
      *(undefined8 *)(this + 0x3d0) = uVar8;
      if (*(int *)(this + 0x400) == 1) {
                    /* try { // try from 00f4c2ac to 0104c2b3 has its CatchHandler @ 00f4d4b4 */
        if (*(int *)(this + 0x404) == 0) {
                    /* try { // try from 00f4c35c to 0104c363 has its CatchHandler @ 00f4d4b8 */
                    /* try { // try from 00f4c378 to 0104c37f has its CatchHandler @ 00f4d494 */
          fVar9 = (*(float *)(this + 0x3e0) + 0.5) * *(float *)(this + 1000);
          fVar11 = (*(float *)(this + 0x3e4) + (float)*(int *)(this + 0x40c)) *
                   (float)(int)(*(float *)(this + 0x3dc) * 0.5) +
                   *(float *)(this + 0x3e4) * (float)((int)*(float *)(this + 0x3dc) % 2);
        }
        else {
          fVar11 = (*(float *)(this + 0x3dc) + 0.5) * *(float *)(this + 0x3e4);
          fVar9 = (*(float *)(this + 1000) + (float)*(int *)(this + 0x40c)) *
                  (float)(int)(*(float *)(this + 0x3e0) * 0.5) +
                  *(float *)(this + 1000) * (float)((int)*(float *)(this + 0x3e0) % 2);
        }
      }
      else {
                    /* try { // try from 00f4c334 to 0104c34b has its CatchHandler @ 00f4d5b4 */
        fVar11 = *(float *)(this + 0x3dc) * *(float *)(this + 0x3e4);
        fVar9 = *(float *)(this + 0x3e0) * *(float *)(this + 1000);
      }
      Size::Size((Size *)local_70,fVar11,fVar9);
      lVar7 = Director::getInstance();
      fVar10 = *(float *)(lVar7 + 0x1a0);
      Size::Size(aSStack_78,fVar11,fVar9);
      lVar7 = Director::getInstance();
      Size::Size((Size *)&local_68,local_70[0] / fVar10,local_74 / *(float *)(lVar7 + 0x1a0));
                    /* try { // try from 00f4c400 to 0104c417 has its CatchHandler @ 00f4d5b4 */
      (**(code **)(*(long *)this + 0x160))(this,&local_68);
      uVar8 = 1;
      this[0x3c0] = (TMXLayer)0x0;
      *(undefined4 *)(this + 0x3bc) = 0;
      goto LAB_00f4c418;
    }
  }
  uVar8 = 0;
LAB_00f4c418:
                    /* try { // try from 00f4c41c to 0104c423 has its CatchHandler @ 00f4d4b0 */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f4c448 to 0104c44f has its CatchHandler @ 00f4d48c */
    __stack_chk_fail(uVar8);
  }
                    /* try { // try from 00f4c42c to 0104c43b has its CatchHandler @ 00f4d498 */
  return;
}

