
/* v8::internal::AsmJsScanner::ConsumeIdentifier(int) */

void __thiscall v8::internal::AsmJsScanner::ConsumeIdentifier(AsmJsScanner *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  AsmJsScanner *pAVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  ushort *puVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  int iVar8;
  long *plVar9;
  tuple atStack_48 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_28;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38);
  if (((byte)*this_00 & 1) == 0) {
    *(undefined2 *)this_00 = 0;
    if (param_1 == 0x5f) goto LAB_0148efe0;
LAB_0148efa4:
    if (((param_1 == 0x24) || (param_1 - 0x30U < 10)) || ((param_1 | 0x20U) - 0x61 < 0x1a))
    goto LAB_0148efe0;
  }
  else {
    **(undefined1 **)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    if (param_1 != 0x5f) goto LAB_0148efa4;
LAB_0148efe0:
    do {
      do {
        bVar6 = *this_00;
        if (((byte)bVar6 & 1) == 0) {
          uVar2 = (ulong)((byte)bVar6 >> 1);
          uVar5 = 0x16;
          if (uVar2 == 0x16) goto LAB_0148f014;
        }
        else {
          uVar2 = *(ulong *)(this + 0x40);
          uVar5 = (*(ulong *)(this + 0x38) & 0xfffffffffffffffe) - 1;
          if (uVar2 == uVar5) {
LAB_0148f014:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __grow_by(this_00,uVar5,1,uVar5,uVar5,0,0);
            bVar6 = *this_00;
          }
        }
        if (((byte)bVar6 & 1) == 0) {
          *this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )((char)uVar2 * '\x02' + '\x02');
          pAVar4 = this + 0x39;
        }
        else {
          *(ulong *)(this + 0x40) = uVar2 + 1;
          pAVar4 = *(AsmJsScanner **)(this + 0x48);
        }
        pAVar4[uVar2] = SUB41(param_1,0);
        (pAVar4 + uVar2)[1] = (AsmJsScanner)0x0;
        plVar9 = *(long **)this;
        puVar7 = (ushort *)plVar9[2];
        if (puVar7 < (ushort *)plVar9[3]) {
LAB_0148f074:
          param_1 = (int)*puVar7;
        }
        else {
          if ((char)plVar9[6] == '\0') {
            uVar2 = (**(code **)(*plVar9 + 0x28))(plVar9);
            puVar7 = (ushort *)plVar9[2];
            if ((uVar2 & 1) != 0) goto LAB_0148f074;
          }
          param_1 = 0xffffffff;
        }
        plVar9[2] = (long)(puVar7 + 1);
      } while (param_1 == 0x5f);
    } while (((param_1 == 0x24) || (param_1 - 0x30U < 10)) || ((param_1 | 0x20U) - 0x61 < 0x1a));
  }
  plVar9 = *(long **)this;
  uVar2 = plVar9[1];
  uVar5 = plVar9[2];
  if (uVar5 < uVar2 || uVar5 - uVar2 == 0) {
    plVar9[2] = uVar2;
    plVar9[4] = plVar9[4] + ((long)(uVar5 - uVar2) >> 1) + -1;
    if ((char)plVar9[6] == '\0') {
      (**(code **)(*plVar9 + 0x28))();
    }
  }
  else {
    plVar9[2] = uVar5 - 2;
  }
  if (*(int *)(this + 0xc) == 0x2e) {
    pAVar4 = this + 0xa8;
LAB_0148f100:
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                        *)pAVar4,(basic_string *)this_00);
    if (lVar3 != 0) {
LAB_0148f120:
      *(undefined4 *)(this + 8) = *(undefined4 *)(lVar3 + 0x28);
      return;
    }
  }
  else {
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                        *)(this + 0x58),(basic_string *)this_00);
    if (lVar3 != 0) goto LAB_0148f120;
    if (this[0x50] == (AsmJsScanner)0x0) {
      pAVar4 = this + 0x80;
      goto LAB_0148f100;
    }
  }
  if (*(int *)(this + 0xc) == 0x2e) {
    iVar1 = *(int *)(this + 0xd0);
    if (0xeffffff < iVar1) {
LAB_0148f218:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","global_count_ < kMaxIdentifierCount");
    }
    pAVar4 = this + 0xa8;
  }
  else {
    if (this[0x50] != (AsmJsScanner)0x0) {
      if (0xe < *(ulong *)(this + 0x70) >> 0x18) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_names_.size() < kMaxIdentifierCount");
      }
      pAVar4 = this + 0x58;
      iVar8 = -10000 - (int)*(ulong *)(this + 0x70);
      goto LAB_0148f1b0;
    }
    iVar1 = *(int *)(this + 0xd0);
    if (0xeffffff < iVar1) goto LAB_0148f218;
    pAVar4 = this + 0x80;
  }
  iVar8 = iVar1 + 0x100;
  *(int *)(this + 0xd0) = iVar1 + 1;
LAB_0148f1b0:
  *(int *)(this + 8) = iVar8;
  local_28 = this_00;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                      *)pAVar4,(basic_string *)this_00,(piecewise_construct_t *)&DAT_01a3eef4,
                     (tuple *)&local_28,atStack_48);
  *(int *)(lVar3 + 0x28) = iVar8;
  return;
}

