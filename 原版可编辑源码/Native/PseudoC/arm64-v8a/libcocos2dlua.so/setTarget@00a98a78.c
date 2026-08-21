
/* fairygui::Transition::setTarget(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, fairygui::GObject*) */

void __thiscall
fairygui::Transition::setTarget(Transition *this,basic_string *param_1,GObject *param_2)

{
  size_t __n;
  size_t sVar1;
  long *plVar2;
  byte bVar3;
  basic_string bVar4;
  GObject *pGVar5;
  int iVar6;
  basic_string *__s2;
  ulong uVar7;
  basic_string *pbVar8;
  void *__s1;
  long *plVar9;
  long lVar10;
  
  plVar9 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  if (plVar9 != plVar2) {
    do {
      lVar10 = *plVar9;
      bVar3 = *(byte *)(lVar10 + 0x30);
      bVar4 = *param_1;
      uVar7 = (ulong)(bVar3 >> 1);
      __n = uVar7;
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(lVar10 + 0x38);
      }
      sVar1 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 8);
      }
      if (__n == sVar1) {
        __s1 = *(void **)(lVar10 + 0x40);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar10 + 0x31);
        }
        __s2 = param_1 + 1;
        if (((byte)bVar4 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            pbVar8 = (basic_string *)(lVar10 + 0x31);
            do {
              if (*pbVar8 != *__s2) goto LAB_00a98ab8;
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              __s2 = __s2 + 1;
            } while (uVar7 != 0);
          }
        }
        else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00a98ab8;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar10 + 8) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_2 + 0x48)) {
          uVar7 = (ulong)((byte)param_2[0x48] >> 1);
          pGVar5 = param_2 + 0x49;
          if (((byte)param_2[0x48] & 1) != 0) {
            uVar7 = *(ulong *)(param_2 + 0x50);
            pGVar5 = *(GObject **)(param_2 + 0x58);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(lVar10 + 8),(char *)pGVar5,uVar7);
          lVar10 = *plVar9;
        }
        *(undefined8 *)(lVar10 + 0x88) = 0;
      }
LAB_00a98ab8:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  return;
}

