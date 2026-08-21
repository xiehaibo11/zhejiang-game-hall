
/* v8::internal::FindStringIndicesDispatch(v8::internal::Isolate*, v8::internal::String,
   v8::internal::String, std::__ndk1::vector<int, std::__ndk1::allocator<int> >*, unsigned int) */

void v8::internal::FindStringIndicesDispatch
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,
               vector<int,std::__ndk1::allocator<int>> *param_4,int param_5)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  int local_84;
  undefined8 local_80;
  ushort *puStack_78;
  long local_70;
  code *local_68;
  int local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_98 = param_3;
  uStack_90 = param_2;
  auVar12 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&uStack_90);
  puVar3 = auVar12._0_8_;
  auVar13 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_98);
  puVar4 = auVar13._0_8_;
  lVar11 = (long)auVar12._8_4_;
  uVar9 = auVar13._8_8_ & 0xffffffff00000000;
  iVar6 = auVar13._8_4_;
  lVar7 = (long)iVar6;
  if (auVar12._8_8_ >> 0x20 == 1) {
    if (uVar9 == 0x100000000) {
      if (iVar6 == 1) {
        if (param_5 != 0) {
          uVar2 = *puVar4;
          puVar4 = puVar3;
          do {
            pvVar5 = memchr(puVar4,(uint)(byte)uVar2,(long)puVar3 + (lVar11 - (long)puVar4));
            if (pvVar5 == (void *)0x0) break;
            iVar6 = (int)pvVar5 - auVar12._0_4_;
            local_80 = CONCAT44(local_80._4_4_,iVar6);
            if (*(int **)(param_4 + 8) < *(int **)(param_4 + 0x10)) {
              **(int **)(param_4 + 8) = iVar6;
              *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
            }
            else {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                        (param_4,(int *)&local_80);
            }
            param_5 = param_5 + -1;
            puVar4 = (ushort *)((long)pvVar5 + 1);
          } while (param_5 != 0);
        }
      }
      else {
        local_84 = 0;
        local_60 = iVar6;
        if (iVar6 < 0xfb) {
          local_60 = 0xfa;
        }
        local_60 = local_60 + -0xfa;
        local_70 = lVar7;
        local_68 = StringSearch<unsigned_char,unsigned_char>::LinearSearch;
        puStack_78 = puVar4;
        local_80 = param_1;
        if (6 < iVar6) {
          local_68 = StringSearch<unsigned_char,unsigned_char>::InitialSearch;
        }
        while ((param_5 != 0 &&
               (local_84 = (*local_68)(&local_80,puVar3,lVar11,local_84), -1 < local_84))) {
          if (*(int **)(param_4 + 8) == *(int **)(param_4 + 0x10)) {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                      (param_4,&local_84);
          }
          else {
            **(int **)(param_4 + 8) = local_84;
            *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
          }
          param_5 = param_5 + -1;
          local_84 = local_84 + iVar6;
        }
      }
    }
    else {
      FindStringIndices<unsigned_char,unsigned_short>
                (param_1,puVar3,lVar11,puVar4,lVar7,param_4,param_5);
    }
  }
  else {
    lVar10 = auVar12._8_8_ << 0x20;
    if (uVar9 == 0x100000000) {
      if (iVar6 == 1) {
        if ((param_5 != 0) && (0 < lVar10)) {
          uVar2 = *puVar4;
          puVar4 = puVar3;
          do {
            if (*puVar4 == (ushort)(byte)uVar2) {
              uVar8 = (undefined4)((ulong)((long)puVar4 - (long)puVar3) >> 1);
              local_80 = CONCAT44(local_80._4_4_,uVar8);
              if (*(undefined4 **)(param_4 + 8) < *(undefined4 **)(param_4 + 0x10)) {
                **(undefined4 **)(param_4 + 8) = uVar8;
                *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
              }
              else {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                          (param_4,(int *)&local_80);
              }
              param_5 = param_5 + -1;
            }
            puVar4 = puVar4 + 1;
          } while ((puVar4 < puVar3 + lVar11) && (param_5 != 0));
        }
      }
      else {
        local_84 = 0;
        local_60 = iVar6;
        if (iVar6 < 0xfb) {
          local_60 = 0xfa;
        }
        local_60 = local_60 + -0xfa;
        local_70 = lVar7;
        local_68 = StringSearch<unsigned_char,unsigned_short>::LinearSearch;
        puStack_78 = puVar4;
        local_80 = param_1;
        if (6 < iVar6) {
          local_68 = StringSearch<unsigned_char,unsigned_short>::InitialSearch;
        }
        while ((param_5 != 0 &&
               (local_84 = (*local_68)(&local_80,puVar3,lVar11,local_84), -1 < local_84))) {
          if (*(int **)(param_4 + 8) == *(int **)(param_4 + 0x10)) {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                      (param_4,&local_84);
          }
          else {
            **(int **)(param_4 + 8) = local_84;
            *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
          }
          param_5 = param_5 + -1;
          local_84 = local_84 + iVar6;
        }
      }
    }
    else if (iVar6 == 1) {
      if ((param_5 != 0) && (0 < lVar10)) {
        uVar2 = *puVar4;
        puVar4 = puVar3;
        do {
          if (*puVar4 == uVar2) {
            uVar8 = (undefined4)((ulong)((long)puVar4 - (long)puVar3) >> 1);
            local_80 = CONCAT44(local_80._4_4_,uVar8);
            if (*(undefined4 **)(param_4 + 8) < *(undefined4 **)(param_4 + 0x10)) {
              **(undefined4 **)(param_4 + 8) = uVar8;
              *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
            }
            else {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                        (param_4,(int *)&local_80);
            }
            param_5 = param_5 + -1;
          }
          puVar4 = puVar4 + 1;
        } while ((puVar4 < puVar3 + lVar11) && (param_5 != 0));
      }
    }
    else {
      local_84 = 0;
      local_60 = iVar6;
      if (iVar6 < 0xfb) {
        local_60 = 0xfa;
      }
      local_60 = local_60 + -0xfa;
      local_70 = lVar7;
      local_68 = StringSearch<unsigned_short,unsigned_short>::LinearSearch;
      puStack_78 = puVar4;
      local_80 = param_1;
      if (6 < iVar6) {
        local_68 = StringSearch<unsigned_short,unsigned_short>::InitialSearch;
      }
      while ((param_5 != 0 &&
             (local_84 = (*local_68)(&local_80,puVar3,lVar11,local_84), -1 < local_84))) {
        if (*(int **)(param_4 + 8) == *(int **)(param_4 + 0x10)) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                    (param_4,&local_84);
        }
        else {
          **(int **)(param_4 + 8) = local_84;
          *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 4;
        }
        param_5 = param_5 + -1;
        local_84 = local_84 + iVar6;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

