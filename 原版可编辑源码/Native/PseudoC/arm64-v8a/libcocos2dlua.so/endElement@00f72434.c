
/* cocos2d::DictMaker::endElement(void*, char const*) */

void __thiscall cocos2d::DictMaker::endElement(DictMaker *this,void *param_1,char *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  int iVar7;
  int iVar8;
  DictMaker *pDVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *pvVar14;
  Value *pVVar15;
  double dVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  int *local_70;
  piecewise_construct_t *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x120) == 0) {
    iVar8 = 2;
  }
  else {
    uVar11 = (*(long *)(this + 0x120) + *(long *)(this + 0x118)) - 1;
    iVar8 = *(int *)(*(long *)(*(long *)(this + 0x100) + (uVar11 >> 7 & 0x1fffffffffffff8)) +
                    (uVar11 & 0x3ff) * 4);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,param_2);
  piVar13 = local_70;
  bVar6 = local_80[0];
  uVar11 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar11 = local_78;
  }
  switch(uVar11) {
  case 4:
    piVar13 = (int *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      piVar13 = local_70;
    }
    if (*piVar13 == 0x74636964) {
      lVar2 = *(long *)(this + 0x120);
      lVar3 = *(long *)(this + 0x108) - *(long *)(this + 0x100);
      lVar10 = 0;
      if (lVar3 != 0) {
        lVar10 = lVar3 * 0x80 + -1;
      }
      *(long *)(this + 0x120) = lVar2 + -1;
      if (0x7ff < (lVar10 - (lVar2 + *(long *)(this + 0x118))) + 1U) {
        operator_delete(*(void **)(*(long *)(this + 0x108) + -8));
        *(long *)(this + 0x108) = *(long *)(this + 0x108) + -8;
      }
      lVar2 = *(long *)(this + 0xc0);
      lVar3 = *(long *)(this + 0xa8) - *(long *)(this + 0xa0);
      lVar12 = lVar2 + -1;
      lVar10 = 0;
      if (lVar3 != 0) {
        lVar10 = lVar3 * 0x40 + -1;
      }
      *(long *)(this + 0xc0) = lVar12;
      if (0x3ff < (lVar10 - (lVar2 + *(long *)(this + 0xb8))) + 1U) {
        operator_delete(*(void **)(*(long *)(this + 0xa8) + -8));
        lVar12 = *(long *)(this + 0xc0);
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + -8;
      }
      if (lVar12 != 0) {
        uVar11 = (lVar12 + *(long *)(this + 0xb8)) - 1;
        *(undefined8 *)(this + 0x88) =
             *(undefined8 *)
              (*(long *)(*(long *)(this + 0xa0) + (uVar11 >> 6 & 0x3fffffffffffff8)) +
              (uVar11 & 0x1ff) * 8);
      }
      goto switchD_00f724d0_default;
    }
    if (*piVar13 != 0x65757274) {
LAB_00f72590:
      if (uVar11 != 4) {
        if (uVar11 != 7) goto switchD_00f724d0_default;
        goto switchD_00f724d0_caseD_7;
      }
      piVar1 = (int *)((ulong)local_80 | 1);
      if (((byte)bVar6 & 1) != 0) {
        piVar1 = local_70;
      }
      piVar13 = local_70;
      if (*piVar1 != 0x6c616572) goto switchD_00f724d0_default;
      goto LAB_00f725c8;
    }
    if (iVar8 == 2) {
      cocos2d::Value::Value(aVStack_58,true);
      local_60 = (piecewise_construct_t *)(this + 0x50);
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_60,(tuple *)&DAT_0143f4d5,
                          (tuple *)&local_60);
      cocos2d::Value::operator=((Value *)(lVar10 + 0x28),aVStack_58);
    }
    else {
      if (iVar8 != 6) goto switchD_00f724d0_default;
      pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
      cocos2d::Value::Value(aVStack_58,true);
      pVVar15 = *(Value **)(pvVar14 + 8);
      if (pVVar15 < *(Value **)(pvVar14 + 0x10)) {
        cocos2d::Value::Value(pVVar15,aVStack_58);
LAB_00f728d0:
        *(Value **)(pvVar14 + 8) = pVVar15 + 0x10;
      }
      else {
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_58);
      }
    }
    break;
  case 5:
    piVar13 = (int *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      piVar13 = local_70;
    }
    iVar7 = memcmp(piVar13,"array",5);
    if (iVar7 == 0) {
      lVar2 = *(long *)(this + 0x120);
      lVar3 = *(long *)(this + 0x108) - *(long *)(this + 0x100);
      lVar10 = 0;
      if (lVar3 != 0) {
        lVar10 = lVar3 * 0x80 + -1;
      }
      *(long *)(this + 0x120) = lVar2 + -1;
      if (0x7ff < (lVar10 - (lVar2 + *(long *)(this + 0x118))) + 1U) {
        operator_delete(*(void **)(*(long *)(this + 0x108) + -8));
        *(long *)(this + 0x108) = *(long *)(this + 0x108) + -8;
      }
      lVar2 = *(long *)(this + 0xf0);
      lVar3 = *(long *)(this + 0xd8) - *(long *)(this + 0xd0);
      lVar12 = lVar2 + -1;
      lVar10 = 0;
      if (lVar3 != 0) {
        lVar10 = lVar3 * 0x40 + -1;
      }
      *(long *)(this + 0xf0) = lVar12;
      if (0x3ff < (lVar10 - (lVar2 + *(long *)(this + 0xe8))) + 1U) {
        operator_delete(*(void **)(*(long *)(this + 0xd8) + -8));
        lVar12 = *(long *)(this + 0xf0);
        *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + -8;
      }
      if (lVar12 != 0) {
        uVar11 = (lVar12 + *(long *)(this + 0xe8)) - 1;
        *(undefined8 *)(this + 0x90) =
             *(undefined8 *)
              (*(long *)(*(long *)(this + 0xd0) + (uVar11 >> 6 & 0x3fffffffffffff8)) +
              (uVar11 & 0x1ff) * 8);
      }
      goto switchD_00f724d0_default;
    }
    iVar7 = memcmp(piVar13,"false",5);
    if (iVar7 != 0) goto LAB_00f72590;
    if (iVar8 == 2) {
      cocos2d::Value::Value(aVStack_58,false);
      local_60 = (piecewise_construct_t *)(this + 0x50);
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_60,(tuple *)&DAT_0143f4d5,
                          (tuple *)&local_60);
      cocos2d::Value::operator=((Value *)(lVar10 + 0x28),aVStack_58);
    }
    else {
      if (iVar8 != 6) goto switchD_00f724d0_default;
      pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
      cocos2d::Value::Value(aVStack_58,false);
      pVVar15 = *(Value **)(pvVar14 + 8);
      if (pVVar15 < *(Value **)(pvVar14 + 0x10)) {
        cocos2d::Value::Value(pVVar15,aVStack_58);
        goto LAB_00f728d0;
      }
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_58);
    }
    break;
  case 6:
    piVar1 = (int *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      piVar1 = local_70;
    }
    iVar7 = memcmp(piVar1,"string",6);
    if (iVar7 != 0) goto switchD_00f724d0_default;
    bVar5 = true;
    if (iVar8 != 2) goto LAB_00f725d4;
