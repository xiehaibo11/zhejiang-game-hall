
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::TMXMapInfo::startElement(void*, char const*, char const**) */

void __thiscall
cocos2d::TMXMapInfo::startElement(TMXMapInfo *this,void *param_1,char *param_2,char **param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  Value *pVVar3;
  TMXMapInfo TVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  basic_string *pbVar14;
  basic_istream *pbVar15;
  void *pvVar16;
  TMXObjectGroup *this_00;
  long lVar17;
  TMXLayerInfo *this_01;
  TMXTilesetInfo *pTVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar19;
  long *plVar20;
  undefined8 *puVar21;
  char *pcVar22;
  TMXLayerInfo TVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  char *pcVar30;
  long lVar31;
  ulong *puVar32;
  int *piVar33;
  Value *pVVar34;
  long lVar35;
  TMXLayerInfo *pTVar36;
  TMXTilesetInfo *pTVar37;
  TMXMapInfo *pTVar38;
  undefined2 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulong local_400;
  undefined8 uStack_3f8;
  char *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  char *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  Value *local_3b8;
  Value *local_3b0;
  Value *local_3a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_3a0 [8];
  ulong local_398;
  long *local_390;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_380;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_378 [16];
  void *local_368;
  Value aVStack_360 [16];
  TMXTilesetInfo *local_350;
  ulong uStack_348;
  int *local_340;
  undefined **ppuStack_338;
  undefined4 local_330 [2];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong local_2f8;
  undefined8 uStack_2f0;
  void *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0 [17];
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  ulong local_230;
  TMXTilesetInfo *local_228;
  void *local_220;
  undefined8 uStack_218;
  long *local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1f0;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  char *local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1c0;
  undefined1 uStack_1bf;
  undefined6 uStack_1be;
  int *apiStack_1b8 [2];
  undefined **ppuStack_1a8;
  char *local_1a0;
  char *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  undefined8 uStack_160;
  void *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140 [17];
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar8 = tpidr_el0;
  local_a8 = *(long *)(lVar8 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_3a0,param_2);
  uStack_218 = 0;
  local_220 = (void *)0x0;
  uStack_208 = 0;
  local_210 = (long *)0x0;
  local_200 = 0x3f800000;
  if (param_3 != (char **)0x0) {
    pcVar22 = *param_3;
    while (pcVar22 != (char *)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,pcVar22);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_350,param_3[1]);
      cocos2d::Value::Value((Value *)&local_1f0,(basic_string *)&local_350);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::Value>
                ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  *)&local_220,(basic_string *)&local_1c0,(basic_string *)&local_1c0,
                 (Value *)&local_1f0);
      cocos2d::Value::~Value((Value *)&local_1f0);
      if (((ulong)local_350 & 1) != 0) {
        operator_delete(local_340);
      }
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      pcVar22 = param_3[2];
      param_3 = param_3 + 2;
    }
  }
  uVar26 = (ulong)((byte)local_3a0[0] >> 1);
  if (((byte)local_3a0[0] & 1) != 0) {
    uVar26 = local_398;
  }
  pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            CONCAT44(local_1f0._4_4_,(float)local_1f0);
  switch(uVar26) {
  case 3:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
    iVar10 = memcmp(plVar20,"map",3);
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (iVar10 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_350,"version");
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_350;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
      cocos2d::Value::asString();
      if (((ulong)local_350 & 1) != 0) {
        operator_delete(local_340);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"orientation");
      local_238 = (TMXTilesetInfo **)&local_1f0;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_238);
      cocos2d::Value::asString();
      if (((ulong)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      uVar26 = (ulong)local_350 >> 1 & 0x7f;
      if (((ulong)local_350 & 1) != 0) {
        uVar26 = uStack_348;
      }
      if (uVar26 == 9) {
        piVar1 = (int *)((ulong)&local_350 | 1);
        if (((ulong)local_350 & 1) != 0) {
          piVar1 = local_340;
        }
        iVar10 = memcmp(piVar1,"isometric",9);
        if (iVar10 == 0) {
          uVar13 = 2;
        }
        else {
          iVar10 = memcmp(piVar1,"hexagonal",9);
          if (iVar10 == 0) {
            uVar13 = 1;
          }
          else {
            iVar10 = memcmp(piVar1,"staggered",9);
            if (iVar10 != 0) goto LAB_00f52f84;
            uVar13 = 3;
          }
        }
        *(undefined4 *)(this + 0x30) = uVar13;
      }
      else if (uVar26 == 10) {
        piVar1 = (int *)((ulong)&local_350 | 1);
        if (((ulong)local_350 & 1) != 0) {
          piVar1 = local_340;
        }
        iVar10 = memcmp(piVar1,"orthogonal",10);
        if (iVar10 == 0) {
          *(undefined4 *)(this + 0x30) = 0;
        }
      }
LAB_00f52f84:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_238,"staggeraxis");
      local_3b8 = (Value *)&local_238;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_238,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
      cocos2d::Value::asString();
      if (((ulong)local_238 & 1) != 0) {
        operator_delete(local_228);
      }
      uVar26 = (ulong)local_1f0 >> 1 & 0x7f;
      if (((ulong)local_1f0 & 1) != 0) {
        uVar26 = CONCAT17(uStack_1e1,uStack_1e8);
      }
      if (uVar26 == 1) {
        pcVar22 = (char *)((ulong)&local_1f0 | 1);
        if (((ulong)local_1f0 & 1) != 0) {
          pcVar22 = local_1e0;
        }
        if (*pcVar22 == 'y') {
          *(undefined4 *)(this + 0x34) = 1;
        }
        else if (*pcVar22 == 'x') {
          *(undefined4 *)(this + 0x34) = 0;
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_3b8,"staggerindex");
      local_3d0 = &local_3b8;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_3b8,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_3d0);
      cocos2d::Value::asString();
      if (((ulong)local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      uVar26 = (ulong)local_238 >> 1 & 0x7f;
      if (((ulong)local_238 & 1) != 0) {
        uVar26 = local_230;
      }
                    /* try { // try from 00f5308c to 0105309b has its CatchHandler @ 00f53cc0 */
      if (uVar26 == 4) {
        pTVar18 = (TMXTilesetInfo *)((ulong)&local_238 | 1);
        if (((ulong)local_238 & 1) != 0) {
          pTVar18 = local_228;
        }
        if (*(int *)pTVar18 == 0x6e657665) {
          *(undefined4 *)(this + 0x38) = 1;
        }
      }
      else if (uVar26 == 3) {
                    /* try { // try from 00f5309c to 010530a3 has its CatchHandler @ 00f53cb0 */
        pTVar18 = (TMXTilesetInfo *)((ulong)&local_238 | 1);
        if (((ulong)local_238 & 1) != 0) {
          pTVar18 = local_228;
        }
        iVar10 = memcmp(pTVar18,&DAT_0143db5d,3);
        if (iVar10 == 0) {
          *(undefined4 *)(this + 0x38) = 0;
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_3b8,"hexsidelength");
      local_3d0 = &local_3b8;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_3b8,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3d0);
      fVar40 = (float)cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      if (((ulong)local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      *(int *)(this + 0x3c) = (int)fVar40;
      Size::Size((Size *)&local_3e8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_3b8,"width");
                    /* try { // try from 00f53174 to 01053183 has its CatchHandler @ 00f53c94 */
                    /* try { // try from 00f53184 to 0105318b has its CatchHandler @ 00f53c90 */
      local_3d0 = &local_3b8;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_3b8,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3d0);
      uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      local_3e8 = (TMXTilesetInfo **)CONCAT44(local_3e8._4_4_,uVar13);
      if (((ulong)local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_3b8,"height");
      local_3d0 = &local_3b8;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_3b8,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3d0);
      uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      local_3e8._4_4_ = uVar13;
      if (((ulong)local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      Size::operator=((Size *)(this + 0x40),(Size *)&local_3e8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_3b8,"tilewidth");
      local_3d0 = &local_3b8;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_3b8,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3d0);
      uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      local_3e8 = (TMXTilesetInfo **)CONCAT44(local_3e8._4_4_,uVar13);
      if (((ulong)local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_3b8,"tileheight");
      local_3d0 = &local_3b8;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_3b8,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3d0);
      uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      local_3e8 = (TMXTilesetInfo **)CONCAT44(uVar13,(undefined4)local_3e8);
      if (((ulong)local_3b8 & 1) != 0) {
        operator_delete(local_3a8);
      }
      Size::operator=((Size *)(this + 0x48),(Size *)&local_3e8);
      *(undefined4 *)(this + 0x98) = 1;
      if (((ulong)local_238 & 1) != 0) {
        operator_delete(local_228);
      }
                    /* try { // try from 00f532d0 to 010532e7 has its CatchHandler @ 00f53dec */
      if (((ulong)local_1f0 & 1) == 0) goto joined_r0x00f52e2c;
      operator_delete(local_1e0);
                    /* try { // try from 00f53394 to 010533a7 has its CatchHandler @ 00f53dec */
      if (((ulong)local_350 & 1) == 0) goto LAB_00f532e4;
      goto LAB_00f532dc;
    }
    break;
  case 4:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
                    /* try { // try from 00f50adc to 01050b1f has its CatchHandler @ 00f50db4 */
    if ((int)*plVar20 == 0x656c6974) {
      if (*(int *)(this + 0x98) != 2) {
        iVar10 = *(int *)(*(long *)(*(long *)(this + 0x70) + -8) + 0x40);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_1c0,"id");
        local_350 = (TMXTilesetInfo *)&local_1c0;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_350);
        iVar11 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
        *(int *)(this + 0x9c) = iVar11 + iVar10;
        if (((byte)local_1c0 & 1) != 0) {
          operator_delete(apiStack_1b8[1]);
        }
        apiStack_1b8[0]._0_1_ = 0;
        apiStack_1b8[0]._1_7_ = 0;
        local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        uStack_1bf = 0;
        uStack_1be = 0;
        ppuStack_1a8 = (undefined **)0x0;
        apiStack_1b8[1] = (int *)0x0;
        local_1a0 = (char *)CONCAT44(local_1a0._4_4_,0x3f800000);
        cocos2d::Value::Value((Value *)&local_350,(unordered_map *)&local_1c0);
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_238;
        local_238 = (TMXTilesetInfo **)CONCAT44(local_238._4_4_,*(undefined4 *)(this + 0x9c));
                    /* try { // try from 00f51db0 to 01051dc7 has its CatchHandler @ 00f53de8 */
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                           ((int *)(this + 0x120),(piecewise_construct_t *)&local_238,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        cocos2d::Value::operator=((Value *)(lVar35 + 0x18),(Value *)&local_350);
                    /* try { // try from 00f51dd4 to 01051deb has its CatchHandler @ 00f53c80 */
        cocos2d::Value::~Value((Value *)&local_350);
        piVar1 = apiStack_1b8[1];
        while (piVar1 != (int *)0x0) {
          piVar33 = *(int **)piVar1;
          cocos2d::Value::~Value((Value *)(piVar1 + 10));
          if ((*(byte *)(piVar1 + 4) & 1) != 0) {
            operator_delete(*(void **)(piVar1 + 8));
          }
          operator_delete(piVar1);
          piVar1 = piVar33;
        }
        pvVar16 = (void *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,local_1c0));
        local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        uStack_1bf = 0;
        uStack_1be = 0;
                    /* try { // try from 00f51f78 to 01051f8f has its CatchHandler @ 00f53de8 */
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
        uVar13 = 5;
        goto LAB_00f523e0;
      }
      lVar31 = *(long *)(*(long *)(this + 0x58) + -8);
      Size::Size((Size *)&local_1f0,(Size *)(lVar31 + 0x68));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"gid");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      uVar13 = cocos2d::Value::asUnsignedInt((Value *)(lVar35 + 0x28));
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                CONCAT44(local_1f0._4_4_,(float)local_1f0);
      iVar10 = *(int *)(this + 0xd0);
      if (iVar10 < (int)((float)local_1f0 * local_1f0._4_4_)) {
        lVar35 = *(long *)(lVar31 + 0x70);
        *(int *)(this + 0xd0) = iVar10 + 1;
        *(undefined4 *)(lVar35 + (long)iVar10 * 4) = uVar13;
        pvVar16 = local_220;
        plVar20 = local_210;
        local_1f0 = pbVar19;
        goto joined_r0x00f527d8;
      }
    }
    else {
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                CONCAT44(local_1f0._4_4_,(float)local_1f0);
      if ((int)*plVar20 == 0x61746164) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"encoding");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
                    /* try { // try from 00f50b20 to 01050b63 has its CatchHandler @ 00f5091c */
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        cocos2d::Value::asString();
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1f0,"compression");
                    /* try { // try from 00f50b64 to 01050b6b has its CatchHandler @ 00f50db0 */
                    /* try { // try from 00f50b6c to 01050dcf has its CatchHandler @ 00f5091c */
        local_238 = (TMXTilesetInfo **)&local_1f0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_238);
        cocos2d::Value::asString();
        if (((ulong)local_1f0 & 1) != 0) {
          operator_delete(local_1e0);
        }
        uVar26 = (ulong)((byte)local_1c0 >> 1);
        if (((byte)local_1c0 & 1) != 0) {
          uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
        }
        if (uVar26 == 6) {
          piVar1 = (int *)((ulong)&local_1c0 | 1);
          if (((byte)local_1c0 & 1) != 0) {
            piVar1 = apiStack_1b8[1];
          }
          iVar10 = memcmp(piVar1,"base64",6);
          if (iVar10 == 0) {
            uVar24 = *(uint *)(this + 0xa0);
            this[0xa4] = (TMXMapInfo)0x1;
            *(uint *)(this + 0xa0) = uVar24 | 2;
            uVar26 = (ulong)local_350 >> 1 & 0x7f;
            if (((ulong)local_350 & 1) != 0) {
              uVar26 = uStack_348;
            }
            if (uVar26 == 4) {
              piVar1 = (int *)((ulong)&local_350 | 1);
              if (((ulong)local_350 & 1) != 0) {
                piVar1 = local_340;
              }
              if (*piVar1 == 0x70697a67) {
                uVar24 = uVar24 | 6;
              }
              else {
                if (*piVar1 != 0x62696c7a) goto joined_r0x00f52e2c;
                uVar24 = uVar24 | 10;
              }
LAB_00f52b68:
              *(uint *)(this + 0xa0) = uVar24;
            }
          }
        }
        else if (uVar26 == 3) {
          piVar1 = (int *)((ulong)&local_1c0 | 1);
          if (((byte)local_1c0 & 1) != 0) {
            piVar1 = apiStack_1b8[1];
          }
          iVar10 = memcmp(piVar1,&DAT_0143dbb3,3);
          if (iVar10 == 0) {
            this[0xa4] = (TMXMapInfo)0x1;
            uVar24 = *(uint *)(this + 0xa0) | 0x10;
            goto LAB_00f52b68;
          }
        }
        else if (uVar26 == 0) {
          *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 1;
          lVar35 = *(long *)(*(long *)(this + 0x58) + -8);
          Size::Size((Size *)&local_1f0,(Size *)(lVar35 + 0x68));
          uVar26 = -(ulong)((uint)(int)((float)local_1f0 * local_1f0._4_4_) >> 0x1f) &
                   0xfffffffc00000000 | (ulong)(uint)(int)((float)local_1f0 * local_1f0._4_4_) << 2;
          pvVar16 = malloc(uVar26);
          memset(pvVar16,0,uVar26);
          *(void **)(lVar35 + 0x70) = pvVar16;
        }
        goto joined_r0x00f52e2c;
      }
    }
    break;
  case 5:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
    iVar10 = memcmp(plVar20,"layer",5);
    if (iVar10 == 0) {
      this_01 = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (this_01 != (TMXLayerInfo *)0x0) {
        TMXLayerInfo::TMXLayerInfo(this_01);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_350,"name");
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_350;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
      cocos2d::Value::asString();
      pTVar36 = this_01 + 0x50;
      if (((byte)*pTVar36 & 1) == 0) {
        *(undefined2 *)pTVar36 = 0;
                    /* try { // try from 00f517fc to 01051813 has its CatchHandler @ 00f53de8 */
      }
      else {
        **(undefined1 **)(this_01 + 0x60) = 0;
        *(undefined8 *)(this_01 + 0x58) = 0;
        if (((byte)this_01[0x50] & 1) != 0) {
          operator_delete(*(void **)(this_01 + 0x60));
          *(undefined8 *)(this_01 + 0x50) = 0;
        }
      }
      *(int **)(this_01 + 0x60) = apiStack_1b8[1];
      *(ulong *)(this_01 + 0x58) = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
      *(ulong *)pTVar36 = CONCAT62(uStack_1be,CONCAT11(uStack_1bf,local_1c0));
      apiStack_1b8[1] = (int *)0x0;
      apiStack_1b8[0]._0_1_ = 0;
      apiStack_1b8[0]._1_7_ = 0;
      local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
      uStack_1bf = 0;
      uStack_1be = 0;
      if (((byte)local_350._0_1_ & 1) != 0) {
        operator_delete(local_340);
      }
      Size::Size((Size *)&local_1f0);
                    /* try { // try from 00f51e6c to 01051e83 has its CatchHandler @ 00f53de8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"width");
                    /* try { // try from 00f51e90 to 01051ea7 has its CatchHandler @ 00f53c74 */
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      local_1f0._0_4_ = (float)uVar13;
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"height");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      local_1f0._4_4_ = (float)cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      Size::operator=((Size *)(this_01 + 0x68),(Size *)&local_1f0);
                    /* try { // try from 00f51f24 to 01051f3b has its CatchHandler @ 00f53de8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"visible");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
                    /* try { // try from 00f51f4c to 01051f63 has its CatchHandler @ 00f53c70 */
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      if (*(int *)(lVar35 + 0x30) == 0) {
        bVar9 = 1;
      }
      else {
        bVar9 = cocos2d::Value::asBool((Value *)(lVar35 + 0x28));
      }
      this_01[0x78] = (TMXLayerInfo)(bVar9 & 1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"opacity");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      if (*(int *)(lVar35 + 0x30) == 0) {
        TVar23 = (TMXLayerInfo)0xff;
      }
      else {
        fVar40 = (float)cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
        TVar23 = SUB41((int)(fVar40 * 255.0),0);
      }
      this_01[0x79] = TVar23;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"x");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"y");
                    /* try { // try from 00f52374 to 0105238b has its CatchHandler @ 00f53de4 */
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      uVar42 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
                    /* try { // try from 00f523a0 to 010523a7 has its CatchHandler @ 00f53d84 */
      *(undefined4 *)(this_01 + 0x7c) = uVar13;
      *(undefined4 *)(this_01 + 0x80) = uVar42;
      local_1c0 = SUB81(this_01,0);
      uStack_1bf = (undefined1)((ulong)this_01 >> 8);
      uStack_1be = (undefined6)((ulong)this_01 >> 0x10);
      puVar21 = *(undefined8 **)(this + 0x58);
      if (puVar21 == *(undefined8 **)(this + 0x60)) {
        std::__ndk1::vector<cocos2d::TMXLayerInfo*,std::__ndk1::allocator<cocos2d::TMXLayerInfo*>>::
        __push_back_slow_path<cocos2d::TMXLayerInfo*const&>
                  ((vector<cocos2d::TMXLayerInfo*,std::__ndk1::allocator<cocos2d::TMXLayerInfo*>> *)
                   (this + 0x50),(TMXLayerInfo **)&local_1c0);
      }
      else {
        *puVar21 = this_01;
        *(undefined8 **)(this + 0x58) = puVar21 + 1;
      }
      Ref::retain((Ref *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,local_1c0)));
      Ref::release((Ref *)this_01);
      uVar13 = 2;
