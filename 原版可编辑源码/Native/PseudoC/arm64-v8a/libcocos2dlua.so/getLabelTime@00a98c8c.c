
/* fairygui::Transition::getLabelTime(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

float __thiscall fairygui::Transition::getLabelTime(Transition *this,basic_string *param_1)

{
  size_t __n;
  size_t __n_00;
  long *plVar1;
  basic_string *__s2;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  ulong uVar7;
  long *plVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  
  plVar8 = *(long **)(this + 0x48);
  plVar1 = *(long **)(this + 0x50);
  if (plVar8 != plVar1) {
    __n_00 = *(size_t *)(param_1 + 8);
    __s2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n_00 = (ulong)((byte)*param_1 >> 1);
    }
    do {
      pfVar9 = (float *)*plVar8;
      bVar2 = *(byte *)(pfVar9 + 0xc);
      uVar10 = (ulong)(bVar2 >> 1);
      __n = uVar10;
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(pfVar9 + 0xe);
      }
      if (__n == __n_00) {
        pvVar4 = *(void **)(pfVar9 + 0x10);
        if ((bVar2 & 1) == 0) {
          pvVar4 = (void *)((long)pfVar9 + 0x31);
        }
        if ((bVar2 & 1) == 0) {
          if (__n_00 == 0) {
LAB_00a98dd8:
            return *pfVar9;
          }
          pbVar5 = (basic_string *)((long)pfVar9 + 0x31);
          pbVar6 = __s2;
          uVar7 = uVar10;
          while (*pbVar5 == *pbVar6) {
            uVar7 = uVar7 - 1;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar6 + 1;
            if (uVar7 == 0) goto LAB_00a98dd8;
          }
        }
        else if ((__n_00 == 0) || (iVar3 = memcmp(pvVar4,__s2,__n_00), iVar3 == 0))
        goto LAB_00a98dd8;
        pfVar11 = *(float **)(pfVar9 + 10);
        if ((pfVar11 != (float *)0x0) && (__n == __n_00)) {
          pvVar4 = *(void **)(pfVar9 + 0x10);
          if ((bVar2 & 1) == 0) {
            pvVar4 = (void *)((long)pfVar9 + 0x31);
          }
          if ((bVar2 & 1) == 0) {
            if (__n == 0) {
LAB_00a98dbc:
              return *pfVar9 + *pfVar11;
            }
            pbVar5 = (basic_string *)((long)pfVar9 + 0x31);
            pbVar6 = __s2;
            while (*pbVar5 == *pbVar6) {
              uVar10 = uVar10 - 1;
              pbVar5 = pbVar5 + 1;
              pbVar6 = pbVar6 + 1;
              if (uVar10 == 0) goto LAB_00a98dbc;
            }
          }
          else if ((__n == 0) || (iVar3 = memcmp(pvVar4,__s2,__n), iVar3 == 0)) goto LAB_00a98dbc;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return NAN;
}