LAB_00f7267c:
    if (bVar5) {
      piVar1 = (int *)((ulong)local_80 | 1);
      if (((byte)bVar6 & 1) != 0) {
        piVar1 = piVar13;
      }
      iVar8 = memcmp(piVar1,"string",6);
      if (iVar8 != 0) goto LAB_00f726a4;
      cocos2d::Value::Value(aVStack_58,(basic_string *)(this + 0x68));
      local_60 = (piecewise_construct_t *)(this + 0x50);
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_60,(tuple *)&DAT_0143f4d5,
                          (tuple *)&local_60);
      cocos2d::Value::operator=((Value *)(lVar10 + 0x28),aVStack_58);
    }
    else {
LAB_00f726a4:
      if (uVar11 == 7) {
        piVar1 = (int *)((ulong)local_80 | 1);
        if (((byte)bVar6 & 1) != 0) {
          piVar1 = piVar13;
        }
        iVar8 = memcmp(piVar1,"integer",7);
        if (iVar8 == 0) {
          if (((byte)this[0x68] & 1) == 0) {
            pDVar9 = this + 0x69;
          }
          else {
            pDVar9 = *(DictMaker **)(this + 0x78);
          }
          iVar8 = atoi((char *)pDVar9);
          cocos2d::Value::Value(aVStack_58,iVar8);
          local_60 = (piecewise_construct_t *)(this + 0x50);
          lVar10 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                             (*(basic_string **)(this + 0x88),local_60,(tuple *)&DAT_0143f4d5,
                              (tuple *)&local_60);
          cocos2d::Value::operator=((Value *)(lVar10 + 0x28),aVStack_58);
          goto LAB_00f72b40;
        }
      }
      if (((byte)this[0x68] & 1) == 0) {
        pDVar9 = this + 0x69;
      }
      else {
        pDVar9 = *(DictMaker **)(this + 0x78);
      }
      dVar16 = atof((char *)pDVar9);
      cocos2d::Value::Value(aVStack_58,dVar16);
      local_60 = (piecewise_construct_t *)(this + 0x50);
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_60,(tuple *)&DAT_0143f4d5,
                          (tuple *)&local_60);
      cocos2d::Value::operator=((Value *)(lVar10 + 0x28),aVStack_58);
    }
