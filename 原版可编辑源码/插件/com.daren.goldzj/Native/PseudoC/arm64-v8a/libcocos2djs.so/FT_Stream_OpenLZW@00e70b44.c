
uint FT_Stream_OpenLZW(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_38;
  char local_34;
  char local_33;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    uVar1 = 0x28;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = FUN_00e1bb5c(param_2,0);
    if ((uVar1 == 0) && (uVar1 = FUN_00e1bbd0(param_2,&local_34,2), uVar1 == 0)) {
      if ((local_34 == '\x1f') && (local_33 == -99)) {
        local_38 = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[7] = uVar5;
        plVar3 = (long *)FUN_00e1388c(uVar5,0x1108,&local_38);
        uVar1 = local_38;
        if (local_38 == 0) {
          *plVar3 = param_2;
          plVar3[1] = (long)param_1;
          lVar4 = param_1[7];
          plVar3[0x220] = (long)(plVar3 + 0x21e);
          plVar3[0x21f] = (long)(plVar3 + 0x21e);
          plVar3[2] = lVar4;
          plVar3[0x21e] = 0;
          uVar2 = FUN_00e1bb5c(param_2,0);
          if ((((uVar2 != 0) || (uVar2 = FUN_00e1bbd0(param_2,&local_34,2), uVar2 != 0)) ||
              (uVar2 = 3, local_34 != '\x1f')) || (local_33 != -99)) {
            local_38 = uVar2;
            FUN_00e139fc(uVar5,plVar3);
            return local_38;
          }
          plVar3[0x19] = 0;
          plVar3[0x18] = 0;
          plVar3[0x1b] = 0;
          plVar3[0x1a] = 0;
          plVar3[0x17] = 0;
          plVar3[0x16] = 0;
          plVar3[0x11] = 0;
          plVar3[0x10] = 0;
          plVar3[0x13] = 0;
          plVar3[0x12] = 0;
          plVar3[0xd] = 0;
          plVar3[0xc] = 0;
          plVar3[0xf] = 0;
          plVar3[0xe] = 0;
          plVar3[9] = 0;
          plVar3[8] = 0;
          plVar3[0xb] = 0;
          plVar3[10] = 0;
          plVar3[5] = 0;
          plVar3[4] = 0;
          plVar3[7] = 0;
          plVar3[6] = 0;
          plVar3[0x15] = 0;
          plVar3[0x14] = 0;
          plVar3[0x1c] = param_2;
          lVar4 = *(long *)(param_2 + 0x38);
          plVar3[0x11] = (long)(plVar3 + 0x14);
          plVar3[0x13] = 0x40;
          *(undefined4 *)(plVar3 + 0x10) = 0;
          plVar3[0xe] = 0;
          plVar3[0xf] = 0;
          plVar3[8] = 0;
          *(undefined4 *)(plVar3 + 0x12) = 0;
          *(undefined1 *)(plVar3 + 7) = 0;
          plVar3[6] = 0;
          *(undefined4 *)((long)plVar3 + 0x54) = 9;
          plVar3[3] = 0;
          plVar3[0x1d] = lVar4;
          param_1[3] = plVar3;
        }
        *param_1 = 0;
        param_1[2] = 0;
        param_1[1] = 0x7fffffff;
        param_1[5] = FUN_00e70d18;
        param_1[6] = FUN_00e70ee0;
      }
      else {
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}

