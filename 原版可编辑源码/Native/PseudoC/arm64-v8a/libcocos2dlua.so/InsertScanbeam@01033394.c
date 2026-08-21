
/* ClipperLib::Clipper::InsertScanbeam(long long) */

void __thiscall ClipperLib::Clipper::InsertScanbeam(Clipper *this,longlong param_1)

{
  __tree_node_base *p_Var1;
  long lVar2;
  Clipper *pCVar3;
  Clipper *pCVar4;
  Clipper *pCVar5;
  
                    /* try { // try from 010333a8 to 011333b7 has its CatchHandler @ 010333f8 */
  pCVar3 = this + 0x78;
  pCVar4 = *(Clipper **)pCVar3;
  pCVar5 = pCVar3;
  if (pCVar4 != (Clipper *)0x0) {
                    /* try { // try from 010333b8 to 01133413 has its CatchHandler @ 01033370 */
    pCVar3 = this + 0x78;
    do {
      while (pCVar5 = pCVar4, *(long *)(pCVar5 + 0x20) < param_1) {
        pCVar3 = pCVar5;
        pCVar4 = *(Clipper **)pCVar5;
        if (*(Clipper **)pCVar5 == (Clipper *)0x0) {
          lVar2 = *(long *)pCVar5;
          goto joined_r0x01033438;
        }
      }
      if (*(long *)(pCVar5 + 0x20) <= param_1) break;
      pCVar3 = pCVar5 + 8;
      pCVar4 = *(Clipper **)pCVar3;
    } while (*(Clipper **)pCVar3 != (Clipper *)0x0);
  }
                    /* catch() { ... } // from try @ 010333a8 with catch @ 010333f8 */
  lVar2 = *(long *)pCVar3;
joined_r0x01033438:
  if (lVar2 == 0) {
    p_Var1 = operator_new(0x28);
    *(longlong *)(p_Var1 + 0x20) = param_1;
    *(undefined8 *)p_Var1 = 0;
    *(undefined8 *)(p_Var1 + 8) = 0;
    *(Clipper **)(p_Var1 + 0x10) = pCVar5;
    *(__tree_node_base **)pCVar3 = p_Var1;
    if (**(long **)(this + 0x70) != 0) {
      *(long *)(this + 0x70) = **(long **)(this + 0x70);
      p_Var1 = *(__tree_node_base **)pCVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x78),p_Var1);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
  }
  return;
}

