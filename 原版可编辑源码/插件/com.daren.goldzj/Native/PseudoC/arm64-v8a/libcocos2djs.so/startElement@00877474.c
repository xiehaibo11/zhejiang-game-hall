
/* cocos2d::DictMaker::startElement(void*, char const*, char const**) */

void cocos2d::DictMaker::startElement(void *param_1,char *param_2,char **param_3)

{
  piecewise_construct_t *ppVar1;
  long lVar2;
  piecewise_construct_t *ppVar3;
  undefined8 *puVar4;
  piecewise_construct_t *ppVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *pvVar14;
  basic_string *pbVar15;
  void *pvVar16;
  int *piVar17;
  ulong uVar18;
  ulong local_b8;
  size_t local_b0;
  int *local_a8;
  piecewise_construct_t *local_98;
  piecewise_construct_t *local_90;
  piecewise_construct_t *ppStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (int *)0x0;
  sVar7 = strlen((char *)param_3);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    piVar17 = (int *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00877500;
  }
  else {
    uVar18 = sVar7 + 0x10 & 0xfffffffffffffff0;
    piVar17 = operator_new(uVar18);
    local_b8 = uVar18 | 1;
    local_b0 = sVar7;
    local_a8 = piVar17;
LAB_00877500:
    memcpy(piVar17,param_3,sVar7);
  }
  *(undefined1 *)((long)piVar17 + sVar7) = 0;
  sVar7 = local_b8 >> 1 & 0x7f;
  if ((local_b8 & 1) != 0) {
    sVar7 = local_b0;
  }
  switch(sVar7) {
  case 3:
    piVar17 = (int *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      piVar17 = local_a8;
    }
    iVar6 = memcmp(piVar17,"key",3);
    if (iVar6 != 0) break;
    uVar10 = 1;
LAB_00877814:
    *(undefined4 *)((long)param_1 + 0x80) = uVar10;
joined_r0x00877bf8:
    if ((local_b8 & 1) == 0) goto LAB_0087773c;
    goto LAB_00877734;
  case 4:
    piVar17 = (int *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      piVar17 = local_a8;
    }
    if (*piVar17 == 0x74636964) {
      if ((*(int *)((long)param_1 + 8) == 1) && (*(long *)((long)param_1 + 0x28) == 0)) {
        *(long *)((long)param_1 + 0x88) = (long)param_1 + 0x10;
      }
      *(undefined4 *)((long)param_1 + 0x80) = 2;
      if (*(long *)((long)param_1 + 0x120) != 0) {
        uVar18 = (*(long *)((long)param_1 + 0x120) + *(long *)((long)param_1 + 0x118)) - 1;
        iVar6 = *(int *)(*(long *)(*(long *)((long)param_1 + 0x100) +
                                  (uVar18 >> 7 & 0x1fffffffffffff8)) + (uVar18 & 0x3ff) * 4);
        if (iVar6 == 2) {
          uVar18 = (*(long *)((long)param_1 + 0xc0) + *(long *)((long)param_1 + 0xb8)) - 1;
          pbVar15 = *(basic_string **)
                     (*(long *)(*(long *)((long)param_1 + 0xa0) + (uVar18 >> 6 & 0x3fffffffffffff8))
                     + (uVar18 & 0x1ff) * 8);
          ppStack_88 = (piecewise_construct_t *)0x0;
          local_90 = (void *)0x0;
          uStack_78 = 0;
          local_80 = (void *)0x0;
          local_70 = 0x3f800000;
          cocos2d::Value::Value(aVStack_68,(unordered_map *)&local_90);
          ppVar1 = (piecewise_construct_t *)((long)param_1 + 0x50);
          local_98 = ppVar1;
          lVar8 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (pbVar15,ppVar1,(tuple *)&DAT_01853e11,(tuple *)&local_98);
          cocos2d::Value::operator=((Value *)(lVar8 + 0x28),aVStack_68);
          cocos2d::Value::~Value(aVStack_68);
          ppVar3 = local_90;
          puVar4 = local_80;
          while (puVar4 != (void *)0x0) {
            pvVar16 = (void *)*puVar4;
            local_90 = ppVar3;
            cocos2d::Value::~Value((Value *)(puVar4 + 5));
            if ((*(byte *)(puVar4 + 2) & 1) != 0) {
              operator_delete((void *)puVar4[4]);
            }
            operator_delete(puVar4);
            ppVar3 = local_90;
            puVar4 = pvVar16;
          }
          local_90 = (piecewise_construct_t *)0x0;
          if (ppVar3 != (void *)0x0) {
            operator_delete(ppVar3);
          }
          local_90 = ppVar1;
          lVar8 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (pbVar15,ppVar1,(tuple *)&DAT_01853e11,(tuple *)&local_90);
          uVar9 = cocos2d::Value::asValueMap((Value *)(lVar8 + 0x28));
        }
        else {
          if (iVar6 != 6) goto LAB_00877a28;
          pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)
                     ((long)param_1 + 0x90);
          ppStack_88 = (piecewise_construct_t *)0x0;
          local_90 = (void *)0x0;
          uStack_78 = 0;
          local_80 = (void *)0x0;
          local_70 = 0x3f800000;
          cocos2d::Value::Value(aVStack_68,(unordered_map *)&local_90);
          if (*(Value **)(pvVar14 + 8) < *(Value **)(pvVar14 + 0x10)) {
            cocos2d::Value::Value(*(Value **)(pvVar14 + 8),aVStack_68);
            *(long *)(pvVar14 + 8) = *(long *)(pvVar14 + 8) + 0x10;
          }
          else {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_68);
          }
          cocos2d::Value::~Value(aVStack_68);
          ppVar1 = local_90;
          puVar4 = local_80;
          while (puVar4 != (void *)0x0) {
            pvVar16 = (void *)*puVar4;
            local_90 = ppVar1;
            cocos2d::Value::~Value((Value *)(puVar4 + 5));
            if ((*(byte *)(puVar4 + 2) & 1) != 0) {
              operator_delete((void *)puVar4[4]);
            }
            operator_delete(puVar4);
            ppVar1 = local_90;
            puVar4 = pvVar16;
          }
          local_90 = (piecewise_construct_t *)0x0;
          if (ppVar1 != (void *)0x0) {
            operator_delete(ppVar1);
          }
          uVar9 = cocos2d::Value::asValueMap
                            ((Value *)(*(long *)(*(long *)((long)param_1 + 0x90) + 8) + -0x10));
        }
        *(undefined8 *)((long)param_1 + 0x88) = uVar9;
      }
LAB_00877a28:
      lVar11 = *(long *)((long)param_1 + 0x100);
      lVar8 = *(long *)((long)param_1 + 0x120);
      lVar12 = *(long *)((long)param_1 + 0x108) - lVar11;
      uVar18 = 0;
      if (lVar12 != 0) {
        uVar18 = lVar12 * 0x80 - 1;
      }
      uVar13 = lVar8 + *(long *)((long)param_1 + 0x118);
      if (uVar18 == uVar13) {
        std::__ndk1::deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>>::
        __add_back_capacity((deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *)
                            ((long)param_1 + 0xf8));
        lVar8 = *(long *)((long)param_1 + 0x120);
        lVar11 = *(long *)((long)param_1 + 0x100);
        uVar13 = *(long *)((long)param_1 + 0x118) + lVar8;
      }
      *(undefined4 *)(*(long *)(lVar11 + (uVar13 >> 7 & 0x1fffffffffffff8)) + (uVar13 & 0x3ff) * 4)
           = *(undefined4 *)((long)param_1 + 0x80);
      lVar12 = *(long *)((long)param_1 + 0xa0);
      lVar11 = *(long *)((long)param_1 + 0xc0);
      *(long *)((long)param_1 + 0x120) = lVar8 + 1;
      lVar8 = *(long *)((long)param_1 + 0xa8) - lVar12;
      uVar18 = lVar11 + *(long *)((long)param_1 + 0xb8);
      uVar13 = 0;
      if (lVar8 != 0) {
        uVar13 = lVar8 * 0x40 - 1;
      }
      if (uVar13 == uVar18) {
        std::__ndk1::
        deque<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*>>
        ::__add_back_capacity
                  ((deque<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*,std::__ndk1::allocator<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>*>>
                    *)((long)param_1 + 0x98));
        lVar11 = *(long *)((long)param_1 + 0xc0);
        lVar12 = *(long *)((long)param_1 + 0xa0);
        uVar18 = *(long *)((long)param_1 + 0xb8) + lVar11;
      }
      *(undefined8 *)(*(long *)(lVar12 + (uVar18 >> 6 & 0x3fffffffffffff8)) + (uVar18 & 0x1ff) * 8)
           = *(undefined8 *)((long)param_1 + 0x88);
      *(long *)((long)param_1 + 0xc0) = lVar11 + 1;
      goto joined_r0x00877bf8;
    }
    if (*piVar17 == 0x6c616572) {
      uVar10 = 4;
      goto LAB_00877814;
    }
    break;
  case 5:
    piVar17 = (int *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      piVar17 = local_a8;
    }
    iVar6 = memcmp(piVar17,"array",5);
    if (iVar6 == 0) {
      *(undefined4 *)((long)param_1 + 0x80) = 6;
      if ((*(int *)((long)param_1 + 8) == 2) &&
         (*(long *)((long)param_1 + 0x38) == *(long *)((long)param_1 + 0x40))) {
        *(long **)((long)param_1 + 0x90) = (long *)((long)param_1 + 0x38);
      }
      if (*(long *)((long)param_1 + 0x120) != 0) {
        uVar18 = (*(long *)((long)param_1 + 0x120) + *(long *)((long)param_1 + 0x118)) - 1;
        iVar6 = *(int *)(*(long *)(*(long *)((long)param_1 + 0x100) +
                                  (uVar18 >> 7 & 0x1fffffffffffff8)) + (uVar18 & 0x3ff) * 4);
        if (iVar6 == 6) {
          uVar18 = (*(long *)((long)param_1 + 0xf0) + *(long *)((long)param_1 + 0xe8)) - 1;
          pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)
                     (*(long *)(*(long *)((long)param_1 + 0xd0) + (uVar18 >> 6 & 0x3fffffffffffff8))
                     + (uVar18 & 0x1ff) * 8);
          local_90 = (piecewise_construct_t *)0x0;
          ppStack_88 = (piecewise_construct_t *)0x0;
          local_80 = (void *)0x0;
          cocos2d::Value::Value(aVStack_68,(vector *)&local_90);
          if (*(Value **)(pvVar14 + 8) < *(Value **)(pvVar14 + 0x10)) {
            cocos2d::Value::Value(*(Value **)(pvVar14 + 8),aVStack_68);
            *(long *)(pvVar14 + 8) = *(long *)(pvVar14 + 8) + 0x10;
          }
          else {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_68);
          }
          cocos2d::Value::~Value(aVStack_68);
          ppVar3 = local_90;
          ppVar1 = ppStack_88;
          if (local_90 != (piecewise_construct_t *)0x0) {
            while (ppVar1 != ppVar3) {
              cocos2d::Value::~Value((Value *)(ppVar1 + -0x10));
              ppVar1 = ppVar1 + -0x10;
            }
            ppStack_88 = ppVar3;
            operator_delete(local_90);
          }
          uVar9 = cocos2d::Value::asValueVector
                            ((Value *)(*(long *)(*(long *)((long)param_1 + 0x90) + 8) + -0x10));
        }
        else {
          if (iVar6 != 2) goto LAB_00877b40;
          local_90 = (piecewise_construct_t *)0x0;
          ppStack_88 = (piecewise_construct_t *)0x0;
          local_80 = (void *)0x0;
          cocos2d::Value::Value(aVStack_68,(vector *)&local_90);
          ppVar1 = (piecewise_construct_t *)((long)param_1 + 0x50);
          local_98 = ppVar1;
          lVar8 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (*(basic_string **)((long)param_1 + 0x88),ppVar1,(tuple *)&DAT_01853e11,
                             (tuple *)&local_98);
          cocos2d::Value::operator=((Value *)(lVar8 + 0x28),aVStack_68);
          cocos2d::Value::~Value(aVStack_68);
          ppVar5 = local_90;
          ppVar3 = ppStack_88;
          if (local_90 != (piecewise_construct_t *)0x0) {
            while (ppVar3 != ppVar5) {
              cocos2d::Value::~Value((Value *)(ppVar3 + -0x10));
              ppVar3 = ppVar3 + -0x10;
            }
            ppStack_88 = ppVar5;
            operator_delete(local_90);
          }
          local_90 = ppVar1;
          lVar8 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                            (*(basic_string **)((long)param_1 + 0x88),ppVar1,(tuple *)&DAT_01853e11,
                             (tuple *)&local_90);
          uVar9 = cocos2d::Value::asValueVector((Value *)(lVar8 + 0x28));
        }
        *(undefined8 *)((long)param_1 + 0x90) = uVar9;
      }
