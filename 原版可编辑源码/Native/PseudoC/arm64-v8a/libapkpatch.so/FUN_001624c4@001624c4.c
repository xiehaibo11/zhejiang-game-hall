
undefined8
FUN_001624c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long alStack_8f8 [29];
  long local_810;
  long local_808;
  long local_800;
  long local_7f8;
  undefined8 local_7f0;
  undefined8 auStack_7e8 [32];
  uint local_6e8;
  int local_6e4;
  undefined8 local_6e0;
  int local_6d0 [2];
  long local_6c8 [191];
  undefined1 auStack_d0 [48];
  undefined1 local_a0;
  byte local_9e;
  undefined1 auStack_98 [56];
  
  lVar2 = FUN_001619b4(param_1,param_3,auStack_98,auStack_d0);
  if (lVar2 != 0) {
    return 0xffffe66e;
  }
  memset(&local_6e8,0,0x618);
  uVar3 = FUN_00162944(param_1,auStack_98,auStack_d0,param_2,4,&local_6e8);
  if ((uVar3 & 1) == 0) {
    return 0xffffe66e;
  }
  switch(local_6e8) {
  case 0:
    lVar2 = FUN_00163b28(local_6e0,param_1,param_4,0);
    goto LAB_00162608;
  default:
    if (0x1c < local_6e8) {
      fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
      fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar7 = (long *)((long)param_4 + (ulong)local_6e8 * 8);
    break;
  case 0x1d:
    plVar7 = (long *)((long)param_4 + 0xe8);
    break;
  case 0x1e:
    plVar7 = (long *)((long)param_4 + 0xf0);
    break;
  case 0x22:
    plVar7 = (long *)((long)param_4 + 0x108);
    break;
  case 0xfffffffe:
  case 0x1f:
    plVar7 = (long *)((long)param_4 + 0xf8);
    break;
  case 0xffffffff:
  case 0x20:
    plVar7 = (long *)((long)param_4 + 0x100);
  }
  lVar2 = *plVar7 + (long)local_6e4;
LAB_00162608:
  memcpy(alStack_8f8,param_4,0x210);
  uVar3 = 0;
  lVar9 = 0;
  piVar10 = local_6d0;
  plVar7 = alStack_8f8;
  local_800 = lVar2;
  do {
    iVar1 = *piVar10;
    if (iVar1 == 0) {
      if (uVar3 != local_9e) goto LAB_00162650;
      uVar6 = (uint)local_9e;
      if (uVar6 - 0x1d < 6) {
        plVar8 = (long *)((long)param_4 + 0x100);
        switch(uVar6) {
        case 0x1d:
          plVar8 = (long *)((long)param_4 + 0xe8);
          break;
        case 0x1e:
          plVar8 = (long *)((long)param_4 + 0xf0);
          break;
        case 0x1f:
          plVar8 = (long *)((long)param_4 + 0xf8);
          break;
        case 0x21:
          goto code_r0x001627b0;
        case 0x22:
          plVar8 = (long *)((long)param_4 + 0x108);
        }
      }
      else {
code_r0x001627b0:
        if (0x1c < uVar6) {
          fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister","unsupported arm64 register"
                 );
          fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar8 = (long *)((long)param_4 + (ulong)local_9e * 8);
      }
      lVar9 = *plVar8;
    }
    else {
      uVar6 = (uint)uVar3;
      if ((uVar6 & 0x7fffffe0) == 0x40) {
        if (iVar1 == 5) {
          puVar4 = (undefined8 *)FUN_00163b28(*(undefined8 *)(piVar10 + 2),param_1,param_4,lVar2);
        }
        else {
          if (iVar1 != 2) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSavedFloatRegister",
                    "unsupported restore location for float register");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar4 = (undefined8 *)(*(long *)(piVar10 + 2) + lVar2);
        }
        auStack_7e8[uVar6 - 0x40] = *puVar4;
      }
      else if (uVar3 == local_9e) {
        lVar9 = FUN_00163444(param_1,param_4,lVar2,piVar10);
      }
      else if (uVar3 == 0x22) {
        local_7f0 = FUN_00163444(param_1,param_4,lVar2,piVar10);
      }
      else {
        if (uVar6 - 0x21 < 0x1f) {
          return 0xffffe672;
        }
        lVar5 = FUN_00163444(param_1,param_4,lVar2,piVar10);
        if (5 < uVar6 - 0x1d) {
          plVar8 = plVar7;
          if (0x1c < uVar3) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","setRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto code_r0x001627fc;
        }
        plVar8 = &local_800;
        switch(uVar6) {
        case 0x1d:
          local_810 = lVar5;
          break;
        case 0x1e:
          local_808 = lVar5;
          break;
        case 0x20:
          plVar8 = &local_7f8;
        case 0x1f:
code_r0x001627fc:
          *plVar8 = lVar5;
        }
      }
    }
LAB_00162650:
    uVar3 = uVar3 + 1;
    piVar10 = piVar10 + 4;
    plVar7 = plVar7 + 1;
    if (uVar3 == 0x60) {
      *param_5 = local_a0;
      local_7f8 = lVar9;
      memcpy(param_4,alStack_8f8,0x210);
      return 1;
    }
  } while( true );
}

