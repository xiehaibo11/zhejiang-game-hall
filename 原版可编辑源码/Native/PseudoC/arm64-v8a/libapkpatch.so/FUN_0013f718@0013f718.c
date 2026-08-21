
long FUN_0013f718(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *__ptr;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  int local_74;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  local_74 = 0;
  __ptr = malloc(0x10088);
  if (__ptr == (void *)0x0) {
    lVar4 = 0;
    local_70 = 0;
    pcVar6 = "memory alloc";
  }
  else {
    lVar4 = FUN_0013e0b4(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                         param_2,__ptr,0x8088);
    if (lVar4 == 0) {
      local_70 = 0;
      pcVar6 = "deflateInit2()";
    }
    else {
      if (*(int *)(param_1 + 0x2c) != 0) {
        iVar3 = (**(code **)(param_2 + 0x18))(param_2,0,param_1 + 0x28,param_1 + 0x29);
        if (iVar3 == 0) {
          local_70 = 0;
          pcVar6 = "out_code->write()";
          goto LAB_0013f88c;
        }
        local_70 = 1;
      }
      uVar5 = *(ulong *)(param_3 + 8);
      uVar8 = 0;
      lVar1 = (long)__ptr + 0x8088;
      pcVar6 = "";
      do {
        uVar5 = uVar5 - uVar8;
        if (0x7fff < uVar5) {
          uVar5 = 0x8000;
        }
        iVar3 = (**(code **)(param_3 + 0x10))(param_3,uVar8,lVar1,lVar1 + uVar5);
        if (iVar3 == 0) {
          local_70 = 0;
          pcVar6 = "in_data->read()";
          break;
        }
        uVar8 = uVar5 + uVar8;
        iVar3 = FUN_0013e158(lVar4,lVar1,lVar1 + uVar5,uVar8 == *(ulong *)(param_3 + 8),&local_70,
                             &local_74);
        if (iVar3 == 0) {
          local_70 = 0;
          pcVar6 = "_zlib_compress_part()";
          break;
        }
        uVar5 = *(ulong *)(param_3 + 8);
      } while (uVar8 < uVar5);
    }
  }
LAB_0013f88c:
  iVar3 = FUN_0013dbb0(lVar4);
  if (iVar3 == 0) {
    pcVar7 = "deflateEnd()";
    if (*pcVar6 != '\0') {
      pcVar7 = pcVar6;
    }
  }
  else {
    pcVar7 = pcVar6;
    lVar4 = local_70;
    if (local_70 != 0) goto joined_r0x0013f920;
  }
  if (local_74 == 0) {
    printf("  (NOTICE: _zlib_compress() is canceled, %s ERROR!)\n",pcVar7);
  }
  else {
    puts("  (NOTICE: _zlib_compress() is canceled, warning.)");
  }
  lVar4 = 0;
joined_r0x0013f920:
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}

