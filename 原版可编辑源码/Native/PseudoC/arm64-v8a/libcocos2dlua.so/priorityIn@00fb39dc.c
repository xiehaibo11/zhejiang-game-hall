
/* cocos2d::Scheduler::priorityIn(cocos2d::_listEntry**, std::__ndk1::function<void (float)> const&,
   void*, int, bool) */

void __thiscall
cocos2d::Scheduler::priorityIn
          (Scheduler *this,_listEntry **param_1,function *param_2,void *param_3,int param_4,
          bool param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  _listEntry *p_Var7;
  long *plVar8;
  undefined8 *puVar9;
  void *__s;
  void *__ptr;
  code *pcVar10;
  _listEntry *p_Var11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  _listEntry *p_Var14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  _listEntry *p_Var21;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  p_Var7 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (p_Var7 == (_listEntry *)0x0) {
    p_Var21 = (_listEntry *)0x0;
  }
  else {
    *(undefined8 *)(p_Var7 + 0x38) = 0;
    *(undefined8 *)(p_Var7 + 0x30) = 0;
    *(undefined8 *)(p_Var7 + 0x48) = 0;
    *(undefined8 *)(p_Var7 + 0x40) = 0;
    *(undefined8 *)(p_Var7 + 0x18) = 0;
    *(undefined8 *)(p_Var7 + 0x10) = 0;
    *(undefined8 *)(p_Var7 + 0x28) = 0;
    *(undefined8 *)(p_Var7 + 0x20) = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(undefined8 *)p_Var7 = 0;
    p_Var21 = p_Var7;
  }
  plVar8 = *(long **)(param_2 + 0x20);
  if (plVar8 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar8) {
    local_80 = alStack_a0;
    (**(code **)(*plVar8 + 0x18))(plVar8,alStack_a0);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar8 + 0x10))();
  }
  FUN_00ee5dfc(alStack_a0,p_Var21 + 0x10);
  if (alStack_a0 == local_80) {
    pcVar10 = *(code **)(*local_80 + 0x20);
LAB_00fb3ad0:
    (*pcVar10)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar10 = *(code **)(*local_80 + 0x28);
    goto LAB_00fb3ad0;
  }
  *(void **)(p_Var21 + 0x40) = param_3;
  *(int *)(p_Var21 + 0x48) = param_4;
  p_Var21[0x4c] = (_listEntry)param_5;
  p_Var21[0x4d] = (_listEntry)0x0;
  *(undefined8 *)p_Var7 = 0;
  *(undefined8 *)(p_Var7 + 8) = 0;
  p_Var11 = *param_1;
  p_Var14 = p_Var11;
  if (p_Var11 == (_listEntry *)0x0) {
    *param_1 = p_Var21;
    *(_listEntry **)p_Var21 = p_Var7;
  }
  else {
    do {
      if (param_4 < *(int *)(p_Var14 + 0x48)) {
        if (p_Var14 == p_Var11) {
          *(_listEntry **)(p_Var21 + 8) = p_Var11;
          *(undefined8 *)p_Var21 = *(undefined8 *)p_Var11;
          *(_listEntry **)p_Var11 = p_Var21;
          *param_1 = p_Var21;
        }
        else {
          *(_listEntry **)(p_Var21 + 8) = p_Var14;
          *(undefined8 *)p_Var21 = *(undefined8 *)p_Var14;
          *(_listEntry **)(*(long *)p_Var14 + 8) = p_Var21;
          *(_listEntry **)p_Var14 = p_Var21;
        }
        goto LAB_00fb3b6c;
      }
      p_Var7 = p_Var14 + 8;
      p_Var14 = *(_listEntry **)p_Var7;
    } while (*(_listEntry **)p_Var7 != (_listEntry *)0x0);
    *(undefined8 *)p_Var21 = *(undefined8 *)p_Var11;
    *(_listEntry **)(*(long *)p_Var11 + 8) = p_Var21;
    *(_listEntry **)*param_1 = p_Var21;
  }
  *(undefined8 *)(p_Var21 + 8) = 0;
