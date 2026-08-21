
int FT_Stream_OpenGzip(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int local_48;
  int local_44;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0x28;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  local_48 = FUN_010b1cd0(param_2);
  if (local_48 != 0) {
    return local_48;
  }
  memset(param_1,0,0x50);
  param_1[7] = uVar6;
  plVar2 = (long *)ft_mem_qalloc(uVar6,0x20a8,&local_48);
  if (local_48 == 0) {
    *plVar2 = param_2;
    plVar2[1] = (long)param_1;
    lVar5 = param_1[7];
    plVar2[0x414] = (long)(plVar2 + 0x412);
    plVar2[0x413] = (long)(plVar2 + 0x412);
    plVar2[2] = lVar5;
    plVar2[0x412] = 0;
    iVar1 = FUN_010b1cd0(param_2);
    if (iVar1 == 0) {
      lVar5 = FT_Stream_Pos(param_2);
      plVar2[0x11] = lVar5;
      plVar2[0xb] = (long)FUN_010b2328;
      plVar2[0xc] = (long)ft_mem_free;
      lVar5 = *(long *)(param_2 + 0x38);
      *(undefined4 *)(plVar2 + 4) = 0;
      plVar2[0xd] = lVar5;
      plVar2[3] = (long)(plVar2 + 0x212);
      iVar1 = inflateInit2_(plVar2 + 3,0xfffffff1,"1.2.8",0x70);
      if ((iVar1 == 0) && (plVar2[3] != 0)) {
        local_48 = 0;
        param_1[3] = plVar2;
        goto LAB_010b1ae8;
      }
      iVar1 = 3;
    }
    local_48 = iVar1;
    ft_mem_free(uVar6,plVar2);
  }
  else {
LAB_010b1ae8:
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    iVar1 = FT_Stream_Seek(param_2,*(long *)(param_2 + 8) + -4);
    if (iVar1 == 0) {
      lVar3 = FT_Stream_ReadULong(param_2,&local_44);
      lVar5 = 0;
      if (local_44 == 0) {
        lVar5 = lVar3;
      }
      FT_Stream_Seek(param_2,uVar4);
      if (lVar5 - 1U < 0x9fff) {
        uVar4 = ft_mem_alloc(uVar6,lVar5,&local_48);
        if (local_48 == 0) {
          lVar3 = FUN_010b1e48(plVar2,0,uVar4,lVar5);
          if (lVar3 == lVar5) {
            inflateEnd(plVar2 + 3);
            plVar2[6] = 0;
            *(undefined4 *)(plVar2 + 7) = 0;
            *(undefined4 *)(plVar2 + 4) = 0;
            plVar2[2] = 0;
            plVar2[3] = 0;
            *plVar2 = 0;
            plVar2[1] = 0;
            plVar2[0xc] = 0;
            plVar2[0xd] = 0;
            plVar2[0xb] = 0;
            ft_mem_free(uVar6,plVar2);
            *param_1 = uVar4;
            param_1[1] = lVar5;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[5] = 0;
            param_1[6] = FUN_010b21d4;
            return local_48;
          }
          FUN_010b1e48(plVar2,0,0,0);
          ft_mem_free(uVar6,uVar4);
        }
        local_48 = 0;
      }
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0x7fffffff;
    param_1[5] = FUN_010b2238;
    param_1[6] = FUN_010b21d4;
  }
                    /* try { // try from 010b1bbc to 011b1d17 has its CatchHandler @ 010b1bbc
                       catch() { ... } // from try @ 010b1bbc with catch @ 010b1bbc
                       catch() { ... } // from try @ 010b1d34 with catch @ 010b1bbc
                       catch() { ... } // from try @ 010b1e34 with catch @ 010b1bbc */
  return local_48;
}

