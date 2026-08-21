
/* fairygui::Transition::updateFromRelations(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float) */

void __thiscall
fairygui::Transition::updateFromRelations
          (Transition *this,basic_string *param_1,float param_2,float param_3)

{
  size_t __n;
  size_t sVar1;
  long *plVar2;
  byte bVar3;
  basic_string bVar4;
  int iVar5;
  basic_string *__s2;
  ulong uVar6;
  long lVar7;
  basic_string *pbVar8;
  undefined8 *puVar9;
  void *__s1;
  long *plVar10;
  long lVar11;
  
  plVar10 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  if ((((long)plVar2 - (long)plVar10 & 0x7fffffff8U) != 0) && (plVar10 != plVar2)) {
    do {
      lVar11 = *plVar10;
      if (*(int *)(lVar11 + 0x20) == 0) {
                    /* try { // try from 00a98f80 to 00b98fb3 has its CatchHandler @ 00a99080 */
        bVar3 = *(byte *)(lVar11 + 8);
        bVar4 = *param_1;
        uVar6 = (ulong)(bVar3 >> 1);
        __n = uVar6;
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(lVar11 + 0x10);
        }
        sVar1 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar11 + 0x18);
                    /* try { // try from 00a98fb4 to 00b98fc7 has its CatchHandler @ 00a9904c */
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar11 + 9);
          }
          __s2 = param_1 + 1;
          if (((byte)bVar4 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if ((bVar3 & 1) == 0) {
                    /* try { // try from 00a98fcc to 00b98fff has its CatchHandler @ 00a99050 */
            if (__n != 0) {
              pbVar8 = (basic_string *)(lVar11 + 9);
              do {
                if (*pbVar8 != *__s2) goto LAB_00a98f64;
                uVar6 = uVar6 - 1;
                pbVar8 = pbVar8 + 1;
                __s2 = __s2 + 1;
              } while (uVar6 != 0);
            }
          }
          else {
                    /* try { // try from 00a99000 to 00b9909b has its CatchHandler @ 00a98a18 */
            if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00a98f64;
          }
          lVar7 = *(long *)(lVar11 + 0x28);
          if (lVar7 == 0) {
            puVar9 = *(undefined8 **)(lVar11 + 0x48);
            if (*(char *)((long)puVar9 + 0x12) == '\0') goto LAB_00a98f58;
          }
          else {
            puVar9 = *(undefined8 **)(lVar7 + 0x10);
            if (*(char *)((long)puVar9 + 0x12) == '\0') {
              *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) + param_3,(float)*puVar9 + param_2)
              ;
              puVar9 = *(undefined8 **)(lVar7 + 0x18);
LAB_00a98f58:
              *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) + param_3,(float)*puVar9 + param_2)
              ;
            }
          }
        }
      }
LAB_00a98f64:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  return;
}

