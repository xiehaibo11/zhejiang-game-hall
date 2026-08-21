
/* cocos2d::LabelAtlas::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 __thiscall
cocos2d::LabelAtlas::initWithString(LabelAtlas *this,basic_string *param_1,basic_string *param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_120 [2];
  void *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [16];
  void *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  byte local_b8 [8];
  ulong local_b0;
  void *local_a8;
  undefined1 *local_98;
  void *local_90;
  ulong local_88;
  undefined8 *local_80;
  long local_68;
  
                    /* try { // try from 00f10b9c to 01010ba3 has its CatchHandler @ 00f10c00 */
                    /* try { // try from 00f10ba4 to 01010c1b has its CatchHandler @ 00f10b68 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x50))(local_b8,plVar8,param_2);
                    /* catch() { ... } // from try @ 00f10b9c with catch @ 00f10c00 */
  pvVar2 = (void *)((ulong)local_b8 | 1);
  uVar12 = (ulong)(local_b8[0] >> 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar2 = local_a8;
    uVar12 = local_b0;
  }
  uVar13 = uVar12;
  if (uVar12 == 0) {
LAB_00f10c30:
    uVar13 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar13 == 0) goto LAB_00f10c30;
      lVar10 = uVar13 - 1;
                    /* try { // try from 00f10c1c to 01010c57 has its CatchHandler @ 00f10c1c
                       catch() { ... } // from try @ 00f10c1c with catch @ 00f10c1c
                       catch() { ... } // from try @ 00f10c60 with catch @ 00f10c1c
                       catch() { ... } // from try @ 00f10c88 with catch @ 00f10c1c
                       catch() { ... } // from try @ 00f10cb0 with catch @ 00f10c1c
                       catch() { ... } // from try @ 00f10d0c with catch @ 00f10c1c */
      uVar13 = uVar13 - 1;
    } while (*(char *)((long)pvVar2 + lVar10) != '/');
  }
  if (uVar13 <= uVar12) {
    uVar12 = uVar13;
  }
  local_88 = 0;
  local_80 = (undefined8 *)0x0;
  local_90 = (void *)0x0;
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 0x17) {
                    /* try { // try from 00f10c58 to 01010c5f has its CatchHandler @ 00f10db0 */
    puVar15 = (undefined8 *)((ulong)&local_90 | 1);
                    /* try { // try from 00f10c60 to 01010c7f has its CatchHandler @ 00f10c1c */
    local_90 = (void *)(ulong)(byte)((int)uVar12 << 1);
    if (uVar12 == 0) goto LAB_00f10c9c;
  }
  else {
    uVar13 = uVar12 + 0x10 & 0xfffffffffffffff0;
    puVar15 = operator_new(uVar13);
    local_90 = (void *)(uVar13 | 1);
                    /* try { // try from 00f10c80 to 01010c87 has its CatchHandler @ 00f10dac */
                    /* try { // try from 00f10c88 to 01010ca7 has its CatchHandler @ 00f10c1c */
    local_88 = uVar12;
    local_80 = puVar15;
  }
  memcpy(puVar15,pvVar2,uVar12);
