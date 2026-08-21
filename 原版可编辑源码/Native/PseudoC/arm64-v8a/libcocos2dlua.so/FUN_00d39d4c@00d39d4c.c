
int FUN_00d39d4c(vertex_index *param_1,vector<float,std::__ndk1::allocator<float>> *param_2,
                vector<float,std::__ndk1::allocator<float>> *param_3,
                vector<float,std::__ndk1::allocator<float>> *param_4,long *param_5,long *param_6,
                long *param_7,piecewise_construct_t *param_8)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  vertex_index *pvVar11;
  long lVar12;
  float *pfVar13;
  vertex_index *pvVar14;
  vertex_index *pvVar15;
  piecewise_construct_t *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pvVar14 = param_1 + 8;
  pvVar15 = *(vertex_index **)pvVar14;
  iVar8 = *(int *)param_8;
  if (pvVar15 != (vertex_index *)0x0) {
    iVar2 = *(int *)(param_8 + 4);
    iVar3 = *(int *)(param_8 + 8);
    pvVar11 = pvVar14;
    do {
      iVar4 = *(int *)(pvVar15 + 0x1c);
      bVar6 = SBORROW4(iVar4,iVar8);
      bVar7 = iVar4 - iVar8 < 0;
      if (iVar4 == iVar8) {
        iVar4 = *(int *)(pvVar15 + 0x24);
        bVar6 = SBORROW4(iVar4,iVar3);
        bVar7 = iVar4 - iVar3 < 0;
        if (iVar4 == iVar3) {
          bVar6 = SBORROW4(*(int *)(pvVar15 + 0x20),iVar2);
          bVar7 = *(int *)(pvVar15 + 0x20) - iVar2 < 0;
        }
      }
      lVar12 = 8;
      if (bVar7 == bVar6) {
        lVar12 = 0;
        pvVar11 = pvVar15;
      }
      pvVar15 = *(vertex_index **)(pvVar15 + lVar12);
    } while (pvVar15 != (vertex_index *)0x0);
    if (pvVar11 != pvVar14) {
      iVar4 = *(int *)(pvVar11 + 0x1c);
      bVar6 = SBORROW4(iVar8,iVar4);
      bVar7 = iVar8 - iVar4 < 0;
      if (iVar8 == iVar4) {
        iVar4 = *(int *)(pvVar11 + 0x24);
        bVar6 = SBORROW4(iVar3,iVar4);
        bVar7 = iVar3 - iVar4 < 0;
        if (iVar3 == iVar4) {
          bVar6 = SBORROW4(iVar2,*(int *)(pvVar11 + 0x20));
          bVar7 = iVar2 - *(int *)(pvVar11 + 0x20) < 0;
        }
      }
      if (bVar7 == bVar6) {
        iVar8 = *(int *)(pvVar11 + 0x28);
        goto LAB_00d3a034;
      }
    }
  }
  pfVar9 = *(float **)(param_2 + 8);
  pfVar13 = *(float **)(param_2 + 0x10);
  lVar12 = *param_5;
  iVar8 = iVar8 * 3;
  pfVar1 = (float *)(lVar12 + (long)iVar8 * 4);
  if (pfVar9 == pfVar13) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
              (param_2,pfVar1);
    lVar12 = *param_5;
    pfVar10 = *(float **)(param_2 + 8);
    pfVar13 = *(float **)(param_2 + 0x10);
    iVar8 = *(int *)param_8 * 3;
  }
  else {
    pfVar10 = pfVar9 + 1;
    *pfVar9 = *pfVar1;
    *(float **)(param_2 + 8) = pfVar10;
  }
  pfVar1 = (float *)(lVar12 + (long)(iVar8 + 1) * 4);
  if (pfVar10 == pfVar13) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
              (param_2,pfVar1);
    lVar12 = *param_5;
    pfVar9 = *(float **)(param_2 + 8);
    pfVar13 = *(float **)(param_2 + 0x10);
    iVar8 = *(int *)param_8 * 3;
  }
  else {
    pfVar9 = pfVar10 + 1;
    *pfVar10 = *pfVar1;
    *(float **)(param_2 + 8) = pfVar9;
  }
  pfVar1 = (float *)(lVar12 + (long)(iVar8 + 2) * 4);
  if (pfVar9 == pfVar13) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
              (param_2,pfVar1);
    iVar8 = *(int *)(param_8 + 8);
    if (-1 < iVar8) goto LAB_00d39ed0;