LAB_00877b40:
      lVar11 = *(long *)((long)param_1 + 0x100);
      lVar8 = *(long *)((long)param_1 + 0x120);
      lVar12 = *(long *)((long)param_1 + 0x108) - lVar11;
      uVar18 = 0;
      if (lVar12 != 0) {
        uVar18 = lVar12 * 0x80 - 1;
      }
      uVar13 = lVar8 + *(long *)((long)param_1 + 0x118);
      if (uVar18 == uVar13) {
        std::__ndk1::deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>>::
        __add_back_capacity((deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *)
                            ((long)param_1 + 0xf8));
        lVar8 = *(long *)((long)param_1 + 0x120);
        lVar11 = *(long *)((long)param_1 + 0x100);
        uVar13 = *(long *)((long)param_1 + 0x118) + lVar8;
      }
      *(undefined4 *)(*(long *)(lVar11 + (uVar13 >> 7 & 0x1fffffffffffff8)) + (uVar13 & 0x3ff) * 4)
           = *(undefined4 *)((long)param_1 + 0x80);
      lVar12 = *(long *)((long)param_1 + 0xd0);
      lVar11 = *(long *)((long)param_1 + 0xf0);
      *(long *)((long)param_1 + 0x120) = lVar8 + 1;
      lVar8 = *(long *)((long)param_1 + 0xd8) - lVar12;
      uVar18 = lVar11 + *(long *)((long)param_1 + 0xe8);
      uVar13 = 0;
      if (lVar8 != 0) {
        uVar13 = lVar8 * 0x40 - 1;
      }
      if (uVar13 == uVar18) {
        std::__ndk1::
        deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
        ::__add_back_capacity
                  ((deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
                    *)((long)param_1 + 200));
        lVar11 = *(long *)((long)param_1 + 0xf0);
        lVar12 = *(long *)((long)param_1 + 0xd0);
        uVar18 = *(long *)((long)param_1 + 0xe8) + lVar11;
      }
      *(undefined8 *)(*(long *)(lVar12 + (uVar18 >> 6 & 0x3fffffffffffff8)) + (uVar18 & 0x1ff) * 8)
           = *(undefined8 *)((long)param_1 + 0x90);
      *(long *)((long)param_1 + 0xf0) = lVar11 + 1;
      goto joined_r0x00877bf8;
    }
    break;
  case 6:
    piVar17 = (int *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      piVar17 = local_a8;
    }
    iVar6 = memcmp(piVar17,"string",6);
    if (iVar6 == 0) {
      uVar10 = 5;
      goto LAB_00877814;
    }
    break;
  case 7:
    piVar17 = (int *)((ulong)&local_b8 | 1);
    if ((local_b8 & 1) != 0) {
      piVar17 = local_a8;
    }
    iVar6 = memcmp(piVar17,"integer",7);
    if (iVar6 == 0) {
      uVar10 = 3;
      goto LAB_00877814;
    }
  }
  *(undefined4 *)((long)param_1 + 0x80) = 0;
  if ((local_b8 & 1) != 0) {
LAB_00877734:
    operator_delete(local_a8);
  }
LAB_0087773c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

