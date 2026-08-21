
/* p2t::SweepContext::AddHole(std::__ndk1::vector<p2t::Point*, std::__ndk1::allocator<p2t::Point*> >
   const&) */

void __thiscall p2t::SweepContext::AddHole(SweepContext *this,vector *param_1)

{
  Point **ppPVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
                    /* catch() { ... } // from try @ 0102c80c with catch @ 0102c930 */
  InitEdges(this,param_1);
  lVar4 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar4) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      puVar2 = *(undefined8 **)(this + 0x88);
      ppPVar1 = (Point **)(lVar4 + uVar5 * 8);
      if (puVar2 == *(undefined8 **)(this + 0x90)) {
        std::__ndk1::vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>>::
        __push_back_slow_path<p2t::Point*const&>
                  ((vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>> *)(this + 0x80),ppPVar1)
        ;
      }
      else {
        *puVar2 = *ppPVar1;
        *(undefined8 **)(this + 0x88) = puVar2 + 1;
      }
      lVar4 = *(long *)param_1;
      bVar3 = uVar6 < (ulong)(*(long *)(param_1 + 8) - lVar4 >> 3);
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar3);
  }
  return;
}

