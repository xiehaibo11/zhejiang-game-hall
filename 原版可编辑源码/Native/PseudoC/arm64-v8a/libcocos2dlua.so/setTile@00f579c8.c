
/* cocos2d::TileMapAtlas::setTile(cocos2d::Color3B const&, cocos2d::Vec2 const&) */

void __thiscall cocos2d::TileMapAtlas::setTile(TileMapAtlas *this,Color3B *param_1,Vec2 *param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  byte local_b0 [8];
  ulong local_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  ulong *local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00f579ac with catch @ 00f579fc */
  pcVar1 = (char *)(*(long *)(*(long *)(this + 0x418) + 0x10) +
                   (ulong)(uint)(int)(*(float *)param_2 +
                                     *(float *)(param_2 + 4) *
                                     (float)(int)*(short *)(*(long *)(this + 0x418) + 6)) * 3);
                    /* try { // try from 00f57a18 to 01057a87 has its CatchHandler @ 00f57a18
                       catch() { ... } // from try @ 00f57a18 with catch @ 00f57a18
                       catch() { ... } // from try @ 00f57f68 with catch @ 00f57a18 */
  if (*pcVar1 != '\0') {
    uVar3 = *(undefined2 *)param_1;
    *(Color3B *)(pcVar1 + 2) = param_1[2];
    *(undefined2 *)pcVar1 = uVar3;
    StringUtils::toString<float>(*(float *)param_2);
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_98,",",1);
    local_70 = (void *)puVar6[2];
    uStack_78 = puVar6[1];
    local_80 = (ulong *)*puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    StringUtils::toString<float>(*(float *)(param_2 + 4));
                    /* try { // try from 00f57a88 to 01057a8f has its CatchHandler @ 00f57fcc */
    uVar2 = (ulong)(local_b0[0] >> 1);
    pcVar1 = (char *)((ulong)local_b0 | 1);
    if ((local_b0[0] & 1) != 0) {
      uVar2 = local_a8;
      pcVar1 = local_a0;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_80,pcVar1,uVar2);
    local_50 = (void *)puVar6[2];
    uStack_58 = puVar6[1];
    local_60 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00f57ac4 to 01057acb has its CatchHandler @ 00f57fbc */
    if ((local_b0[0] & 1) != 0) {
                    /* try { // try from 00f57b58 to 01057b63 has its CatchHandler @ 00f57fec */
      operator_delete(local_a0);
    }
                    /* try { // try from 00f57b64 to 01057b6f has its CatchHandler @ 00f57fdc */
    if (((ulong)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_98[0] & 1) != 0) {
                    /* try { // try from 00f57adc to 01057ae7 has its CatchHandler @ 00f57fa4 */
      operator_delete(local_88);
    }
    local_80 = &local_60;
                    /* try { // try from 00f57ae8 to 01057aef has its CatchHandler @ 00f57fd4 */
    lVar7 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 1000),(piecewise_construct_t *)&local_60,
                       (tuple *)&DAT_0143dca1,(tuple *)&local_80);
    iVar5 = cocos2d::Value::asInt((Value *)(lVar7 + 0x28));
    updateAtlasValueAt(this,param_2,param_1,iVar5);
    if ((local_60 & 1) != 0) {
                    /* try { // try from 00f57b2c to 01057b57 has its CatchHandler @ 00f57ff0 */
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

