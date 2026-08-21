
undefined4 FUN_00c2ec94(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  undefined8 *puVar6;
  ulong __n;
  ulong uVar7;
  ulong uVar8;
  
  __dest = *(void **)(param_1 + 0x20);
  uVar8 = *(ulong *)((long)__dest + -0x10) & 0x7fffffffffff;
  uVar7 = *(ulong *)(uVar8 + 0x30) & 0x7fffffffffff;
  uVar1 = *(byte *)(uVar8 + 0xb) - 1;
  lVar5 = *(long *)(uVar7 + 0x30);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x5d3);
  }
  *(void **)(param_1 + 0x28) = __dest;
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x30) - (long)__dest <= (long)((ulong)uVar1 * 8)) {
      FUN_00bfe0e0(param_1,uVar1);
      __dest = *(void **)(param_1 + 0x28);
    }
    __n = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    memcpy(__dest,(void *)(uVar8 + 0x38),__n);
    lVar5 = *(long *)(uVar7 + 0x30);
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + __n;
  }
  uVar3 = FUN_00c2e88c(param_1,lVar5,0);
  iVar4 = ferror(*(FILE **)(uVar7 + 0x30));
  if (iVar4 == 0) {
    if ((**(long **)(param_1 + 0x20) == -1) && ((*(uint *)(uVar7 + 0x38) >> 2 & 1) != 0)) {
      uVar1 = *(uint *)(uVar7 + 0x38) & 3;
      uVar3 = 0;
      if (uVar1 == 0) {
        iVar4 = fclose(*(FILE **)(uVar7 + 0x30));
        bVar2 = iVar4 == 0;
      }
      else {
        if (uVar1 != 1) {
          puVar6 = *(undefined8 **)(param_1 + 0x28);
          *(undefined8 **)(param_1 + 0x28) = puVar6 + 1;
          *puVar6 = 0xffffffffffffffff;
          lua_pushlstring(param_1,"cannot close standard file",0x1a);
          return 0;
        }
        iVar4 = pclose(*(FILE **)(uVar7 + 0x30));
        bVar2 = iVar4 != -1;
      }
      *(undefined8 *)(uVar7 + 0x30) = 0;
      luaL_fileresult(param_1,bVar2,0);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb194(param_1,(*(ulong *)(*(long *)(param_1 + 0x28) + -0x10) & 0x7fffffffffff) + 0x18);
}

