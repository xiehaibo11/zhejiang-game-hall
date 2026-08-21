
/* fairygui::Transition::setDuration(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float) */

void __thiscall
fairygui::Transition::setDuration(Transition *this,basic_string *param_1,float param_2)

{
  size_t __n;
  size_t sVar1;
  long *plVar2;
  byte bVar3;
  basic_string bVar4;
  int iVar5;
  basic_string *__s2;
  ulong uVar6;
  basic_string *pbVar7;
  long lVar8;
  void *__s1;
  long *plVar9;
  float *pfVar10;
  
  plVar9 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  if (plVar9 != plVar2) {
    do {
      lVar8 = *plVar9;
      pfVar10 = *(float **)(lVar8 + 0x28);
      if (pfVar10 != (float *)0x0) {
        bVar3 = *(byte *)(lVar8 + 0x30);
        bVar4 = *param_1;
        uVar6 = (ulong)(bVar3 >> 1);
        __n = uVar6;
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(lVar8 + 0x38);
        }
        sVar1 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar8 + 0x40);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar8 + 0x31);
          }
          __s2 = param_1 + 1;
          if (((byte)bVar4 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              pbVar7 = (basic_string *)(lVar8 + 0x31);
              do {
                if (*pbVar7 != *__s2) goto LAB_00a98bd0;
                uVar6 = uVar6 - 1;
                pbVar7 = pbVar7 + 1;
                __s2 = __s2 + 1;
              } while (uVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00a98bd0;
          *pfVar10 = param_2;
        }
      }
LAB_00a98bd0:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return;
}

