
/* cocos2d::DictMaker::endElement(void*, char const*) */

void __thiscall cocos2d::DictMaker::endElement(DictMaker *this,void *param_1,char *param_2)

{
  long lVar1;
  DictMaker DVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  DictMaker *pDVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *pvVar13;
  int *piVar14;
  long lVar15;
  double dVar16;
  ulong local_90;
  size_t local_88;
  int *local_80;
  piecewise_construct_t *local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar15 = *(long *)(this + 0x120);
  if (lVar15 == 0) {
    iVar7 = 2;
  }
  else {
    uVar10 = (lVar15 + *(long *)(this + 0x118)) - 1;
    iVar7 = *(int *)(*(long *)(*(long *)(this + 0x100) + (uVar10 >> 7 & 0x1fffffffffffff8)) +
                    (uVar10 & 0x3ff) * 4);
  }
  local_90 = 0;
  local_88 = 0;
  local_80 = (int *)0x0;
  sVar8 = strlen(param_2);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    piVar14 = (int *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00877e58;
  }
  else {
    uVar10 = sVar8 + 0x10 & 0xfffffffffffffff0;
    piVar14 = operator_new(uVar10);
    local_90 = uVar10 | 1;
    local_88 = sVar8;
    local_80 = piVar14;
LAB_00877e58:
    memcpy(piVar14,param_2,sVar8);
  }
  piVar12 = local_80;
  uVar10 = local_90;
  *(undefined1 *)((long)piVar14 + sVar8) = 0;
  sVar8 = local_90 >> 1 & 0x7f;
  if ((local_90 & 1) != 0) {
    sVar8 = local_88;
  }
  switch(sVar8) {
  case 4:
    piVar14 = (int *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      piVar14 = local_80;
    }
    if (*piVar14 == 0x74636964) {
      lVar3 = *(long *)(this + 0x108) - *(long *)(this + 0x100);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar3 * 0x80 + -1;
      }
      *(long *)(this + 0x120) = lVar15 + -1;
      if (0x7ff < (ulong)(((1 - lVar15) - *(long *)(this + 0x118)) + lVar1)) {
        operator_delete(*(void **)(*(long *)(this + 0x108) + -8));
        *(long *)(this + 0x108) = *(long *)(this + 0x108) + -8;
      }
      lVar1 = *(long *)(this + 0xc0);
      lVar3 = *(long *)(this + 0xa8) - *(long *)(this + 0xa0);
      lVar11 = lVar1 + -1;
      lVar15 = 0;
      if (lVar3 != 0) {
        lVar15 = lVar3 * 0x40 + -1;
      }
      *(long *)(this + 0xc0) = lVar11;
      if (0x3ff < (ulong)(((1 - lVar1) - *(long *)(this + 0xb8)) + lVar15)) {
        operator_delete(*(void **)(*(long *)(this + 0xa8) + -8));
        lVar11 = *(long *)(this + 0xc0);
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + -8;
      }
      if (lVar11 != 0) {
        uVar10 = (lVar11 + *(long *)(this + 0xb8)) - 1;
        *(undefined8 *)(this + 0x88) =
             *(undefined8 *)
              (*(long *)(*(long *)(this + 0xa0) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
              (uVar10 & 0x1ff) * 8);
      }
      goto switchD_00877ea0_default;
    }
    if (*piVar14 != 0x65757274) {
LAB_00877f5c:
      if (sVar8 != 4) {
        if (sVar8 != 7) goto switchD_00877ea0_default;
        goto switchD_00877ea0_caseD_7;
      }
      piVar14 = (int *)((ulong)&local_90 | 1);
      if ((uVar10 & 1) != 0) {
        piVar14 = local_80;
      }
      piVar12 = local_80;
      if (*piVar14 != 0x6c616572) goto switchD_00877ea0_default;
      goto LAB_00877f94;
    }
    if (iVar7 == 2) {
      cocos2d::Value::Value(aVStack_68,true);
      local_70 = (piecewise_construct_t *)(this + 0x50);
      lVar15 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_70,(tuple *)&DAT_01853e11,
                          (tuple *)&local_70);
      cocos2d::Value::operator=((Value *)(lVar15 + 0x28),aVStack_68);
    }
    else {
      if (iVar7 != 6) goto switchD_00877ea0_default;
      pvVar13 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
      cocos2d::Value::Value(aVStack_68,true);
      if (*(Value **)(pvVar13 + 8) < *(Value **)(pvVar13 + 0x10)) {
        cocos2d::Value::Value(*(Value **)(pvVar13 + 8),aVStack_68);
LAB_008782c4:
        *(long *)(pvVar13 + 8) = *(long *)(pvVar13 + 8) + 0x10;
      }
      else {
        std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
        __push_back_slow_path<cocos2d::Value>(pvVar13,aVStack_68);
      }
    }
    break;
  case 5:
    piVar14 = (int *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      piVar14 = local_80;
    }
    iVar6 = memcmp(piVar14,"array",5);
    if (iVar6 == 0) {
      lVar3 = *(long *)(this + 0x108) - *(long *)(this + 0x100);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar3 * 0x80 + -1;
      }
      *(long *)(this + 0x120) = lVar15 + -1;
      if (0x7ff < (ulong)(((1 - lVar15) - *(long *)(this + 0x118)) + lVar1)) {
        operator_delete(*(void **)(*(long *)(this + 0x108) + -8));
        *(long *)(this + 0x108) = *(long *)(this + 0x108) + -8;
      }
      lVar1 = *(long *)(this + 0xf0);
      lVar3 = *(long *)(this + 0xd8) - *(long *)(this + 0xd0);
      lVar11 = lVar1 + -1;
      lVar15 = 0;
      if (lVar3 != 0) {
        lVar15 = lVar3 * 0x40 + -1;
      }
      *(long *)(this + 0xf0) = lVar11;
      if (0x3ff < (ulong)(((1 - lVar1) - *(long *)(this + 0xe8)) + lVar15)) {
        operator_delete(*(void **)(*(long *)(this + 0xd8) + -8));
        lVar11 = *(long *)(this + 0xf0);
        *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + -8;
      }
      if (lVar11 != 0) {
        uVar10 = (lVar11 + *(long *)(this + 0xe8)) - 1;
        *(undefined8 *)(this + 0x90) =
             *(undefined8 *)
              (*(long *)(*(long *)(this + 0xd0) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
              (uVar10 & 0x1ff) * 8);
      }
      goto switchD_00877ea0_default;
    }
    iVar6 = memcmp(piVar14,"false",5);
    if (iVar6 != 0) goto LAB_00877f5c;
    if (iVar7 == 2) {
      cocos2d::Value::Value(aVStack_68,false);
      local_70 = (piecewise_construct_t *)(this + 0x50);
      lVar15 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_70,(tuple *)&DAT_01853e11,
                          (tuple *)&local_70);
      cocos2d::Value::operator=((Value *)(lVar15 + 0x28),aVStack_68);
    }
    else {
      if (iVar7 != 6) goto switchD_00877ea0_default;
      pvVar13 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
      cocos2d::Value::Value(aVStack_68,false);
      if (*(Value **)(pvVar13 + 8) < *(Value **)(pvVar13 + 0x10)) {
        cocos2d::Value::Value(*(Value **)(pvVar13 + 8),aVStack_68);
        goto LAB_008782c4;
      }
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>(pvVar13,aVStack_68);
    }
    break;
  case 6:
    piVar14 = (int *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      piVar14 = local_80;
    }
    iVar6 = memcmp(piVar14,"string",6);
    if (iVar6 != 0) goto switchD_00877ea0_default;
    bVar5 = true;
    if (iVar7 == 2) goto LAB_00878048;
