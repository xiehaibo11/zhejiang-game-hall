
/* non-virtual thunk to spine::SkeletonRenderer::~SkeletonRenderer() */

void __thiscall spine::SkeletonRenderer::~SkeletonRenderer(SkeletonRenderer *this)

{
                    /* catch() { ... } // from try @ 00d5151c with catch @ 00d51680 */
                    /* catch() { ... } // from try @ 00d511ac with catch @ 00d51684 */
  ~SkeletonRenderer(this + -0x2f8);
                    /* try { // try from 00d516a0 to 00e51703 has its CatchHandler @ 00d516a0
                       catch() { ... } // from try @ 00d516a0 with catch @ 00d516a0
                       catch() { ... } // from try @ 00d51cbc with catch @ 00d516a0 */
  operator_delete(this + -0x2f8);
  return;
}

