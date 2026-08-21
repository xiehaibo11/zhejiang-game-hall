
/* cocos2d::BMFontConfiguration::parseCharacterDefinition(char const*) */

void __thiscall
cocos2d::BMFontConfiguration::parseCharacterDefinition(BMFontConfiguration *this,char *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined4 local_50;
  undefined4 local_4c [3];
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f02b5c to 01002bab has its CatchHandler @ 00f02df0 */
  local_4c[0] = 0;
  pcVar2 = strstr(param_1,"id=");
  sscanf(pcVar2 + 3,"%u",local_4c);
  local_50 = local_4c[0];
  local_40 = (undefined1 *)&local_50;
                    /* try { // try from 00f02bb4 to 01002bcf has its CatchHandler @ 00f02df4 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0x28),(piecewise_construct_t *)&local_50,(tuple *)&DAT_0143a5ce,
                     (tuple *)&local_40);
  *(undefined4 *)(lVar3 + 0x14) = local_4c[0];
                    /* try { // try from 00f02bd4 to 01002be3 has its CatchHandler @ 00f02d20 */
  pcVar2 = strstr(pcVar2 + 3,"x=");
                    /* try { // try from 00f02be4 to 01002bf3 has its CatchHandler @ 00f02d0c */
  sscanf(pcVar2 + 2,"%f",lVar3 + 0x18);
                    /* try { // try from 00f02bf4 to 01002c0f has its CatchHandler @ 00f02cec */
  pcVar2 = strstr(pcVar2 + 2,"y=");
                    /* try { // try from 00f02c10 to 01002e53 has its CatchHandler @ 00f027f0 */
  sscanf(pcVar2 + 2,"%f",lVar3 + 0x1c);
  pcVar2 = strstr(pcVar2 + 2,"width=");
  sscanf(pcVar2 + 6,"%f",lVar3 + 0x20);
  pcVar2 = strstr(pcVar2 + 6,"height=");
  sscanf(pcVar2 + 7,"%f",lVar3 + 0x24);
  pcVar2 = strstr(pcVar2 + 7,"xoffset=");
  sscanf(pcVar2 + 8,"%hd",lVar3 + 0x28);
  pcVar2 = strstr(pcVar2 + 8,"yoffset=");
  sscanf(pcVar2 + 8,"%hd",lVar3 + 0x2a);
                    /* catch() { ... } // from try @ 00f02864 with catch @ 00f02cb8 */
  pcVar2 = strstr(pcVar2 + 8,"xadvance=");
  sscanf(pcVar2 + 9,"%hd",lVar3 + 0x2c);
                    /* catch() { ... } // from try @ 00f02854 with catch @ 00f02cd0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00f02bf4 with catch @ 00f02cec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_4c[0]);
}

