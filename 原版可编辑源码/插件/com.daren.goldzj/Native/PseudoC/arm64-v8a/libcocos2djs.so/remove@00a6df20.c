
/* std::__ndk1::list<int, std::__ndk1::allocator<int> >::remove(int const&) */

void __thiscall
std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
          (list<int,std::__ndk1::allocator<int>> *this,int *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  list<int,std::__ndk1::allocator<int>> *plVar4;
  long *plVar5;
  long lVar6;
  list<int,std::__ndk1::allocator<int>> *plVar7;
  list<int,std::__ndk1::allocator<int>> *plVar8;
  list<int,std::__ndk1::allocator<int>> *plVar9;
  long lVar10;
  list<int,std::__ndk1::allocator<int>> *plVar11;
  long *plVar12;
  list<int,std::__ndk1::allocator<int>> *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  plVar7 = (list<int,std::__ndk1::allocator<int>> *)&local_50;
                    /* try { // try from 00a6df24 to 00b6df33 has its CatchHandler @ 00a6dff0 */
                    /* try { // try from 00a6df34 to 00b6e00b has its CatchHandler @ 00a6ded4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (list<int,std::__ndk1::allocator<int>> *)&local_50;
  local_48 = (long *)&local_50;
  local_40 = 0;
  if (this != *(list<int,std::__ndk1::allocator<int>> **)(this + 8)) {
    iVar1 = *param_1;
    lVar6 = 0;
    plVar9 = *(list<int,std::__ndk1::allocator<int>> **)(this + 8);
    do {
      if (*(int *)(plVar9 + 0x10) == iVar1) {
        for (plVar8 = *(list<int,std::__ndk1::allocator<int>> **)(plVar9 + 8); this != plVar8;
            plVar8 = *(list<int,std::__ndk1::allocator<int>> **)(plVar8 + 8)) {
          if (*(int *)(plVar8 + 0x10) != iVar1) {
            bVar3 = true;
            plVar4 = plVar8;
            goto joined_r0x00a6dfa4;
          }
        }
        bVar3 = false;
        plVar4 = this;
joined_r0x00a6dfa4:
        if (plVar9 != plVar4) {
          plVar7 = *(list<int,std::__ndk1::allocator<int>> **)plVar8;
          if ((list<int,std::__ndk1::allocator<int>> *)&local_50 != this) {
            lVar10 = 1;
            for (plVar11 = plVar9; plVar7 != plVar11;
                plVar11 = *(list<int,std::__ndk1::allocator<int>> **)(plVar11 + 8)) {
              lVar10 = lVar10 + 1;
            }
                    /* catch() { ... } // from try @ 00a6df24 with catch @ 00a6dff0 */
            lVar6 = lVar6 + lVar10;
            *(long *)(this + 0x10) = *(long *)(this + 0x10) - lVar10;
            local_40 = lVar6;
          }
          lVar10 = *(long *)plVar9;
                    /* try { // try from 00a6e00c to 00b6e05f has its CatchHandler @ 00a6e00c
                       catch() { ... } // from try @ 00a6e00c with catch @ 00a6e00c
                       catch() { ... } // from try @ 00a6e110 with catch @ 00a6e00c */
          *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(plVar7 + 8);
          **(long **)(plVar7 + 8) = lVar10;
          *(list<int,std::__ndk1::allocator<int>> **)(local_50 + 8) = plVar9;
          *(list<int,std::__ndk1::allocator<int>> **)plVar9 = local_50;
          local_50 = plVar7;
          *(list<int,std::__ndk1::allocator<int>> ***)(plVar7 + 8) = &local_50;
        }
        plVar9 = plVar4;
        if (bVar3) goto LAB_00a6e030;
      }
      else {
LAB_00a6e030:
        plVar8 = *(list<int,std::__ndk1::allocator<int>> **)(plVar9 + 8);
      }
      plVar9 = plVar8;
    } while (this != plVar8);
    if (lVar6 != 0) {
      lVar6 = *local_48;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(plVar7 + 8);
                    /* try { // try from 00a6e060 to 00b6e077 has its CatchHandler @ 00a6e18c */
      **(long **)(plVar7 + 8) = lVar6;
      local_40 = 0;
      plVar5 = local_48;
      if ((list<int,std::__ndk1::allocator<int>> **)local_48 != &local_50) {
        do {
          plVar12 = (long *)plVar5[1];
          operator_delete(plVar5);
          plVar5 = plVar12;
        } while ((list<int,std::__ndk1::allocator<int>> **)plVar12 != &local_50);
      }
    }
  }
                    /* try { // try from 00a6e080 to 00b6e08b has its CatchHandler @ 00a6e188 */
                    /* try { // try from 00a6e08c to 00b6e097 has its CatchHandler @ 00a6e184 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a6e098 to 00b6e10f has its CatchHandler @ 00a6e19c */
  return;
}

