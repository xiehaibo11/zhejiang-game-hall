
/* spine::SkeletonClipping::clipTriangles(spine::Vector<float>&, spine::Vector<unsigned short>&,
   spine::Vector<float>&, unsigned long) */

void __thiscall
spine::SkeletonClipping::clipTriangles
          (SkeletonClipping *this,Vector *param_1,Vector *param_2,Vector *param_3,ulong param_4)

{
  clipTriangles(this,*(float **)(param_1 + 0x18),*(ushort **)(param_2 + 0x18),
                *(ulong *)(param_2 + 8),*(float **)(param_3 + 0x18),param_4);
  return;
}

