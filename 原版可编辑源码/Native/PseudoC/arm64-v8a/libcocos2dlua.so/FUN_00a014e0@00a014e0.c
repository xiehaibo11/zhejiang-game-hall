
undefined8 FUN_00a014e0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *__s;
  size_t __n;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  
  lVar3 = FUN_009f9a54();
  uVar4 = luaL_checklstring(param_1,1,0);
  lVar5 = FUN_009fc1e8(lVar3,uVar4);
  __s = (char *)lua_tolstring(param_1,2,0);
  if (__s == (char *)0x0) {
LAB_00a01678:
    iVar2 = lua_type(param_1,2);
    if (0 < iVar2) {
      return 0;
    }
    lVar3 = 0;
    bVar1 = true;
  }
  else {
    __n = strlen(__s);
    uVar6 = __n >> 5;
    if (uVar6 < __n) {
      uVar11 = __n & 0xffffffff;
      uVar8 = __n;
      do {
        lVar7 = uVar8 - 1;
        uVar10 = (uint)uVar11;
        uVar8 = uVar8 + ~uVar6;
        uVar11 = (ulong)(uVar10 * 0x20 + (uVar10 >> 2) + (uint)(byte)__s[lVar7] ^ uVar10);
      } while (uVar6 < uVar8);
      lVar7 = *(long *)(lVar3 + 0x30);
      if (lVar7 != 0) goto LAB_00a01588;
LAB_00a015e8:
      plVar9 = (long *)0x0;
    }
    else {
      uVar11 = __n & 0xffffffff;
      lVar7 = *(long *)(lVar3 + 0x30);
      if (lVar7 == 0) goto LAB_00a015e8;
LAB_00a01588:
      plVar9 = *(long **)(lVar7 + (*(int *)(lVar3 + 0x20) - 1 & uVar11) * 8);
      while ((plVar9 != (long *)0x0 &&
             ((((int)uVar11 != (int)plVar9[1] || (__n != ((ulong)plVar9[1] >> 0x20 & 0xffff))) ||
              (iVar2 = memcmp(__s,plVar9 + 2,__n), iVar2 != 0))))) {
        plVar9 = (long *)*plVar9;
      }
    }
    lVar3 = 0;
    if (plVar9 != (long *)0x0) {
      lVar3 = (long)plVar9 + 0x10;
    }
    if (((lVar5 == 0) || (lVar3 == 0)) || (*(long *)(lVar5 + 0x30) == 0)) goto LAB_00a01678;
    uVar11 = *(long *)(lVar5 + 0x30) - 1;
    uVar6 = uVar11 & lVar3 * 0x9e3779b1;
    if ((uVar11 & lVar3 * 0x9e3779b1) == 0) {
      uVar6 = 1;
    }
    for (plVar9 = (long *)(*(long *)(lVar5 + 0x48) +
                          uVar6 * ((ulong)*(uint *)(lVar5 + 0x40) & 0x7fffffff)); plVar9[1] != lVar3
        ; plVar9 = (long *)((long)plVar9 + *plVar9)) {
      if (*plVar9 == 0) goto LAB_00a01678;
    }
    if ((plVar9 == (long *)0x0) || (lVar3 = plVar9[2], lVar3 == 0)) goto LAB_00a01678;
    bVar1 = false;
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (bVar1) {
    lVar7 = *(long *)(lVar5 + 0x10);
    plVar9 = (long *)0x0;
    goto LAB_00a01708;
  }
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 != 0) {
    iVar2 = *(int *)(lVar3 + 0x18);
    if (iVar2 != 0) {
      uVar11 = (long)iVar2 * 0x9e3779b1;
      uVar6 = lVar7 - 1U & uVar11;
      if ((lVar7 - 1U & uVar11) == 0) {
        uVar6 = 1;
      }
      for (plVar9 = (long *)(*(long *)(lVar5 + 0x28) +
                            uVar6 * ((ulong)*(uint *)(lVar5 + 0x20) & 0x7fffffff));
          plVar9[1] != (long)iVar2; plVar9 = (long *)((long)plVar9 + *plVar9)) {
        if (*plVar9 == 0) goto LAB_00a01700;
      }
      goto LAB_00a01708;
    }
    if (*(int *)(lVar5 + 0x20) < 0) {
      plVar9 = *(long **)(lVar5 + 0x28);
      goto LAB_00a01708;
    }
  }
LAB_00a01700:
  plVar9 = (long *)0x0;
LAB_00a01708:
  uVar6 = (ulong)*(uint *)(lVar5 + 0x20) & 0x7fffffff;
  do {
    if (plVar9 == (long *)0x0) {
      uVar11 = 0;
      if (-1 < (int)*(uint *)(lVar5 + 0x20)) goto LAB_00a01720;
      plVar9 = *(long **)(lVar5 + 0x28);
    }
    else {
      uVar11 = (long)plVar9 - *(long *)(lVar5 + 0x28);
LAB_00a01720:
      do {
        uVar8 = uVar11 + uVar6;
        if (lVar7 * uVar6 <= uVar8) {
          return 0;
        }
        lVar3 = *(long *)(lVar5 + 0x28) + uVar6 + uVar11;
        uVar11 = uVar8;
      } while (*(long *)(lVar3 + 8) == 0);
      plVar9 = (long *)(*(long *)(lVar5 + 0x28) + uVar8);
    }
    if (plVar9[2] != 0) {
      uVar4 = FUN_00a017b0(param_1,lVar5);
      return uVar4;
    }
  } while( true );
}

