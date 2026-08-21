
/* cocostudio::DisplayManager::changeDisplayWithName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocostudio::DisplayManager::changeDisplayWithName
          (DisplayManager *this,basic_string *param_1,bool param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  basic_string bVar3;
  int iVar4;
  long lVar5;
  basic_string *__s2;
  ulong uVar6;
  basic_string *pbVar7;
  void *__s1;
  ulong uVar8;
  
  lVar5 = *(long *)(this + 0x28);
  if (0 < *(long *)(this + 0x30) - lVar5) {
    uVar8 = 0;
    do {
      lVar5 = (**(code **)(**(long **)(lVar5 + uVar8 * 8) + 0x30))();
      bVar2 = *(byte *)(lVar5 + 0x28);
      bVar3 = *param_1;
      uVar6 = (ulong)(bVar2 >> 1);
      __n = uVar6;
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar5 + 0x30);
      }
      sVar1 = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 8);
      }
      if (__n == sVar1) {
        __s1 = *(void **)(lVar5 + 0x38);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x29);
        }
        __s2 = param_1 + 1;
        if (((byte)bVar3 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
LAB_00c43fc0:
            this[0x5c] = (DisplayManager)param_2;
            if (*(int *)(this + 0x58) == (int)uVar8) {
              return;
            }
            *(int *)(this + 0x58) = (int)uVar8;
                    /* WARNING: Could not recover jumptable at 0x00c44010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)this + 0x18))
                      (this,*(undefined8 *)(*(long *)(this + 0x28) + (uVar8 & 0xffffffff) * 8));
            return;
          }
          pbVar7 = (basic_string *)(lVar5 + 0x29);
          while (*pbVar7 == *__s2) {
            uVar6 = uVar6 - 1;
            pbVar7 = pbVar7 + 1;
            __s2 = __s2 + 1;
            if (uVar6 == 0) goto LAB_00c43fc0;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00c43fc0;
      }
      lVar5 = *(long *)(this + 0x28);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < *(long *)(this + 0x30) - lVar5 >> 3);
  }
  return;
}

