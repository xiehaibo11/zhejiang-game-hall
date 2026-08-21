
/* cocos2d::FontAtlas::conversionU32TOGB2312(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&,
   std::__ndk1::unordered_map<unsigned int, unsigned int, std::__ndk1::hash<unsigned int>,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   unsigned int> > >&) */

void __thiscall
cocos2d::FontAtlas::conversionU32TOGB2312
          (FontAtlas *this,basic_string *param_1,unordered_map *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  char *__s;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint local_7c [3];
  uint *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  uVar6 = uVar1 << 1;
  __s = operator_new__(uVar6,(nothrow_t *)&std::nothrow);
  memset(__s,0,uVar6);
  if (*(int *)(*(long *)(this + 0x88) + 0x38) == 0x67622020) {
    pbVar2 = param_1 + 4;
    if (((byte)*param_1 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_1 + 0x10);
    }
    conversionEncodingJNI((char *)pbVar2,(int)uVar6,"UTF-32LE",__s,"GB2312");
  }
  if (uVar1 != 0) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      pbVar2 = param_1 + 4;
      if (((byte)*param_1 & 1) != 0) {
        pbVar2 = *(basic_string **)(param_1 + 0x10);
      }
      uVar8 = *(uint *)(pbVar2 + uVar6 * 4);
      local_7c[0] = uVar8;
      if (uVar8 < 0x100) {
        local_70 = local_7c;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
                ::
                __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int&&>,std::__ndk1::tuple<>>
                          ((uint *)param_2,(piecewise_construct_t *)local_7c,(tuple *)&DAT_0143a342,
                           (tuple *)&local_70);
        lVar5 = 1;
      }
      else {
        uVar8 = (uint)CONCAT11(__s[lVar7],(__s + lVar7)[1]);
        local_70 = local_7c;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
                ::
                __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int&&>,std::__ndk1::tuple<>>
                          ((uint *)param_2,(piecewise_construct_t *)local_7c,(tuple *)&DAT_0143a342,
                           (tuple *)&local_70);
        lVar5 = 2;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + lVar5;
      *(uint *)(lVar4 + 0x14) = uVar8;
    } while (uVar1 != uVar6);
  }
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

