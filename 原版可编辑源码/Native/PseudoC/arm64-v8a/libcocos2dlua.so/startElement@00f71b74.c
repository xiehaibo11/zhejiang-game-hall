
/* cocos2d::DictMaker::startElement(void*, char const*, char const**) */

void cocos2d::DictMaker::startElement(void *param_1,char *param_2,char **param_3)

{
  piecewise_construct_t *ppVar1;
  int *piVar2;
  Value *pVVar3;
  long lVar4;
  piecewise_construct_t *ppVar5;
  undefined8 *puVar6;
  piecewise_construct_t *ppVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *pvVar16;
  basic_string *pbVar17;
  void *pvVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  ulong local_a0;
  int *local_98;
  piecewise_construct_t *local_88;
  piecewise_construct_t *local_80;
  piecewise_construct_t *ppStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,(char *)param_3);
  uVar12 = (ulong)((byte)local_a8[0] >> 1);
  if (((byte)local_a8[0] & 1) != 0) {
    uVar12 = local_a0;
  }
  switch(uVar12) {
  case 3:
    piVar2 = (int *)((ulong)local_a8 | 1);
    if (((byte)local_a8[0] & 1) != 0) {
      piVar2 = local_98;
    }
    iVar8 = memcmp(piVar2,"key",3);
    if (iVar8 != 0) break;
    uVar11 = 1;
LAB_00f71e9c:
    *(undefined4 *)((long)param_1 + 0x80) = uVar11;
joined_r0x00f72278:
    if (((byte)local_a8[0] & 1) == 0) goto LAB_00f71dcc;
    goto LAB_00f71dc4;
  case 4:
    piVar2 = (int *)((ulong)local_a8 | 1);
    if (((byte)local_a8[0] & 1) != 0) {
      piVar2 = local_98;
    }
    if (*piVar2 == 0x74636964) {
      if ((*(int *)((long)param_1 + 8) == 1) && (*(long *)((long)param_1 + 0x28) == 0)) {
        *(long *)((long)param_1 + 0x88) = (long)param_1 + 0x10;
      }
      *(undefined4 *)((long)param_1 + 0x80) = 2;
      if (*(long *)((long)param_1 + 0x120) != 0) {
        uVar12 = (*(long *)((long)param_1 + 0x120) + *(long *)((long)param_1 + 0x118)) - 1;
        iVar8 = *(int *)(*(long *)(*(long *)((long)param_1 + 0x100) +
                                  (uVar12 >> 7 & 0x1fffffffffffff8)) + (uVar12 & 0x3ff) * 4);
        if (iVar8 == 2) {
          uVar12 = (*(long *)((long)param_1 + 0xc0) + *(long *)((long)param_1 + 0xb8)) - 1;
          pbVar17 = *(basic_string **)
                     (*(long *)(*(long *)((long)param_1 + 0xa0) + (uVar12 >> 6 & 0x3fffffffffffff8))
                     + (uVar12 & 0x1ff) * 8);
          ppStack_78 = (piecewise_construct_t *)0x0;
          local_80 = (void *)0x0;
          uStack_68 = 0;
          local_70 = (void *)0x0;
          local_60 = 0x3f800000;
          cocos2d::Value::Value(aVStack_58,(unordered_map *)&local_80);
          ppVar1 = (piecewise_construct_t *)((long)param_1 + 0x50);
          local_88 = ppVar1;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (pbVar17,ppVar1,(tuple *)&DAT_0143f4d5,(tuple *)&local_88);
          cocos2d::Value::operator=((Value *)(lVar9 + 0x28),aVStack_58);
          cocos2d::Value::~Value(aVStack_58);
          ppVar5 = local_80;
          puVar6 = local_70;
          while (puVar6 != (void *)0x0) {
            pvVar18 = (void *)*puVar6;
            local_80 = ppVar5;
            cocos2d::Value::~Value((Value *)(puVar6 + 5));
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              operator_delete((void *)puVar6[4]);
            }
            operator_delete(puVar6);
            ppVar5 = local_80;
            puVar6 = pvVar18;
          }
          local_80 = (piecewise_construct_t *)0x0;
          if (ppVar5 != (void *)0x0) {
            operator_delete(ppVar5);
          }
          local_80 = ppVar1;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (pbVar17,ppVar1,(tuple *)&DAT_0143f4d5,(tuple *)&local_80);
          uVar10 = cocos2d::Value::asValueMap((Value *)(lVar9 + 0x28));
        }
        else {
          if (iVar8 != 6) goto LAB_00f720b0;
          pvVar16 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)
                     ((long)param_1 + 0x90);
          ppStack_78 = (piecewise_construct_t *)0x0;
          local_80 = (void *)0x0;
          uStack_68 = 0;
          local_70 = (void *)0x0;
          local_60 = 0x3f800000;
          cocos2d::Value::Value(aVStack_58,(unordered_map *)&local_80);
          pVVar3 = *(Value **)(pvVar16 + 8);
          if (pVVar3 < *(Value **)(pvVar16 + 0x10)) {
            cocos2d::Value::Value(pVVar3,aVStack_58);
            *(Value **)(pvVar16 + 8) = pVVar3 + 0x10;
          }
          else {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>(pvVar16,aVStack_58);
          }
          cocos2d::Value::~Value(aVStack_58);
          ppVar1 = local_80;
          puVar6 = local_70;
          while (puVar6 != (void *)0x0) {
            pvVar18 = (void *)*puVar6;
            local_80 = ppVar1;
            cocos2d::Value::~Value((Value *)(puVar6 + 5));
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              operator_delete((void *)puVar6[4]);
            }
            operator_delete(puVar6);
            ppVar1 = local_80;
            puVar6 = pvVar18;
          }
          local_80 = (piecewise_construct_t *)0x0;
          if (ppVar1 != (void *)0x0) {
            operator_delete(ppVar1);
          }
          uVar10 = cocos2d::Value::asValueMap
                             ((Value *)(*(long *)(*(long *)((long)param_1 + 0x90) + 8) + -0x10));
        }
        *(undefined8 *)((long)param_1 + 0x88) = uVar10;
      }
