
/* cocos2d::Scheduler::schedule(void (cocos2d::Ref::*)(float), cocos2d::Ref*, float, unsigned int,
   float, bool) */

void cocos2d::Scheduler::schedule
               (_func_void_float *param_1,Ref *param_2,float param_3,uint param_4,float param_5,
               bool param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__s;
  void *__ptr;
  undefined8 uVar8;
  Ref *this;
  ulong uVar9;
  int in_w4;
  byte in_w5;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  _ccArray *p_Var17;
  undefined8 *puVar18;
  
  uVar9 = (ulong)param_6;
  puVar18 = *(undefined8 **)(param_1 + 0x60);
  if (puVar18 != (undefined8 *)0x0) {
    uVar2 = param_6 + 0x1124109 ^ 0x7f76d;
    uVar3 = 0x9f49bac2 - uVar2 ^ uVar2 << 8;
    uVar4 = (-0x1124109 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    plVar10 = (long *)puVar18[5];
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    lVar12 = *(long *)(*plVar10 +
                      (ulong)(((uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xf) & (int)plVar10[1] - 1U) *
                      0x10);
    while (lVar12 != 0) {
      puVar7 = (undefined8 *)(lVar12 - plVar10[4]);
      if ((*(int *)(puVar7 + 0xb) == 8) && (*(ulong *)puVar7[10] == uVar9)) {
        p_Var17 = (_ccArray *)*puVar7;
        goto joined_r0x00fb6254;
      }
      lVar12 = puVar7[9];
    }
  }
  puVar7 = calloc(0x60,1);
  puVar11 = puVar7 + 5;
  puVar7[1] = uVar9;
  puVar7[10] = puVar7 + 1;
  *(undefined4 *)(puVar7 + 0xb) = 8;
  if (puVar18 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x60) = puVar7;
    puVar18 = malloc(0x40);
    puVar7[5] = puVar18;
    if (puVar18 == (undefined8 *)0x0) goto LAB_00fb678c;
    puVar18[5] = 0;
    puVar18[4] = 0;
    puVar18[7] = 0;
    puVar18[6] = 0;
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    plVar10 = puVar7 + 5;
    lVar12 = *plVar10;
    *(undefined8 *)(lVar12 + 8) = 0x500000020;
    *(long **)(lVar12 + 0x18) = plVar10;
    *(undefined8 *)(lVar12 + 0x20) = 0x28;
    puVar18 = malloc(0x200);
    *(undefined8 **)*plVar10 = puVar18;
    if (puVar18 == (undefined8 *)0x0) goto LAB_00fb678c;
    lVar12 = puVar7[5];
    puVar18[0x3d] = 0;
    puVar18[0x3c] = 0;
    puVar18[0x3f] = 0;
    puVar18[0x3e] = 0;
    puVar18[0x39] = 0;
    puVar18[0x38] = 0;
    puVar18[0x3b] = 0;
    puVar18[0x3a] = 0;
    puVar18[0x35] = 0;
    puVar18[0x34] = 0;
    puVar18[0x37] = 0;
    puVar18[0x36] = 0;
    puVar18[0x31] = 0;
    puVar18[0x30] = 0;
    puVar18[0x33] = 0;
    puVar18[0x32] = 0;
    puVar18[0x2d] = 0;
    puVar18[0x2c] = 0;
    puVar18[0x2f] = 0;
    puVar18[0x2e] = 0;
    puVar18[0x29] = 0;
    puVar18[0x28] = 0;
    puVar18[0x2b] = 0;
    puVar18[0x2a] = 0;
    puVar18[0x25] = 0;
    puVar18[0x24] = 0;
    puVar18[0x27] = 0;
    puVar18[0x26] = 0;
    puVar18[0x21] = 0;
    puVar18[0x20] = 0;
    puVar18[0x23] = 0;
    puVar18[0x22] = 0;
    puVar18[0x1d] = 0;
    puVar18[0x1c] = 0;
    puVar18[0x1f] = 0;
    puVar18[0x1e] = 0;
    puVar18[0x19] = 0;
    puVar18[0x18] = 0;
    puVar18[0x1b] = 0;
    puVar18[0x1a] = 0;
    puVar18[0x15] = 0;
    puVar18[0x14] = 0;
    puVar18[0x17] = 0;
    puVar18[0x16] = 0;
    puVar18[0x11] = 0;
    puVar18[0x10] = 0;
    puVar18[0x13] = 0;
    puVar18[0x12] = 0;
    puVar18[0xd] = 0;
    puVar18[0xc] = 0;
    puVar18[0xf] = 0;
    puVar18[0xe] = 0;
    puVar18[9] = 0;
    puVar18[8] = 0;
    puVar18[0xb] = 0;
    puVar18[10] = 0;
    puVar18[5] = 0;
    puVar18[4] = 0;
    puVar18[7] = 0;
    puVar18[6] = 0;
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    *(undefined4 *)(lVar12 + 0x38) = 0xa0111fe1;
    lVar12 = puVar7[5];
    puVar18 = puVar7;
  }
  else {
    lVar12 = puVar18[5];
    lVar13 = *(long *)(lVar12 + 0x18);
    *(undefined8 **)(lVar13 + 0x10) = puVar7;
    puVar7[6] = lVar13 - *(long *)(lVar12 + 0x20);
    *(undefined8 **)(lVar12 + 0x18) = puVar11;
  }
  *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + 1;
  puVar7[5] = puVar18[5];
  iVar15 = (uint)*(byte *)((long)puVar7 + 0xf) * 0x1000000 + -0x61c88647 +
           (uint)*(byte *)((long)puVar7 + 0xe) * 0x10000 +
           (uint)*(byte *)((long)puVar7 + 0xd) * 0x100 + (uint)*(byte *)((long)puVar7 + 0xc);
  uVar2 = (((uint)*(byte *)((long)puVar7 + 0xb) * 0x1000000 + -0x60b6453e) - iVar15) +
          (uint)*(byte *)((long)puVar7 + 10) * 0x10000 + (uint)*(byte *)((long)puVar7 + 9) * 0x100 +
          (uint)*(byte *)(puVar7 + 1) ^ 0x7f76d;
  uVar3 = (iVar15 + 0x1124109) - uVar2 ^ uVar2 << 8;
  uVar4 = (-0x1124109 - uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xf;
  *(uint *)((long)puVar7 + 0x5c) = uVar2;
  lVar12 = *(long *)puVar18[5];
  uVar14 = (ulong)(uVar2 & (int)((long *)puVar18[5])[1] - 1U);
  plVar10 = (long *)(lVar12 + uVar14 * 0x10);
  lVar13 = *plVar10;
  uVar2 = (int)plVar10[1] + 1;
  *(uint *)(plVar10 + 1) = uVar2;
  puVar7[9] = lVar13;
  if (lVar13 != 0) {
    *(undefined8 **)(lVar13 + 0x18) = puVar11;
  }
  *plVar10 = (long)puVar11;
  if ((*(int *)(lVar12 + uVar14 * 0x10 + 0xc) * 10 + 10U <= uVar2) &&
     (puVar18 = (undefined8 *)*puVar11, *(int *)((long)puVar18 + 0x34) != 1)) {
    __s = malloc((ulong)(uint)(*(int *)(puVar18 + 1) << 1) << 4);
    if (__s == (void *)0x0) {
LAB_00fb678c:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0,(ulong)(uint)(*(int *)(puVar18 + 1) << 1) << 4);
    uVar3 = *(uint *)(puVar18 + 1);
    __ptr = (void *)*puVar18;
    uVar2 = *(uint *)(puVar18 + 2) >> (ulong)(*(int *)((long)puVar18 + 0xc) + 1U & 0x1f);
    uVar4 = uVar3 * 2 - 1;
    if ((uVar4 & *(uint *)(puVar18 + 2)) != 0) {
      uVar2 = uVar2 + 1;
    }
    *(uint *)(puVar18 + 5) = uVar2;
    *(undefined4 *)((long)puVar18 + 0x2c) = 0;
    if (uVar3 != 0) {
      iVar15 = 0;
      uVar14 = 0;
      do {
        lVar12 = *(long *)((long)__ptr + uVar14 * 0x10);
        while (lVar12 != 0) {
          uVar16 = (ulong)(*(uint *)(lVar12 + 0x34) & uVar4);
          plVar10 = (long *)((long)__s + uVar16 * 0x10);
          lVar13 = *(long *)(lVar12 + 0x20);
          uVar1 = (int)plVar10[1] + 1;
          *(uint *)(plVar10 + 1) = uVar1;
          if (uVar2 < uVar1) {
            iVar15 = iVar15 + 1;
            uVar5 = 0;
            if (uVar2 != 0) {
              uVar5 = uVar1 / uVar2;
            }
            *(int *)((long)puVar18 + 0x2c) = iVar15;
            *(uint *)((long)__s + uVar16 * 0x10 + 0xc) = uVar5;
          }
          *(undefined8 *)(lVar12 + 0x18) = 0;
          lVar6 = *plVar10;
          *(long *)(lVar12 + 0x20) = lVar6;
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x18) = lVar12;
          }
          *plVar10 = lVar12;
          lVar12 = lVar13;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar3);
    }
    free(__ptr);
    puVar11 = (undefined8 *)*puVar11;
    *puVar11 = __s;
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) << 1;
    *(int *)((long)puVar11 + 0xc) = *(int *)((long)puVar11 + 0xc) + 1;
    if (*(uint *)(puVar11 + 2) >> 1 < *(uint *)((long)puVar11 + 0x2c)) {
      iVar15 = *(int *)(puVar11 + 6);
      *(uint *)(puVar11 + 6) = iVar15 + 1U;
      if (1 < iVar15 + 1U) {
        *(undefined4 *)((long)puVar11 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar11 + 6) = 0;
    }
  }
  *(byte *)(puVar7 + 4) = in_w5 & 1;
  p_Var17 = (_ccArray *)*puVar7;
joined_r0x00fb6254:
  if (p_Var17 == (_ccArray *)0x0) {
    uVar8 = ccArrayNew(10);
    *puVar7 = uVar8;
  }
  else {
    lVar12 = *(long *)p_Var17;
    if (0 < lVar12) {
      plVar10 = *(long **)(p_Var17 + 0x10);
      lVar13 = 0;
      lVar6 = *plVar10;
      while( true ) {
        if (((lVar6 != 0) &&
            (lVar6 = __dynamic_cast(lVar6,&Ref::typeinfo,&TimerTargetSelector::typeinfo,0),
            lVar6 != 0)) &&
           ((*(char *)(lVar6 + 0x34) != '\0' || (*(uint *)(lVar6 + 0x38) <= *(uint *)(lVar6 + 0x3c))
            ))) {
          if ((param_2 == *(Ref **)(lVar6 + 0x58)) &&
             ((ulong)param_4 == *(ulong *)(lVar6 + 0x60) ||
              (((uint)*(ulong *)(lVar6 + 0x60) | param_4) & 1) == 0 && param_2 == (Ref *)0x0)) {
            *(float *)(lVar6 + 0x40) = param_5;
            *(float *)(lVar6 + 0x44) = param_3;
            *(undefined4 *)(lVar6 + 0x30) = 0xbf800000;
            *(bool *)(lVar6 + 0x35) = 0.0 < param_5;
            *(undefined4 *)(lVar6 + 0x38) = 0;
            *(int *)(lVar6 + 0x3c) = in_w4;
            *(bool *)(lVar6 + 0x34) = in_w4 == -2;
            return;
          }
        }
        lVar13 = lVar13 + 1;
        if (lVar12 <= lVar13) break;
        lVar6 = plVar10[lVar13];
      }
    }
    ccArrayEnsureExtraCapacity(p_Var17,1);
  }
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined2 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    this[0x48] = (Ref)0x0;
    *(undefined4 *)(this + 0x30) = 0xbf800000;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR__Ref_01723750;
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(Ref **)(this + 0x58) = param_2;
  *(ulong *)(this + 0x60) = (ulong)param_4;
  *(float *)(this + 0x40) = param_5;
  *(float *)(this + 0x44) = param_3;
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  this[0x35] = (Ref)(0.0 < param_5);
  *(_func_void_float **)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  *(int *)(this + 0x3c) = in_w4;
  *(ulong *)(this + 0x50) = uVar9;
  this[0x34] = (Ref)(in_w4 == -2);
  ccArrayAppendObject((_ccArray *)*puVar7,this);
  Ref::release(this);
  return;
}

