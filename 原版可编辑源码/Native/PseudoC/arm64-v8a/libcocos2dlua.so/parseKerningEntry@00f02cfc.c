
/* cocos2d::BMFontConfiguration::parseKerningEntry(char const*) */

void __thiscall
cocos2d::BMFontConfiguration::parseKerningEntry(BMFontConfiguration *this,char *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00f02be4 with catch @ 00f02d0c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f02bd4 with catch @ 00f02d20 */
                    /* catch() { ... } // from try @ 00f02a70 with catch @ 00f02d24 */
  pcVar2 = strstr(param_1,"first=");
  sscanf(pcVar2 + 6,"%d",(long)&local_50 + 4);
  pcVar2 = strstr(pcVar2 + 6,"second=");
  sscanf(pcVar2 + 7,"%d",&local_50);
  pcVar2 = strstr(pcVar2 + 7,"amount=");
                    /* catch() { ... } // from try @ 00f028dc with catch @ 00f02d88 */
  sscanf(pcVar2 + 7,"%d",&local_54);
  local_60 = local_50;
  local_40 = (undefined1 *)&local_60;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,int>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 0x80),(piecewise_construct_t *)&local_60,
                     (tuple *)&DAT_0143a5ce,(tuple *)&local_40);
  *(undefined4 *)(lVar3 + 0x18) = local_54;
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00f028d0 with catch @ 00f02dec */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00f02b5c with catch @ 00f02df0 */
  __stack_chk_fail();
}