LAB_00f720b0:
      lVar9 = *(long *)((long)param_1 + 0x100);
      lVar13 = *(long *)((long)param_1 + 0x120);
      lVar15 = *(long *)((long)param_1 + 0x108) - lVar9;
      uVar12 = 0;
      if (lVar15 != 0) {
        uVar12 = lVar15 * 0x80 - 1;
      }
      uVar14 = lVar13 + *(long *)((long)param_1 + 0x118);
      if (uVar12 == uVar14) {
        std::__ndk1::deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>>::
        __add_back_capacity((deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *)
                            ((long)param_1 + 0xf8));
        lVar13 = *(long *)((long)param_1 + 0x120);
        lVar9 = *(long *)((long)param_1 + 0x100);
        uVar14 = *(long *)((long)param_1 + 0x118) + lVar13;
      }
      *(undefined4 *)(*(long *)(lVar9 + (uVar14 >> 7 & 0x1fffffffffffff8)) + (uVar14 & 0x3ff) * 4) =
           *(undefined4 *)((long)param_1 + 0x80);
      lVar9 = *(long *)((long)param_1 + 0xa0);
      lVar15 = *(long *)((long)param_1 + 0xc0);
      *(long *)((long)param_1 + 0x120) = lVar13 + 1;
      lVar13 = *(long *)((long)param_1 + 0xa8) - lVar9;
      uVar12 = lVar15 + *(long *)((long)param_1 + 0xb8);
      uVar14 = 0;
      if (lVar13 != 0) {
        uVar14 = lVar13 * 0x40 - 1;
      }
      if (uVar14 == uVar12) {
        std::__ndk1::
        deque<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*>>
        ::__add_back_capacity
                  ((deque<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*>>
                    *)((long)param_1 + 0x98));
        lVar15 = *(long *)((long)param_1 + 0xc0);
        lVar9 = *(long *)((long)param_1 + 0xa0);
        uVar12 = *(long *)((long)param_1 + 0xb8) + lVar15;
      }
      *(undefined8 *)(*(long *)(lVar9 + (uVar12 >> 6 & 0x3fffffffffffff8)) + (uVar12 & 0x1ff) * 8) =
           *(undefined8 *)((long)param_1 + 0x88);
      *(long *)((long)param_1 + 0xc0) = lVar15 + 1;
      goto joined_r0x00f72278;
    }
    if (*piVar2 == 0x6c616572) {
      uVar11 = 4;
      goto LAB_00f71e9c;
    }
    break;
  case 5:
    piVar2 = (int *)((ulong)local_a8 | 1);
    if (((byte)local_a8[0] & 1) != 0) {
      piVar2 = local_98;
    }
    iVar8 = memcmp(piVar2,"array",5);
    if (iVar8 == 0) {
      *(undefined4 *)((long)param_1 + 0x80) = 6;
      if ((*(int *)((long)param_1 + 8) == 2) &&
         (*(long *)((long)param_1 + 0x38) == *(long *)((long)param_1 + 0x40))) {
        *(long **)((long)param_1 + 0x90) = (long *)((long)param_1 + 0x38);
      }
      if (*(long *)((long)param_1 + 0x120) != 0) {
        uVar12 = (*(long *)((long)param_1 + 0x120) + *(long *)((long)param_1 + 0x118)) - 1;
        iVar8 = *(int *)(*(long *)(*(long *)((long)param_1 + 0x100) +
                                  (uVar12 >> 7 & 0x1fffffffffffff8)) + (uVar12 & 0x3ff) * 4);
        if (iVar8 == 6) {
          uVar12 = (*(long *)((long)param_1 + 0xf0) + *(long *)((long)param_1 + 0xe8)) - 1;
          pvVar16 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)
                     (*(long *)(*(long *)((long)param_1 + 0xd0) + (uVar12 >> 6 & 0x3fffffffffffff8))
                     + (uVar12 & 0x1ff) * 8);
          ppStack_78 = (piecewise_construct_t *)0x0;
          local_70 = (void *)0x0;
          local_80 = (piecewise_construct_t *)0x0;
          cocos2d::Value::Value(aVStack_58,(vector *)&local_80);
          pVVar3 = *(Value **)(pvVar16 + 8);
          if (pVVar3 < *(Value **)(pvVar16 + 0x10)) {
            cocos2d::Value::Value(pVVar3,aVStack_58);
            *(Value **)(pvVar16 + 8) = pVVar3 + 0x10;
          }
          else {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>(pvVar16,aVStack_58);
          }
          cocos2d::Value::~Value(aVStack_58);
          ppVar5 = local_80;
          ppVar1 = ppStack_78;
          if (local_80 != (piecewise_construct_t *)0x0) {
            while (ppVar1 != ppVar5) {
              cocos2d::Value::~Value((Value *)(ppVar1 + -0x10));
              ppVar1 = ppVar1 + -0x10;
            }
            ppStack_78 = ppVar5;
            operator_delete(local_80);
          }
          uVar10 = cocos2d::Value::asValueVector
                             ((Value *)(*(long *)(*(long *)((long)param_1 + 0x90) + 8) + -0x10));
        }
        else {
          if (iVar8 != 2) goto LAB_00f721c4;
          ppStack_78 = (piecewise_construct_t *)0x0;
          local_70 = (void *)0x0;
          local_80 = (piecewise_construct_t *)0x0;
          cocos2d::Value::Value(aVStack_58,(vector *)&local_80);
          ppVar1 = (piecewise_construct_t *)((long)param_1 + 0x50);
          local_88 = ppVar1;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (*(basic_string **)((long)param_1 + 0x88),ppVar1,(tuple *)&DAT_0143f4d5,
                             (tuple *)&local_88);
          cocos2d::Value::operator=((Value *)(lVar9 + 0x28),aVStack_58);
          cocos2d::Value::~Value(aVStack_58);
          ppVar7 = local_80;
          ppVar5 = ppStack_78;
          if (local_80 != (piecewise_construct_t *)0x0) {
            while (ppVar5 != ppVar7) {
              cocos2d::Value::~Value((Value *)(ppVar5 + -0x10));
              ppVar5 = ppVar5 + -0x10;
            }
            ppStack_78 = ppVar7;
            operator_delete(local_80);
          }
          local_80 = ppVar1;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (*(basic_string **)((long)param_1 + 0x88),ppVar1,(tuple *)&DAT_0143f4d5,
                             (tuple *)&local_80);
          uVar10 = cocos2d::Value::asValueVector((Value *)(lVar9 + 0x28));
        }
        *(undefined8 *)((long)param_1 + 0x90) = uVar10;
      }