LAB_00f72b40:
    cocos2d::Value::~Value(aVStack_58);
    goto LAB_00f72b48;
  case 7:
switchD_00f724d0_caseD_7:
    piVar13 = local_70;
    piVar1 = (int *)((ulong)local_80 | 1);
    if (((byte)bVar6 & 1) != 0) {
      piVar1 = local_70;
    }
    iVar7 = memcmp(piVar1,"integer",7);
    if (iVar7 != 0) goto switchD_00f724d0_default;
LAB_00f725c8:
    bVar5 = false;
    if (iVar8 == 2) goto LAB_00f7267c;
LAB_00f725d4:
    if (iVar8 == 6) {
      if (bVar5) {
        piVar1 = (int *)((ulong)local_80 | 1);
        if (((byte)bVar6 & 1) != 0) {
          piVar1 = piVar13;
        }
        iVar8 = memcmp(piVar1,"string",6);
        if (iVar8 != 0) goto LAB_00f72604;
        pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
        cocos2d::Value::Value(aVStack_58,(basic_string *)(this + 0x68));
        pVVar15 = *(Value **)(pvVar14 + 8);
        if (pVVar15 < *(Value **)(pvVar14 + 0x10)) {
          cocos2d::Value::Value(pVVar15,aVStack_58);
          goto LAB_00f72ad8;
        }
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_58);
      }
      else {
LAB_00f72604:
        if (uVar11 == 7) {
          piVar1 = (int *)((ulong)local_80 | 1);
          if (((byte)bVar6 & 1) != 0) {
            piVar1 = piVar13;
          }
          iVar8 = memcmp(piVar1,"integer",7);
          if (iVar8 == 0) {
            pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)
                       (this + 0x90);
            if (((byte)this[0x68] & 1) == 0) {
              pDVar9 = this + 0x69;
            }
            else {
              pDVar9 = *(DictMaker **)(this + 0x78);
            }
            iVar8 = atoi((char *)pDVar9);
            cocos2d::Value::Value(aVStack_58,iVar8);
            pVVar15 = *(Value **)(pvVar14 + 8);
            if (pVVar15 < *(Value **)(pvVar14 + 0x10)) {
              cocos2d::Value::Value(pVVar15,aVStack_58);
              goto LAB_00f72ad8;
            }
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_58);
            goto LAB_00f72b40;
          }
        }
        pvVar14 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
        if (((byte)this[0x68] & 1) == 0) {
          pDVar9 = this + 0x69;
        }
        else {
          pDVar9 = *(DictMaker **)(this + 0x78);
        }
        dVar16 = atof((char *)pDVar9);
        cocos2d::Value::Value(aVStack_58,dVar16);
        pVVar15 = *(Value **)(pvVar14 + 8);
        if (pVVar15 < *(Value **)(pvVar14 + 0x10)) {
          cocos2d::Value::Value(pVVar15,aVStack_58);
LAB_00f72ad8:
          *(Value **)(pvVar14 + 8) = pVVar15 + 0x10;
        }
        else {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>(pvVar14,aVStack_58);
        }
      }
      goto LAB_00f72b40;
    }
LAB_00f72b48:
    if (((byte)this[0x68] & 1) == 0) {
      *(undefined2 *)(this + 0x68) = 0;
    }
    else {
      **(undefined1 **)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x70) = 0;
    }
  default:
    goto switchD_00f724d0_default;
  }
  cocos2d::Value::~Value(aVStack_58);
switchD_00f724d0_default:
  *(undefined4 *)(this + 0x80) = 0;
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

