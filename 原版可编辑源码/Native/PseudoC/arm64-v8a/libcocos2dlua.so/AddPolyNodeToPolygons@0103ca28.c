
/* ClipperLib::AddPolyNodeToPolygons(ClipperLib::PolyNode const&, ClipperLib::NodeType,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&) */

void ClipperLib::AddPolyNodeToPolygons
               (vector *param_1,int param_2,
               vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
               *param_3)

{
  vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *this;
  long lVar1;
  long lVar2;
  
  if (param_2 != 1) {
    if (((param_2 != 2) || (param_1[0x3c] == (vector)0x0)) &&
       (*(long *)param_1 != *(long *)(param_1 + 8))) {
      this = *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
              (param_3 + 8);
      if (this == *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)
                   (param_3 + 0x10)) {
        std::__ndk1::
        vector<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>,std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>>>
        ::
        __push_back_slow_path<std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>const&>
                  (param_3,param_1);
      }
      else {
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        vector(this,param_1);
        *(vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> **)(param_3 + 8)
             = this + 0x18;
      }
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (0 < (int)((ulong)(*(long *)(param_1 + 0x20) - lVar1) >> 3)) {
      lVar2 = 0;
      do {
        AddPolyNodeToPolygons(*(undefined8 *)(lVar1 + lVar2 * 8),param_2,param_3);
        lVar1 = *(long *)(param_1 + 0x18);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)((ulong)(*(long *)(param_1 + 0x20) - lVar1) >> 3));
    }
  }
  return;
}