LAB_00d39f6c:
    iVar8 = *(int *)(param_8 + 4);
  }
  else {
    *pfVar9 = *pfVar1;
    *(float **)(param_2 + 8) = pfVar9 + 1;
    iVar8 = *(int *)(param_8 + 8);
    if (iVar8 < 0) goto LAB_00d39f6c;
LAB_00d39ed0:
    pfVar9 = *(float **)(param_3 + 8);
    pfVar13 = *(float **)(param_3 + 0x10);
    lVar12 = *param_6;
    iVar8 = iVar8 * 3;
    pfVar1 = (float *)(lVar12 + (long)iVar8 * 4);
    if (pfVar9 == pfVar13) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                (param_3,pfVar1);
      lVar12 = *param_6;
      pfVar10 = *(float **)(param_3 + 8);
      pfVar13 = *(float **)(param_3 + 0x10);
      iVar8 = *(int *)(param_8 + 8) * 3;
    }
    else {
      pfVar10 = pfVar9 + 1;
      *pfVar9 = *pfVar1;
      *(float **)(param_3 + 8) = pfVar10;
    }
    pfVar1 = (float *)(lVar12 + (long)(iVar8 + 1) * 4);
    if (pfVar10 == pfVar13) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                (param_3,pfVar1);
      lVar12 = *param_6;
      pfVar9 = *(float **)(param_3 + 8);
      pfVar13 = *(float **)(param_3 + 0x10);
      iVar8 = *(int *)(param_8 + 8) * 3;
    }
    else {
      pfVar9 = pfVar10 + 1;
      *pfVar10 = *pfVar1;
      *(float **)(param_3 + 8) = pfVar9;
    }
    pfVar1 = (float *)(lVar12 + (long)(iVar8 + 2) * 4);
    if (pfVar9 != pfVar13) {
      *pfVar9 = *pfVar1;
      *(float **)(param_3 + 8) = pfVar9 + 1;
      goto LAB_00d39f6c;
    }
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
              (param_3,pfVar1);
    iVar8 = *(int *)(param_8 + 4);
  }
  if (-1 < iVar8) {
    pfVar9 = *(float **)(param_4 + 8);
    pfVar13 = *(float **)(param_4 + 0x10);
    lVar12 = *param_7;
    pfVar1 = (float *)(lVar12 + (long)iVar8 * 8);
    if (pfVar9 == pfVar13) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                (param_4,pfVar1);
      iVar8 = *(int *)(param_8 + 4);
      lVar12 = *param_7;
      pfVar10 = *(float **)(param_4 + 8);
      pfVar13 = *(float **)(param_4 + 0x10);
    }
    else {
      pfVar10 = pfVar9 + 1;
      *pfVar9 = *pfVar1;
      *(float **)(param_4 + 8) = pfVar10;
    }
    pfVar1 = (float *)(lVar12 + (long)(int)(iVar8 << 1 | 1) * 4);
    if (pfVar10 == pfVar13) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a110 with catch @ 00d39fec
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3a20c with catch @ 00d39fec
                        */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
                (param_4,pfVar1);
    }
    else {
      *pfVar10 = *pfVar1;
      *(float **)(param_4 + 8) = pfVar10 + 1;
    }
  }
  iVar8 = (int)((ulong)(*(long *)(param_2 + 8) - *(long *)param_2 >> 2) / 3) + -1;
  local_70 = param_8;
  lVar12 = std::__ndk1::
           __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
           ::
           __emplace_unique_key_args<tinyobj::vertex_index,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<tinyobj::vertex_index_const&>,std::__ndk1::tuple<>>
                     (param_1,param_8,(tuple *)&DAT_01419523,(tuple *)&local_70);
  *(int *)(lVar12 + 0x28) = iVar8;
LAB_00d3a034:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

