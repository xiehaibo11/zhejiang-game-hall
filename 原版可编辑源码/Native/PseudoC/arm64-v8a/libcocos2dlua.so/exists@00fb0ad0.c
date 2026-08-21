
/* cocos2d::Properties::exists(char const*) const */

undefined8 __thiscall cocos2d::Properties::exists(Properties *this,char *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  size_t __n;
  byte *__s1;
  byte *pbVar5;
  
  if (param_1 != (char *)0x0) {
    pbVar5 = *(byte **)(this + 0x58);
    pbVar2 = *(byte **)(this + 0x60);
    if (pbVar5 != pbVar2) {
      __n = strlen(param_1);
      do {
        bVar3 = *pbVar5;
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar5 + 8);
        }
        if (__n == sVar1) {
          if (__n == 0) {
            return 1;
          }
          if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          __s1 = *(byte **)(pbVar5 + 0x10);
          if ((bVar3 & 1) == 0) {
            __s1 = pbVar5 + 1;
          }
          iVar4 = memcmp(__s1,param_1,__n);
          if (iVar4 == 0) {
            return 1;
          }
        }
        pbVar5 = pbVar5 + 0x30;
      } while (pbVar5 != pbVar2);
    }
  }
  return 0;
}

