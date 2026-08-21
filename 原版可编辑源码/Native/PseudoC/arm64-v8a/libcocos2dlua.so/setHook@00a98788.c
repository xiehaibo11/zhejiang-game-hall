
/* fairygui::Transition::setHook(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void ()>) */

void __thiscall fairygui::Transition::setHook(Transition *this,byte *param_1,long *param_3)

{
  size_t sVar1;
  size_t __n;
  long *plVar2;
  byte *__s2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar6 = *(long **)(this + 0x48);
  plVar2 = *(long **)(this + 0x50);
  if (plVar6 != plVar2) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00a987c4 to 00b9881b has its CatchHandler @ 00a987c4
                       catch() { ... } // from try @ 00a987c4 with catch @ 00a987c4
                       catch() { ... } // from try @ 00a98820 with catch @ 00a987c4 */
    if ((*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)(*param_1 >> 1);
    }
    do {
      lVar12 = *plVar6;
      bVar3 = *(byte *)(lVar12 + 0x30);
      uVar7 = (ulong)(bVar3 >> 1);
      sVar1 = uVar7;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar12 + 0x38);
      }
      if (sVar1 == __n) {
        pvVar11 = *(void **)(lVar12 + 0x40);
        if ((bVar3 & 1) == 0) {
          pvVar11 = (void *)(lVar12 + 0x31);
        }
        if ((bVar3 & 1) != 0) {
          if ((__n == 0) || (iVar5 = memcmp(pvVar11,__s2,__n), iVar5 == 0)) goto LAB_00a98900;
          goto LAB_00a98860;
        }
                    /* try { // try from 00a9881c to 00b9881f has its CatchHandler @ 00a98884 */
        if (__n != 0) {
                    /* try { // try from 00a98820 to 00b9889f has its CatchHandler @ 00a987c4 */
          pbVar9 = (byte *)(lVar12 + 0x31);
          pbVar10 = __s2;
          while (*pbVar9 == *pbVar10) {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            pbVar10 = pbVar10 + 1;
            if (uVar7 == 0) goto LAB_00a98900;
          }
          goto LAB_00a98860;
        }
LAB_00a98900:
        plVar6 = (long *)param_3[4];
        if (plVar6 == (long *)0x0) {
          local_70 = (long *)0x0;
        }
        else if (param_3 == plVar6) {
          local_70 = alStack_90;
          (**(code **)(*plVar6 + 0x18))(plVar6,alStack_90);
        }
        else {
          local_70 = (long *)(**(code **)(*plVar6 + 0x10))();
        }
        lVar12 = lVar12 + 0x50;
LAB_00a98970:
        FUN_008820fc(alStack_90,lVar12);
                    /* try { // try from 00a98980 to 00b989cb has its CatchHandler @ 00a98980
                       catch() { ... } // from try @ 00a98980 with catch @ 00a98980
                       catch() { ... } // from try @ 00a989d0 with catch @ 00a98980 */
        if (alStack_90 == local_70) {
          pcVar8 = *(code **)(*local_70 + 0x20);
        }
        else {
          if (local_70 == (long *)0x0) break;
          pcVar8 = *(code **)(*local_70 + 0x28);
        }
        (*pcVar8)();
        break;
      }
LAB_00a98860:
      lVar12 = *(long *)(lVar12 + 0x28);
      if (lVar12 != 0) {
        bVar3 = *(byte *)(lVar12 + 0x28);
        uVar7 = (ulong)(bVar3 >> 1);
        sVar1 = uVar7;
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(lVar12 + 0x30);
        }
                    /* catch() { ... } // from try @ 00a9881c with catch @ 00a98884 */
        if (sVar1 == __n) {
          pvVar11 = *(void **)(lVar12 + 0x38);
          if ((bVar3 & 1) == 0) {
            pvVar11 = (void *)(lVar12 + 0x29);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00a988dc:
              plVar6 = (long *)param_3[4];
              if (plVar6 == (long *)0x0) {
                local_70 = (long *)0x0;
              }
              else if (param_3 == plVar6) {
                local_70 = alStack_90;
                (**(code **)(*plVar6 + 0x18))(plVar6,alStack_90);
              }
              else {
                local_70 = (long *)(**(code **)(*plVar6 + 0x10))();
              }
              lVar12 = lVar12 + 0x40;
              goto LAB_00a98970;
            }
            pbVar9 = (byte *)(lVar12 + 0x29);
            pbVar10 = __s2;
            while (*pbVar9 == *pbVar10) {
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
              if (uVar7 == 0) goto LAB_00a988dc;
            }
          }
          else if ((__n == 0) || (iVar5 = memcmp(pvVar11,__s2,__n), iVar5 == 0)) goto LAB_00a988dc;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00a989cc to 00b989cf has its CatchHandler @ 00a98a04 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a989d0 to 00b98a17 has its CatchHandler @ 00a98980 */
  __stack_chk_fail();
}