LAB_00f523e0:
      *(undefined4 *)(this + 0x98) = uVar13;
      pvVar16 = local_220;
      plVar20 = local_210;
      goto joined_r0x00f527d8;
    }
    iVar10 = memcmp(plVar20,"image",5);
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (iVar10 != 0) break;
    lVar35 = *(long *)(*(long *)(this + 0x70) + -8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_350,"source");
    local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_350;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
              ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,(tuple *)&DAT_0143dc23
               ,(tuple *)&local_1f0);
    cocos2d::Value::asString();
    if (((ulong)local_350 & 1) != 0) {
      operator_delete(local_340);
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar35 + 0x80) != &local_1c0) {
                    /* catch() { ... } // from try @ 00f50b64 with catch @ 00f50db0 */
                    /* catch() { ... } // from try @ 00f50adc with catch @ 00f50db4 */
      uVar26 = (ulong)((byte)local_1c0 >> 1);
      piVar1 = (int *)((ulong)&local_1c0 | 1);
      if (((byte)local_1c0 & 1) != 0) {
        uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
        piVar1 = apiStack_1b8[1];
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar35 + 0x80),(char *)piVar1,uVar26);
    }
    TVar4 = this[0x168];
    if (((byte)TVar4 & 1) == 0) {
      if ((byte)TVar4 >> 1 == 0) goto LAB_00f50de0;
LAB_00f5245c:
      if (((byte)TVar4 & 1) == 0) {
        pTVar38 = this + 0x169;
        uVar26 = (ulong)((byte)TVar4 >> 1);
        if (uVar26 == 0) goto LAB_00f5268c;
LAB_00f52670:
        do {
          if (uVar26 == 0) goto LAB_00f5268c;
          lVar31 = uVar26 - 1;
          uVar26 = uVar26 - 1;
                    /* try { // try from 00f52684 to 0105269f has its CatchHandler @ 00f53d0c */
        } while (pTVar38[lVar31] != (TMXMapInfo)0x2f);
      }
      else {
        uVar26 = *(ulong *)(this + 0x170);
        pTVar38 = *(TMXMapInfo **)(this + 0x178);
        if (uVar26 != 0) goto LAB_00f52670;
LAB_00f5268c:
        uVar26 = 0xffffffffffffffff;
      }
      pbVar14 = (basic_string *)0x0;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_350,(ulong)(this + 0x168),0,(allocator *)(uVar26 + 1));
      std::__ndk1::operator+((__ndk1 *)&local_350,(basic_string *)&local_1c0,pbVar14);
