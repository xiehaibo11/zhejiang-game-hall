
/* cocos2d::Scheduler::isScheduled(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, void*) */

void __thiscall cocos2d::Scheduler::isScheduled(Scheduler *this,basic_string *param_1,void *param_2)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  size_t __n;
  basic_string *__s1;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  basic_string *__s2;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  basic_string *pbVar15;
  long lVar16;
  long lVar17;
  
  lVar6 = tpidr_el0;
  lVar11 = *(long *)(lVar6 + 0x28);
  if (*(long *)this != 0) {
    uVar10 = (uint)param_2;
    iVar7 = (int)((ulong)param_2 >> 0x20);
    uVar10 = (((uVar10 & 0xff000000) + 0x9f49bac2) - (iVar7 + -0x61c88647)) + (uVar10 & 0xff0000) +
             (uVar10 & 0xff00) + (uVar10 & 0xff) ^ 0x7f76d;
    uVar2 = (iVar7 + -0x60b6453e) - uVar10 ^ uVar10 << 8;
    uVar3 = (-0x1124109 - uVar10) - uVar2 ^ uVar2 >> 0xd;
    uVar10 = (uVar10 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar12 = *(long **)(*(long *)this + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar10 ^ uVar10 << 0x10;
    uVar3 = (uVar3 - uVar10) - uVar2 ^ uVar2 >> 5;
    uVar10 = (uVar10 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar10 ^ uVar10 << 10;
    lVar14 = *(long *)(*plVar12 +
                      (ulong)(((uVar3 - uVar10) - uVar2 ^ uVar2 >> 0xf) & (int)plVar12[1] - 1U) *
                      0x10);
    if ((lVar14 != 0) && (plVar13 = (long *)(lVar14 - plVar12[4]), plVar13 != (long *)0x0)) {
      while (((int)plVar13[0xb] != 8 || (*(void **)plVar13[10] != param_2))) {
        if ((plVar13[9] == 0) ||
           (plVar13 = (long *)(plVar13[9] - plVar12[4]), plVar13 == (long *)0x0)) goto LAB_0088e7ac;
      }
      plVar13 = (long *)*plVar13;
      if ((plVar13 != (long *)0x0) && (lVar14 = *plVar13, 0 < lVar14)) {
        bVar4 = *param_1;
        lVar17 = plVar13[2];
        __n = *(size_t *)(param_1 + 8);
        __s1 = *(basic_string **)(param_1 + 0x10);
        lVar16 = 0;
        if (((byte)bVar4 & 1) == 0) {
          __s1 = param_1 + 1;
          __n = (ulong)((byte)bVar4 >> 1);
        }
        goto LAB_0088e830;
      }
    }
  }
LAB_0088e7ac:
  uVar8 = 0;
  goto LAB_0088e7b0;
LAB_0088e830:
  do {
    lVar9 = *(long *)(lVar17 + lVar16 * 8);
    if ((lVar9 != 0) &&
       (lVar9 = __dynamic_cast(lVar9,&Ref::typeinfo,&TimerTargetCallback::typeinfo,0), lVar9 != 0))
    {
      bVar5 = *(byte *)(lVar9 + 0x70);
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(lVar9 + 0x78);
      }
      if (__n == sVar1) {
        __s2 = (basic_string *)(lVar9 + 0x71);
        if ((bVar5 & 1) != 0) {
          __s2 = *(basic_string **)(lVar9 + 0x80);
        }
        if (((byte)bVar4 & 1) == 0) {
          lVar9 = -(ulong)((byte)bVar4 >> 1);
          pbVar15 = param_1;
          if (__n == 0) {
LAB_0088e8d8:
            uVar8 = 1;
            break;
          }
          while (pbVar15 = pbVar15 + 1, *pbVar15 == *__s2) {
            __s2 = __s2 + 1;
            lVar9 = lVar9 + 1;
            uVar8 = 1;
            if (lVar9 == 0) goto LAB_0088e7b0;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) goto LAB_0088e8d8;
      }
    }
    lVar16 = lVar16 + 1;
    uVar8 = 0;
  } while (lVar16 < lVar14);
LAB_0088e7b0:
  if (*(long *)(lVar6 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

