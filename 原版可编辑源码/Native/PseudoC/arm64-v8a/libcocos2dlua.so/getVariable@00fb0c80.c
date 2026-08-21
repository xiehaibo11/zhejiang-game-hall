
/* cocos2d::Properties::getVariable(char const*, char const*) const */

char * __thiscall cocos2d::Properties::getVariable(Properties *this,char *param_1,char *param_2)

{
  size_t sVar1;
  void *__s1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1 == (char *)0x0) {
    return param_2;
  }
  plVar6 = *(long **)(this + 0x98);
  do {
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      lVar3 = plVar6[1];
      if (lVar3 - lVar2 != 0) {
        __n = strlen(param_1);
        uVar8 = 0;
        lVar7 = 0x28;
        do {
          bVar4 = *(byte *)(lVar2 + lVar7 + -0x28);
          sVar1 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar1 = *(size_t *)(lVar2 + lVar7 + -0x20);
          }
          if (__n == sVar1) {
            if (__n == 0) {
LAB_00fb0d58:
              if ((*(byte *)(lVar2 + lVar7 + -0x10) & 1) == 0) {
                return (char *)(lVar2 + lVar7 + -0xf);
              }
              return *(char **)(lVar2 + lVar7);
            }
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            __s1 = (void *)(lVar2 + lVar7 + -0x27);
            if ((bVar4 & 1) != 0) {
              __s1 = *(void **)(lVar2 + lVar7 + -0x18);
            }
            iVar5 = memcmp(__s1,param_1,__n);
            if (iVar5 == 0) goto LAB_00fb0d58;
          }
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x30;
        } while (uVar8 < (ulong)((lVar3 - lVar2 >> 4) * -0x5555555555555555));
      }
    }
    this = *(Properties **)(this + 0xa8);
    if (this == (Properties *)0x0) {
      return param_2;
    }
    plVar6 = *(long **)(this + 0x98);
  } while( true );
}