LAB_00877fa0:
    if (iVar7 == 6) {
      if (bVar5) {
        piVar14 = (int *)((ulong)&local_90 | 1);
        if ((uVar10 & 1) != 0) {
          piVar14 = piVar12;
        }
        iVar7 = memcmp(piVar14,"string",6);
        if (iVar7 != 0) goto LAB_00877fd0;
        pvVar13 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
        cocos2d::Value::Value(aVStack_68,(basic_string *)(this + 0x68));
        if (*(Value **)(pvVar13 + 0x10) <= *(Value **)(pvVar13 + 8)) {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>(pvVar13,aVStack_68);
          goto LAB_0087851c;
        }
        cocos2d::Value::Value(*(Value **)(pvVar13 + 8),aVStack_68);
      }
      else {
LAB_00877fd0:
        if (sVar8 == 7) {
          piVar14 = (int *)((ulong)&local_90 | 1);
          if ((uVar10 & 1) != 0) {
            piVar14 = piVar12;
          }
          iVar7 = memcmp(piVar14,"integer",7);
          if (iVar7 == 0) {
            pvVar13 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)
                       (this + 0x90);
            if (((byte)this[0x68] & 1) == 0) {
              pDVar9 = this + 0x69;
            }
            else {
              pDVar9 = *(DictMaker **)(this + 0x78);
            }
            iVar7 = atoi((char *)pDVar9);
            cocos2d::Value::Value(aVStack_68,iVar7);
            if (*(Value **)(pvVar13 + 0x10) <= *(Value **)(pvVar13 + 8)) {
              std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
              __push_back_slow_path<cocos2d::Value>(pvVar13,aVStack_68);
              goto LAB_0087851c;
            }
            cocos2d::Value::Value(*(Value **)(pvVar13 + 8),aVStack_68);
            goto LAB_008784bc;
          }
        }
        pvVar13 = *(vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> **)(this + 0x90);
        if (((byte)this[0x68] & 1) == 0) {
          pDVar9 = this + 0x69;
        }
        else {
          pDVar9 = *(DictMaker **)(this + 0x78);
        }
        dVar16 = atof((char *)pDVar9);
        cocos2d::Value::Value(aVStack_68,dVar16);
        if (*(Value **)(pvVar13 + 0x10) <= *(Value **)(pvVar13 + 8)) {
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
          __push_back_slow_path<cocos2d::Value>(pvVar13,aVStack_68);
          goto LAB_0087851c;
        }
        cocos2d::Value::Value(*(Value **)(pvVar13 + 8),aVStack_68);
      }
