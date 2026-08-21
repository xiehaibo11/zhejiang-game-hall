
/* ClipperLib::Clipper::Reset() */

void __thiscall ClipperLib::Clipper::Reset(Clipper *this)

{
  __tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>> *this_00;
  __tree_node_base *p_Var1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  Clipper *pCVar5;
  long *plVar6;
  Clipper *pCVar7;
  Clipper *pCVar8;
  Clipper *pCVar9;
  
                    /* catch() { ... } // from try @ 01032d14 with catch @ 010331f4 */
                    /* catch() { ... } // from try @ 01032d58 with catch @ 010331f8
                       catch() { ... } // from try @ 01033170 with catch @ 010331f8 */
                    /* catch() { ... } // from try @ 01032ea4 with catch @ 01033210 */
  lVar2 = *(long *)(this + *(long *)(*(long *)this + -0x18) + 0x10);
  *(long *)(this + *(long *)(*(long *)this + -0x18) + 8) = lVar2;
                    /* catch() { ... } // from try @ 01032e94 with catch @ 01033220 */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 01032ec4 with catch @ 01033224
                       catch() { ... } // from try @ 01033164 with catch @ 01033224 */
    puVar4 = *(undefined8 **)(lVar2 + 8);
    while( true ) {
      if (puVar4 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 010329fc with catch @ 0103324c */
                    /* catch() { ... } // from try @ 010328d0 with catch @ 01033250 */
        *(undefined4 *)((long)puVar4 + 0x4c) = 1;
                    /* catch() { ... } // from try @ 010327e4 with catch @ 01033254 */
        *(undefined4 *)((long)puVar4 + 0x5c) = 0xffffffff;
                    /* catch() { ... } // from try @ 01032918 with catch @ 01033258 */
        puVar4[3] = puVar4[1];
        puVar4[2] = *puVar4;
      }
                    /* catch() { ... } // from try @ 010329c8 with catch @ 0103325c */
      puVar4 = *(undefined8 **)(lVar2 + 0x10);
                    /* catch() { ... } // from try @ 01032954 with catch @ 01033260 */
      if (puVar4 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 0103289c with catch @ 01033264 */
                    /* catch() { ... } // from try @ 010327b0 with catch @ 01033268 */
        *(undefined4 *)((long)puVar4 + 0x4c) = 2;
                    /* catch() { ... } // from try @ 01032b64 with catch @ 0103326c */
        *(undefined4 *)((long)puVar4 + 0x5c) = 0xffffffff;
                    /* catch() { ... } // from try @ 01032748 with catch @ 01033270 */
        puVar4[3] = puVar4[1];
        puVar4[2] = *puVar4;
                    /* catch() { ... } // from try @ 010326f8 with catch @ 01033274 */
      }
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) break;
      puVar4 = *(undefined8 **)(lVar2 + 8);
    }
  }
                    /* catch() { ... } // from try @ 010326a8 with catch @ 01033278 */
                    /* catch() { ... } // from try @ 01032a4c with catch @ 0103327c */
  pCVar5 = this + 0x78;
                    /* catch() { ... } // from try @ 01032658 with catch @ 01033280 */
  this_00 = (__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>> *)
            (this + 0x70);
                    /* catch() { ... } // from try @ 01032608 with catch @ 01033284 */
                    /* catch() { ... } // from try @ 010325b8 with catch @ 01033288 */
  std::__ndk1::__tree<long_long,std::__ndk1::greater<long_long>,std::__ndk1::allocator<long_long>>::
  destroy(this_00,*(__tree_node **)pCVar5);
                    /* catch() { ... } // from try @ 01032568 with catch @ 0103328c */
                    /* catch() { ... } // from try @ 01032834 with catch @ 01033290 */
  *(Clipper **)(this + 0x70) = pCVar5;
                    /* catch() { ... } // from try @ 01032518 with catch @ 01033294 */
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)pCVar5 = 0;
                    /* catch() { ... } // from try @ 010324c8 with catch @ 01033298 */
                    /* catch() { ... } // from try @ 01032234 with catch @ 0103329c */
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
                    /* catch() { ... } // from try @ 01031a9c with catch @ 010332a0 */
                    /* catch() { ... } // from try @ 01032aec with catch @ 010332a4 */
                    /* catch() { ... } // from try @ 01032a9c with catch @ 010332a8 */
  plVar6 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x10);
                    /* catch() { ... } // from try @ 01032ca8 with catch @ 010332ac */
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar6;
                    /* catch() { ... } // from try @ 01032468 with catch @ 010332bc */
  pCVar7 = pCVar5;
  pCVar9 = pCVar5;
  do {
                    /* catch() { ... } // from try @ 01031e60 with catch @ 01033304 */
    lVar3 = *(long *)pCVar9;
joined_r0x01033308:
                    /* catch() { ... } // from try @ 01031e10 with catch @ 01033308 */
    if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 01031dc0 with catch @ 0103330c */
                    /* catch() { ... } // from try @ 01031d70 with catch @ 01033310 */
      p_Var1 = operator_new(0x28);
                    /* catch() { ... } // from try @ 01031d20 with catch @ 01033314 */
      *(long *)(p_Var1 + 0x20) = lVar2;
                    /* catch() { ... } // from try @ 01031cd0 with catch @ 01033318 */
      *(undefined8 *)p_Var1 = 0;
      *(undefined8 *)(p_Var1 + 8) = 0;
                    /* catch() { ... } // from try @ 01031c80 with catch @ 0103331c */
      *(Clipper **)(p_Var1 + 0x10) = pCVar7;
                    /* catch() { ... } // from try @ 01031c30 with catch @ 01033320 */
      *(__tree_node_base **)pCVar9 = p_Var1;
                    /* catch() { ... } // from try @ 01031be0 with catch @ 01033324 */
                    /* catch() { ... } // from try @ 01031b90 with catch @ 01033328 */
                    /* catch() { ... } // from try @ 01031b40 with catch @ 0103332c */
      if (**(long **)this_00 != 0) {
                    /* catch() { ... } // from try @ 01031af0 with catch @ 01033330 */
        *(long *)this_00 = **(long **)this_00;
                    /* catch() { ... } // from try @ 01031a34 with catch @ 01033334 */
        p_Var1 = *(__tree_node_base **)pCVar9;
                    /* catch() { ... } // from try @ 010319e4 with catch @ 01033338 */
      }
                    /* catch() { ... } // from try @ 01031890 with catch @ 01033354 */
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x78),p_Var1);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
    }
    plVar6 = (long *)plVar6[3];
    if (plVar6 == (long *)0x0) {
      return;
    }
                    /* try { // try from 01033370 to 011333a7 has its CatchHandler @ 01033370
                       catch() { ... } // from try @ 01033370 with catch @ 01033370
                       catch() { ... } // from try @ 010333b8 with catch @ 01033370 */
    lVar2 = *plVar6;
    pCVar8 = *(Clipper **)pCVar5;
    pCVar9 = pCVar5;
    pCVar7 = pCVar5;
    while (pCVar8 != (Clipper *)0x0) {
                    /* catch() { ... } // from try @ 010323c8 with catch @ 010332c4 */
                    /* catch() { ... } // from try @ 01032378 with catch @ 010332c8 */
                    /* catch() { ... } // from try @ 01032328 with catch @ 010332cc */
      while (pCVar7 = pCVar8, *(long *)(pCVar7 + 0x20) < lVar2) {
                    /* catch() { ... } // from try @ 010322d8 with catch @ 010332d0 */
                    /* catch() { ... } // from try @ 01032288 with catch @ 010332d4 */
        pCVar8 = *(Clipper **)pCVar7;
        pCVar9 = pCVar7;
        if (*(Clipper **)pCVar7 == (Clipper *)0x0) {
                    /* catch() { ... } // from try @ 01031994 with catch @ 0103333c */
                    /* catch() { ... } // from try @ 010318f8 with catch @ 01033340 */
          lVar3 = *(long *)pCVar7;
          goto joined_r0x01033308;
        }
      }
                    /* catch() { ... } // from try @ 010320e0 with catch @ 010332e4 */
      if (*(long *)(pCVar7 + 0x20) <= lVar2) break;
                    /* catch() { ... } // from try @ 01032090 with catch @ 010332e8 */
                    /* catch() { ... } // from try @ 01032040 with catch @ 010332ec */
      pCVar9 = pCVar7 + 8;
      pCVar8 = *(Clipper **)pCVar9;
                    /* catch() { ... } // from try @ 01031ff0 with catch @ 010332f0 */
    }
  } while( true );
}

