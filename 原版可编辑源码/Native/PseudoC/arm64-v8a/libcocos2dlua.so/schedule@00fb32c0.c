
/* cocos2d::Scheduler::schedule(std::__ndk1::function<void (float)> const&, void*, float, unsigned
   int, float, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Scheduler::schedule
          (Scheduler *this,function *param_1,void *param_2,float param_3,uint param_4,float param_5,
          bool param_6,basic_string *param_7)

{
  uint uVar1;
  basic_string *__s2;
  uint uVar2;
  size_t __n;
  basic_string *__s1;
  basic_string bVar3;
  byte bVar4;
  size_t sVar5;
  uint uVar6;
  basic_string *pbVar7;
  size_t sVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  void *__s;
  void *__ptr;
  undefined8 uVar12;
  Ref *this_00;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  _ccArray *p_Var21;
  uint uVar22;
  
  puVar20 = *(undefined8 **)(this + 0x60);
  if (puVar20 != (undefined8 *)0x0) {
    uVar13 = (uint)((ulong)param_2 >> 0x20);
    uVar22 = (uint)param_2;
    iVar9 = (uVar13 & 0xff000000) + 0x9e3779b9 + (uVar13 & 0xff0000) + (uVar13 & 0xff00) +
            (uVar13 & 0xff);
    uVar13 = (((uVar22 & 0xff000000) + 0x9f49bac2) - iVar9) + (uVar22 & 0xff0000) +
             (uVar22 & 0xff00) + (uVar22 & 0xff) ^ 0x7f76d;
    uVar22 = (iVar9 + 0x1124109) - uVar13 ^ uVar13 << 8;
    uVar2 = (-0x1124109 - uVar13) - uVar22 ^ uVar22 >> 0xd;
    uVar13 = (uVar13 - uVar22) - uVar2 ^ uVar2 >> 0xc;
    uVar22 = (uVar22 - uVar2) - uVar13 ^ uVar13 << 0x10;
    plVar14 = (long *)puVar20[5];
    uVar2 = (uVar2 - uVar13) - uVar22 ^ uVar22 >> 5;
    uVar13 = (uVar13 - uVar22) - uVar2 ^ uVar2 >> 3;
    uVar22 = (uVar22 - uVar2) - uVar13 ^ uVar13 << 10;
    lVar16 = *(long *)(*plVar14 +
                      (ulong)(((uVar2 - uVar13) - uVar22 ^ uVar22 >> 0xf) & (int)plVar14[1] - 1U) *
                      0x10);
    while (lVar16 != 0) {
      puVar11 = (undefined8 *)(lVar16 - plVar14[4]);
      if ((*(int *)(puVar11 + 0xb) == 8) && (*(void **)puVar11[10] == param_2)) {
        p_Var21 = (_ccArray *)*puVar11;
        goto joined_r0x00fb3428;
      }
      lVar16 = puVar11[9];
    }
  }
  puVar11 = calloc(0x60,1);
  puVar15 = puVar11 + 5;
  puVar11[1] = param_2;
  puVar11[10] = puVar11 + 1;
  *(undefined4 *)(puVar11 + 0xb) = 8;
  if (puVar20 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x60) = puVar11;
    puVar20 = malloc(0x40);
    puVar11[5] = puVar20;
    if (puVar20 == (undefined8 *)0x0) goto LAB_00fb39b8;
    puVar20[5] = 0;
    puVar20[4] = 0;
    puVar20[7] = 0;
    puVar20[6] = 0;
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    plVar14 = puVar11 + 5;
    lVar16 = *plVar14;
    *(undefined8 *)(lVar16 + 8) = 0x500000020;
    *(long **)(lVar16 + 0x18) = plVar14;
    *(undefined8 *)(lVar16 + 0x20) = 0x28;
    puVar20 = malloc(0x200);
    *(undefined8 **)*plVar14 = puVar20;
    if (puVar20 == (undefined8 *)0x0) goto LAB_00fb39b8;
    lVar16 = puVar11[5];
    puVar20[0x3d] = 0;
    puVar20[0x3c] = 0;
    puVar20[0x3f] = 0;
    puVar20[0x3e] = 0;
    puVar20[0x39] = 0;
    puVar20[0x38] = 0;
    puVar20[0x3b] = 0;
    puVar20[0x3a] = 0;
    puVar20[0x35] = 0;
    puVar20[0x34] = 0;
    puVar20[0x37] = 0;
    puVar20[0x36] = 0;
    puVar20[0x31] = 0;
    puVar20[0x30] = 0;
    puVar20[0x33] = 0;
    puVar20[0x32] = 0;
    puVar20[0x2d] = 0;
    puVar20[0x2c] = 0;
    puVar20[0x2f] = 0;
    puVar20[0x2e] = 0;
    puVar20[0x29] = 0;
    puVar20[0x28] = 0;
    puVar20[0x2b] = 0;
    puVar20[0x2a] = 0;
    puVar20[0x25] = 0;
    puVar20[0x24] = 0;
    puVar20[0x27] = 0;
    puVar20[0x26] = 0;
    puVar20[0x21] = 0;
    puVar20[0x20] = 0;
    puVar20[0x23] = 0;
    puVar20[0x22] = 0;
    puVar20[0x1d] = 0;
    puVar20[0x1c] = 0;
    puVar20[0x1f] = 0;
    puVar20[0x1e] = 0;
    puVar20[0x19] = 0;
    puVar20[0x18] = 0;
    puVar20[0x1b] = 0;
    puVar20[0x1a] = 0;
    puVar20[0x15] = 0;
    puVar20[0x14] = 0;
    puVar20[0x17] = 0;
    puVar20[0x16] = 0;
    puVar20[0x11] = 0;
    puVar20[0x10] = 0;
    puVar20[0x13] = 0;
    puVar20[0x12] = 0;
    puVar20[0xd] = 0;
    puVar20[0xc] = 0;
    puVar20[0xf] = 0;
    puVar20[0xe] = 0;
    puVar20[9] = 0;
    puVar20[8] = 0;
    puVar20[0xb] = 0;
    puVar20[10] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    puVar20[7] = 0;
    puVar20[6] = 0;
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    *(undefined4 *)(lVar16 + 0x38) = 0xa0111fe1;
    lVar16 = puVar11[5];
    puVar20 = puVar11;
  }
  else {
    lVar16 = puVar20[5];
    lVar17 = *(long *)(lVar16 + 0x18);
    *(undefined8 **)(lVar17 + 0x10) = puVar11;
    puVar11[6] = lVar17 - *(long *)(lVar16 + 0x20);
    *(undefined8 **)(lVar16 + 0x18) = puVar15;
  }
  *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + 1;
  puVar11[5] = puVar20[5];
  iVar9 = (uint)*(byte *)((long)puVar11 + 0xf) * 0x1000000 + -0x61c88647 +
          (uint)*(byte *)((long)puVar11 + 0xe) * 0x10000 +
          (uint)*(byte *)((long)puVar11 + 0xd) * 0x100 + (uint)*(byte *)((long)puVar11 + 0xc);
  uVar13 = (((uint)*(byte *)((long)puVar11 + 0xb) * 0x1000000 + -0x60b6453e) - iVar9) +
           (uint)*(byte *)((long)puVar11 + 10) * 0x10000 +
           (uint)*(byte *)((long)puVar11 + 9) * 0x100 + (uint)*(byte *)(puVar11 + 1) ^ 0x7f76d;
  uVar22 = (iVar9 + 0x1124109) - uVar13 ^ uVar13 << 8;
  uVar2 = (-0x1124109 - uVar13) - uVar22 ^ uVar22 >> 0xd;
  uVar13 = (uVar13 - uVar22) - uVar2 ^ uVar2 >> 0xc;
  uVar22 = (uVar22 - uVar2) - uVar13 ^ uVar13 << 0x10;
  uVar2 = (uVar2 - uVar13) - uVar22 ^ uVar22 >> 5;
  uVar13 = (uVar13 - uVar22) - uVar2 ^ uVar2 >> 3;
  uVar22 = (uVar22 - uVar2) - uVar13 ^ uVar13 << 10;
  uVar13 = (uVar2 - uVar13) - uVar22 ^ uVar22 >> 0xf;
  *(uint *)((long)puVar11 + 0x5c) = uVar13;
  lVar16 = *(long *)puVar20[5];
  uVar18 = (ulong)(uVar13 & (int)((long *)puVar20[5])[1] - 1U);
  plVar14 = (long *)(lVar16 + uVar18 * 0x10);
  lVar17 = *plVar14;
  uVar13 = (int)plVar14[1] + 1;
  *(uint *)(plVar14 + 1) = uVar13;
  puVar11[9] = lVar17;
  if (lVar17 != 0) {
    *(undefined8 **)(lVar17 + 0x18) = puVar15;
  }
  *plVar14 = (long)puVar15;
  if ((*(int *)(lVar16 + uVar18 * 0x10 + 0xc) * 10 + 10U <= uVar13) &&
     (puVar20 = (undefined8 *)*puVar15, *(int *)((long)puVar20 + 0x34) != 1)) {
    __s = malloc((ulong)(uint)(*(int *)(puVar20 + 1) << 1) << 4);
    if (__s == (void *)0x0) {
LAB_00fb39b8:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0,(ulong)(uint)(*(int *)(puVar20 + 1) << 1) << 4);
    uVar22 = *(uint *)(puVar20 + 1);
    __ptr = (void *)*puVar20;
    uVar13 = *(uint *)(puVar20 + 2) >> (ulong)(*(int *)((long)puVar20 + 0xc) + 1U & 0x1f);
    uVar2 = uVar22 * 2 - 1;
    if ((uVar2 & *(uint *)(puVar20 + 2)) != 0) {
      uVar13 = uVar13 + 1;
    }
    *(uint *)(puVar20 + 5) = uVar13;
    *(undefined4 *)((long)puVar20 + 0x2c) = 0;
    if (uVar22 != 0) {
      iVar9 = 0;
      uVar18 = 0;
      do {
        lVar16 = *(long *)((long)__ptr + uVar18 * 0x10);
        while (lVar16 != 0) {
          uVar19 = (ulong)(*(uint *)(lVar16 + 0x34) & uVar2);
          plVar14 = (long *)((long)__s + uVar19 * 0x10);
          lVar17 = *(long *)(lVar16 + 0x20);
          uVar1 = (int)plVar14[1] + 1;
          *(uint *)(plVar14 + 1) = uVar1;
          if (uVar13 < uVar1) {
            iVar9 = iVar9 + 1;
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar1 / uVar13;
            }
            *(int *)((long)puVar20 + 0x2c) = iVar9;
            *(uint *)((long)__s + uVar19 * 0x10 + 0xc) = uVar6;
          }
          *(undefined8 *)(lVar16 + 0x18) = 0;
          lVar10 = *plVar14;
          *(long *)(lVar16 + 0x20) = lVar10;
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x18) = lVar16;
          }
          *plVar14 = lVar16;
          lVar16 = lVar17;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar22);
    }
    free(__ptr);
    puVar15 = (undefined8 *)*puVar15;
    *puVar15 = __s;
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) << 1;
    *(int *)((long)puVar15 + 0xc) = *(int *)((long)puVar15 + 0xc) + 1;
    if (*(uint *)(puVar15 + 2) >> 1 < *(uint *)((long)puVar15 + 0x2c)) {
      iVar9 = *(int *)(puVar15 + 6);
      *(uint *)(puVar15 + 6) = iVar9 + 1U;
      if (1 < iVar9 + 1U) {
        *(undefined4 *)((long)puVar15 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar15 + 6) = 0;
    }
  }
  *(bool *)(puVar11 + 4) = param_6;
  p_Var21 = (_ccArray *)*puVar11;
joined_r0x00fb3428:
  if (p_Var21 == (_ccArray *)0x0) {
    uVar12 = ccArrayNew(10);
    *puVar11 = uVar12;
  }
  else {
    lVar16 = *(long *)p_Var21;
    if (0 < lVar16) {
      plVar14 = *(long **)(p_Var21 + 0x10);
      bVar3 = *param_7;
      __n = *(size_t *)(param_7 + 8);
      __s1 = *(basic_string **)(param_7 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        __s1 = param_7 + 1;
        __n = (ulong)((byte)bVar3 >> 1);
      }
      lVar17 = 0;
      lVar10 = *plVar14;
      do {
        if (((lVar10 != 0) &&
            (lVar10 = __dynamic_cast(lVar10,&Ref::typeinfo,&TimerTargetCallback::typeinfo,0),
            lVar10 != 0)) &&
           ((*(char *)(lVar10 + 0x34) != '\0' ||
            (*(uint *)(lVar10 + 0x38) <= *(uint *)(lVar10 + 0x3c))))) {
          bVar4 = *(byte *)(lVar10 + 0x90);
          sVar5 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar5 = *(size_t *)(lVar10 + 0x98);
          }
          if (__n == sVar5) {
            __s2 = (basic_string *)(lVar10 + 0x91);
            if ((bVar4 & 1) != 0) {
              __s2 = *(basic_string **)(lVar10 + 0xa0);
            }
            sVar5 = (ulong)((byte)bVar3 >> 1);
            pbVar7 = param_7;
            sVar8 = __n;
            if (((byte)bVar3 & 1) == 0) {
              while( true ) {
                if (sVar8 == 0) goto LAB_00fb3534;
                if (pbVar7[1] != *__s2) break;
                sVar5 = sVar5 - 1;
                __s2 = __s2 + 1;
                pbVar7 = pbVar7 + 1;
                sVar8 = sVar5;
              }
            }
            else if ((__n == 0) || (iVar9 = memcmp(__s1,__s2,__n), iVar9 == 0)) {
LAB_00fb3534:
              *(float *)(lVar10 + 0x40) = param_5;
              *(float *)(lVar10 + 0x44) = param_3;
              *(undefined4 *)(lVar10 + 0x30) = 0xbf800000;
              *(bool *)(lVar10 + 0x35) = 0.0 < param_5;
              *(undefined4 *)(lVar10 + 0x38) = 0;
              *(uint *)(lVar10 + 0x3c) = param_4;
              *(bool *)(lVar10 + 0x34) = param_4 == 0xfffffffe;
              return;
            }
          }
        }
        lVar17 = lVar17 + 1;
        if (lVar16 <= lVar17) break;
        lVar10 = plVar14[lVar17];
      } while( true );
    }
    ccArrayEnsureExtraCapacity(p_Var21,1);
  }
  this_00 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined2 *)(this_00 + 0x34) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    this_00[0x48] = (Ref)0x0;
    *(undefined4 *)(this_00 + 0x30) = 0xbf800000;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x80) = 0;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined ***)this_00 = &PTR__TimerTargetCallback_01723780;
    *(undefined8 *)(this_00 + 0x90) = 0;
  }
  TimerTargetCallback::initWithCallback
            ((TimerTargetCallback *)this_00,this,param_1,param_2,param_7,param_3,param_4,param_5);
  ccArrayAppendObject((_ccArray *)*puVar11,this_00);
  Ref::release(this_00);
  return;
}

