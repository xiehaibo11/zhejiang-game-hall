
uint FT_Stream_OpenLZW(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_38;
  char local_34;
  char local_33;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    local_38 = 0x28;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    local_38 = FT_Stream_Seek(param_2,0);
    if ((local_38 == 0) && (local_38 = FT_Stream_Read(param_2,&local_34,2), local_38 == 0)) {
      if ((local_34 == '\x1f') && (local_33 == -99)) {
        local_38 = 0;
        memset(param_1,0,0x50);
        param_1[7] = uVar4;
        plVar2 = (long *)ft_mem_alloc(uVar4,0x1108,&local_38);
        if (local_38 == 0) {
          *plVar2 = param_2;
          plVar2[1] = (long)param_1;
          lVar3 = param_1[7];
          plVar2[0x220] = (long)(plVar2 + 0x21e);
          plVar2[0x21f] = (long)(plVar2 + 0x21e);
          plVar2[2] = lVar3;
          plVar2[0x21e] = 0;
          uVar1 = FT_Stream_Seek(param_2,0);
          if ((((uVar1 != 0) || (uVar1 = FT_Stream_Read(param_2,&local_34,2), uVar1 != 0)) ||
              (uVar1 = 3, local_34 != '\x1f')) || (local_33 != -99)) {
            local_38 = uVar1;
            ft_mem_free(uVar4,plVar2);
            return local_38;
          }
          memset(plVar2 + 4,0,0xc0);
          plVar2[0x1c] = param_2;
          lVar3 = *(long *)(param_2 + 0x38);
          plVar2[0x11] = (long)(plVar2 + 0x14);
          local_38 = 0;
          plVar2[0x13] = 0x40;
          *(undefined4 *)((long)plVar2 + 0x54) = 9;
          plVar2[0x1d] = lVar3;
          *(undefined4 *)(plVar2 + 0x10) = 0;
          plVar2[0xe] = 0;
          plVar2[0xf] = 0;
          plVar2[3] = 0;
          plVar2[8] = 0;
          *(undefined4 *)(plVar2 + 0x12) = 0;
          *(undefined1 *)(plVar2 + 7) = 0;
          plVar2[6] = 0;
          param_1[3] = plVar2;
        }
        *param_1 = 0;
        param_1[2] = 0;
        param_1[1] = 0x7fffffff;
        param_1[5] = FUN_010b2518;
        param_1[6] = FUN_010b26dc;
      }
      else {
        local_38 = 3;
      }
    }
  }
  return local_38;
}

