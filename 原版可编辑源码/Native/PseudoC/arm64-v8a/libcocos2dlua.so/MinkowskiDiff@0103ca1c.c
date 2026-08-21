
/* ClipperLib::MinkowskiDiff(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&, std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&) */

void ClipperLib::MinkowskiDiff(vector *param_1,vector *param_2,vector *param_3)

{
                    /* try { // try from 0103ca20 to 0113ca87 has its CatchHandler @ 0103c9b4 */
  Minkowski(param_1,param_2,param_3,false,true);
  return;
}