LAB_00f526b4:
      puVar32 = (ulong *)(lVar35 + 0x60);
      if ((*(byte *)puVar32 & 1) == 0) {
        *(undefined2 *)puVar32 = 0;
      }
      else {
        **(undefined1 **)(lVar35 + 0x70) = 0;
        *(undefined8 *)(lVar35 + 0x68) = 0;
        if ((*(byte *)(lVar35 + 0x60) & 1) != 0) {
          operator_delete(*(void **)(lVar35 + 0x70));
          *(undefined8 *)(lVar35 + 0x60) = 0;
        }
      }
      *(char **)(lVar35 + 0x70) = local_1e0;
      *(ulong *)(lVar35 + 0x68) = CONCAT17(uStack_1e1,uStack_1e8);
      *puVar32 = (ulong)local_1f0;
    }
    else {
      if (*(long *)(this + 0x170) != 0) goto LAB_00f5245c;
LAB_00f50de0:
      TVar4 = this[0xd8];
      if (((byte)TVar4 & 1) == 0) {
        pTVar38 = this + 0xd9;
        uVar26 = (ulong)((byte)TVar4 >> 1);
      }
      else {
        uVar26 = *(ulong *)(this + 0xe0);
        pTVar38 = *(TMXMapInfo **)(this + 0xe8);
      }
      if (uVar26 != 0) {
        do {
          if (uVar26 == 0) goto LAB_00f52d5c;
          lVar31 = uVar26 - 1;
          uVar26 = uVar26 - 1;
        } while (pTVar38[lVar31] != (TMXMapInfo)0x2f);
        if (uVar26 != 0xffffffffffffffff) {
          if (((byte)TVar4 & 1) == 0) {
            pTVar38 = this + 0xd9;
            uVar26 = (ulong)((byte)TVar4 >> 1);
            if (uVar26 == 0) goto LAB_00f5345c;
LAB_00f53440:
            do {
              if (uVar26 == 0) goto LAB_00f5345c;
              lVar31 = uVar26 - 1;
              uVar26 = uVar26 - 1;
                    /* try { // try from 00f53450 to 01053467 has its CatchHandler @ 00f53dec */
            } while (pTVar38[lVar31] != (TMXMapInfo)0x2f);
          }
          else {
            uVar26 = *(ulong *)(this + 0xe0);
            pTVar38 = *(TMXMapInfo **)(this + 0xe8);
            if (uVar26 != 0) goto LAB_00f53440;
LAB_00f5345c:
            uVar26 = 0xffffffffffffffff;
          }
          pbVar14 = (basic_string *)0x0;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_350,(ulong)(this + 0xd8),0,(allocator *)(uVar26 + 1));
                    /* try { // try from 00f53478 to 0105348f has its CatchHandler @ 00f53d88 */
          std::__ndk1::operator+((__ndk1 *)&local_350,(basic_string *)&local_1c0,pbVar14);
          goto LAB_00f526b4;
        }
      }
LAB_00f52d5c:
      TVar4 = this[0xf0];
      if (((byte)TVar4 & 1) == 0) {
        uVar26 = (ulong)((byte)TVar4 >> 1);
      }
      else {
        uVar26 = *(ulong *)(this + 0xf8);
      }
      puVar2 = &DAT_013c996e;
      if (uVar26 != 0) {
        puVar2 = &DAT_0144b7ba;
      }
      FUN_007c1fb0(&local_350,this + 0xf0,puVar2);
      uVar26 = (ulong)((byte)local_1c0 >> 1);
      piVar1 = (int *)((ulong)&local_1c0 | 1);
      if (((byte)local_1c0 & 1) != 0) {
        uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
        piVar1 = apiStack_1b8[1];
      }
      puVar21 = (undefined8 *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_350,(char *)piVar1,uVar26);
      uVar45 = puVar21[2];
      uVar6 = *(undefined1 *)puVar21;
      uStack_1e8 = (undefined7)((ulong)puVar21[1] >> 8);
      local_1f0._0_4_ = (float)*(undefined8 *)((long)puVar21 + 1);
      local_1f0._4_4_ = (float)((ulong)*(undefined8 *)((long)puVar21 + 1) >> 0x20);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      if ((*(byte *)(lVar35 + 0x60) & 1) == 0) {
        *(undefined2 *)(lVar35 + 0x60) = 0;
      }
      else {
        **(undefined1 **)(lVar35 + 0x70) = 0;
        *(undefined8 *)(lVar35 + 0x68) = 0;
        if ((*(byte *)(lVar35 + 0x60) & 1) != 0) {
          operator_delete(*(void **)(lVar35 + 0x70));
          *(undefined8 *)(lVar35 + 0x60) = 0;
        }
      }
      *(undefined1 *)(lVar35 + 0x60) = uVar6;
      *(ulong *)(lVar35 + 0x68) = CONCAT71(uStack_1e8,local_1f0._7_1_);
      *(undefined8 *)(lVar35 + 0x70) = uVar45;
      *(ulong *)(lVar35 + 0x61) = CONCAT44(local_1f0._4_4_,(float)local_1f0);
      uStack_1e8 = 0;
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0;
    }
joined_r0x00f52e2c:
    if (((ulong)local_350 & 1) != 0) {
LAB_00f532dc:
      operator_delete(local_340);
    }
