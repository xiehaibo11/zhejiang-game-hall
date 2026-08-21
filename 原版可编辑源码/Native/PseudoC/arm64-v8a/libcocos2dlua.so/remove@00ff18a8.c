
/* std::__ndk1::list<cocos2d::VolatileTexture*, std::__ndk1::allocator<cocos2d::VolatileTexture*>
   >::remove(cocos2d::VolatileTexture* const&) */

void __thiscall
std::__ndk1::list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>::
remove(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *this,
      VolatileTexture **param_1)

{
  long lVar1;
  bool bVar2;
  list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *plVar3;
  long *plVar4;
  long lVar5;
  list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *plVar6;
  list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *plVar7;
  list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *plVar8;
  long lVar9;
  list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *plVar10;
  long *plVar11;
  list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  plVar6 = (list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *)
           &local_50;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *)
             &local_50;
  local_48 = (long *)&local_50;
  local_40 = 0;
  if (this != *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> **
               )(this + 8)) {
    lVar5 = 0;
    plVar8 = *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> **)
              (this + 8);
    do {
      if (*(VolatileTexture **)(plVar8 + 0x10) == *param_1) {
        for (plVar7 = *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                        **)(plVar8 + 8); this != plVar7;
            plVar7 = *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                       **)(plVar7 + 8)) {
          if (*(VolatileTexture **)(plVar7 + 0x10) != *(VolatileTexture **)(plVar8 + 0x10)) {
            bVar2 = true;
            plVar3 = plVar7;
            goto joined_r0x00ff1958;
          }
        }
        bVar2 = false;
        plVar3 = this;
joined_r0x00ff1958:
        if (plVar8 != plVar3) {
          plVar6 = *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                     **)plVar7;
          if ((list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> *)
              &local_50 != this) {
            lVar9 = 1;
            for (plVar10 = plVar8; plVar6 != plVar10;
                plVar10 = *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                            **)(plVar10 + 8)) {
              lVar9 = lVar9 + 1;
            }
            lVar5 = lVar5 + lVar9;
            *(long *)(this + 0x10) = *(long *)(this + 0x10) - lVar9;
            local_40 = lVar5;
          }
          lVar9 = *(long *)plVar8;
          *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(plVar6 + 8);
          **(long **)(plVar6 + 8) = lVar9;
          *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> **)
           (local_50 + 8) = plVar8;
                    /* try { // try from 00ff19b8 to 010f19bb has its CatchHandler @ 00ff1a14 */
          *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> **)
           plVar8 = local_50;
                    /* try { // try from 00ff19bc to 010f1a5f has its CatchHandler @ 00ff17c8 */
          local_50 = plVar6;
          *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> ***)
           (plVar6 + 8) = &local_50;
        }
        plVar8 = plVar3;
        if (bVar2) goto LAB_00ff18f0;
      }
      else {
LAB_00ff18f0:
        plVar7 = *(list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                   **)(plVar8 + 8);
      }
      plVar8 = plVar7;
    } while (this != plVar7);
    if (lVar5 != 0) {
      lVar5 = *local_48;
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(plVar6 + 8);
      **(long **)(plVar6 + 8) = lVar5;
      local_40 = 0;
      plVar4 = local_48;
      if ((list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>> **)
          local_48 != &local_50) {
        do {
          plVar11 = (long *)plVar4[1];
          operator_delete(plVar4);
          plVar4 = plVar11;
        } while ((list<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
                  **)plVar11 != &local_50);
      }
    }
  }
                    /* catch() { ... } // from try @ 00ff19b8 with catch @ 00ff1a14 */
                    /* catch() { ... } // from try @ 00ff1870 with catch @ 00ff1a18 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00ff1860 with catch @ 00ff1a1c */
                    /* catch() { ... } // from try @ 00ff1834 with catch @ 00ff1a20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

