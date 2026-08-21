
/* v8::internal::V8NameConverter::RootRelativeName(int) const */

undefined8 __thiscall
v8::internal::V8NameConverter::RootRelativeName(V8NameConverter *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined2 uVar15;
  int local_60 [2];
  undefined *local_58;
  
  lVar13 = *(long *)(this + 0x98);
  if (lVar13 == 0) {
    return 0;
  }
  uVar5 = param_1 - 0x80;
  if (uVar5 < 0xf90) {
    if ((uVar5 & 7) != 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(this + 0xb0);
    uVar3 = *(undefined8 *)(this + 0xb8);
    ppuVar7 = &RootsTable::root_names_;
    pcVar4 = "root (%s)";
  }
  else {
    uVar5 = param_1 - 0x1010;
    if (0x374 < uVar5 >> 3) {
      if (0x16e < param_1 - 0x5a58U >> 5) {
        if ((*(long *)(this + 0x158) == 0) && (*(int *)(lVar13 + 0x2bb0) != 0)) {
          lVar14 = 0;
          do {
            uVar6 = *(long *)(lVar13 + 0x1010 + lVar14 * 8) - lVar13;
            if (uVar6 < 0x8848) {
              local_58 = (&ExternalReferenceTable::ref_name_)[lVar14];
              local_60[0] = (int)uVar6;
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,char_const*>>>
              ::__emplace_unique_key_args<int,std::__ndk1::pair<int_const,char_const*>>
                        ((__hash_table<std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,char_const*>>>
                          *)(this + 0x140),local_60,(pair *)local_60);
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x374);
        }
        uVar6 = *(ulong *)(this + 0x148);
        if (uVar6 == 0) {
          return 0;
        }
        uVar2 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar6
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar6
                                                                                        ))))))));
        uVar15 = NEON_uaddlv(uVar2,1);
        uVar8 = CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar15) & 0xffffffff;
        uVar9 = (ulong)param_1;
        if (uVar8 < 2) {
          uVar10 = uVar6 - 1 & uVar9;
        }
        else {
          uVar10 = uVar9;
          if (uVar6 <= uVar9) {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar9 / uVar6;
            }
            uVar10 = uVar9 - uVar10 * uVar6;
          }
        }
        plVar11 = *(long **)(*(long *)(this + 0x140) + uVar10 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar9) {
            if ((int)plVar11[2] == param_1) {
              uVar2 = *(undefined8 *)(this + 0xb0);
              uVar3 = *(undefined8 *)(this + 0xb8);
              lVar13 = plVar11[3];
              pcVar4 = "external value (%s)";
              goto LAB_00f27588;
            }
          }
          else {
            if (uVar8 < 2) {
              uVar12 = uVar12 & uVar6 - 1;
            }
            else if (uVar6 <= uVar12) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar1 * uVar6;
            }
            if (uVar12 != uVar10) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      lVar13 = Builtins::name(param_1 - 0x5a58U >> 3);
      uVar2 = *(undefined8 *)(this + 0xb0);
      uVar3 = *(undefined8 *)(this + 0xb8);
      pcVar4 = "builtin (%s)";
      goto LAB_00f27588;
    }
    if ((uVar5 & 7) != 0) {
      return 0;
    }
    if (*(int *)(lVar13 + 0x2bb0) == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(this + 0xb0);
    uVar3 = *(undefined8 *)(this + 0xb8);
    ppuVar7 = &ExternalReferenceTable::ref_name_;
    pcVar4 = "external reference (%s)";
  }
  lVar13 = *(long *)((long)ppuVar7 + (ulong)(uVar5 & 0xfffffff8));
LAB_00f27588:
  SNPrintF(uVar2,uVar3,pcVar4,lVar13);
  return *(undefined8 *)(this + 0xb0);
}

