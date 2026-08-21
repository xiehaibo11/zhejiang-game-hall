
/* cocos2d::Scheduler::isScheduled(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, void const*) const */

undefined8 __thiscall
cocos2d::Scheduler::isScheduled(Scheduler *this,basic_string *param_1,void *param_2)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  size_t __n;
  basic_string *__s1;
  basic_string bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  basic_string *__s2;
  uint uVar8;
  long *plVar9;
  basic_string *pbVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  if (*(long *)(this + 0x60) != 0) {
    uVar8 = (uint)param_2;
    iVar6 = (int)((ulong)param_2 >> 0x20) + -0x61c88647;
    uVar8 = ((uVar8 & 0xff000000) - iVar6) + (uVar8 & 0xff0000) + (uVar8 & 0xff00) + (uVar8 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar6 - uVar8) + 0x1124109 ^ uVar8 << 8;
    uVar3 = 0xfeedbef7 - (uVar8 + uVar2) ^ uVar2 >> 0xd;
    uVar8 = (uVar8 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar9 = *(long **)(*(long *)(this + 0x60) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar8 ^ uVar8 << 0x10;
    uVar3 = (uVar3 - uVar8) - uVar2 ^ uVar2 >> 5;
    uVar8 = (uVar8 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar8 ^ uVar8 << 10;
    lVar11 = *(long *)(*plVar9 +
                      (ulong)(((uVar3 - uVar8) - uVar2 ^ uVar2 >> 0xf) & (int)plVar9[1] - 1U) * 0x10
                      );
    while (lVar11 != 0) {
      plVar12 = (long *)(lVar11 - plVar9[4]);
      if (((int)plVar12[0xb] == 8) && (*(void **)plVar12[10] == param_2)) {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          return 0;
        }
        lVar11 = *plVar12;
        if (lVar11 < 1) {
          return 0;
        }
        bVar4 = *param_1;
        plVar9 = (long *)plVar12[2];
        __n = *(size_t *)(param_1 + 8);
        __s1 = *(basic_string **)(param_1 + 0x10);
        lVar14 = 0;
        if (((byte)bVar4 & 1) == 0) {
          __s1 = param_1 + 1;
          __n = (ulong)((byte)bVar4 >> 1);
        }
        lVar7 = *plVar9;
        if (lVar7 != 0) goto LAB_00fb4880;
        do {
          while( true ) {
            do {
              do {
                do {
                  lVar14 = lVar14 + 1;
                  if (lVar11 <= lVar14) {
                    return 0;
                  }
                  lVar7 = plVar9[lVar14];
                } while (lVar7 == 0);
LAB_00fb4880:
                lVar7 = __dynamic_cast(lVar7,&Ref::typeinfo,&TimerTargetCallback::typeinfo,0);
              } while ((lVar7 == 0) ||
                      ((*(char *)(lVar7 + 0x34) == '\0' &&
                       (*(uint *)(lVar7 + 0x3c) < *(uint *)(lVar7 + 0x38)))));
              bVar5 = *(byte *)(lVar7 + 0x90);
              sVar1 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                sVar1 = *(size_t *)(lVar7 + 0x98);
              }
            } while (__n != sVar1);
            __s2 = (basic_string *)(lVar7 + 0x91);
            if ((bVar5 & 1) != 0) {
              __s2 = *(basic_string **)(lVar7 + 0xa0);
            }
            if (((byte)bVar4 & 1) != 0) break;
            uVar13 = (ulong)((byte)bVar4 >> 1);
            pbVar10 = param_1;
            if (__n == 0) {
              return 1;
            }
            while (pbVar10 = pbVar10 + 1, *pbVar10 == *__s2) {
              uVar13 = uVar13 - 1;
              __s2 = __s2 + 1;
              if (uVar13 == 0) {
                return 1;
              }
            }
          }
        } while ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0));
        return 1;
      }
      lVar11 = plVar12[9];
    }
  }
  return 0;
}