LAB_00f10c9c:
  *(undefined1 *)((long)puVar15 + uVar12) = 0;
                    /* try { // try from 00f10ca8 to 01010caf has its CatchHandler @ 00f10da8 */
                    /* try { // try from 00f10cb0 to 01010ccf has its CatchHandler @ 00f10c1c */
  puVar9 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,"/",1);
  local_c0 = (char *)puVar9[2];
  uStack_c8 = puVar9[1];
  local_d0 = *puVar9;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
                    /* try { // try from 00f10cd0 to 01010cd7 has its CatchHandler @ 00f10da4 */
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0xc0))(&local_90,plVar8,local_b8);
                    /* try { // try from 00f10d04 to 01010d0b has its CatchHandler @ 00f10d88 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_120,"textureFilename");
                    /* try { // try from 00f10d0c to 01010dcb has its CatchHandler @ 00f10c1c */
  local_98 = (undefined1 *)local_120;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
            ((basic_string *)&local_90,(piecewise_construct_t *)local_120,(tuple *)&DAT_0143ac4e,
             (tuple *)&local_98);
  cocos2d::Value::asString();
  uVar12 = local_d0 >> 1 & 0x7f;
  pcVar4 = (char *)((ulong)&local_d0 | 1);
  if ((local_d0 & 1) != 0) {
    uVar12 = uStack_c8;
    pcVar4 = local_c0;
  }
  puVar9 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_108,0,pcVar4,uVar12);
  local_e0 = (void *)puVar9[2];
  uStack_e8 = puVar9[1];
  local_f0 = *puVar9;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
                    /* catch() { ... } // from try @ 00f10d04 with catch @ 00f10d88 */
  if (((byte)local_120[0]._0_1_ & 1) != 0) {
    operator_delete(local_110);
  }
                    /* catch() { ... } // from try @ 00f10cd0 with catch @ 00f10da4 */
                    /* catch() { ... } // from try @ 00f10ca8 with catch @ 00f10da8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,"itemWidth");
                    /* catch() { ... } // from try @ 00f10c80 with catch @ 00f10dac */
                    /* catch() { ... } // from try @ 00f10c58 with catch @ 00f10db0 */
  local_120[0] = local_108;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                     ((basic_string *)&local_90,(piecewise_construct_t *)local_108,
                      (tuple *)&DAT_0143ac4e,(tuple *)local_120);
                    /* catch() { ... } // from try @ 00f10e10 with catch @ 00f10dcc */
  iVar5 = cocos2d::Value::asInt((Value *)(lVar10 + 0x28));
  lVar10 = Director::getInstance();
  fVar16 = *(float *)(lVar10 + 0x1a0);
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,"itemHeight");
                    /* try { // try from 00f10e08 to 01010e0f has its CatchHandler @ 00f10e74 */
                    /* try { // try from 00f10e10 to 01010e8f has its CatchHandler @ 00f10dcc */
  local_120[0] = local_108;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                     ((basic_string *)&local_90,(piecewise_construct_t *)local_108,
                      (tuple *)&DAT_0143ac4e,(tuple *)local_120);
  iVar6 = cocos2d::Value::asInt((Value *)(lVar10 + 0x28));
  lVar10 = Director::getInstance();
  fVar17 = *(float *)(lVar10 + 0x1a0);
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_108,"firstChar");
  local_120[0] = local_108;
                    /* catch() { ... } // from try @ 00f10e08 with catch @ 00f10e74 */
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                     ((basic_string *)&local_90,(piecewise_construct_t *)local_108,
                      (tuple *)&DAT_0143ac4e,(tuple *)local_120);
  uVar7 = cocos2d::Value::asInt((Value *)(lVar10 + 0x28));
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar11 = (Texture2D *)TextureCache::addImage(this_01,(basic_string *)&local_f0);
  uVar1 = (uint)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
  }
  uVar12 = AtlasNode::initWithTexture
                     ((AtlasNode *)this,pTVar11,(int)((float)iVar5 / fVar16),
                      (int)((float)iVar6 / fVar17),uVar1);
  if ((uVar12 & 1) != 0) {
    *(undefined4 *)(this + 0x408) = uVar7;
    (**(code **)(*(long *)this + 0x558))(this,param_1);
  }
  pvVar2 = local_90;
  puVar15 = local_80;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
    pvVar2 = local_90;
    puVar15 = local_80;
  }
  while (puVar15 != (void *)0x0) {
    pvVar14 = (void *)*puVar15;
    local_90 = pvVar2;
    cocos2d::Value::~Value((Value *)(puVar15 + 5));
    if ((*(byte *)(puVar15 + 2) & 1) != 0) {
      operator_delete((void *)puVar15[4]);
    }
    operator_delete(puVar15);
    pvVar2 = local_90;
    puVar15 = pvVar14;
  }
  local_90 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

