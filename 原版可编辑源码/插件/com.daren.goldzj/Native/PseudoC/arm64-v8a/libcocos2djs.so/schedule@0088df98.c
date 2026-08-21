
/* cocos2d::Scheduler::schedule(std::__ndk1::function<void (float)> const&, void*, float, unsigned
   int, float, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Scheduler::schedule
          (Scheduler *this,function *param_1,void *param_2,float param_3,uint param_4,float param_5,
          bool param_6,basic_string *param_7)

{
  uint uVar1;
  size_t sVar2;
  basic_string *__s2;
  uint uVar3;
  size_t __n;
  basic_string *__s1;
  basic_string bVar4;
  byte bVar5;
  uint uVar6;
  basic_string *pbVar7;
  size_t sVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *__s;
  void *__ptr;
  long lVar12;
  undefined8 uVar13;
  Ref *this_00;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  _ccArray *p_Var24;
  uint uVar25;
  undefined8 *puVar26;
  
  lVar17 = tpidr_el0;
  lVar15 = *(long *)(lVar17 + 0x28);
  lVar22 = *(long *)this;
  if (lVar22 != 0) {
    uVar14 = (uint)((ulong)param_2 >> 0x20);
    uVar25 = (uint)param_2;
    iVar9 = (uVar14 & 0xff000000) + 0x9e3779b9 + (uVar14 & 0xff0000) + (uVar14 & 0xff00) +
            (uVar14 & 0xff);
    uVar14 = (((uVar25 & 0xff000000) + 0x9f49bac2) - iVar9) + (uVar25 & 0xff0000) +
             (uVar25 & 0xff00) + (uVar25 & 0xff) ^ 0x7f76d;
    uVar25 = (iVar9 + 0x1124109) - uVar14 ^ uVar14 << 8;
    uVar3 = (-0x1124109 - uVar14) - uVar25 ^ uVar25 >> 0xd;
    uVar14 = (uVar14 - uVar25) - uVar3 ^ uVar3 >> 0xc;
    uVar25 = (uVar25 - uVar3) - uVar14 ^ uVar14 << 0x10;
    plVar16 = *(long **)(lVar22 + 0x28);
    uVar3 = (uVar3 - uVar14) - uVar25 ^ uVar25 >> 5;
    uVar14 = (uVar14 - uVar25) - uVar3 ^ uVar3 >> 3;
    uVar25 = (uVar25 - uVar3) - uVar14 ^ uVar14 << 10;
    lVar18 = *(long *)(*plVar16 +
                      (ulong)(((uVar3 - uVar14) - uVar25 ^ uVar25 >> 0xf) & (int)plVar16[1] - 1U) *
                      0x10);
    while ((lVar18 != 0 &&
           (puVar10 = (undefined8 *)(lVar18 - plVar16[4]), puVar10 != (undefined8 *)0x0))) {
      if ((*(int *)(puVar10 + 0xb) == 8) && (*(void **)puVar10[10] == param_2)) goto LAB_0088e460;
      lVar18 = puVar10[9];
    }
  }
  puVar10 = calloc(0x60,1);
  plVar16 = puVar10 + 5;
  puVar10[1] = param_2;
  puVar10[10] = puVar10 + 1;
  *(undefined4 *)(puVar10 + 0xb) = 8;
  if (lVar22 == 0) {
    *(undefined8 **)this = puVar10;
    puVar26 = malloc(0x40);
    puVar10[5] = puVar26;
    if (puVar26 == (undefined8 *)0x0) goto LAB_0088e644;
    puVar26[3] = 0;
    puVar26[2] = 0;
    puVar26[5] = 0;
    puVar26[4] = 0;
    puVar26[7] = 0;
    puVar26[6] = 0;
    puVar26[3] = puVar10 + 5;
    puVar26[4] = 0x28;
    puVar26[1] = 0x500000020;
    puVar11 = malloc(0x200);
    *puVar26 = puVar11;
    if (puVar11 == (undefined8 *)0x0) goto LAB_0088e644;
    puVar11[0x3d] = 0;
    puVar11[0x3c] = 0;
    puVar11[0x3f] = 0;
    puVar11[0x3e] = 0;
    puVar11[0x39] = 0;
    puVar11[0x38] = 0;
    puVar11[0x3b] = 0;
    puVar11[0x3a] = 0;
    puVar11[0x35] = 0;
    puVar11[0x34] = 0;
    puVar11[0x37] = 0;
    puVar11[0x36] = 0;
    puVar11[0x31] = 0;
    puVar11[0x30] = 0;
    puVar11[0x33] = 0;
    puVar11[0x32] = 0;
    puVar11[0x2d] = 0;
    puVar11[0x2c] = 0;
    puVar11[0x2f] = 0;
    puVar11[0x2e] = 0;
    puVar11[0x29] = 0;
    puVar11[0x28] = 0;
    puVar11[0x2b] = 0;
    puVar11[0x2a] = 0;
    puVar11[0x25] = 0;
    puVar11[0x24] = 0;
    puVar11[0x27] = 0;
    puVar11[0x26] = 0;
    puVar11[0x21] = 0;
    puVar11[0x20] = 0;
    puVar11[0x23] = 0;
    puVar11[0x22] = 0;
    puVar11[0x1d] = 0;
    puVar11[0x1c] = 0;
    puVar11[0x1f] = 0;
    puVar11[0x1e] = 0;
    puVar11[0x19] = 0;
    puVar11[0x18] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x15] = 0;
    puVar11[0x14] = 0;
    puVar11[0x17] = 0;
    puVar11[0x16] = 0;
    puVar11[0x11] = 0;
    puVar11[0x10] = 0;
    puVar11[0x13] = 0;
    puVar11[0x12] = 0;
    puVar11[0xd] = 0;
    puVar11[0xc] = 0;
    puVar11[0xf] = 0;
    puVar11[0xe] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    *(undefined4 *)(puVar26 + 7) = 0xa0111fe1;
    plVar23 = plVar16;
  }
  else {
    puVar26 = *(undefined8 **)(lVar22 + 0x28);
    lVar18 = puVar26[3];
    *(undefined8 **)(lVar18 + 0x10) = puVar10;
    puVar10[6] = lVar18 - puVar26[4];
    puVar26[3] = plVar16;
    plVar23 = (long *)(lVar22 + 0x28);
  }
  *(int *)(puVar26 + 2) = *(int *)(puVar26 + 2) + 1;
  puVar10[5] = *plVar23;
  iVar9 = (uint)*(byte *)((long)puVar10 + 0xf) * 0x1000000 + -0x61c88647 +
          (uint)*(byte *)((long)puVar10 + 0xe) * 0x10000 +
          (uint)*(byte *)((long)puVar10 + 0xd) * 0x100 + (uint)*(byte *)((long)puVar10 + 0xc);
  uVar14 = (((uint)*(byte *)((long)puVar10 + 0xb) * 0x1000000 + -0x60b6453e) - iVar9) +
           (uint)*(byte *)((long)puVar10 + 10) * 0x10000 +
           (uint)*(byte *)((long)puVar10 + 9) * 0x100 + (uint)*(byte *)(puVar10 + 1) ^ 0x7f76d;
  uVar25 = (iVar9 + 0x1124109) - uVar14 ^ uVar14 << 8;
  uVar3 = (-0x1124109 - uVar14) - uVar25 ^ uVar25 >> 0xd;
  uVar14 = (uVar14 - uVar25) - uVar3 ^ uVar3 >> 0xc;
  uVar25 = (uVar25 - uVar3) - uVar14 ^ uVar14 << 0x10;
  uVar3 = (uVar3 - uVar14) - uVar25 ^ uVar25 >> 5;
  uVar14 = (uVar14 - uVar25) - uVar3 ^ uVar3 >> 3;
  uVar25 = (uVar25 - uVar3) - uVar14 ^ uVar14 << 10;
  uVar14 = (uVar3 - uVar14) - uVar25 ^ uVar25 >> 0xf;
  *(uint *)((long)puVar10 + 0x5c) = uVar14;
  lVar22 = *(long *)*plVar23;
  uVar19 = (ulong)(uVar14 & (int)((long *)*plVar23)[1] - 1U);
  plVar23 = (long *)(lVar22 + uVar19 * 0x10);
  lVar18 = *plVar23;
  uVar14 = (int)plVar23[1] + 1;
  *(uint *)(plVar23 + 1) = uVar14;
  puVar10[9] = lVar18;
  if (lVar18 != 0) {
    *(long **)(lVar18 + 0x18) = plVar16;
  }
  *plVar23 = (long)plVar16;
  if ((*(int *)(lVar22 + uVar19 * 0x10 + 0xc) * 10 + 10U <= uVar14) &&
     (puVar26 = (undefined8 *)*plVar16, *(int *)((long)puVar26 + 0x34) != 1)) {
    __s = malloc((ulong)(uint)(*(int *)(puVar26 + 1) << 1) << 4);
    if (__s == (void *)0x0) {
LAB_0088e644:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0,(ulong)(uint)(*(int *)(puVar26 + 1) << 1) << 4);
    uVar25 = *(uint *)(puVar26 + 1);
    __ptr = (void *)*puVar26;
    uVar14 = *(uint *)(puVar26 + 2) >> (ulong)(*(int *)((long)puVar26 + 0xc) + 1U & 0x1f);
    uVar3 = uVar25 * 2 - 1;
    if ((uVar3 & *(uint *)(puVar26 + 2)) != 0) {
      uVar14 = uVar14 + 1;
    }
    *(uint *)(puVar26 + 5) = uVar14;
    *(undefined4 *)((long)puVar26 + 0x2c) = 0;
    if (uVar25 != 0) {
      iVar9 = 0;
      uVar19 = 0;
      do {
        lVar22 = *(long *)((long)__ptr + uVar19 * 0x10);
        while (lVar22 != 0) {
          uVar20 = (ulong)(*(uint *)(lVar22 + 0x34) & uVar3);
          plVar23 = (long *)((long)__s + uVar20 * 0x10);
          lVar18 = *(long *)(lVar22 + 0x20);
          uVar1 = (int)plVar23[1] + 1;
          *(uint *)(plVar23 + 1) = uVar1;
          if (uVar14 < uVar1) {
            iVar9 = iVar9 + 1;
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar1 / uVar14;
            }
            *(int *)((long)puVar26 + 0x2c) = iVar9;
            *(uint *)((long)__s + uVar20 * 0x10 + 0xc) = uVar6;
          }
          *(undefined8 *)(lVar22 + 0x18) = 0;
          lVar21 = *plVar23;
          *(long *)(lVar22 + 0x20) = lVar21;
          if (lVar21 != 0) {
            *(long *)(lVar21 + 0x18) = lVar22;
          }
          *plVar23 = lVar22;
          lVar22 = lVar18;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar25);
    }
    free(__ptr);
    puVar26 = (undefined8 *)*plVar16;
    *puVar26 = __s;
    *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) << 1;
    *(int *)((long)puVar26 + 0xc) = *(int *)((long)puVar26 + 0xc) + 1;
    if (*(uint *)(puVar26 + 2) >> 1 < *(uint *)((long)puVar26 + 0x2c)) {
      iVar9 = *(int *)(puVar26 + 6);
      *(uint *)(puVar26 + 6) = iVar9 + 1U;
      if (1 < iVar9 + 1U) {
        *(undefined4 *)((long)puVar26 + 0x34) = 1;
      }
    }
    else {
      *(undefined4 *)(puVar26 + 6) = 0;
    }
  }
  *(bool *)((long)puVar10 + 0x21) = param_6;
LAB_0088e460:
  p_Var24 = (_ccArray *)*puVar10;
  if (p_Var24 == (_ccArray *)0x0) {
    uVar13 = ccArrayNew(10);
    *puVar10 = uVar13;
  }
  else {
    lVar22 = *(long *)p_Var24;
    if (0 < lVar22) {
      lVar18 = *(long *)(p_Var24 + 0x10);
      bVar4 = *param_7;
      __n = *(size_t *)(param_7 + 8);
      __s1 = *(basic_string **)(param_7 + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        __s1 = param_7 + 1;
        __n = (ulong)((byte)bVar4 >> 1);
      }
      lVar21 = 0;
      do {
        lVar12 = *(long *)(lVar18 + lVar21 * 8);
        if ((lVar12 != 0) &&
           (lVar12 = __dynamic_cast(lVar12,&Ref::typeinfo,&TimerTargetCallback::typeinfo,0),
           lVar12 != 0)) {
          bVar5 = *(byte *)(lVar12 + 0x70);
          sVar2 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar2 = *(size_t *)(lVar12 + 0x78);
          }
          if (__n == sVar2) {
            __s2 = (basic_string *)(lVar12 + 0x71);
            if ((bVar5 & 1) != 0) {
              __s2 = *(basic_string **)(lVar12 + 0x80);
            }
            sVar2 = -(ulong)((byte)bVar4 >> 1);
            pbVar7 = param_7;
            sVar8 = __n;
            if (((byte)bVar4 & 1) == 0) {
              while( true ) {
                if (sVar8 == 0) goto LAB_0088e604;
                if (pbVar7[1] != *__s2) break;
                sVar2 = sVar2 + 1;
                __s2 = __s2 + 1;
                pbVar7 = pbVar7 + 1;
                sVar8 = sVar2;
              }
            }
            else if ((__n == 0) || (iVar9 = memcmp(__s1,__s2,__n), iVar9 == 0)) {
LAB_0088e604:
              *(float *)(lVar12 + 0x2c) = param_3;
              lVar17 = *(long *)(lVar17 + 0x28);
              goto LAB_0088e610;
            }
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < lVar22);
    }
    ccArrayEnsureExtraCapacity(p_Var24,1);
  }
  this_00 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x16) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x80) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined ***)this_00 = &PTR__TimerTargetCallback_01c67288;
  }
  TimerTargetCallback::initWithCallback
            ((TimerTargetCallback *)this_00,this,param_1,param_2,param_7,param_3,param_4,param_5);
  ccArrayAppendObject((_ccArray *)*puVar10,this_00);
  Ref::release(this_00);
  lVar17 = *(long *)(lVar17 + 0x28);
LAB_0088e610:
  if (lVar17 != lVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