LAB_00fb3b6c:
  puVar9 = calloc(0x90,1);
  puVar9[2] = param_3;
  *puVar9 = param_1;
  puVar9[1] = p_Var21;
  puVar13 = puVar9 + 10;
  puVar9[0xb] = 0;
  *puVar13 = 0;
  puVar9[0xd] = 0;
  puVar9[0xc] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = puVar9 + 2;
  puVar9[0x10] = 8;
  puVar12 = *(undefined8 **)(this + 0x40);
  if (puVar12 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x40) = puVar9;
    puVar9[0xb] = 0;
    puVar12 = malloc(0x40);
    puVar9[10] = puVar12;
    if (puVar12 == (undefined8 *)0x0) goto LAB_00fb3f0c;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[7] = 0;
    puVar12[6] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    plVar8 = puVar9 + 10;
    lVar15 = *plVar8;
    *(undefined8 *)(lVar15 + 8) = 0x500000020;
    *(long **)(lVar15 + 0x18) = plVar8;
    *(undefined8 *)(lVar15 + 0x20) = 0x50;
    puVar12 = malloc(0x200);
    *(undefined8 **)*plVar8 = puVar12;
    if (puVar12 == (undefined8 *)0x0) goto LAB_00fb3f0c;
    lVar15 = puVar9[10];
    puVar12[0x3d] = 0;
    puVar12[0x3c] = 0;
    puVar12[0x3f] = 0;
    puVar12[0x3e] = 0;
    puVar12[0x39] = 0;
    puVar12[0x38] = 0;
    puVar12[0x3b] = 0;
    puVar12[0x3a] = 0;
    puVar12[0x35] = 0;
    puVar12[0x34] = 0;
    puVar12[0x37] = 0;
    puVar12[0x36] = 0;
    puVar12[0x31] = 0;
    puVar12[0x30] = 0;
    puVar12[0x33] = 0;
    puVar12[0x32] = 0;
    puVar12[0x2d] = 0;
    puVar12[0x2c] = 0;
    puVar12[0x2f] = 0;
    puVar12[0x2e] = 0;
    puVar12[0x29] = 0;
    puVar12[0x28] = 0;
    puVar12[0x2b] = 0;
    puVar12[0x2a] = 0;
    puVar12[0x25] = 0;
    puVar12[0x24] = 0;
    puVar12[0x27] = 0;
    puVar12[0x26] = 0;
    puVar12[0x21] = 0;
    puVar12[0x20] = 0;
    puVar12[0x23] = 0;
    puVar12[0x22] = 0;
    puVar12[0x1d] = 0;
    puVar12[0x1c] = 0;
    puVar12[0x1f] = 0;
    puVar12[0x1e] = 0;
    puVar12[0x19] = 0;
    puVar12[0x18] = 0;
    puVar12[0x1b] = 0;
    puVar12[0x1a] = 0;
    puVar12[0x15] = 0;
    puVar12[0x14] = 0;
    puVar12[0x17] = 0;
    puVar12[0x16] = 0;
    puVar12[0x11] = 0;
    puVar12[0x10] = 0;
    puVar12[0x13] = 0;
    puVar12[0x12] = 0;
    puVar12[0xd] = 0;
    puVar12[0xc] = 0;
    puVar12[0xf] = 0;
    puVar12[0xe] = 0;
    puVar12[9] = 0;
    puVar12[8] = 0;
    puVar12[0xb] = 0;
    puVar12[10] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[7] = 0;
    puVar12[6] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[3] = 0;
    puVar12[2] = 0;
    *(undefined4 *)(lVar15 + 0x38) = 0xa0111fe1;
    lVar15 = puVar9[10];
    puVar12 = puVar9;
  }
  else {
    lVar15 = puVar12[10];
    lVar17 = *(long *)(lVar15 + 0x18);
    *(undefined8 **)(lVar17 + 0x10) = puVar9;
    puVar9[0xb] = lVar17 - *(long *)(lVar15 + 0x20);
    *(undefined8 **)(lVar15 + 0x18) = puVar13;
  }
  *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
  puVar9[10] = puVar12[10];
  iVar18 = *(int *)((long)puVar9 + 0x14) + -0x61c88647;
  uVar2 = ((uint)*(byte *)((long)puVar9 + 0x13) * 0x1000000 - iVar18) +
          (uint)*(byte *)((long)puVar9 + 0x12) * 0x10000 +
          (uint)*(byte *)((long)puVar9 + 0x11) * 0x100 + (uint)*(byte *)(puVar9 + 2) + 0x9f49bac2 ^
          0x7f76d;
  uVar3 = (iVar18 - uVar2) + 0x1124109 ^ uVar2 << 8;
  uVar4 = 0xfeedbef7 - (uVar2 + uVar3) ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xf;
  *(uint *)((long)puVar9 + 0x84) = uVar2;
  lVar15 = *(long *)puVar12[10];
  uVar16 = (ulong)(uVar2 & (int)((long *)puVar12[10])[1] - 1U);
  plVar8 = (long *)(lVar15 + uVar16 * 0x10);
  lVar17 = *plVar8;
  uVar2 = (int)plVar8[1] + 1;
  *(uint *)(plVar8 + 1) = uVar2;
  puVar9[0xd] = 0;
  puVar9[0xe] = lVar17;
  if (lVar17 != 0) {
    *(undefined8 **)(lVar17 + 0x18) = puVar13;
  }
  *plVar8 = (long)puVar13;
  if ((*(int *)(lVar15 + uVar16 * 0x10 + 0xc) * 10 + 10U <= uVar2) &&
     (puVar12 = (undefined8 *)*puVar13, *(int *)((long)puVar12 + 0x34) != 1)) {
    __s = malloc((ulong)(uint)(*(int *)(puVar12 + 1) << 1) << 4);
    if (__s == (void *)0x0) {
LAB_00fb3f0c:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0,(ulong)(uint)(*(int *)(puVar12 + 1) << 1) << 4);
    uVar3 = *(uint *)(puVar12 + 1);
    __ptr = (void *)*puVar12;
    uVar2 = *(uint *)(puVar12 + 2) >> (ulong)(*(int *)((long)puVar12 + 0xc) + 1U & 0x1f);
    uVar4 = uVar3 * 2 - 1;
    if ((uVar4 & *(uint *)(puVar12 + 2)) != 0) {
      uVar2 = uVar2 + 1;
    }
    *(uint *)(puVar12 + 5) = uVar2;
    *(undefined4 *)((long)puVar12 + 0x2c) = 0;
    if (uVar3 != 0) {
      iVar18 = 0;
      uVar16 = 0;
      do {
        lVar15 = *(long *)((long)__ptr + uVar16 * 0x10);
        while (lVar15 != 0) {
          uVar19 = (ulong)(*(uint *)(lVar15 + 0x34) & uVar4);
          plVar8 = (long *)((long)__s + uVar19 * 0x10);
          lVar17 = *(long *)(lVar15 + 0x20);
          uVar1 = (int)plVar8[1] + 1;
          *(uint *)(plVar8 + 1) = uVar1;
          if (uVar2 < uVar1) {
            iVar18 = iVar18 + 1;
            uVar5 = 0;
            if (uVar2 != 0) {
              uVar5 = uVar1 / uVar2;
            }
            *(int *)((long)puVar12 + 0x2c) = iVar18;
            *(uint *)((long)__s + uVar19 * 0x10 + 0xc) = uVar5;
          }
          *(undefined8 *)(lVar15 + 0x18) = 0;
          lVar20 = *plVar8;
          *(long *)(lVar15 + 0x20) = lVar20;
          if (lVar20 != 0) {
            *(long *)(lVar20 + 0x18) = lVar15;
          }
          *plVar8 = lVar15;
          lVar15 = lVar17;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar3);
    }
    free(__ptr);
    puVar13 = (undefined8 *)*puVar13;
    *puVar13 = __s;
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) << 1;
    *(int *)((long)puVar13 + 0xc) = *(int *)((long)puVar13 + 0xc) + 1;
    if (*(uint *)(puVar13 + 2) >> 1 < *(uint *)((long)puVar13 + 0x2c)) {
      iVar18 = *(int *)(puVar13 + 6);
      *(uint *)(puVar13 + 6) = iVar18 + 1U;
      if (1 < iVar18 + 1U) {
        *(undefined4 *)((long)puVar13 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar13 + 6) = 0;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