LAB_00f532e4:
    pbVar19 = local_1f0;
    if (((byte)local_1c0 & 1) != 0) {
      operator_delete(apiStack_1b8[1]);
      pbVar19 = local_1f0;
    }
    break;
  case 6:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
    iVar10 = memcmp(plVar20,"object",6);
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (iVar10 == 0) {
      pcVar22 = "name";
                    /* try { // try from 00f50fe8 to 01050fef has its CatchHandler @ 00f53d80 */
      lVar31 = *(long *)(*(long *)(this + 0x88) + -8);
                    /* try { // try from 00f50ff0 to 010510ab has its CatchHandler @ 00f50e94 */
      uStack_348 = 0;
      local_350 = (TMXTilesetInfo *)0x0;
      ppuStack_338 = (undefined **)0x0;
      local_340 = (int *)0x0;
      apiStack_1b8[0]._0_1_ = 0xa0;
      apiStack_1b8[0]._1_7_ = 0x13ff2;
      local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xd3;
      uStack_1bf = 0x69;
      uStack_1be = 0x13d;
      lVar35 = 0;
      local_330[0] = 0x3f800000;
      ppuStack_1a8 = (undefined **)0x1475357;
      apiStack_1b8[1] = (int *)0x1475344;
      local_198 = "id";
      local_1a0 = "gid";
      while( true ) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1f0,pcVar22);
        local_3b8 = (Value *)&local_1f0;
        lVar17 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
        cocos2d::Value::Value((Value *)&local_238,(Value *)(lVar17 + 0x28));
        if (((uint)(float)local_1f0 & 1) != 0) {
          operator_delete(local_1e0);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1f0,*(char **)((long)apiStack_1b8 + lVar35 + -8));
        local_3b8 = (Value *)&local_1f0;
                    /* try { // try from 00f510ac to 010510b3 has its CatchHandler @ 00f53c84 */
        lVar17 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_350,(piecewise_construct_t *)&local_1f0,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
                    /* try { // try from 00f510b4 to 010510fb has its CatchHandler @ 00f50e94 */
        cocos2d::Value::operator=((Value *)(lVar17 + 0x28),(Value *)&local_238);
        if (((uint)(float)local_1f0 & 1) != 0) {
          operator_delete(local_1e0);
        }
        cocos2d::Value::~Value((Value *)&local_238);
        if (lVar35 == 0x28) break;
        pcVar22 = *(char **)((long)apiStack_1b8 + lVar35);
        lVar35 = lVar35 + 8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"x");
                    /* try { // try from 00f518bc to 010518d3 has its CatchHandler @ 00f53de8 */
      local_238 = (TMXTilesetInfo **)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_238);
      iVar10 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
                    /* try { // try from 00f518e4 to 010518fb has its CatchHandler @ 00f53da4 */
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"y");
      local_238 = (TMXTilesetInfo **)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_238);
      iVar11 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      fVar47 = *(float *)(this + 0x44);
      fVar41 = *(float *)(this + 0x4c);
      fVar46 = *(float *)(lVar31 + 0x40);
      fVar40 = *(float *)(lVar31 + 0x44);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"height");
                    /* try { // try from 00f5197c to 01051993 has its CatchHandler @ 00f53de8 */
      local_238 = (TMXTilesetInfo **)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_238);
      iVar12 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
                    /* try { // try from 00f519a4 to 010519bb has its CatchHandler @ 00f53d8c */
      lVar35 = Director::getInstance();
      fVar49 = *(float *)(lVar35 + 0x1a0);
      lVar35 = Director::getInstance();
      fVar48 = *(float *)(lVar35 + 0x1a0);
      cocos2d::Value::Value((Value *)&local_238,(fVar46 + (float)iVar10) / fVar49);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"x");
      local_3b8 = (Value *)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_350,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
      cocos2d::Value::operator=((Value *)(lVar35 + 0x28),(Value *)&local_238);
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      cocos2d::Value::~Value((Value *)&local_238);
                    /* try { // try from 00f51a3c to 01051a53 has its CatchHandler @ 00f53de8 */
      cocos2d::Value::Value
                ((Value *)&local_238,
                 (((fVar47 * fVar41 - (float)iVar11) - fVar40) - (float)iVar12) / fVar48);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"y");
                    /* try { // try from 00f51a64 to 01051a7b has its CatchHandler @ 00f53d3c */
      local_3b8 = (Value *)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_350,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
      cocos2d::Value::operator=((Value *)(lVar35 + 0x28),(Value *)&local_238);
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      cocos2d::Value::~Value((Value *)&local_238);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"width");
      local_238 = (TMXTilesetInfo **)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_238);
      iVar10 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
                    /* try { // try from 00f51afc to 01051b13 has its CatchHandler @ 00f53de8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"height");
      local_238 = (TMXTilesetInfo **)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_238);
                    /* try { // try from 00f51b24 to 01051b3b has its CatchHandler @ 00f53d08 */
      iVar11 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      Size::Size((Size *)&local_3d0,(float)iVar10,(float)iVar11);
      fVar40 = (float)local_3d0;
      lVar35 = Director::getInstance();
      fVar41 = *(float *)(lVar35 + 0x1a0);
      fVar47 = local_3d0._4_4_;
      lVar35 = Director::getInstance();
      Size::Size((Size *)&local_1f0,fVar40 / fVar41,fVar47 / *(float *)(lVar35 + 0x1a0));
      Size::operator=((Size *)&local_3d0,(Size *)&local_1f0);
      cocos2d::Value::Value((Value *)&local_238,(float)local_3d0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"width");
      local_3b8 = (Value *)&local_1f0;
                    /* try { // try from 00f51bbc to 01051bd3 has its CatchHandler @ 00f53de8 */
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_350,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
      cocos2d::Value::operator=((Value *)(lVar35 + 0x28),(Value *)&local_238);
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
                    /* try { // try from 00f51be0 to 01051bf7 has its CatchHandler @ 00f53ca4 */
      cocos2d::Value::~Value((Value *)&local_238);
      cocos2d::Value::Value((Value *)&local_238,local_3d0._4_4_);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"height");
      local_3b8 = (Value *)&local_1f0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_350,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
      cocos2d::Value::operator=((Value *)(lVar35 + 0x28),(Value *)&local_238);
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      cocos2d::Value::~Value((Value *)&local_238);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1f0,"rotation");
      local_238 = (TMXTilesetInfo **)&local_1f0;
                    /* try { // try from 00f51c78 to 01051c8f has its CatchHandler @ 00f53de8 */
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_238);
      dVar43 = (double)cocos2d::Value::asDouble((Value *)(lVar35 + 0x28));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_238,"rotation");
                    /* try { // try from 00f51ca4 to 01051cab has its CatchHandler @ 00f53c88 */
      local_3b8 = (Value *)&local_238;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_350,(piecewise_construct_t *)&local_238,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_3b8);
      cocos2d::Value::operator=((Value *)(lVar35 + 0x28),dVar43);
      if (((ulong)local_238 & 1) != 0) {
        operator_delete(local_228);
      }
      if (((uint)(float)local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
      cocos2d::Value::Value((Value *)&local_1f0,(unordered_map *)&local_350);
      pVVar3 = *(Value **)(lVar31 + 0x78);
      if (pVVar3 < *(Value **)(lVar31 + 0x80)) {
        cocos2d::Value::Value(pVVar3,(Value *)&local_1f0);
        *(Value **)(lVar31 + 0x78) = pVVar3 + 0x10;
      }
      else {
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        __push_back_slow_path<cocos2d::Value>
                  ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)(lVar31 + 0x70),
                   (Value *)&local_1f0);
      }
      cocos2d::Value::~Value((Value *)&local_1f0);
                    /* try { // try from 00f51fa0 to 01051fb7 has its CatchHandler @ 00f53c50 */
      *(undefined4 *)(this + 0x98) = 4;
      local_228 = local_350;
      piVar1 = local_340;
      while (piVar1 != (int *)0x0) {
        piVar33 = *(int **)piVar1;
        local_350 = local_228;
        cocos2d::Value::~Value((Value *)(piVar1 + 10));
        if ((*(byte *)(piVar1 + 4) & 1) != 0) {
          operator_delete(*(void **)(piVar1 + 8));
        }
        operator_delete(piVar1);
        local_228 = local_350;
        piVar1 = piVar33;
      }
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                CONCAT44(local_1f0._4_4_,(float)local_1f0);
      local_350 = (TMXTilesetInfo *)0x0;
      pTVar18 = local_228;
