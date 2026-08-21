
undefined8 FUN_00c29fec(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  void *__ptr;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_c;
  ulong local_8;
  
  lVar9 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
  puVar3 = (ulong *)FUN_00c1bc28(*(undefined8 *)(param_1 + 0x48),
                                 *(ulong *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) &
                                            0x7fffffffffff) + 0x30) & 0x7fffffffffff);
  if ((puVar3 == (ulong *)0x0) || (*puVar3 == 0xffffffffffffffff)) {
    puVar3 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = *(ulong *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x30) &
              0x7fffffffffff | 0xfffd800000000000;
    lua_gettable(param_1,0xffffd8ee);
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x28) + -8);
    iVar1 = (int)(uVar5 >> 0x20);
  }
  else {
    puVar4 = *(ulong **)(param_1 + 0x28);
    uVar5 = *puVar3;
    *(ulong **)(param_1 + 0x28) = puVar4 + 1;
    *puVar4 = uVar5;
    uVar5 = *puVar3;
    iVar1 = (int)(uVar5 >> 0x20);
  }
  bVar2 = false;
  if (iVar1 >> 0xf == -9) {
    bVar2 = *(char *)((uVar5 & 0x7fffffffffff) + 10) == '\x12';
  }
  lVar7 = 0;
  if (0 < lVar9) {
    do {
      lVar8 = *(long *)(param_1 + 0x20);
      if ((bVar2) &&
         (__ptr = (void *)FUN_00bff68c(param_1,lVar8 + lVar7 * 8,&local_c), __ptr != (void *)0x0)) {
        local_8 = (ulong)local_c;
      }
      else {
        puVar6 = *(undefined8 **)(param_1 + 0x28);
        puVar6[1] = *(undefined8 *)(lVar8 + lVar7 * 8);
        *puVar6 = puVar6[-1];
        *(undefined8 **)(param_1 + 0x28) = puVar6 + 2;
        lua_call(param_1,1,1);
        __ptr = (void *)lua_tolstring(param_1,0xffffffff,&local_8);
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb3a0(param_1,0x41b);
        }
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
      }
      if (lVar7 != 0) {
        putchar(9);
      }
      lVar7 = lVar7 + 1;
      fwrite(__ptr,1,local_8,(FILE *)glUniformMatrix2fv);
    } while (lVar7 != lVar9);
  }
  putchar(10);
  return 0;
}

