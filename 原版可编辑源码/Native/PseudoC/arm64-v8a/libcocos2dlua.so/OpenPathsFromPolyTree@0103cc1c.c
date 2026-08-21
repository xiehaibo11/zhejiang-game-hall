
/* ClipperLib::OpenPathsFromPolyTree(ClipperLib::PolyTree&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&) */

void ClipperLib::OpenPathsFromPolyTree(PolyTree *param_1,vector *param_2)

{
  undefined8 *puVar1;
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  vector *pvVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = *(undefined8 **)param_2;
  puVar2 = *(undefined8 **)(param_2 + 8);
                    /* try { // try from 0103cc38 to 0113cc3f has its CatchHandler @ 0103cc6c */
  if (puVar2 != puVar1) {
                    /* try { // try from 0103cc40 to 0113cc87 has its CatchHandler @ 0103cc10 */
    if (puVar1 != puVar2) {
      pvVar4 = (void *)puVar2[-3];
      puVar3 = puVar2 + -3;
      while( true ) {
        if (pvVar4 != (void *)0x0) {
          puVar2[-2] = pvVar4;
                    /* catch() { ... } // from try @ 0103cc38 with catch @ 0103cc6c */
          operator_delete(pvVar4);
        }
        if (puVar1 == puVar3) break;
        pvVar4 = (void *)puVar3[-3];
        puVar2 = puVar3;
        puVar3 = puVar3 + -3;
      }
    }
    *(undefined8 **)(param_2 + 8) = puVar1;
  }
  std::__ndk1::
  vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
  ::reserve((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
             *)param_2,(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) * 0x20000000 >> 0x20)
  ;
  lVar6 = *(long *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0103cd50 with catch @ 0103cc98 */
  if (0 < (int)((ulong)(*(long *)(param_1 + 0x20) - lVar6) >> 3)) {
    lVar7 = 0;
    do {
      pvVar5 = *(vector **)(lVar6 + lVar7 * 8);
      if (pvVar5[0x3c] != (vector)0x0) {
        this = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                (param_2 + 8);
        if (this == *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                     (param_2 + 0x10)) {
          std::__ndk1::
          vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
          ::
          __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                    ((vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
                      *)param_2,pvVar5);
        }
        else {
          std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
          vector(this,pvVar5);
          *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
           (param_2 + 8) = this + 0x18;
        }
      }
      lVar6 = *(long *)(param_1 + 0x18);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)((ulong)(*(long *)(param_1 + 0x20) - lVar6) >> 3));
  }
  return;
}