joined_r0x00f527c8:
      if (pTVar18 != (TMXTilesetInfo *)0x0) {
LAB_00f527d0:
        operator_delete(local_228);
        pvVar16 = local_220;
        plVar20 = local_210;
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)CONCAT44(local_1f0._4_4_,(float)local_1f0);
        goto joined_r0x00f527d8;
      }
    }
    break;
  case 7:
                    /* try { // try from 00f510fc to 01051103 has its CatchHandler @ 00f53cac */
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
    iVar10 = memcmp(plVar20,"tileset",7);
    if (iVar10 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_350,"source");
                    /* try { // try from 00f51824 to 0105183b has its CatchHandler @ 00f53ddc */
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_350;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
      cocos2d::Value::asString();
      if (((ulong)local_350 & 1) != 0) {
        operator_delete(local_340);
      }
      uVar26 = (ulong)((byte)local_1c0 >> 1);
      if (((byte)local_1c0 & 1) != 0) {
        uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
      }
      if (uVar26 == 0) {
        pTVar18 = operator_new(0x98,(nothrow_t *)&std::nothrow);
        if (pTVar18 != (TMXTilesetInfo *)0x0) {
          TMXTilesetInfo::TMXTilesetInfo(pTVar18);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1f0,"name");
        local_238 = (TMXTilesetInfo **)&local_1f0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_1f0,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_238);
                    /* try { // try from 00f5223c to 01052253 has its CatchHandler @ 00f53de4 */
        cocos2d::Value::asString();
        pTVar37 = pTVar18 + 0x28;
        if (((byte)*pTVar37 & 1) == 0) {
          *(undefined2 *)pTVar37 = 0;
        }
        else {
          **(undefined1 **)(pTVar18 + 0x38) = 0;
          *(undefined8 *)(pTVar18 + 0x30) = 0;
          if (((byte)pTVar18[0x28] & 1) != 0) {
                    /* try { // try from 00f5271c to 01052733 has its CatchHandler @ 00f53de4 */
            operator_delete(*(void **)(pTVar18 + 0x38));
            *(undefined8 *)(pTVar18 + 0x28) = 0;
          }
        }
        *(int **)(pTVar18 + 0x38) = local_340;
        *(ulong *)(pTVar18 + 0x30) = uStack_348;
        *(TMXTilesetInfo **)pTVar37 = local_350;
        uStack_348 = 0;
        local_340 = (int *)0x0;
        local_350 = (TMXTilesetInfo *)0x0;
        if (((ulong)local_1f0 & 1) != 0) {
                    /* try { // try from 00f52744 to 0105275f has its CatchHandler @ 00f53ca8 */
          operator_delete(local_1e0);
        }
        if (this[0x14c] == (TMXMapInfo)0x0) {
          pTVar38 = this + 0x148;
          *(undefined4 *)(pTVar18 + 0x40) = *(undefined4 *)(this + 0x148);
LAB_00f52b84:
          *(int *)pTVar38 = 0;
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_350,"firstgid");
                    /* try { // try from 00f52774 to 0105278b has its CatchHandler @ 00f53de4 */
          local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_350;
          lVar35 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                             ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                              (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
          iVar10 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
          pTVar38 = (TMXMapInfo *)(pTVar18 + 0x40);
          *(int *)pTVar38 = iVar10;
          if (((ulong)local_350 & 1) != 0) {
                    /* try { // try from 00f527a0 to 010527a7 has its CatchHandler @ 00f53c78 */
            operator_delete(local_340);
            iVar10 = *(int *)pTVar38;
          }
          if (iVar10 < 0) goto LAB_00f52b84;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"spacing");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        uVar13 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
        *(undefined4 *)(pTVar18 + 0x4c) = uVar13;
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"margin");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        uVar13 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
        *(undefined4 *)(pTVar18 + 0x50) = uVar13;
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        Size::Size((Size *)&local_238);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"tilewidth");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
        local_238 = (TMXTilesetInfo **)CONCAT44(local_238._4_4_,uVar13);
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"tileheight");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        uVar13 = cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
        local_238 = (TMXTilesetInfo **)CONCAT44(uVar13,(undefined4)local_238);
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        Size::operator=((Size *)(pTVar18 + 0x44),(Size *)&local_238);
        puVar21 = *(undefined8 **)(this + 0x70);
        local_350 = pTVar18;
        if (puVar21 == *(undefined8 **)(this + 0x78)) {
          std::__ndk1::
          vector<cocos2d::TMXTilesetInfo*,std::__ndk1::allocator<cocos2d::TMXTilesetInfo*>>::
          __push_back_slow_path<cocos2d::TMXTilesetInfo*const&>
                    ((vector<cocos2d::TMXTilesetInfo*,std::__ndk1::allocator<cocos2d::TMXTilesetInfo*>>
                      *)(this + 0x68),&local_350);
        }
        else {
          *puVar21 = pTVar18;
          *(undefined8 **)(this + 0x70) = puVar21 + 1;
        }
        Ref::retain((Ref *)local_350);
        Ref::release((Ref *)pTVar18);
      }
      else {
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x150) != &local_1c0) {
          piVar1 = (int *)((ulong)&local_1c0 | 1);
          if (((byte)local_1c0 & 1) != 0) {
            piVar1 = apiStack_1b8[1];
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x150),(char *)piVar1,uVar26);
        }
        TVar4 = this[0xd8];
        if (((byte)TVar4 & 1) == 0) {
          pTVar38 = this + 0xd9;
          uVar26 = (ulong)((byte)TVar4 >> 1);
          if (uVar26 == 0) goto LAB_00f524b0;
LAB_00f5247c:
          do {
            if (uVar26 == 0) goto LAB_00f524b0;
            lVar35 = uVar26 - 1;
            uVar26 = uVar26 - 1;
          } while (pTVar38[lVar35] != (TMXMapInfo)0x2f);
          if (uVar26 == 0xffffffffffffffff) goto LAB_00f524b0;
          if (((byte)TVar4 & 1) == 0) {
            pTVar38 = this + 0xd9;
            uVar26 = (ulong)((byte)TVar4 >> 1);
            if (uVar26 == 0) goto LAB_00f533c4;
LAB_00f533a8:
            do {
              if (uVar26 == 0) goto LAB_00f533c4;
              lVar35 = uVar26 - 1;
                    /* try { // try from 00f533b4 to 010533cb has its CatchHandler @ 00f53da0 */
              uVar26 = uVar26 - 1;
            } while (pTVar38[lVar35] != (TMXMapInfo)0x2f);
          }
          else {
            uVar26 = *(ulong *)(this + 0xe0);
            pTVar38 = *(TMXMapInfo **)(this + 0xe8);
            if (uVar26 != 0) goto LAB_00f533a8;
LAB_00f533c4:
            uVar26 = 0xffffffffffffffff;
          }
          pbVar14 = (basic_string *)0x0;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_350,(ulong)(this + 0xd8),0,(allocator *)(uVar26 + 1));
          std::__ndk1::operator+((__ndk1 *)&local_350,(basic_string *)&local_1c0,pbVar14);
          if (((byte)local_1c0 & 1) != 0) {
            *(char *)apiStack_1b8[1] = '\0';
            apiStack_1b8[0]._0_1_ = 0;
            apiStack_1b8[0]._1_7_ = 0;
            if (((byte)local_1c0 & 1) != 0) {
              operator_delete(apiStack_1b8[1]);
            }
          }
          apiStack_1b8[0]._0_1_ = (undefined1)uStack_1e8;
          apiStack_1b8[0]._1_7_ = (undefined7)(CONCAT17(uStack_1e1,uStack_1e8) >> 8);
          local_1c0 = SUB81(local_1f0,0);
          uStack_1bf = (undefined1)((ulong)local_1f0 >> 8);
          uStack_1be = (undefined6)((ulong)local_1f0 >> 0x10);
          apiStack_1b8[1] = (int *)local_1e0;
        }
        else {
          uVar26 = *(ulong *)(this + 0xe0);
          pTVar38 = *(TMXMapInfo **)(this + 0xe8);
          if (uVar26 != 0) goto LAB_00f5247c;
LAB_00f524b0:
          FUN_007c1fb0(&local_350,this + 0xf0,&DAT_0144b7ba);
                    /* try { // try from 00f524c8 to 010524cf has its CatchHandler @ 00f53d34 */
                    /* try { // try from 00f524d8 to 010524e7 has its CatchHandler @ 00f53d30 */
          uVar26 = (ulong)((byte)local_1c0 >> 1);
          piVar1 = (int *)((ulong)&local_1c0 | 1);
          if (((byte)local_1c0 & 1) != 0) {
            uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
            piVar1 = apiStack_1b8[1];
          }
          pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 *)&local_350,(char *)piVar1,uVar26);
          pcVar22 = *(char **)(pbVar19 + 0x10);
          bVar5 = *pbVar19;
          uStack_1e8 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 8) >> 8);
          local_1f0._0_4_ = (float)*(undefined8 *)(pbVar19 + 1);
          local_1f0._4_4_ = (float)((ulong)*(undefined8 *)(pbVar19 + 1) >> 0x20);
          *(undefined8 *)pbVar19 = 0;
          *(undefined8 *)(pbVar19 + 8) = 0;
          *(undefined8 *)(pbVar19 + 0x10) = 0;
          if (((byte)local_1c0 & 1) != 0) {
            *(char *)apiStack_1b8[1] = '\0';
            apiStack_1b8[0]._0_1_ = 0;
            apiStack_1b8[0]._1_7_ = 0;
            if (((byte)local_1c0 & 1) != 0) {
              operator_delete(apiStack_1b8[1]);
            }
          }
          apiStack_1b8[0]._1_7_ = uStack_1e8;
          uStack_1bf = SUB41((float)local_1f0,0);
          uStack_1be = (undefined6)(CONCAT44(local_1f0._4_4_,(float)local_1f0) >> 8);
          uStack_1e8 = 0;
          apiStack_1b8[1] = (int *)pcVar22;
          local_1c0 = bVar5;
          apiStack_1b8[0]._0_1_ = local_1f0._7_1_;
          local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(TMXTilesetInfo *)0x0;
        }
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        plVar20 = (long *)FileUtils::getInstance();
        (**(code **)(*plVar20 + 0x50))(&local_350,plVar20,&local_1c0);
                    /* try { // try from 00f52584 to 0105259b has its CatchHandler @ 00f53de4 */
        if (((byte)local_1c0 & 1) != 0) {
          *(char *)apiStack_1b8[1] = '\0';
                    /* try { // try from 00f525a0 to 010525a7 has its CatchHandler @ 00f53ce0 */
          apiStack_1b8[0]._0_1_ = 0;
          apiStack_1b8[0]._1_7_ = 0;
          if (((byte)local_1c0 & 1) != 0) {
            operator_delete(apiStack_1b8[1]);
                    /* try { // try from 00f525b0 to 010525bf has its CatchHandler @ 00f53cdc */
          }
        }
        apiStack_1b8[0]._0_1_ = (undefined1)uStack_348;
        apiStack_1b8[0]._1_7_ = (undefined7)(uStack_348 >> 8);
        local_1c0 = SUB81(local_350,0);
        uStack_1bf = (undefined1)((ulong)local_350 >> 8);
        uStack_1be = (undefined6)((ulong)local_350 >> 0x10);
        apiStack_1b8[1] = local_340;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"firstgid");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        iVar10 = cocos2d::Value::asInt((Value *)(lVar35 + 0x28));
        *(int *)(this + 0x148) = iVar10;
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
          iVar10 = *(int *)(this + 0x148);
        }
        if (iVar10 < 0) {
          *(undefined4 *)(this + 0x148) = 0;
        }
        this[0x14c] = (TMXMapInfo)0x0;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x168) != &local_1c0) {
          uVar26 = (ulong)((byte)local_1c0 >> 1);
          piVar1 = (int *)((ulong)&local_1c0 | 1);
          if (((byte)local_1c0 & 1) != 0) {
            uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
            piVar1 = apiStack_1b8[1];
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x168),(char *)piVar1,uVar26);
        }
                    /* try { // try from 00f5265c to 01052673 has its CatchHandler @ 00f53de4 */
        parseXMLFile(this,(basic_string *)&local_1c0);
      }
      goto LAB_00f532e4;
    }
    iVar10 = memcmp(plVar20,"polygon",7);
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (iVar10 == 0) {
      lVar35 = *(long *)(*(long *)(this + 0x88) + -8);
      pbVar14 = (basic_string *)
                cocos2d::Value::asValueMap((Value *)(*(long *)(lVar35 + 0x78) + -0x10));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"points");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      cocos2d::Value::asString();
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      uVar26 = (ulong)((byte)local_238._0_1_ >> 1);
      if (((ulong)local_238 & 1) != 0) {
        uVar26 = local_230;
      }
      if (uVar26 != 0) {
        local_3b0 = (Value *)0x0;
        local_3a8 = (Value *)0x0;
        local_3b8 = (Value *)0x0;
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::reserve
                  ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_3b8,10);
        local_140[0] = 0x1698928;
        apiStack_1b8[0]._0_1_ = 0;
        apiStack_1b8[0]._1_7_ = 0;
        local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
        uStack_1bf = 0x89;
        uStack_1be = 0x169;
        apiStack_1b8[1] = (int *)0x1698810;
        std::__ndk1::ios_base::init
                  ((ios_base *)local_140,
                   (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)&ppuStack_1a8);
                    /* try { // try from 00f51208 to 01051213 has its CatchHandler @ 00f53d2c */
        ppuStack_1a8 = &PTR__basic_streambuf_01698a08;
                    /* try { // try from 00f51214 to 0105121b has its CatchHandler @ 00f53d1c */
        local_140[0] = 0x1698838;
        local_b0 = 0xffffffff;
        local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0xe8;
        uStack_1bf = 0x87;
        uStack_1be = 0x169;
        local_b8 = 0;
        apiStack_1b8[1] = (int *)0x1698810;
        std::__ndk1::locale::locale((locale *)&local_1a0);
        ppuStack_1a8 = &PTR__basic_stringbuf_01698960;
        uStack_170 = 0;
        local_178 = 0;
        uStack_180 = 0;
        local_188 = 0;
        uStack_190 = 0;
        local_198 = (char *)0x0;
        uStack_160 = 0;
        local_168 = 0;
        uStack_150 = 0;
        local_158 = (void *)0x0;
        local_148 = 0x18;
                    /* try { // try from 00f51270 to 0105127b has its CatchHandler @ 00f53cd4 */
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                  ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)&ppuStack_1a8,(basic_string *)&local_238);
                    /* try { // try from 00f5127c to 01051283 has its CatchHandler @ 00f53cd0 */
        local_3c8 = 0;
        local_3c0 = (void *)0x0;
        local_3d0 = (Value **)0x0;
                    /* try { // try from 00f512bc to 010512c7 has its CatchHandler @ 00f53d28 */
        while (pbVar15 = std::__ndk1::
                         getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   ((basic_istream *)&local_1c0,(basic_string *)&local_3d0,' '),
              ((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) == 0) {
          local_2d0[0] = 0x1698928;
                    /* try { // try from 00f51308 to 01051313 has its CatchHandler @ 00f53d24 */
          local_350 = (TMXTilesetInfo *)
                      (std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>-in-std::
                       __ndk1::
                       basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::construction_vtable + 0x18);
                    /* try { // try from 00f51314 to 0105131b has its CatchHandler @ 00f53d14 */
          local_340 = (int *)0x1698810;
          uStack_348 = 0;
          std::__ndk1::ios_base::init
                    ((ios_base *)local_2d0,
                     (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&ppuStack_338);
          local_240 = 0xffffffff;
          local_350 = (TMXTilesetInfo *)
                      (std::__ndk1::
                       basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::vtable + 0x18);
          local_340 = (int *)0x1698810;
          local_2d0[0] = 0x1698838;
                    /* try { // try from 00f51354 to 0105135f has its CatchHandler @ 00f53d20 */
          local_248 = 0;
                    /* try { // try from 00f51360 to 01051367 has its CatchHandler @ 00f53d10 */
          ppuStack_338 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::locale((locale *)local_330);
          uStack_310 = 0;
          local_318 = 0;
          uStack_300 = 0;
          uStack_308 = 0;
          uStack_320 = 0;
          local_328 = 0;
          ppuStack_338 = &PTR__basic_stringbuf_01698960;
          uStack_2f0 = 0;
          local_2f8 = 0;
          uStack_2e0 = 0;
          local_2e8 = (void *)0x0;
          local_2d8 = 0x18;
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&ppuStack_338,(basic_string *)&local_3d0);
          local_3e0 = 0;
          local_3d8 = (char *)0x0;
          local_3f0 = (char *)0x0;
          local_3e8 = (TMXTilesetInfo **)0x0;
          local_400 = 0;
          uStack_3f8 = 0;
          uStack_1e8 = 0;
          uStack_1e1 = 0;
          local_1f0._0_4_ = 0.0;
          local_1f0._4_4_ = 0.0;
          uStack_1d8 = 0;
          local_1e0 = (char *)0x0;
          local_1d0 = 0x3f800000;
          pbVar15 = std::__ndk1::
                    getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ((basic_istream *)&local_350,(basic_string *)&local_3e8,',');
          if (((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) == 0) {
            pcVar22 = (char *)((ulong)&local_3e8 | 1);
            if (((ulong)local_3e8 & 1) != 0) {
              pcVar22 = local_3d8;
            }
            iVar10 = atoi(pcVar22);
            cocos2d::Value::Value(aVStack_360,iVar10 + (int)*(float *)(lVar35 + 0x40));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_378,"x");
            local_380 = local_378;
            lVar31 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                               ((basic_string *)&local_1f0,(piecewise_construct_t *)local_378,
                                (tuple *)&DAT_0143dc23,(tuple *)&local_380);
            cocos2d::Value::operator=((Value *)(lVar31 + 0x28),aVStack_360);
            if (((byte)local_378[0] & 1) != 0) {
                    /* try { // try from 00f51450 to 01051467 has its CatchHandler @ 00f53de0 */
              operator_delete(local_368);
            }
            cocos2d::Value::~Value(aVStack_360);
          }
          pbVar15 = std::__ndk1::
                    getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ((basic_istream *)&local_350,(basic_string *)&local_400,',');
                    /* try { // try from 00f5147c to 01051483 has its CatchHandler @ 00f53d90 */
          if (((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) == 0) {
            pcVar22 = (char *)((ulong)&local_400 | 1);
            if ((local_400 & 1) != 0) {
              pcVar22 = local_3f0;
            }
            iVar10 = atoi(pcVar22);
            cocos2d::Value::Value(aVStack_360,iVar10 + (int)*(float *)(lVar35 + 0x44));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_378,"y");
            local_380 = local_378;
            lVar31 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                     ::
                     __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                               ((basic_string *)&local_1f0,(piecewise_construct_t *)local_378,
                                (tuple *)&DAT_0143dc23,(tuple *)&local_380);
            cocos2d::Value::operator=((Value *)(lVar31 + 0x28),aVStack_360);
            if (((byte)local_378[0] & 1) != 0) {
              operator_delete(local_368);
            }
                    /* try { // try from 00f51508 to 0105150f has its CatchHandler @ 00f53cd8 */
            cocos2d::Value::~Value(aVStack_360);
          }
                    /* try { // try from 00f51510 to 01051533 has its CatchHandler @ 00f50e94 */
          cocos2d::Value::Value((Value *)local_378,(unordered_map *)&local_1f0);
          pVVar3 = local_3b0;
          if (local_3b0 < local_3a8) {
            cocos2d::Value::Value(local_3b0,(Value *)local_378);
                    /* try { // try from 00f51534 to 01051543 has its CatchHandler @ 00f53d60 */
            local_3b0 = pVVar3 + 0x10;
          }
          else {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>
                      ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_3b8,
                       (Value *)local_378);
          }
          cocos2d::Value::~Value((Value *)local_378);
          pcVar22 = local_1e0;
          while (pcVar22 != (char *)0x0) {
            pcVar30 = *(char **)pcVar22;
            cocos2d::Value::~Value((Value *)(pcVar22 + 0x28));
            if ((pcVar22[0x10] & 1U) != 0) {
              operator_delete(*(void **)(pcVar22 + 0x20));
            }
                    /* try { // try from 00f51560 to 01051567 has its CatchHandler @ 00f53d40 */
            operator_delete(pcVar22);
            pcVar22 = pcVar30;
          }
          pvVar16 = (void *)CONCAT44(local_1f0._4_4_,(float)local_1f0);
          local_1f0._0_4_ = 0.0;
          local_1f0._4_4_ = 0.0;
          if (pvVar16 != (void *)0x0) {
            operator_delete(pvVar16);
          }
          if ((local_400 & 1) != 0) {
            operator_delete(local_3f0);
          }
          if (((ulong)local_3e8 & 1) != 0) {
            operator_delete(local_3d8);
          }
          local_350 = (TMXTilesetInfo *)
                      (std::__ndk1::
                       basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::vtable + 0x18);
          local_340 = (int *)(std::__ndk1::
                              basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::vtable + 0x40);
          local_2d0[0] = 0x1698838;
          ppuStack_338 = &PTR__basic_stringbuf_01698960;
                    /* try { // try from 00f515f0 to 010515ff has its CatchHandler @ 00f53cf4 */
          if ((local_2f8 & 1) != 0) {
            operator_delete(local_2e8);
                    /* try { // try from 00f51600 to 0105160b has its CatchHandler @ 00f53ce4 */
          }
          ppuStack_338 = &PTR__basic_streambuf_01698a08;
                    /* try { // try from 00f512c8 to 010512cf has its CatchHandler @ 00f53d18 */
          std::__ndk1::locale::~locale((locale *)local_330);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_2d0);
        }
        cocos2d::Value::Value((Value *)&local_1f0,(vector *)&local_3b8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"points");
        local_3e8 = &local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           (pbVar14,(piecewise_construct_t *)&local_350,(tuple *)&DAT_0143dc23,
                            (tuple *)&local_3e8);
        cocos2d::Value::operator=((Value *)(lVar35 + 0x28),(Value *)&local_1f0);
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        cocos2d::Value::~Value((Value *)&local_1f0);
        if (((ulong)local_3d0 & 1) != 0) {
          operator_delete(local_3c0);
        }
        apiStack_1b8[1] =
             (int *)(std::__ndk1::
                     basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::vtable + 0x40);
        local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0xe8;
        uStack_1bf = 0x87;
        uStack_1be = 0x169;
        local_140[0] = 0x1698838;
        ppuStack_1a8 = &PTR__basic_stringbuf_01698960;
        if ((local_168 & 1) != 0) {
          operator_delete(local_158);
        }
        ppuStack_1a8 = &PTR__basic_streambuf_01698a08;
        std::__ndk1::locale::~locale((locale *)&local_1a0);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_140);
        pVVar34 = local_3b8;
        pVVar3 = local_3b0;
        if (local_3b8 != (Value *)0x0) {
          while (pVVar3 != pVVar34) {
            cocos2d::Value::~Value(pVVar3 + -0x10);
            pVVar3 = pVVar3 + -0x10;
          }
LAB_00f527b8:
          local_3b0 = pVVar34;
          operator_delete(local_3b8);
        }
        goto LAB_00f527c0;
      }
