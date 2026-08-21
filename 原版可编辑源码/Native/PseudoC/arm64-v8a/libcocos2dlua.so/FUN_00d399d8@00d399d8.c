
void FUN_00d399d8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,
                 __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                 *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,long *param_6,
                 int param_7,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_8)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this;
  int *piVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  *p_Var18;
  long lVar19;
  ushort local_a4 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar19 = *param_6;
  local_74 = param_7;
  if (lVar19 == param_6[1]) {
    uVar10 = 0;
  }
  else {
    lVar5 = param_6[1] - lVar19;
    if (lVar5 != 0) {
      pbVar1 = param_1 + 0x18;
      pbVar2 = param_1 + 0x30;
      pbVar3 = param_1 + 0x48;
      this = (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(param_1 + 0x60);
      uVar15 = 0;
      while( true ) {
        plVar16 = (long *)(lVar19 + uVar15 * 0x18);
        local_78 = *(undefined4 *)((undefined8 *)*plVar16 + 1);
        local_80 = *(undefined8 *)*plVar16;
        local_90 = 0xffffffffffffffff;
        local_88 = 0xffffffff;
        local_98 = *(undefined4 *)(*plVar16 + 0x14);
        local_a0 = *(undefined8 *)(*plVar16 + 0xc);
        uVar11 = (plVar16[1] - *plVar16 >> 2) * -0x5555555555555555;
        if (2 < uVar11) {
          lVar17 = uVar11 - 2;
          lVar19 = 0x18;
          do {
            local_90 = local_a0;
            local_88 = local_98;
            local_98 = *(undefined4 *)((undefined8 *)(*plVar16 + lVar19) + 1);
            local_a0 = *(undefined8 *)(*plVar16 + lVar19);
            uVar7 = FUN_00d39d4c(param_2,pbVar1,pbVar2,pbVar3,param_3,param_4,param_5,&local_80);
            uVar8 = FUN_00d39d4c(param_2,pbVar1,pbVar2,pbVar3,param_3,param_4,param_5,&local_90);
            uVar9 = FUN_00d39d4c(param_2,pbVar1,pbVar2,pbVar3,param_3,param_4,param_5,&local_a0);
            puVar13 = *(ushort **)(param_1 + 0x68);
            puVar14 = *(ushort **)(param_1 + 0x70);
            if (puVar13 < puVar14) {
              puVar12 = puVar13 + 1;
              *puVar13 = uVar7;
              *(ushort **)(param_1 + 0x68) = puVar12;
            }
            else {
              local_a4[0] = uVar7;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>(this,local_a4);
              puVar12 = *(ushort **)(param_1 + 0x68);
              puVar14 = *(ushort **)(param_1 + 0x70);
            }
            if (puVar12 < puVar14) {
              puVar13 = puVar12 + 1;
              *puVar12 = uVar8;
              *(ushort **)(param_1 + 0x68) = puVar13;
            }
            else {
              local_a4[0] = uVar8;
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>(this,local_a4);
              puVar13 = *(ushort **)(param_1 + 0x68);
              puVar14 = *(ushort **)(param_1 + 0x70);
            }
            local_a4[0] = uVar9;
            if (puVar13 < puVar14) {
              *puVar13 = uVar9;
              *(ushort **)(param_1 + 0x68) = puVar13 + 1;
            }
            else {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
              __push_back_slow_path<unsigned_short>(this,local_a4);
            }
            piVar4 = *(int **)(param_1 + 0x80);
            if (piVar4 == *(int **)(param_1 + 0x88)) {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
              __push_back_slow_path<int_const&>
                        ((vector<int,std::__ndk1::allocator<int>> *)(param_1 + 0x78),&local_74);
            }
            else {
              *piVar4 = local_74;
              *(int **)(param_1 + 0x80) = piVar4 + 1;
            }
            lVar17 = lVar17 + -1;
            lVar19 = lVar19 + 0xc;
          } while (lVar17 != 0);
        }
        uVar15 = uVar15 + 1;
        if ((ulong)((lVar5 >> 3) * -0x5555555555555555) <= uVar15) break;
        lVar19 = *param_6;
      }
    }
    if (param_1 != param_8) {
      uVar15 = *(ulong *)(param_8 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_8 + 0x10);
      if (((byte)*param_8 & 1) == 0) {
        pbVar1 = param_8 + 1;
        uVar15 = (ulong)((byte)*param_8 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,(char *)pbVar1,uVar15);
    }
    p_Var18 = param_2 + 8;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
    ::destroy(param_2,*(__tree_node **)p_Var18);
    uVar10 = 1;
    *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
      **)param_2 = p_Var18;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)p_Var18 = 0;
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

