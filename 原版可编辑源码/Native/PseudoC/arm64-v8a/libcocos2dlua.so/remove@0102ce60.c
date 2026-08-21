
/* std::__ndk1::list<p2t::Triangle*, std::__ndk1::allocator<p2t::Triangle*> >::remove(p2t::Triangle*
   const&) */

void __thiscall
std::__ndk1::list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::remove
          (list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *this,Triangle **param_1)

{
  long lVar1;
  bool bVar2;
  list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *plVar3;
  long *plVar4;
  long lVar5;
  list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *plVar6;
  list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *plVar7;
  list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *plVar8;
  long lVar9;
  list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *plVar10;
  long *plVar11;
  list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  plVar6 = (list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50;
  local_48 = (long *)&local_50;
  local_40 = 0;
  if (this != *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)(this + 8)) {
    lVar5 = 0;
    plVar8 = *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)(this + 8);
    do {
      if (*(Triangle **)(plVar8 + 0x10) == *param_1) {
        for (plVar7 = *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)(plVar8 + 8);
            this != plVar7;
            plVar7 = *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)(plVar7 + 8))
        {
          if (*(Triangle **)(plVar7 + 0x10) != *(Triangle **)(plVar8 + 0x10)) {
            bVar2 = true;
            plVar3 = plVar7;
            goto joined_r0x0102cf10;
          }
        }
        bVar2 = false;
                    /* try { // try from 0102cef4 to 0112cf13 has its CatchHandler @ 0102cf70 */
        plVar3 = this;
joined_r0x0102cf10:
        if (plVar8 != plVar3) {
                    /* try { // try from 0102cf14 to 0112cf8b has its CatchHandler @ 0102ce5c */
          plVar6 = *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)plVar7;
          if ((list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)&local_50 != this) {
            lVar9 = 1;
            for (plVar10 = plVar8; plVar6 != plVar10;
                plVar10 = *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)
                           (plVar10 + 8)) {
              lVar9 = lVar9 + 1;
            }
            lVar5 = lVar5 + lVar9;
            *(long *)(this + 0x10) = *(long *)(this + 0x10) - lVar9;
            local_40 = lVar5;
          }
                    /* catch() { ... } // from try @ 0102cea4 with catch @ 0102cf54 */
          lVar9 = *(long *)plVar8;
          *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(plVar6 + 8);
          **(long **)(plVar6 + 8) = lVar9;
          *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)(local_50 + 8) = plVar8;
                    /* catch() { ... } // from try @ 0102cef4 with catch @ 0102cf70 */
          *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)plVar8 = local_50;
          local_50 = plVar6;
          *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> ***)(plVar6 + 8) = &local_50
          ;
        }
        plVar8 = plVar3;
        if (bVar2) goto LAB_0102cea8;
      }
      else {
LAB_0102cea8:
        plVar7 = *(list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)(plVar8 + 8);
      }
                    /* try { // try from 0102ceac to 0112cef3 has its CatchHandler @ 0102ce5c */
      plVar8 = plVar7;
    } while (this != plVar7);
    if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 0102cfe8 with catch @ 0102cf8c */
      lVar5 = *local_48;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(plVar6 + 8);
      **(long **)(plVar6 + 8) = lVar5;
      local_40 = 0;
      plVar4 = local_48;
      if ((list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)local_48 != &local_50) {
        do {
          plVar11 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar11;
                    /* try { // try from 0102cfbc to 0112cfc3 has its CatchHandler @ 0102d034 */
        } while ((list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> **)plVar11 !=
                 &local_50);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0102cfe4 to 0112cfe7 has its CatchHandler @ 0102d024 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0102cfe8 to 0112d04f has its CatchHandler @ 0102cf8c */
  __stack_chk_fail();
}