LAB_00f721c4:
      lVar9 = *(long *)((long)param_1 + 0x100);
      lVar13 = *(long *)((long)param_1 + 0x120);
      lVar15 = *(long *)((long)param_1 + 0x108) - lVar9;
      uVar12 = 0;
      if (lVar15 != 0) {
        uVar12 = lVar15 * 0x80 - 1;
      }
      uVar14 = lVar13 + *(long *)((long)param_1 + 0x118);
      if (uVar12 == uVar14) {
        std::__ndk1::deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>>::
        __add_back_capacity((deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *)
                            ((long)param_1 + 0xf8));
        lVar13 = *(long *)((long)param_1 + 0x120);
        lVar9 = *(long *)((long)param_1 + 0x100);
        uVar14 = *(long *)((long)param_1 + 0x118) + lVar13;
      }
      *(undefined4 *)(*(long *)(lVar9 + (uVar14 >> 7 & 0x1fffffffffffff8)) + (uVar14 & 0x3ff) * 4) =
           *(undefined4 *)((long)param_1 + 0x80);
      lVar9 = *(long *)((long)param_1 + 0xd0);
      lVar15 = *(long *)((long)param_1 + 0xf0);
      *(long *)((long)param_1 + 0x120) = lVar13 + 1;
      lVar13 = *(long *)((long)param_1 + 0xd8) - lVar9;
      uVar12 = lVar15 + *(long *)((long)param_1 + 0xe8);
      uVar14 = 0;
      if (lVar13 != 0) {
        uVar14 = lVar13 * 0x40 - 1;
      }
      if (uVar14 == uVar12) {
        std::__ndk1::
        deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
        ::__add_back_capacity
                  ((deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
                    *)((long)param_1 + 200));
        lVar15 = *(long *)((long)param_1 + 0xf0);
        lVar9 = *(long *)((long)param_1 + 0xd0);
        uVar12 = *(long *)((long)param_1 + 0xe8) + lVar15;
      }
      *(undefined8 *)(*(long *)(lVar9 + (uVar12 >> 6 & 0x3fffffffffffff8)) + (uVar12 & 0x1ff) * 8) =
           *(undefined8 *)((long)param_1 + 0x90);
      *(long *)((long)param_1 + 0xf0) = lVar15 + 1;
      goto joined_r0x00f72278;
    }
    break;
  case 6:
    piVar2 = (int *)((ulong)local_a8 | 1);
    if (((byte)local_a8[0] & 1) != 0) {
      piVar2 = local_98;
    }
    iVar8 = memcmp(piVar2,"string",6);
    if (iVar8 == 0) {
      uVar11 = 5;
      goto LAB_00f71e9c;
    }
    break;
  case 7:
    piVar2 = (int *)((ulong)local_a8 | 1);
    if (((byte)local_a8[0] & 1) != 0) {
      piVar2 = local_98;
    }
    iVar8 = memcmp(piVar2,"integer",7);
    if (iVar8 == 0) {
      uVar11 = 3;
      goto LAB_00f71e9c;
    }
  }
  *(undefined4 *)((long)param_1 + 0x80) = 0;
  if (((byte)local_a8[0] & 1) != 0) {
LAB_00f71dc4:
    operator_delete(local_98);
  }
LAB_00f71dcc:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