LAB_008784bc:
      *(long *)(pvVar13 + 8) = *(long *)(pvVar13 + 8) + 0x10;
      goto LAB_0087851c;
    }
    DVar2 = this[0x68];
    goto joined_r0x00878250;
  case 7:
switchD_00877ea0_caseD_7:
    piVar12 = local_80;
    piVar14 = (int *)((ulong)&local_90 | 1);
    if ((uVar10 & 1) != 0) {
      piVar14 = local_80;
    }
    iVar6 = memcmp(piVar14,"integer",7);
    if (iVar6 != 0) goto switchD_00877ea0_default;
LAB_00877f94:
    bVar5 = false;
    if (iVar7 != 2) goto LAB_00877fa0;
LAB_00878048:
    if (bVar5) {
      piVar14 = (int *)((ulong)&local_90 | 1);
      if ((uVar10 & 1) != 0) {
        piVar14 = piVar12;
      }
      iVar7 = memcmp(piVar14,"string",6);
      if (iVar7 != 0) goto LAB_00878070;
      cocos2d::Value::Value(aVStack_68,(basic_string *)(this + 0x68));
      local_70 = (piecewise_construct_t *)(this + 0x50);
      lVar15 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_70,(tuple *)&DAT_01853e11,
                          (tuple *)&local_70);
      cocos2d::Value::operator=((Value *)(lVar15 + 0x28),aVStack_68);
    }
    else {
LAB_00878070:
      if (sVar8 == 7) {
        piVar14 = (int *)((ulong)&local_90 | 1);
        if ((uVar10 & 1) != 0) {
          piVar14 = piVar12;
        }
        iVar7 = memcmp(piVar14,"integer",7);
        if (iVar7 == 0) {
          if (((byte)this[0x68] & 1) == 0) {
            pDVar9 = this + 0x69;
          }
          else {
            pDVar9 = *(DictMaker **)(this + 0x78);
          }
          iVar7 = atoi((char *)pDVar9);
          cocos2d::Value::Value(aVStack_68,iVar7);
          local_70 = (piecewise_construct_t *)(this + 0x50);
          lVar15 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                   ::
                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                             (*(basic_string **)(this + 0x88),local_70,(tuple *)&DAT_01853e11,
                              (tuple *)&local_70);
          cocos2d::Value::operator=((Value *)(lVar15 + 0x28),aVStack_68);
          goto LAB_0087851c;
        }
      }
      if (((byte)this[0x68] & 1) == 0) {
        pDVar9 = this + 0x69;
      }
      else {
        pDVar9 = *(DictMaker **)(this + 0x78);
      }
      dVar16 = atof((char *)pDVar9);
      cocos2d::Value::Value(aVStack_68,dVar16);
      local_70 = (piecewise_construct_t *)(this + 0x50);
      lVar15 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         (*(basic_string **)(this + 0x88),local_70,(tuple *)&DAT_01853e11,
                          (tuple *)&local_70);
      cocos2d::Value::operator=((Value *)(lVar15 + 0x28),aVStack_68);
    }
LAB_0087851c:
    cocos2d::Value::~Value(aVStack_68);
    DVar2 = this[0x68];
joined_r0x00878250:
    if (((byte)DVar2 & 1) == 0) {
      *(undefined2 *)(this + 0x68) = 0;
    }
    else {
      **(undefined1 **)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x70) = 0;
    }
  default:
    goto switchD_00877ea0_default;
  }
  cocos2d::Value::~Value(aVStack_68);
switchD_00877ea0_default:
  *(undefined4 *)(this + 0x80) = 0;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

