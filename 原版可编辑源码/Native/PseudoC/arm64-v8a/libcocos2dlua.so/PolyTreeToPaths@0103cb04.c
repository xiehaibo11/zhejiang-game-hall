
/* ClipperLib::PolyTreeToPaths(ClipperLib::PolyTree const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&) */

void ClipperLib::PolyTreeToPaths(PolyTree *param_1,vector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar1 = *(undefined8 **)param_2;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != puVar1) {
    if (puVar1 != puVar2) {
      pvVar4 = (void *)puVar2[-3];
      puVar3 = puVar2 + -3;
      while( true ) {
        if (pvVar4 != (void *)0x0) {
          puVar2[-2] = pvVar4;
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
                    /* catch() { ... } // from try @ 0103cbb0 with catch @ 0103cb84 */
  AddPolyNodeToPolygons(param_1,0,param_2);
  return;
}