LAB_00f51ff0:
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                CONCAT44(local_1f0._4_4_,(float)local_1f0);
      if (((byte)local_238._0_1_ & 1) != 0) goto LAB_00f527d0;
    }
    break;
  case 8:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
                    /* try { // try from 00f505c4 to 010505cb has its CatchHandler @ 00f508cc */
    if (*plVar20 == 0x79747265706f7270) {
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                CONCAT44(local_1f0._4_4_,(float)local_1f0);
      switch(*(undefined4 *)(this + 0x98)) {
      case 1:
                    /* try { // try from 00f5162c to 0105163b has its CatchHandler @ 00f53c9c */
                    /* try { // try from 00f5163c to 01051647 has its CatchHandler @ 00f53c98 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_1c0,"value");
        local_350 = (TMXTilesetInfo *)&local_1c0;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_350);
        cocos2d::Value::Value((Value *)&local_1f0,(Value *)(lVar35 + 0x28));
                    /* try { // try from 00f51670 to 0105167f has its CatchHandler @ 00f53ccc */
        if (((byte)local_1c0 & 1) != 0) {
          operator_delete(apiStack_1b8[1]);
        }
                    /* try { // try from 00f51680 to 01051687 has its CatchHandler @ 00f53cbc */
                    /* try { // try from 00f5168c to 0105169b has its CatchHandler @ 00f53cc8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"name");
                    /* try { // try from 00f5169c to 010516a3 has its CatchHandler @ 00f53cb8 */
        local_238 = &local_350;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_238);
        cocos2d::Value::asString();
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::Value&>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                    *)(this + 0xa8),(basic_string *)&local_1c0,(basic_string *)&local_1c0,
                   (Value *)&local_1f0);
        break;
      case 2:
        lVar31 = *(long *)(*(long *)(this + 0x58) + -8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_1c0,"value");
        local_350 = (TMXTilesetInfo *)&local_1c0;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_350);
        cocos2d::Value::Value((Value *)&local_1f0,(Value *)(lVar35 + 0x28));
        if (((byte)local_1c0 & 1) != 0) {
          operator_delete(apiStack_1b8[1]);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"name");
        local_238 = &local_350;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_238);
        cocos2d::Value::asString();
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::Value&>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                    *)(lVar31 + 0x28),(basic_string *)&local_1c0,(basic_string *)&local_1c0,
                   (Value *)&local_1f0);
        break;
      case 3:
        lVar31 = *(long *)(*(long *)(this + 0x88) + -8);
                    /* try { // try from 00f528b8 to 01052df3 has its CatchHandler @ 00f53da8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_1c0,"value");
        local_350 = (TMXTilesetInfo *)&local_1c0;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_350);
        cocos2d::Value::Value((Value *)&local_1f0,(Value *)(lVar35 + 0x28));
        if (((byte)local_1c0 & 1) != 0) {
          operator_delete(apiStack_1b8[1]);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"name");
        local_238 = &local_350;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_238);
        cocos2d::Value::asString();
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::Value&>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                    *)(lVar31 + 0x48),(basic_string *)&local_1c0,(basic_string *)&local_1c0,
                   (Value *)&local_1f0);
        break;
      case 4:
        pbVar14 = (basic_string *)
                  cocos2d::Value::asValueMap
                            ((Value *)(*(long *)(*(long *)(*(long *)(this + 0x88) + -8) + 0x78) +
                                      -0x10));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"name");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                  ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                   (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        cocos2d::Value::asString();
        if (((ulong)local_350 & 1) != 0) {
          operator_delete(local_340);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_350,"value");
        local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_350;
        lVar35 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                            (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
        local_1f0 = &local_1c0;
        lVar31 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           (pbVar14,(piecewise_construct_t *)&local_1c0,(tuple *)&DAT_0143dc23,
                            (tuple *)&local_1f0);
        cocos2d::Value::operator=((Value *)(lVar31 + 0x28),(Value *)(lVar35 + 0x28));
        goto joined_r0x00f52e2c;
      case 5:
        uVar26 = *(ulong *)(this + 0x128);
        if (uVar26 != 0) {
          uVar25 = (ulong)*(int *)(this + 0x9c);
          uVar45 = CONCAT17(POPCOUNT((char)(uVar26 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar26 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar26 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar26 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar26 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar26 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar26 >> 8)),POPCOUNT((char)uVar26))))))));
          uVar39 = NEON_uaddlv(uVar45,1);
          uVar27 = CONCAT62((int6)((ulong)uVar45 >> 0x10),uVar39) & 0xffffffff;
          if (uVar27 < 2) {
            uVar28 = uVar26 - 1 & uVar25;
          }
          else {
            uVar28 = uVar25;
            if (uVar26 <= uVar25) {
              uVar28 = 0;
              if (uVar26 != 0) {
                uVar28 = uVar25 / uVar26;
              }
              uVar28 = uVar25 - uVar28 * uVar26;
            }
          }
          plVar20 = *(long **)(*(long *)(this + 0x120) + uVar28 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            do {
              uVar29 = plVar20[1];
              if (uVar29 == uVar25) {
                if ((int)plVar20[2] == *(int *)(this + 0x9c)) {
                  pbVar14 = (basic_string *)cocos2d::Value::asValueMap((Value *)(plVar20 + 3));
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_350,"name");
                  local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_350;
                  std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                            ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                             (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
                  cocos2d::Value::asString();
                  if (((ulong)local_350 & 1) != 0) {
                    operator_delete(local_340);
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_350,"value");
                  local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_350;
                  lVar35 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                           ::
                           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                                     ((basic_string *)&local_220,(piecewise_construct_t *)&local_350
                                      ,(tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
                  local_1f0 = &local_1c0;
                  lVar31 = std::__ndk1::
                           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                           ::
                           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                     (pbVar14,(piecewise_construct_t *)&local_1c0,
                                      (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
                  cocos2d::Value::operator=((Value *)(lVar31 + 0x28),(Value *)(lVar35 + 0x28));
                  goto joined_r0x00f52e2c;
                }
              }
              else {
                if (uVar27 < 2) {
                  uVar29 = uVar29 & uVar26 - 1;
                }
                else if (uVar26 <= uVar29) {
                  uVar7 = 0;
                  if (uVar26 != 0) {
                    uVar7 = uVar29 / uVar26;
                  }
                  uVar29 = uVar29 - uVar7 * uVar26;
                }
                if (uVar29 != uVar28) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_007d44e0("unordered_map::at: key not found");
      default:
        goto switchD_00f5047c_caseD_9;
      }
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      cocos2d::Value::~Value((Value *)&local_1f0);
      pvVar16 = local_220;
      plVar20 = local_210;
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  CONCAT44(local_1f0._4_4_,(float)local_1f0);
      goto joined_r0x00f527d8;
    }
                    /* try { // try from 00f505cc to 0105091b has its CatchHandler @ 00f4f410 */
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (*plVar20 == 0x656e696c796c6f70) {
      lVar35 = *(long *)(*(long *)(this + 0x88) + -8);
      pbVar14 = (basic_string *)
                cocos2d::Value::asValueMap((Value *)(*(long *)(lVar35 + 0x78) + -0x10));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"points");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      cocos2d::Value::asString();
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      uVar26 = (ulong)((byte)local_238._0_1_ >> 1);
      if (((ulong)local_238 & 1) != 0) {
        uVar26 = local_230;
      }
      if (uVar26 == 0) goto LAB_00f51ff0;
      local_3b0 = (Value *)0x0;
      local_3a8 = (Value *)0x0;
      local_3b8 = (Value *)0x0;
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::reserve
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_3b8,10);
      local_140[0] = 0x1698928;
      apiStack_1b8[0]._0_1_ = 0;
      apiStack_1b8[0]._1_7_ = 0;
      local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
      uStack_1bf = 0x89;
      uStack_1be = 0x169;
      apiStack_1b8[1] = (int *)0x1698810;
      std::__ndk1::ios_base::init
                ((ios_base *)local_140,
                 (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *)&ppuStack_1a8);
      ppuStack_1a8 = &PTR__basic_streambuf_01698a08;
      local_140[0] = 0x1698838;
      local_b0 = 0xffffffff;
      local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xe8;
      uStack_1bf = 0x87;
      uStack_1be = 0x169;
      local_b8 = 0;
      apiStack_1b8[1] = (int *)0x1698810;
      std::__ndk1::locale::locale((locale *)&local_1a0);
      ppuStack_1a8 = &PTR__basic_stringbuf_01698960;
      uStack_170 = 0;
      local_178 = 0;
      uStack_180 = 0;
      local_188 = 0;
      uStack_190 = 0;
      local_198 = (char *)0x0;
      uStack_160 = 0;
      local_168 = 0;
      uStack_150 = 0;
      local_158 = (void *)0x0;
      local_148 = 0x18;
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &ppuStack_1a8,(basic_string *)&local_238);
      local_3c8 = 0;
      local_3c0 = (void *)0x0;
      local_3d0 = (Value **)0x0;
      while (pbVar15 = std::__ndk1::
                       getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ((basic_istream *)&local_1c0,(basic_string *)&local_3d0,' '),
            ((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) == 0) {
        local_2d0[0] = 0x1698928;
        local_350 = (TMXTilesetInfo *)
                    (std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>-in-std::__ndk1
                     ::
                     basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::construction_vtable + 0x18);
        local_340 = (int *)0x1698810;
        uStack_348 = 0;
        std::__ndk1::ios_base::init
                  ((ios_base *)local_2d0,
                   (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)&ppuStack_338);
        local_240 = 0xffffffff;
        local_350 = (TMXTilesetInfo *)
                    (std::__ndk1::
                     basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::vtable + 0x18);
        local_340 = (int *)0x1698810;
        local_2d0[0] = 0x1698838;
        local_248 = 0;
        ppuStack_338 = &PTR__basic_streambuf_01698a08;
        std::__ndk1::locale::locale((locale *)local_330);
        uStack_310 = 0;
        local_318 = 0;
        uStack_300 = 0;
        uStack_308 = 0;
        uStack_320 = 0;
        local_328 = 0;
        ppuStack_338 = &PTR__basic_stringbuf_01698960;
        uStack_2f0 = 0;
        local_2f8 = 0;
        uStack_2e0 = 0;
        local_2e8 = (void *)0x0;
        local_2d8 = 0x18;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                  ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)&ppuStack_338,(basic_string *)&local_3d0);
        local_3e0 = 0;
        local_3d8 = (char *)0x0;
        local_3f0 = (char *)0x0;
        local_3e8 = (TMXTilesetInfo **)0x0;
        local_400 = 0;
        uStack_3f8 = 0;
        uStack_1e8 = 0;
        uStack_1e1 = 0;
        local_1f0._0_4_ = 0.0;
        local_1f0._4_4_ = 0.0;
        uStack_1d8 = 0;
        local_1e0 = (char *)0x0;
        local_1d0 = 0x3f800000;
        pbVar15 = std::__ndk1::
                  getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ((basic_istream *)&local_350,(basic_string *)&local_3e8,',');
        if (((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) == 0) {
          pcVar22 = (char *)((ulong)&local_3e8 | 1);
          if (((ulong)local_3e8 & 1) != 0) {
            pcVar22 = local_3d8;
          }
          iVar10 = atoi(pcVar22);
          cocos2d::Value::Value(aVStack_360,iVar10 + (int)*(float *)(lVar35 + 0x40));
                    /* catch() { ... } // from try @ 00f4ff5c with catch @ 00f508c0 */
                    /* catch() { ... } // from try @ 00f4fdc4 with catch @ 00f508c4 */
                    /* catch() { ... } // from try @ 00f4fb94 with catch @ 00f508c8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_378,"x");
                    /* catch() { ... } // from try @ 00f4fc60 with catch @ 00f508cc
                       catch() { ... } // from try @ 00f505c4 with catch @ 00f508cc */
          local_380 = local_378;
                    /* catch() { ... } // from try @ 00f4f984 with catch @ 00f508d0 */
                    /* catch() { ... } // from try @ 00f4f8a4 with catch @ 00f508d4 */
                    /* catch() { ... } // from try @ 00f4f704 with catch @ 00f508d8 */
          lVar31 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                             ((basic_string *)&local_1f0,(piecewise_construct_t *)local_378,
                              (tuple *)&DAT_0143dc23,(tuple *)&local_380);
                    /* catch() { ... } // from try @ 00f4f7cc with catch @ 00f508f4 */
          cocos2d::Value::operator=((Value *)(lVar31 + 0x28),aVStack_360);
          if (((byte)local_378[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00f4fa7c with catch @ 00f50908 */
            operator_delete(local_368);
          }
          cocos2d::Value::~Value(aVStack_360);
        }
                    /* catch() { ... } // from try @ 00f50b20 with catch @ 00f5091c
                       catch() { ... } // from try @ 00f50b6c with catch @ 00f5091c */
        pbVar15 = std::__ndk1::
                  getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ((basic_istream *)&local_350,(basic_string *)&local_400,',');
        if (((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) == 0) {
          pcVar22 = (char *)((ulong)&local_400 | 1);
          if ((local_400 & 1) != 0) {
            pcVar22 = local_3f0;
          }
          iVar10 = atoi(pcVar22);
          cocos2d::Value::Value(aVStack_360,iVar10 + (int)*(float *)(lVar35 + 0x44));
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_378,"y");
          local_380 = local_378;
          lVar31 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                             ((basic_string *)&local_1f0,(piecewise_construct_t *)local_378,
                              (tuple *)&DAT_0143dc23,(tuple *)&local_380);
          cocos2d::Value::operator=((Value *)(lVar31 + 0x28),aVStack_360);
          if (((byte)local_378[0] & 1) != 0) {
            operator_delete(local_368);
          }
          cocos2d::Value::~Value(aVStack_360);
        }
        cocos2d::Value::Value((Value *)local_378,(unordered_map *)&local_1f0);
        pVVar3 = local_3b0;
        if (local_3b0 < local_3a8) {
          cocos2d::Value::Value(local_3b0,(Value *)local_378);
          local_3b0 = pVVar3 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_3b8,
                     (Value *)local_378);
        }
        cocos2d::Value::~Value((Value *)local_378);
        pcVar22 = local_1e0;
        while (pcVar22 != (char *)0x0) {
          pcVar30 = *(char **)pcVar22;
          cocos2d::Value::~Value((Value *)(pcVar22 + 0x28));
          if ((pcVar22[0x10] & 1U) != 0) {
            operator_delete(*(void **)(pcVar22 + 0x20));
          }
          operator_delete(pcVar22);
          pcVar22 = pcVar30;
        }
        pvVar16 = (void *)CONCAT44(local_1f0._4_4_,(float)local_1f0);
        local_1f0._0_4_ = 0.0;
        local_1f0._4_4_ = 0.0;
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
        if ((local_400 & 1) != 0) {
          operator_delete(local_3f0);
        }
        if (((ulong)local_3e8 & 1) != 0) {
          operator_delete(local_3d8);
        }
        local_350 = (TMXTilesetInfo *)
                    (std::__ndk1::
                     basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::vtable + 0x18);
        local_340 = (int *)(std::__ndk1::
                            basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::vtable + 0x40);
        local_2d0[0] = 0x1698838;
        ppuStack_338 = &PTR__basic_stringbuf_01698960;
        if ((local_2f8 & 1) != 0) {
          operator_delete(local_2e8);
        }
        ppuStack_338 = &PTR__basic_streambuf_01698a08;
        std::__ndk1::locale::~locale((locale *)local_330);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_2d0);
      }
      cocos2d::Value::Value((Value *)&local_1f0,(vector *)&local_3b8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_350,"polylinePoints");
                    /* try { // try from 00f52038 to 0105205f has its CatchHandler @ 00f53c88 */
      local_3e8 = &local_350;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         (pbVar14,(piecewise_construct_t *)&local_350,(tuple *)&DAT_0143dc23,
                          (tuple *)&local_3e8);
      cocos2d::Value::operator=((Value *)(lVar35 + 0x28),(Value *)&local_1f0);
      if (((ulong)local_350 & 1) != 0) {
        operator_delete(local_340);
      }
      cocos2d::Value::~Value((Value *)&local_1f0);
      if (((ulong)local_3d0 & 1) != 0) {
                    /* try { // try from 00f52074 to 01052083 has its CatchHandler @ 00f53cc4 */
        operator_delete(local_3c0);
      }
                    /* try { // try from 00f52084 to 0105208b has its CatchHandler @ 00f53cb4 */
      apiStack_1b8[1] =
           (int *)(std::__ndk1::
                   basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                   ::vtable + 0x40);
      local_1c0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0xe8;
      uStack_1bf = 0x87;
      uStack_1be = 0x169;
      local_140[0] = 0x1698838;
      ppuStack_1a8 = &PTR__basic_stringbuf_01698960;
      if ((local_168 & 1) != 0) {
        operator_delete(local_158);
      }
      ppuStack_1a8 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale((locale *)&local_1a0);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_140);
      pVVar34 = local_3b8;
      pVVar3 = local_3b0;
      if (local_3b8 != (Value *)0x0) {
        while (pVVar3 != pVVar34) {
          cocos2d::Value::~Value(pVVar3 + -0x10);
          pVVar3 = pVVar3 + -0x10;
        }
        goto LAB_00f527b8;
      }
