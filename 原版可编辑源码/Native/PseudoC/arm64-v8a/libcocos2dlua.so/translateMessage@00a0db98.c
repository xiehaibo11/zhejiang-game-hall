
/* universe::network::Packer32::translateMessage(universe::network::Touchbar&,
   universe::network::IncludeHistory&) */

void __thiscall
universe::network::Packer32::translateMessage
          (Packer32 *this,Touchbar *param_1,IncludeHistory *param_2)

{
  int *__dest;
  long lVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  ulong uVar8;
  IncludeHistory *pIVar9;
  OStream aOStack_a8 [24];
  OStream aOStack_90 [24];
  undefined **local_78;
  undefined8 local_70;
  long local_68;
  
                    /* try { // try from 00a0dba0 to 00b0dba7 has its CatchHandler @ 00a0dc38 */
                    /* try { // try from 00a0dba8 to 00b0dbc7 has its CatchHandler @ 00a0dad8 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a0dbc8 to 00b0dbcf has its CatchHandler @ 00a0dc38 */
                    /* try { // try from 00a0dbd0 to 00b0dbef has its CatchHandler @ 00a0dad8 */
  local_78 = &PTR__Background_016a2478;
  local_70 = 0;
                    /* try { // try from 00a0dbf0 to 00b0dbfb has its CatchHandler @ 00a0dc38 */
  OStream::OStream(aOStack_90,(char *)0x0,0);
                    /* try { // try from 00a0dbfc to 00b0dc3f has its CatchHandler @ 00a0dad8 */
  if (7 < (ulong)(*(long *)param_1 - *(long *)(param_1 + 8))) {
    do {
      pcVar2 = (char *)Translated::getInstance();
      Translated::log(pcVar2,"readable = %d",*(long *)param_1 - *(long *)(param_1 + 8));
      OStream::fastSet(aOStack_90,(char *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)),8);
      (*(code *)local_78[4])(&local_78);
      (*(code *)local_78[3])(&local_78,aOStack_90);
      OStream::OStream(aOStack_a8,aOStack_90);
      OStream::~OStream(aOStack_a8);
      OStream::fastSet(aOStack_90,(char *)0x0,0);
      uVar5 = *(long *)param_1 - *(long *)(param_1 + 8);
      if (uVar5 < (local_70 & 0xffff) + 8) break;
      if (7 < uVar5) {
        uVar5 = 8;
      }
      if (uVar5 != 0) {
        *(ulong *)(param_1 + 8) = uVar5 + *(long *)(param_1 + 8);
      }
      if (IncludeSymbols::getInstance()::s_MessagePool == (IncludeSymbols *)0x0) {
        IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
        *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
      }
      piVar3 = (int *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
      if (piVar3 != (int *)0x0) {
        iVar4 = 1;
        piVar3[3] = 0;
        piVar3[4] = 0;
        *piVar3 = 1;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[5] = local_70._4_4_;
        piVar3[6] = (uint)local_70._2_2_;
        uVar5 = local_70 & 0xffff;
        *(ulong *)(piVar3 + 8) = uVar5;
        if (uVar5 != 0) {
          __dest = piVar3 + 0xc;
          __n = *(long *)param_1 - *(long *)(param_1 + 8);
          if (uVar5 <= __n) {
            __n = uVar5;
          }
          if (__n != 0) {
            memcpy(__dest,(void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)),__n);
            *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0ddfc with catch @ 00a0dd8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0de2c with catch @ 00a0dd8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0de5c with catch @ 00a0dd8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0de84 with catch @ 00a0dd8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0deb0 with catch @ 00a0dd8c
                        */
          Encryption::decrypt((Encryption *)(this + 8),(uchar *)__dest,(uchar *)__dest,uVar5,
                              (uchar *)0x0,(int *)0x0);
          iVar4 = *piVar3;
          if (3 < iVar4) {
                    /* try { // try from 00a0ddfc to 00b0de1f has its CatchHandler @ 00a0dd8c */
            operator_delete(piVar3);
            goto LAB_00a0dc4c;
          }
        }
        lVar6 = *(long *)(param_2 + (long)iVar4 * 0x30 + 8);
        pIVar9 = param_2 + (long)iVar4 * 0x30 + 0x28;
        lVar7 = *(long *)pIVar9;
        uVar5 = 0;
        if (*(long *)(param_2 + (long)iVar4 * 0x30 + 0x10) - lVar6 != 0) {
          uVar5 = (*(long *)(param_2 + (long)iVar4 * 0x30 + 0x10) - lVar6) * 0x40 - 1;
        }
        uVar8 = lVar7 + *(long *)(param_2 + (long)iVar4 * 0x30 + 0x20);
        if (uVar5 == uVar8) {
                    /* try { // try from 00a0ddf4 to 00b0ddfb has its CatchHandler @ 00a0def0 */
          std::__ndk1::
          deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
          ::__add_back_capacity
                    ((deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
                      *)(param_2 + (long)iVar4 * 0x30));
          lVar7 = *(long *)pIVar9;
          lVar6 = *(long *)(param_2 + (long)iVar4 * 0x30 + 8);
          uVar8 = *(long *)(param_2 + (long)iVar4 * 0x30 + 0x20) + lVar7;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0dba0 with catch @ 00a0dc38
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0dbc8 with catch @ 00a0dc38
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0dbf0 with catch @ 00a0dc38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0db40 with catch @ 00a0dc3c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0db6c with catch @ 00a0dc3c
                        */
        *(int **)(*(long *)(lVar6 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
             piVar3;
        *(long *)pIVar9 = lVar7 + 1;
      }
LAB_00a0dc4c:
    } while (7 < (ulong)(*(long *)param_1 - *(long *)(param_1 + 8)));
  }
  OStream::~OStream(aOStack_90);
                    /* try { // try from 00a0de20 to 00b0de2b has its CatchHandler @ 00a0def0 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00a0de2c to 00b0de53 has its CatchHandler @ 00a0dd8c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

