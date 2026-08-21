
/* cocos2d::FontCharMap::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::FontCharMap::create(basic_string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  Director *this;
  TextureCache *this_00;
  Ref *this_01;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_100 [2];
  void *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  byte local_98 [8];
  ulong local_90;
  void *local_88;
  undefined1 *local_78;
  void *local_70;
  ulong local_68;
  undefined8 *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x50))(local_98,plVar8,param_1);
  pvVar1 = (void *)((ulong)local_98 | 1);
  uVar2 = (ulong)(local_98[0] >> 1);
  if ((local_98[0] & 1) != 0) {
    pvVar1 = local_88;
    uVar2 = local_90;
  }
  uVar11 = uVar2;
  if (uVar2 == 0) {
LAB_00f01478:
    uVar11 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar11 == 0) goto LAB_00f01478;
      lVar10 = uVar11 - 1;
      uVar11 = uVar11 - 1;
    } while (*(char *)((long)pvVar1 + lVar10) != '/');
  }
  if (uVar11 <= uVar2) {
    uVar2 = uVar11;
  }
  local_68 = 0;
  local_60 = (undefined8 *)0x0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 00f017d4 to 010017e3 has its CatchHandler @ 00f01c80 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    puVar13 = (undefined8 *)((ulong)&local_70 | 1);
    local_70 = (void *)(ulong)(byte)((int)uVar2 << 1);
    if (uVar2 == 0) goto LAB_00f014e4;
  }
  else {
    uVar11 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar13 = operator_new(uVar11);
    local_70 = (void *)(uVar11 | 1);
    local_68 = uVar2;
    local_60 = puVar13;
  }
  memcpy(puVar13,pvVar1,uVar2);
LAB_00f014e4:
  *(undefined1 *)((long)puVar13 + uVar2) = 0;
  puVar9 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,"/",1);
  local_a0 = (char *)puVar9[2];
  uStack_a8 = puVar9[1];
  local_b0 = *puVar9;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0xc0))(&local_70,plVar8,local_98);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_100,"textureFilename");
  local_78 = (undefined1 *)local_100;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
            ((basic_string *)&local_70,(piecewise_construct_t *)local_100,(tuple *)&DAT_0143a4a2,
             (tuple *)&local_78);
  cocos2d::Value::asString();
  uVar2 = local_b0 >> 1 & 0x7f;
  pcVar4 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    uVar2 = uStack_a8;
    pcVar4 = local_a0;
  }
  puVar9 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_e8,0,pcVar4,uVar2);
  local_c0 = (void *)puVar9[2];
  uStack_c8 = puVar9[1];
  local_d0 = *puVar9;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_100[0]._0_1_ & 1) != 0) {
    operator_delete(local_f0);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"itemWidth");
  local_100[0] = local_e8;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                     ((basic_string *)&local_70,(piecewise_construct_t *)local_e8,
                      (tuple *)&DAT_0143a4a2,(tuple *)local_100);
  uVar5 = cocos2d::Value::asInt((Value *)(lVar10 + 0x28));
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"itemHeight");
  local_100[0] = local_e8;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                     ((basic_string *)&local_70,(piecewise_construct_t *)local_e8,
                      (tuple *)&DAT_0143a4a2,(tuple *)local_100);
  uVar6 = cocos2d::Value::asInt((Value *)(lVar10 + 0x28));
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"firstChar");
  local_100[0] = local_e8;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                     ((basic_string *)&local_70,(piecewise_construct_t *)local_e8,
                      (tuple *)&DAT_0143a4a2,(tuple *)local_100);
  uVar7 = cocos2d::Value::asInt((Value *)(lVar10 + 0x28));
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  this = (Director *)Director::getInstance();
  this_00 = (TextureCache *)Director::getTextureCache(this);
  lVar10 = TextureCache::addImage(this_00,(basic_string *)&local_d0);
  if (lVar10 == 0) {
    this_01 = (Ref *)0x0;
  }
  else {
    this_01 = operator_new(0x40);
    Ref::Ref(this_01);
    *(long *)(this_01 + 0x28) = lVar10;
    *(undefined4 *)(this_01 + 0x30) = uVar7;
    *(undefined4 *)(this_01 + 0x34) = uVar5;
    *(undefined4 *)(this_01 + 0x38) = uVar6;
    *(undefined ***)this_01 = &PTR__FontCharMap_016fd0e8;
    Ref::autorelease(this_01);
  }
  pvVar1 = local_70;
  puVar13 = local_60;
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
    pvVar1 = local_70;
    puVar13 = local_60;
  }
  while (puVar13 != (void *)0x0) {
                    /* try { // try from 00f01748 to 010017b3 has its CatchHandler @ 00f01748
                       catch() { ... } // from try @ 00f01748 with catch @ 00f01748
                       catch() { ... } // from try @ 00f01940 with catch @ 00f01748
                       catch() { ... } // from try @ 00f01b98 with catch @ 00f01748 */
    pvVar12 = (void *)*puVar13;
    local_70 = pvVar1;
    cocos2d::Value::~Value((Value *)(puVar13 + 5));
    if ((*(byte *)(puVar13 + 2) & 1) != 0) {
      operator_delete((void *)puVar13[4]);
    }
    operator_delete(puVar13);
    pvVar1 = local_70;
    puVar13 = pvVar12;
  }
  local_70 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00f017b4 to 010017c3 has its CatchHandler @ 00f01c90 */
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