LAB_00f527c0:
      pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                CONCAT44(local_1f0._4_4_,(float)local_1f0);
      pTVar18 = (TMXTilesetInfo *)((ulong)local_238 & 1);
      goto joined_r0x00f527c8;
    }
    break;
  case 10:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
    iVar10 = memcmp(plVar20,"tileoffset",10);
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (iVar10 == 0) {
      lVar31 = *(long *)(*(long *)(this + 0x70) + -8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"x");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      dVar43 = (double)cocos2d::Value::asDouble((Value *)(lVar35 + 0x28));
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"y");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      dVar44 = (double)cocos2d::Value::asDouble((Value *)(lVar35 + 0x28));
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      *(float *)(lVar31 + 0x54) = (float)dVar43;
      *(float *)(lVar31 + 0x58) = (float)dVar44;
      pvVar16 = local_220;
      plVar20 = local_210;
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  CONCAT44(local_1f0._4_4_,(float)local_1f0);
      goto joined_r0x00f527d8;
    }
    break;
  case 0xb:
    plVar20 = (long *)((ulong)local_3a0 | 1);
    if (((byte)local_3a0[0] & 1) != 0) {
      plVar20 = local_390;
    }
    iVar10 = memcmp(plVar20,"objectgroup",0xb);
    pbVar19 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              CONCAT44(local_1f0._4_4_,(float)local_1f0);
    if (iVar10 == 0) {
      this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (this_00 != (TMXObjectGroup *)0x0) {
        TMXObjectGroup::TMXObjectGroup(this_00);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_350,"name");
      local_1f0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_350;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                ((basic_string *)&local_220,(piecewise_construct_t *)&local_350,
                 (tuple *)&DAT_0143dc23,(tuple *)&local_1f0);
      cocos2d::Value::asString();
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this_00 + 0x28) != &local_1c0) {
                    /* catch() { ... } // from try @ 00f50ff0 with catch @ 00f50e94
                       catch() { ... } // from try @ 00f510b4 with catch @ 00f50e94
                       catch() { ... } // from try @ 00f51510 with catch @ 00f50e94
                       catch() { ... } // from try @ 00f53bb0 with catch @ 00f50e94
                       catch() { ... } // from try @ 00f53c24 with catch @ 00f50e94 */
        uVar26 = (ulong)((byte)local_1c0 >> 1);
        piVar1 = (int *)((ulong)&local_1c0 | 1);
        if (((byte)local_1c0 & 1) != 0) {
          uVar26 = CONCAT71(apiStack_1b8[0]._1_7_,apiStack_1b8[0]._0_1_);
          piVar1 = apiStack_1b8[1];
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this_00 + 0x28),(char *)piVar1,uVar26);
      }
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      if (((byte)local_350._0_1_ & 1) != 0) {
        operator_delete(local_340);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"x");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
                    /* try { // try from 00f50f14 to 01050f1b has its CatchHandler @ 00f53df4 */
      fVar40 = (float)cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      fVar47 = *(float *)(this + 0x48);
      if (((byte)local_1c0 & 1) != 0) {
                    /* try { // try from 00f50f28 to 01050f33 has its CatchHandler @ 00f53df8 */
        operator_delete(apiStack_1b8[1]);
      }
                    /* try { // try from 00f50f38 to 01050f47 has its CatchHandler @ 00f53df0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_1c0,"y");
      local_350 = (TMXTilesetInfo *)&local_1c0;
      lVar35 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                         ((basic_string *)&local_220,(piecewise_construct_t *)&local_1c0,
                          (tuple *)&DAT_0143dc23,(tuple *)&local_350);
      fVar41 = (float)cocos2d::Value::asFloat((Value *)(lVar35 + 0x28));
      fVar46 = *(float *)(this + 0x4c);
      if (((byte)local_1c0 & 1) != 0) {
        operator_delete(apiStack_1b8[1]);
      }
      *(float *)(this_00 + 0x40) = fVar40 * fVar47;
      *(float *)(this_00 + 0x44) = fVar41 * fVar46;
      local_1c0 = SUB81(this_00,0);
      uStack_1bf = (undefined1)((ulong)this_00 >> 8);
      uStack_1be = (undefined6)((ulong)this_00 >> 0x10);
      puVar21 = *(undefined8 **)(this + 0x88);
      if (puVar21 == *(undefined8 **)(this + 0x90)) {
        std::__ndk1::
        vector<cocos2d::TMXObjectGroup*,std::__ndk1::allocator<cocos2d::TMXObjectGroup*>>::
        __push_back_slow_path<cocos2d::TMXObjectGroup*const&>
                  ((vector<cocos2d::TMXObjectGroup*,std::__ndk1::allocator<cocos2d::TMXObjectGroup*>>
                    *)(this + 0x80),(TMXObjectGroup **)&local_1c0);
      }
      else {
        *puVar21 = this_00;
        *(undefined8 **)(this + 0x88) = puVar21 + 1;
      }
                    /* try { // try from 00f52268 to 0105226f has its CatchHandler @ 00f53da8 */
      Ref::retain((Ref *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,local_1c0)));
      Ref::release((Ref *)this_00);
      uVar13 = 3;
      goto LAB_00f523e0;
    }
  }
switchD_00f5047c_caseD_9:
                    /* try { // try from 00f532f4 to 0105330b has its CatchHandler @ 00f53dd8 */
  pvVar16 = local_220;
  plVar20 = local_210;
  local_1f0 = pbVar19;
joined_r0x00f527d8:
  while (plVar20 != (long *)0x0) {
    lVar35 = *plVar20;
    local_220 = pvVar16;
    cocos2d::Value::~Value((Value *)(plVar20 + 5));
    if ((*(byte *)(plVar20 + 2) & 1) != 0) {
      operator_delete((void *)plVar20[4]);
    }
    operator_delete(plVar20);
    pvVar16 = local_220;
    plVar20 = (long *)lVar35;
  }
  local_220 = (void *)0x0;
  if (pvVar16 != (void *)0x0) {
    operator_delete(pvVar16);
  }
  if (((byte)local_3a0[0] & 1) != 0) {
    operator_delete(local_390);
  }
  if (*(long *)(lVar8 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

